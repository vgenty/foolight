#
# This is an example GNUmakefile for my packages
#

# specific names for this package
DICT  = Foolight_AnalysisDict
SHLIB = libFoolight_Analysis.so
SOURCES = $(filter-out $(DICT).cxx, $(wildcard *.cxx))
FMWK_HEADERS = LinkDef.h $(DICT).h
HEADERS = $(filter-out $(FMWK_HEADERS), $(wildcard *.h))
OBJECTS = $(SOURCES:.cxx=.o)

# include options for this package
INCFLAGS  = -I. 
INCFLAGS += -I$(FOOLIGHT_COREDIR)

# platform-specific options
OSNAME          = $(shell uname -s)
HOST            = $(shell uname -n)
OSNAMEMODE      = $(OSNAME)

include $(FOOLIGHT_BASEDIR)/Makefile/Makefile.${OSNAME}

# set linker flags
LDFLAGS += -L$(FOOLIGHT_LIBDIR) -lFoolight_DataFormat
LDFLAGS += -L$(FOOLIGHT_LIBDIR) -lFoolight_Base

# call the common GNUmakefile
include $(FOOLIGHT_BASEDIR)/Makefile/GNUmakefile.CORE


