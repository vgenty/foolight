/**
 * \file DataFormatConstants.h
 *
 * \ingroup DataFormat
 * 
 * \brief defines constants used in DataFormat
 *
 * @author Kazu - Nevis 2013
 */

/** \addtogroup Base

    @{*/

#ifndef FOOLIGHT_DATAFORMATCONSTANTS_H
#define FOOLIGHT_DATAFORMATCONSTANTS_H

#include <string>
#include <limits>
#include <climits>
#include <TROOT.h>

/// Namespace of everything in this framework
namespace foolight{
  
  /// Defines constants for data structure definition (system utility)
  namespace data{

    const unsigned char  kINVALID_UCHAR  = std::numeric_limits<unsigned char>::max();
    const char           kINVALID_CHAR   = std::numeric_limits<char>::max();
    const unsigned short kINVALID_USHORT = std::numeric_limits<unsigned short>::max();
    const short          kINVALID_SHORT  = std::numeric_limits<short>::max();
    const unsigned int   kINVALID_UINT   = std::numeric_limits<unsigned int>::max();
    const int            kINVALID_INT    = std::numeric_limits<int>::max();
    const size_t         kINVALID_SIZE   = std::numeric_limits<size_t>::max();

    const double kINVALID_DOUBLE = std::numeric_limits<double>::max();
    const float  kINVALID_FLOAT  = std::numeric_limits<float>::max();

    /// Category of data types
    enum DataTypeCategory_t {
      kEventData,
      kRunData,
      kSubRunData,
      kDATA_TYPE_CATEGORY_MAX
    };
    
    /**
       Define event-wise data product type identifiers.\n
       What appears here must have a corresponding entry in foolight::data::kDATA_TREE_NAME.
    */
    enum DataType_t {
      // Event-data types
      kUndefined=0,
      kEvent,
      kTrack,              ///< recob::Track
      kDATA_TYPE_MAX       ///< Event-wise enum boundary
    };

    enum RunDataType_t {
      // Run-data types
      kRUNDATA_Undefined,
      kRUNDATA_TYPE_MAX   ///< Run-data type enum boundary
    };

    enum SubRunDataType_t {
      // SubRun-data types
      kSUBRUNDATA_Undefined,
      kSUBRUNDATA_TYPE_MAX ///< SubRun-data type enum boundary
    };

    const std::string kDATA_TREE_NAME[kDATA_TYPE_MAX] = {
      "unknown",
      "event",
      "track"
    };

    const std::string kRUNDATA_TREE_NAME[kRUNDATA_TYPE_MAX] = {
      "undefined"
    };
    
    const std::string kSUBRUNDATA_TREE_NAME[kSUBRUNDATA_TYPE_MAX] = {
      "undefined",
    };

    static const std::string kEVENT_ID_TREE("foolight_id_tree");
  }
  
}
#endif
/** @} */ // end of doxygen group
