/**
 * \file foolight_base.h
 *
 * \ingroup Base
 * 
 * \brief Class definition file of foolight_base
 *
 * @author Kazu - Nevis 2013
 */

/** \addtogroup Base

    @{*/

#ifndef FOOLIGHT_BASE_H
#define FOOLIGHT_BASE_H

#include <vector>
#include "FrameworkConstants.h"
#include "messenger.h"

namespace foolight{
  
  /**
     \class foolight_base
     Very base class of all everything else defined in this framework.
  */
  class foolight_base {
    
  public:
    
    /// Default constructor
    foolight_base() : _verbosity(msg::kMSG_TYPE_MAX,false), _name("foolight_base")
    {set_verbosity(msg::kNORMAL);}
    
    /// Default copy constructor
    foolight_base(const foolight_base &original) : _name(original._name){};
    
    /// Default destructor
    virtual ~foolight_base(){};
    
    /// Setter for the verbosity level 
    virtual void set_verbosity(msg::Level level);
    
    /// Getter for the verbosity level
    inline msg::Level get_verbosity() const {return _verbosity_level;};
    
    /// Getter for the class name
    inline const std::string class_name() const {return _name;};
    
    /// message print out method
    inline void print(msg::Level level, std::string where, std::string msg) const
    {if(_verbosity.at(level)) Message::send(level,where,msg);};
    
    /// message print out method
    inline void print(msg::Level level, std::string msg) const
    {if(_verbosity.at(level)) Message::send(level,msg);};
    
  protected:

    char _buf[200];                ///< char buffer for message manipulation
    std::vector<bool> _verbosity;  ///< holder for enabled message levels
    msg::Level _verbosity_level;   ///< holder for specified verbosity level
    std::string _name;             ///< class name holder
    
  };
}
#endif

/** @} */ // end of doxygen group
