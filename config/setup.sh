#!/bin/bash

# clean up previously set env
me="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd)"
`python $me/python/clean_env.py LD_LIBRARY_PATH`
`python $me/python/clean_env.py DYLD_LIBRARY_PATH`
`python $me/python/clean_env.py PYTHONPATH`
`python $me/python/clean_env.py PATH`
if [[ -z $FORCE_FOOLIGHT_BASEDIR ]]; then
    # If FOOLIGHT_BASEDIR not set, try to guess
    # Find the location of this script:
    me="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"
    # Find the directory one above.
    export FOOLIGHT_BASEDIR="$( cd "$( dirname "$me" )" && pwd )"
else
    export FOOLIGHT_BASEDIR=$FORCE_FOOLIGHT_BASEDIR
fi
unset me;

if [[ -z $ENABLE_FOOLIGHT_ALIAS ]]; then
    export ENABLE_FOOLIGHT_ALIAS=1
fi

echo "FOOLIGHT_BASEDIR = $FOOLIGHT_BASEDIR"
if [[ -z $FOOLIGHT_BASEDIR ]]; then
    echo \$FOOLIGHT_BASEDIR not set! 
    echo You have to set this first.
    return;
fi
# Abort if ROOT not installed. Let's check rootcint for this.
if [ `command -v rootcling` ]; then
    export FOOLIGHT_ROOT6=1
else 
    if [[ -z `command -v rootcint` ]]; then
	echo
	echo Looks like you do not have ROOT installed.
	echo You cannot use Foolight w/o ROOT!
	echo Aborting.
	echo
	return;
    fi
fi
FOOLIGHT_OS=`uname -s`

# Set path to sub directories
export FOOLIGHT_LIBDIR=$FOOLIGHT_BASEDIR/lib
export FOOLIGHT_COREDIR=$FOOLIGHT_BASEDIR/core
export FOOLIGHT_USERDEVDIR=$FOOLIGHT_BASEDIR/UserDev

if [[ -z $USER_MODULE ]]; then
    export USER_MODULE=""
fi

# Check compiler availability for clang++ and g++
FOOLIGHT_CXX=clang++
if [ `command -v $FOOLIGHT_CXX` ]; then
    export FOOLIGHT_CXX="$FOOLIGHT_CXX -std=c++11";
else
    FOOLIGHT_CXX=g++
    if [[ -z `command -v $FOOLIGHT_CXX` ]]; then
	echo
	echo Looks like you do not have neither clang or g++!
	echo You need one of those to compile Foolight... Abort config...
	echo
	return;
    fi
    export FOOLIGHT_CXX;
    if [ $FOOLIGHT_OS = 'Darwin' ]; then
	echo $FOOLIGHT_OS
	echo
	echo "***************** COMPILER WARNING *******************"
	echo "*                                                    *"
	echo "* You are using g++ on Darwin to compile Foolight.    *"
	echo "* Currently Foolight assumes you do not have C++11    *"
	echo "* in this combination. Contact the author if this is *"
	echo "* not the case. At this rate you have no ability to  *"
	echo "* compile packages using C++11 in Foolight.           *"
	echo "*                                                    *"
	echo "* Help to install clang? See manual/contact author!  *"
	echo "*                                                    *"
	echo "******************************************************"
	echo 
    fi
fi
if [[ -z $ROOTSYS ]]; then
    case `uname -n` in
	(houston.nevis.columbia.edu)
	    if [[ -z ${ROOTSYS} ]]; then
		source /usr/nevis/adm/nevis-init.sh
		setup root
		export PYTHONPATH=$ROOTSYS/lib:$PYTHONPATH;
	    fi
	    ;;
	(*)
	    echo
	    echo "****************** PyROOT WARNING ********************"
	    echo "*                                                    *"
	    echo "* Did not find your \$ROOTSYS. To use PyROOT feature, *"
	    echo "* Make sure ROOT.py is installed (comes with ROOT).  *"
	    echo "* You need to export \$PYTHONPATH to include the dir  *"
	    echo "* where ROOT.py exists.                              *"
	    echo "*                                                    *"
	    echo "* Help to install PyROOT? See manual/contact author! *"
	    echo "*                                                    *"
	    echo "******************************************************"
	    echo
	    ;;
	esac
else
    export PYTHONPATH=$ROOTSYS/lib:$PYTHONPATH;
fi

python $FOOLIGHT_BASEDIR/config/python/gen_usermakefile.py
python $FOOLIGHT_BASEDIR/config/python/gen_topmakefile.py
export LD_LIBRARY_PATH=$FOOLIGHT_LIBDIR:$LD_LIBRARY_PATH
export PYTHONPATH=$FOOLIGHT_BASEDIR/python:$PYTHONPATH
if [ $FOOLIGHT_OS = 'Darwin' ]; then
    export DYLD_LIBRARY_PATH=$FOOLIGHT_LIBDIR:$DYLD_LIBRARY_PATH
fi
export PATH=$FOOLIGHT_BASEDIR/bin:$PATH
if [ $ENABLE_FOOLIGHT_ALIAS ]; then
    alias maketop="make --directory=$FOOLIGHT_BASEDIR"
    alias cdtop="cd $FOOLIGHT_BASEDIR"
    alias llgen_package="python $FOOLIGHT_BASEDIR/bin/gen_package"
    alias llgen_repository="python $FOOLIGHT_BASEDIR/bin/gen_repository"
    alias llgen_class_empty="python $FOOLIGHT_BASEDIR/bin/gen_class_empty"
    alias llgen_class_anaunit="python $FOOLIGHT_BASEDIR/bin/gen_class_anaunit"
    alias llgen_class_erana="python $FOOLIGHT_BASEDIR/bin/gen_class_erana"
fi
echo
echo "Finish configuration. To build, type:"
echo "> cd \$FOOLIGHT_BASEDIR"
echo "> make"
echo
