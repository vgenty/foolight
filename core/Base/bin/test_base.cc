
#include "Base/foolight_base.h"
#include "Base/FrameworkConstants.h"
#include <iostream>
int main(){

  std::cout 
    << std::endl
    << "This is \"Base\" package simple test routine." << std::endl
    << std::endl;

  // Test routine for Base package.
  
  // (1) simple: create foolight_base

  foolight::foolight_base me;
  me.set_verbosity(foolight::msg::kDEBUG);
  
  // (2) Send messages
  
  me.print(foolight::msg::kDEBUG,"... sending DEBUG message");
  me.print(foolight::msg::kINFO,"... sending INFO message");
  me.print(foolight::msg::kNORMAL,"... sending NORMAL message");
  me.print(foolight::msg::kWARNING,"... sending WARNING message");
  me.print(foolight::msg::kERROR,"... sending ERROR message");

  std::cout
    << std::endl
    << "End of test routine." << std::endl
    << std::endl;

  return 0;

}
