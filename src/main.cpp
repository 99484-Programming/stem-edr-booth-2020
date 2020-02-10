// comment

#include "vex.h"

using namespace vex;
int loop_number = 100;
float MM = 0.5;
int main() {
  
  
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();
  Left1.spin(directionType::fwd, Controller.Axis3.value()*MM, velocityUnits::pct);
  Right1.spin(directionType::fwd, Controller.Axis2.value()*MM, velocityUnits::pct);
  if (Controller.ButtonR1.pressing()&&loop_number> 1000) {
    loop_number=0;
  }
  if (loop_number<100) {
    MM = 0.75;
  }
  else {
    MM = 0.5;
  }

    
   // claw control here 
}
