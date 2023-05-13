#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main() {
  srand(time(0));
  cout << "Hello World!\n";
  // for(initialization; test; action) { code }
  for (int counter = 0; counter < 10; counter += 1) {
    cout << rand() % 6 + 1 << "\n";
  }
  cout << "7 / 3 = " << 7 / 3 << "r" << 7 % 3 << "\n.";

  int seedCount = 10;

  while (seedCount > 0) {
    cout << "I walked 3 feet left\n";
    cout << "I planted a seed\n";
    seedCount -= 1; // or seedCount--;
    cout << "I have " << seedCount << " seeds.\n";
  }

  // when the test is false, we continue with the program.
  cout << "\n\n\n\n\n";
  for (int seedCount = 10; seedCount > 0; seedCount -= 1) {
    cout << "I have " << seedCount << " seeds.\n";
    cout << "I walked 3 feet left\n";
    cout << "I planted a seed\n";
  }
  while (true) {
    cout << "Press 'q' to quit.\n";

    char input;
    cin >> input;

    if (input == 'q') {
      break; // get out of loop
    }
  }

  // an array is variable that holds other variables.
  // it can only hold one varible at a time...
  string favGames[100]; // creating an array of the type string
                        // named 'favGames' with a size of 100.
  int index = 0;

  while (true) {
    cout << "what would you like to do?\n";
    cout << "Type 'quit' to quit.\n";
    cout << "Type 'add' to add a game.\n";
    cout << "Type 'show' to show the array of games.\n";
    cout << "Type 'edit' to fix previous input.\n";
    cout << "Type 'bulkadd' to add multiple games\n";

    string input;
    cin >> input;

    if (input == "quit") {
      cout << "Thanks for playing!\n";
      break;
    } else if (input == "add") {
      cout << "Type the name of the game:\n";
      cin >> input;
      favGames[index] = input;
      index += 1; // make the index point at the next spot in the array
    } else if (input == "show") {
      cout << "Here's your list of fav Games:\n";
      for (int i = 0; i < index; i++) {
        cout << favGames[i] << "\n";
      }
    } else if (input == "edit") {
      cout << "please re-enter last game name. \n";
      cin >> input;
      favGames[index - 1] = input;
    } else if (input == "find") {
      cout << "What game would you like to edit?\n";
      cin >> input;
      for (int i = 0; i < index; i++) {
        if (favGames[i] == input) {
          cout << "Found it!\n";
          cout << "What would you like to change this to?\n";
          cin >> input;
          favGames[i] = input;
        }
      }
    } else if(input == "bulkadd"){
      cout << "enter as many games as you'd like. Type 'done' when you're done.\n";
      while(true){
        cin >> input;
        if (input == "done"){
          break;
        }
        favGames[index] = input;
        index += 1;
        }
    }
// homework, loop to add games until they say "quit"

    
  }
}
