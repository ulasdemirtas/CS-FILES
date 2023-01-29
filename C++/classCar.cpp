#include <iostream>
#include <string>


using namespace std;

class Car {
    
public:
   Car() {
      speed = 0;
   }

   void start(double start_speed) {
      speed = start_speed;
   }

   void accelerate(double increase_by) {
      speed += increase_by;
   }

   void stop() {
      speed = 0;
   }

   double get_speed() const {
      return speed;
   }

private:
   double speed;
};


int main() {

   Car my_car;  //construct an object


   my_car.start(10);    //starting speed of 10 km/hr

   // goes through a loop, each time increasing the speed by 5km/hr, 
   //displaying the speed, asking the user whether they want to go on increasing, 
   //until the user says “no”.

   string input;
   do {
      my_car.accelerate(5);
      cout << "the speed is: " << my_car.get_speed() << " km/hr" << endl;
      cout << "Do you want to accelerate or not? (yes/no) ";
      cin >> input;
   } while (input == "yes");
//Then stops the Car object and displays the speed
   my_car.stop();
   cout << "Final speed: " << my_car.get_speed() << " km/hr" << endl;

   return 0;
}
