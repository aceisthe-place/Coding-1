#include <iostream>
#include <string>        //for string variables (optional in repl.it)
#include <ctime>
#include <cstdlib>
using namespace std;


// global variables exist in every function
// because thry were defined outdie of any function

string inventory[10]; // make an array of string variables with a size of 10
int nextEmptySpot = 0;

// add function
void add() {
  cout << "what game would you like to add?\n";
  string input;
  cin >> input;

  inventory[nextEmptySpot++] = input;
}
// show function
void show(){
  cout << "Here are the items in your inventory:\n";
  for(int i = 0; i < nextEmptySpot; i++) {
    cout << inventory[i] << "\n";
    }
}


// edit function
  void edit(){
    while(true) {
      cout << "What item would you like to edit?\n";
      string input;
      cin >> input; 
      for(int i = 0; i < nextEmptySpot; i++) {
        if(inventory[i] == input) {
          cout << "what would you like to edit " << inventory[i] << " to?\n";
          cin >> input;
    
          inventory[i] = input;
          return;
        }if (i + 1 == nextEmptySpot){
          cout << "I couldn't find it, would you like to try again? (y/n)\n";
          char input;
          cin >> input;
    
          if(input != 'y'){
            return;               // quit the function unless they type 'y'
        }
      }
    }
  }
}


void show(string array[]) {
  for(int i = 0; i < 3; i++) {
    cout << array[i] << endl;
  }
}


void add(string array[]) {
  cout << "adding 4th game...\n";
  array[3];
}

int main() {
  srand(time(0));

  string favGames[] = {"Mario","Zelda","Half-Life"};

add();

add();

add();

show();

  edit();

  show();
}
