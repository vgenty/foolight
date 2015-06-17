#ifndef FOOLIGHT_BASE_CXX
#define FOOLIGHT_BASE_CXX

#include "foolight_base.h"
#include "FrameworkConstants.h"
#include "DataFormatConstants.h"

namespace foolight {
  //#####################################################
  void foolight_base::set_verbosity(msg::Level level)
  //#####################################################
  {
    
    _verbosity_level=level;
    
    for(size_t i=(size_t)(msg::kDEBUG); i<(size_t)(msg::kMSG_TYPE_MAX); ++i)
      _verbosity[i]=false;
    
    switch(level){
    case msg::kDEBUG:
      _verbosity[msg::kDEBUG]=true;
    case msg::kINFO:
      _verbosity[msg::kINFO]=true;
    case msg::kNORMAL:
      _verbosity[msg::kNORMAL]=true;
    case msg::kWARNING:
      _verbosity[msg::kWARNING]=true;
    case msg::kERROR:
      _verbosity[msg::kERROR]=true;
    case msg::kMSG_TYPE_MAX:
      break;
    }
    
  }
}

#endif
