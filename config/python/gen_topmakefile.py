import os,sys,commands

# check if FOOLIGHT_BASEDIR is defined. If not, nothing to do.
if not 'FOOLIGHT_BASEDIR' in os.environ:
    sys.exit(1)

# read in template GNUmakefile
makefile=open('%s/config/template/TopMakefile.tmp' % os.environ['FOOLIGHT_BASEDIR'],'r').read()

fout=open('%s/GNUmakefile' % os.environ['FOOLIGHT_BASEDIR'],'w')
fout.write(makefile)
fout.close()
