/**
 * \file DataFormatException.h
 *
 * \ingroup DataFormat
 * 
 * \brief Class def header for exception classes in DataFormat package
 *
 * @author kazuhiro
 */

/** \addtogroup DataFormat

    @{*/
#ifndef FOOLIGHT_DATAFORMATEXCEPTION_H
#define FOOLIGHT_DATAFORMATEXCEPTION_H

#include <iostream>
#include <exception>

namespace foolight {
  /**
     \class DataFormatException
     Generic (base) exception class
  */
  class DataFormatException : public std::exception{

  public:

    DataFormatException(std::string msg="") : std::exception(), _msg(msg)
    {}

    virtual ~DataFormatException() throw(){};
    virtual const char* what() const throw() 
    {return _msg.c_str(); }

  private:

    std::string _msg;
  };

}
#endif
/** @} */ // end of doxygen group 

