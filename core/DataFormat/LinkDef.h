//
// cint script to generate libraries
// Declaire namespace & classes you defined
// #pragma statement: order matters! Google it ;)
//

#ifdef __CINT__
#pragma link off all globals;
#pragma link off all classes;
#pragma link off all functions;

#pragma link C++ class std::vector<std::vector<float> >+;

#pragma link C++ class std::pair<size_t,size_t>+;
#pragma link C++ class std::pair<unsigned short,string>+;
#pragma link C++ class std::pair<string,bool>+;
#pragma link C++ class std::pair<string,string>+;

#pragma link C++ class std::map<string,bool>+;
#pragma link C++ class std::map<string,string>+;
#pragma link C++ class std::map<string,std::vector<bool> >+;
#pragma link C++ class std::map<string,std::vector<int > >+;
#pragma link C++ class std::map<string,std::vector<double> >+;
#pragma link C++ class std::map<string,std::vector<string> >+;
#pragma link C++ class std::map<foolight::data::DataType_t,std::set<string> >+;
#pragma link C++ class std::vector<TVector3>+;
#pragma link C++ class std::vector<TMatrixD>+;
#pragma link C++ class std::vector<TLorentzVector>+;

#pragma link C++ class std::vector<unsigned int>+;
#pragma link C++ class std::vector<std::vector<unsigned int> >+;
//#pragma link C++ class foolight::AssUnit_t+;
//#pragma link C++ class std::vector<foolight::AssUnit_t>+;
//#pragma link C++ class foolight::AssSet_t+;

#pragma link C++ class std::pair<foolight::data::DataType_t,string>+;
#pragma link C++ class foolight::product_id+;
#pragma link C++ class std::vector<foolight::product_id>+;
#pragma link C++ class std::pair<foolight::product_id,foolight::product_id>+;
#pragma link C++ class std::vector<std::pair<foolight::product_id,foolight::product_id> >+;

#pragma link C++ class foolight::DataFormatException+;

#pragma link C++ class foolight::data_base+;
#pragma link C++ class foolight::output_base+;
#pragma link C++ class foolight::run_base+;
#pragma link C++ class foolight::subrun_base+;
#pragma link C++ class foolight::event_base+;
//#pragma link C++ class foolight::association+;

#pragma link C++ class foolight::sparse_data<float>+;
#pragma link C++ class std::vector<foolight::sparse_data<float> >+;
#pragma link C++ class foolight::sparse_vector<float>+;

// #pragma link C++ class foolight::potsummary+;

// #pragma link C++ class foolight::rawdigit+;
// #pragma link C++ class std::vector<foolight::rawdigit>+;
// #pragma link C++ class foolight::event_rawdigit+;

// #pragma link C++ class foolight::wire+;
// #pragma link C++ class std::vector<foolight::wire>+;
// #pragma link C++ class foolight::event_wire+;

// #pragma link C++ class foolight::hit+;
// #pragma link C++ class std::vector<foolight::hit>+;
// #pragma link C++ class foolight::event_hit+;

// #pragma link C++ class foolight::ophit+;
// #pragma link C++ class std::vector<foolight::ophit>+;
// #pragma link C++ class foolight::event_ophit+;

// #pragma link C++ class foolight::opflash+;
// #pragma link C++ class std::vector<foolight::opflash>+;
// #pragma link C++ class foolight::event_opflash+;

// #pragma link C++ class foolight::cosmictag+;
// #pragma link C++ class std::vector<foolight::cosmictag>+;
// #pragma link C++ class foolight::event_cosmictag+;

// #pragma link C++ class foolight::cluster+;
// #pragma link C++ class std::vector<foolight::cluster>+;
// #pragma link C++ class foolight::event_cluster+;

// #pragma link C++ class foolight::endpoint2d+;
// #pragma link C++ class std::vector<foolight::endpoint2d>+;
// #pragma link C++ class foolight::event_endpoint2d+;

// #pragma link C++ class foolight::seed+;
// #pragma link C++ class std::vector<foolight::seed>+;
// #pragma link C++ class foolight::event_seed+;

// #pragma link C++ class foolight::spacepoint+;
// #pragma link C++ class std::vector<foolight::spacepoint>+;
// #pragma link C++ class foolight::event_spacepoint+;

#pragma link C++ class foolight::track+;
#pragma link C++ class std::vector<foolight::track>+;
#pragma link C++ class foolight::event_track+;

// #pragma link C++ class foolight::shower+;
// #pragma link C++ class std::vector<foolight::shower>+;
// #pragma link C++ class foolight::event_shower+;

// #pragma link C++ class foolight::vertex+;
// #pragma link C++ class std::vector<foolight::vertex>+;
// #pragma link C++ class foolight::event_vertex+;

// #pragma link C++ class foolight::calorimetry+;
// #pragma link C++ class std::vector<foolight::calorimetry>+;
// #pragma link C++ class foolight::event_calorimetry+;

// #pragma link C++ class foolight::pfpart+;
// #pragma link C++ class std::vector<foolight::pfpart>+;
// #pragma link C++ class foolight::event_pfpart+;

// #pragma link C++ class foolight::partid+;
// #pragma link C++ class std::vector<foolight::partid>+;
// #pragma link C++ class foolight::event_partid+;

// #pragma link C++ class foolight::user_info+;
// #pragma link C++ class std::vector<foolight::user_info>+;
// #pragma link C++ class foolight::event_user+;

// #pragma link C++ class foolight::gtruth+;
// #pragma link C++ class std::vector<foolight::gtruth>+;
// #pragma link C++ class foolight::event_gtruth+;

// #pragma link C++ class foolight::mcshower+;
// #pragma link C++ class std::vector<foolight::mcshower>+;
// #pragma link C++ class foolight::event_mcshower+;

// #pragma link C++ class foolight::mcpart+;
// #pragma link C++ class std::vector<foolight::mcpart>+;
// #pragma link C++ class foolight::event_mcpart+;

// #pragma link C++ class treenode+;
// #pragma link C++ class std::vector<treenode>+;
// #pragma link C++ class foolight::mctree+;
// #pragma link C++ class std::vector<foolight::mctree>+;
// #pragma link C++ class foolight::event_mctree+;

// #pragma link C++ class foolight::mcflux+;
// #pragma link C++ class std::vector<foolight::mcflux>+;
// #pragma link C++ class foolight::event_mcflux+;

// #pragma link C++ class foolight::mcstep+;
// #pragma link C++ class std::vector<foolight::mcstep>+;
// #pragma link C++ class foolight::mctrajectory+;

// #pragma link C++ class foolight::mctrack+;
// #pragma link C++ class std::vector<foolight::mctrack>+;
// #pragma link C++ class foolight::event_mctrack+;

// #pragma link C++ class foolight::mcnu+;
// #pragma link C++ class std::vector<foolight::mcnu>+;

// #pragma link C++ class foolight::mctruth+;
// #pragma link C++ class std::vector<foolight::mctruth>+;
// #pragma link C++ class foolight::event_mctruth+;

// #pragma link C++ class foolight::ide+;
// #pragma link C++ class foolight::simch+;
// #pragma link C++ class std::vector<foolight::ide>+;
// #pragma link C++ class std::map<UShort_t,foolight::simch>+;
// #pragma link C++ class std::vector<foolight::simch>+;
// #pragma link C++ class foolight::event_simch+;

// #pragma link C++ class treenode+;

// #pragma link C++ class foolight::trigger+;

// #pragma link C++ class foolight::minos+;
// #pragma link C++ class std::vector<foolight::minos>+;
// #pragma link C++ class foolight::event_minos+;

// #pragma link C++ class foolight::pcaxis+;
// #pragma link C++ class std::vector<foolight::pcaxis>+;
// #pragma link C++ class foolight::event_pcaxis+;

// #pragma link C++ class foolight::flashmatch+;
// #pragma link C++ class std::vector<foolight::flashmatch>+;
// #pragma link C++ class foolight::event_flashmatch+;

// #pragma link C++ class foolight::event_ass+;

// #pragma link C++ class foolight::fifo+;
// #pragma link C++ class std::vector<foolight::fifo>+;
// #pragma link C++ class foolight::event_fifo+;

#pragma link C++ class foolight::storage_manager+;

/*
#pragma link C++ function foolight::storage_manager::data_type<foolight::event_gtruth>();
#pragma link C++ function foolight::storage_manager::data_type<foolight::event_mctruth>();
#pragma link C++ function foolight::storage_manager::data_type<foolight::event_mcpart>();
#pragma link C++ function foolight::storage_manager::data_type<foolight::event_mcflux>();
#pragma link C++ function foolight::storage_manager::data_type<foolight::event_simch>();
#pragma link C++ function foolight::storage_manager::data_type<foolight::event_mcshower>();
#pragma link C++ function foolight::storage_manager::data_type<foolight::event_rawdigit>();
#pragma link C++ function foolight::storage_manager::data_type<foolight::event_wire>();
#pragma link C++ function foolight::storage_manager::data_type<foolight::event_hit>();
#pragma link C++ function foolight::storage_manager::data_type<foolight::event_ophit>();
#pragma link C++ function foolight::storage_manager::data_type<foolight::event_opflash>();
#pragma link C++ function foolight::storage_manager::data_type<foolight::event_cluster>();
#pragma link C++ function foolight::storage_manager::data_type<foolight::event_seed>();
#pragma link C++ function foolight::storage_manager::data_type<foolight::event_spacepoint>();
#pragma link C++ function foolight::storage_manager::data_type<foolight::event_track>();
#pragma link C++ function foolight::storage_manager::data_type<foolight::event_shower>();
#pragma link C++ function foolight::storage_manager::data_type<foolight::event_vertex>();
#pragma link C++ function foolight::storage_manager::data_type<foolight::event_endpoint2d>();
#pragma link C++ function foolight::storage_manager::data_type<foolight::event_calorimetry>();
#pragma link C++ function foolight::storage_manager::data_type<foolight::event_partid>();
#pragma link C++ function foolight::storage_manager::data_type<foolight::event_pfpart>();
#pragma link C++ function foolight::storage_manager::data_type<foolight::event_user>();
#pragma link C++ function foolight::storage_manager::data_type<foolight::event_minos>();
#pragma link C++ function foolight::storage_manager::data_type<foolight::event_ass>();
#pragma link C++ function foolight::storage_manager::data_type<foolight::event_fifo>();

#pragma link C++ function foolight::storage_manager::get_data<foolight::event_gtruth>(string);
#pragma link C++ function foolight::storage_manager::get_data<foolight::event_mctruth>(string);
#pragma link C++ function foolight::storage_manager::get_data<foolight::event_mcpart>(string);
#pragma link C++ function foolight::storage_manager::get_data<foolight::event_mcflux>(string);
#pragma link C++ function foolight::storage_manager::get_data<foolight::event_simch>(string);
#pragma link C++ function foolight::storage_manager::get_data<foolight::event_mcshower>(string);
#pragma link C++ function foolight::storage_manager::get_data<foolight::event_rawdigit>(string);
#pragma link C++ function foolight::storage_manager::get_data<foolight::event_wire>(string);
#pragma link C++ function foolight::storage_manager::get_data<foolight::event_hit>(string);
#pragma link C++ function foolight::storage_manager::get_data<foolight::event_ophit>(string);
#pragma link C++ function foolight::storage_manager::get_data<foolight::event_opflash>(string);
#pragma link C++ function foolight::storage_manager::get_data<foolight::event_cluster>(string);
#pragma link C++ function foolight::storage_manager::get_data<foolight::event_seed>(string);
#pragma link C++ function foolight::storage_manager::get_data<foolight::event_spacepoint>(string);
#pragma link C++ function foolight::storage_manager::get_data<foolight::event_track>(string);
#pragma link C++ function foolight::storage_manager::get_data<foolight::event_shower>(string);
#pragma link C++ function foolight::storage_manager::get_data<foolight::event_vertex>(string);
#pragma link C++ function foolight::storage_manager::get_data<foolight::event_endpoint2d>(string);
#pragma link C++ function foolight::storage_manager::get_data<foolight::event_calorimetry>(string);
#pragma link C++ function foolight::storage_manager::get_data<foolight::event_partid>(string);
#pragma link C++ function foolight::storage_manager::get_data<foolight::event_pfpart>(string);
#pragma link C++ function foolight::storage_manager::get_data<foolight::event_user>(string);
#pragma link C++ function foolight::storage_manager::get_data<foolight::event_minos>(string);
#pragma link C++ function foolight::storage_manager::get_data<foolight::event_ass>(string);
#pragma link C++ function foolight::storage_manager::get_data<foolight::event_fifo>(string);
#pragma link C++ function foolight::storage_manager::subrundata_type<foolight::potsummary>();
#pragma link C++ function foolight::storage_manager::get_subrundata<foolight::potsummary>(string);
*/
#endif
