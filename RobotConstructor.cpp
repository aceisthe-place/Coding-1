#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
// global variables
string accessories[5]; // set up in main

// building a class
// keyword "class," then name the class
class robot {
public: // lets everyone see the name, charge, etc
  string name;
  int charge;
  float speed;
  int favAccessory;
  // damage and/or health
  // make it do a task

  // create a constructor
  // a constructor is always named the same as the class, and has no return type
  robot() {
    cout << "Creating a new robot!\n";
    name = "Robot";
    charge = 10;
    favAccessory = rand() % 5;
  }

  // an overloading constructor
  robot(string givenName, int givenCharge) {
    cout << "Creating a robot with specific values...\n";
    name = givenName;
    charge = givenCharge;
    favAccessory = rand() % 5;
    status();
  }

  void status() { cout << name << ":" << charge << "\n"; }

  void accRec() {
    int randomIndex = rand() % 5;
    cout << "You will wear the " << accessories[favAccessory] << ".\n";
  }

  // we discovered while playtesting that the robots have developed favorites of
  // their own. in order to control and observe this, we will create a new
  // variable for their favorite this runs when robot is created

}; // dont forget ; at end of class
robot robots[10];
void startNextDay() {
  cout << "Another day has passed... \n ";
  for (int i = 0; i < 10; i++) {
    robots[i].charge -= 1;
    if (robots[i].charge <= 0) {
      cout << robots[i].name << " has run out of energy. \n";
    }
  }
}
int main() {
  cout << "Hello World!\n";

  // set up
  accessories[0] = "hat";
  accessories[1] = "beanie";
  accessories[2] = "scarf";
  accessories[3] = "watch";
  accessories[4] = "cursed amulet from the depths of Hell";

  // make a new robot variable
  robot artoo;
  artoo.status();
  // cout artoo;

  // set up artoo
  artoo.name = "R2-D2";
  cout << artoo.name << ".\n";

  artoo.charge = 12412;
  cout << artoo.charge << ".\n";

  robot threepio("C-3P0", 6);
  threepio.accRec();
  threepio.accRec();
  threepio.accRec();
  artoo.accRec();
  artoo.accRec();
  artoo.accRec();

  // this is the start of a system
  // let's create an array of robots
  // and randomly populate those robots with names and charge

  string robNames[] = {"Artoo", "Threepio",   "Robbie",
                       "BB-8",  "Terminator", "ChatGPT"};

  for (int i = 0; i < 10; i++) {
    robots[i] = robot(robNames[rand() % 6], rand() % 11 + 5);
  }

  for (int i = 0; i < 10; i++) {
    robots[i].status();
  }
  startNextDay();
  startNextDay();
  startNextDay();
  startNextDay();
  startNextDay();
  startNextDay();
  startNextDay();
  startNextDay();
  startNextDay();
  startNextDay();

  // using charge
}
