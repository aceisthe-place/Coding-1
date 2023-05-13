#include <ctime>                      // for seeding the random number generator
#include <iostream>#include <cstdlib> // for random numbers
#include <iostream> //for sending and recieving text from the console
using namespace std;

int main() {
  srand(time(0)); // seeding rand() with the current time.
  cout << "Welcome to the lands of Broaqua. It is a wild and untamed region "
          "ripe for adventure. What is your name?\n"; // welcome the player
  string playerName;
  cin >> playerName;
  cout << "Hello, " << playerName
       << ".\nAs you make your way across the Broaqua border, you approach a "
          "burned caravan. While inspecting the area, you're ambushed by an "
          "orc!\n";
  int health = 10;
  int attack = 0;
  int block = 0;
  int turns = 0;

  while (health > 0 && turns < 4) {
    turns += 1;
    attack = rand() % 5;
    block = rand() % 5;
    if (attack > block) {
      health -= attack;
      cout << "You've been hit! Your health is at " << health
           << " out of 10.\n";
    } else {
      cout << "you successfully blocked!\n";
    }
    if (turns == 1) {
      cout << "You slash at the orc, but miss!\n";
    } else if (turns == 2) {
      cout << "You bash the orc with your sheild!\n";
    } else if (turns == 3) {
      cout << "You slash at the orc, leaving a deep cut on his chest!\n";
    } else if (turns == 4) {
      cout << "The orc is slightly off balance from his previous attack, and "
              "you use the opportunity to plunge your blade directly into his "
              "gut, killing him.\n";
    }
  }
  if (health < 0) {
    cout << "You died. The orc steals your stuff and leaves your body on the "
            "trail.\n";
  } else {
    cout << "Having killed the orc, the caravan owner comes out from behind "
            "the rubble, and hails you as a hero!\n";
  }
}
// set up the game
//     int health = 10, attack, block, turns = 0
//     seed the random number generator
// start the loop
//     add 1 to turns
//     start the encounter
//         randomly generate numbers for attack (range = 0-4) and block (range
//         = 0-4) if block is greater or equal to attack, successful block
//         otherwise, subtract attack value from health.
// keep looping while health is greater than zero and fewer than 4 turns have
// happened

// if health is greater than 0, congratulate player
// otherwise, tell the player they're dead.