#####################################################################################
#
# A top Makefile for building my project.
# One needs to define $FOOLIGHT_COREDIR environment variable and set it to where this
# makefile exists. 
# One can type "make" and this builds packages that are added in $SUBDIR defined below.
# 
# The original is taken from Glenn A. Smith's example for Double Chooz experiment.
#
#####################################################################################
#
# IMPOSE CONDITION BETWEEN FOOLIGHT_COREDIR & PWD =>
#   do not compile if PWD !=$FOOLIGHT_COREDIR is set elsewhere
#
ifndef FOOLIGHT_COREDIR
 FOOLIGHT_COREDIR := $(shell cd . && pwd -P)
endif
NORMALIZED_FOOLIGHT_COREDIR := $(shell cd ${FOOLIGHT_COREDIR} && pwd -P)
ifneq ($(NORMALIZED_FOOLIGHT_COREDIR), $(shell cd . && pwd -P))
 ifeq ($(wildcard ./Base/*),)
ERROR_MESSAGE := $(error Your source code detected in current dir, but FOOLIGHT_COREDIR is not current dir.  \
   To avoid recompiling the wrong installation,\
   FOOLIGHT_COREDIR must be set to the current directory when making.  \
   Currently it is set to ${FOOLIGHT_COREDIR} [$(NORMALIZED_FOOLIGHT_COREDIR)].  \
   Current directory is [$(shell pwd)].)
 endif
endif
export FOOLIGHT_COREDIR
#
#####################################################################################
#
# Define directories to be compile upon a global "make"...
#
#SUBDIRS :=  Base LArUtil DataFormat Analysis
SUBDIRS :=  Base DataFormat Analysis

#####################################################################################
#
# COMPILATION...
#
#.phony: all configure default-config clean
.phony: all clean

all:
	@for i in $(SUBDIRS); do ( echo "" && echo "Compiling $$i..." && cd $$i && $(MAKE) ) || exit $$?; done
#####################################################################################
#
# CLEANs...
#
clean:
	@for i in $(SUBDIRS); do ( echo "" && echo "Cleaning $$i..." && cd $$i && $(MAKE) clean && rm -f $(FOOLIGHT_LIBDIR)/$$i.* ) || exit $$?; done

#####################################################################################
#
# DOCUMENTATION...
#
doxygen:
	@echo 'dOxygenising your code...'
	@mkdir -p $(FOOLIGHT_COREDIR)/doc/dOxygenMyProject
	@doxygen $(FOOLIGHT_COREDIR)/doc/doxygenMyProject.script

doxygen+:
	@echo 'dOxygenising MyProject + local-ROOT...'
	@mkdir -p $(FOOLIGHT_COREDIR)/doc/dOxygenMyProject+
	@doxygen $(FOOLIGHT_COREDIR)/doc/doxygenMyProject+.script
#
#####################################################################################
#EOF
