#ifndef FOOLIGHT_STORAGE_MANAGER_TEMPLATE_CC
#define FOOLIGHT_STORAGE_MANAGER_TEMPLATE_CC

namespace foolight{

  template<> const ::foolight::data::DataType_t storage_manager::data_type<::foolight::event_gtruth> () const
  { return data::kGTruth; }

  template<> const ::foolight::data::DataType_t storage_manager::data_type<::foolight::event_mctruth> () const
  { return data::kMCTruth; }

  template<> const ::foolight::data::DataType_t storage_manager::data_type<::foolight::event_mcpart> () const
  { return data::kMCParticle; }

  template<> const ::foolight::data::DataType_t storage_manager::data_type<::foolight::event_mcflux> () const
  { return data::kMCFlux; }

  template<> const ::foolight::data::DataType_t storage_manager::data_type<::foolight::event_simch> () const
  { return data::kSimChannel; }

  template<> const ::foolight::data::DataType_t storage_manager::data_type<::foolight::event_mcshower> () const
  { return data::kMCShower; }

  template<> const ::foolight::data::DataType_t storage_manager::data_type<::foolight::event_rawdigit> () const
  { return data::kRawDigit; }

  template<> const ::foolight::data::DataType_t storage_manager::data_type<::foolight::event_wire> () const
  { return data::kWire; }

  template<> const ::foolight::data::DataType_t storage_manager::data_type<::foolight::event_hit> () const
  { return data::kHit; }

  template<> const ::foolight::data::DataType_t storage_manager::data_type<::foolight::event_ophit> () const
  { return data::kOpHit; }

  template<> const ::foolight::data::DataType_t storage_manager::data_type<::foolight::event_opflash> () const
  { return data::kOpFlash; }

  template<> const ::foolight::data::DataType_t storage_manager::data_type<::foolight::event_cluster> () const
  { return data::kCluster; }

  template<> const ::foolight::data::DataType_t storage_manager::data_type<::foolight::event_seed> () const
  { return data::kSeed; }

  template<> const ::foolight::data::DataType_t storage_manager::data_type<::foolight::event_spacepoint> () const
  { return data::kSpacePoint; }

  template<> const ::foolight::data::DataType_t storage_manager::data_type<::foolight::event_track> () const
  { return data::kTrack; }

  template<> const ::foolight::data::DataType_t storage_manager::data_type<::foolight::event_shower> () const
  { return data::kShower; }

  template<> const ::foolight::data::DataType_t storage_manager::data_type<::foolight::event_vertex> () const
  { return data::kVertex; }

  template<> const ::foolight::data::DataType_t storage_manager::data_type<::foolight::event_endpoint2d> () const
  { return data::kEndPoint2D; }

  template<> const ::foolight::data::DataType_t storage_manager::data_type<::foolight::event_calorimetry> () const
  { return data::kCalorimetry; }

  template<> const ::foolight::data::DataType_t storage_manager::data_type<::foolight::event_partid> () const
  { return data::kParticleID; }

  template<> const ::foolight::data::DataType_t storage_manager::data_type<::foolight::event_pfpart> () const
  { return data::kPFParticle; }

  template<> const ::foolight::data::DataType_t storage_manager::data_type<::foolight::event_user> () const
  { return data::kUserInfo; }

  template <class T>
  const ::foolight::data::DataType_t storage_manager::data_type() const
  { 
    Message::send(msg::kERROR,
		  __PRETTY_FUNCTION__,
		  "No corresponding data::DataType_t enum value found!");
    throw std::exception();
    return data::kUndefined;
  }

  //template<> const ::foolight::data::DataType_t storage_manager::data_type<::foolight::event_trigger> ()
  //{ return data::kTrigger; }

  template <class T>
  T* storage_manager::get_data(std::string const name)
  {
    auto type = data_type<T>();
    return (T*)(get_data(type,name));
  }



}
#endif
