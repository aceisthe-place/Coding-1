#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

class dwarf {
public:
  string name;
  int food;
  int height;

  dwarf() {
    cout << "A new dwarf has arrived at your fortress.\n";
    name = "dwarf";
    food = rand() % 10 + 2;
    height = rand() % 10 + 46;
  }

  dwarf(string givenName, int givenFood, int givenHeight) {
    cout << "Your dwarf, " << givenName << "has arrived.\n";
    name = givenName;
    food = givenFood;
    height = givenHeight;
    status();
  }

  void status() {
    cout << "The dwarf " << name << " is " << height << " inches tall and has "
         << food << " food.\n\n";
  }

  void steal() {
    cout << "you stole all of " << name << "'s food. You monster.\n";
    food = 0;
  }
};
dwarf dwarves[20];
void startNextDay() {
  cout << "\nAnother day has passed... \n \n";
  for (int i = 0; i < 10; i++) {
    dwarves[i].food -= 1;
    if (dwarves[i].food <= 0) {
      cout << dwarves[i].name << " has starved. \n";
    }
  }
}

int main() {
  cout << "Hello World!\n";
  string dwarfNames[] = {
      "Erib Cobaltbarricaded", "Ral Lancedfigure",     "Minkot Rackguild",
      "Uvash Ringedrock",      "Lolor Atticvestibule", "Adil Claspwire",
      "Zas Quakeportal",       "Shem Armorypalace",    "Stinthäd Stockadeclasp",
      "Èzum Atticwind",        "Feb Portallantern",    "Såkzul Windbodice",
      "Mosus Daggerrag",       "Dodók Orbquake",       "Libash Treasurysabre",
      "Avuz Stockadesack",     "Mebzuth Rockbook",     "Asob Paperurn",
      "Deler Ringedpalace",    "Fath Shipcudgel"};
  for (int i = 0; i < 10; i++) {
    dwarves[i] =
        dwarf(dwarfNames[rand() % 20], rand() % 10 + 2, rand() % 10 + 46);
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
  dwarf K3vin;
  K3vin.name = "Kevin";
  K3vin.food = 1;
  K3vin.height = 47;
  K3vin.status();
  K3vin.steal();
  K3vin.status();
}