//
// cint script to generate libraries
// Declaire namespace & classes you defined
// #pragma statement: order matters! Google it ;)
//

#ifdef __CINT__
#pragma link off all globals;
#pragma link off all classes;
#pragma link off all functions;

#pragma link C++ namespace foolight+;
#pragma link C++ namespace foolight::anab+;
#pragma link C++ namespace foolight::msg+;
#pragma link C++ namespace foolight::data+;

// #pragma link C++ enum foolight::geo::SigType_t+;
// #pragma link C++ enum foolight::geo::View_t+;

// #pragma link C++ struct foolight::geo::TPCID+;
// #pragma link C++ struct foolight::geo::PlaneID+;
// #pragma link C++ struct foolight::geo::WireID+;

// #pragma link C++ class std::vector<foolight::geo::SigType_t>+;
// #pragma link C++ class std::vector<foolight::geo::View_t>+;

#pragma link C++ enum foolight::data::DataType_t+;

#pragma link C++ class foolight::Message+;
#pragma link C++ class foolight::foolight_base+;

#endif
