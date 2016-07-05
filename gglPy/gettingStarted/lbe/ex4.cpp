// ex4.cpp: Четан Ананд
// Description: A number guessing game.

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

void line () {
  for (int i = 0; i < 60; i++) {
    cout << "*";
  }
  cout << endl;
}

int main() {
  int random_number = 0;
  srand (time(NULL));
  random_number = rand() % 100+1;
  line();
  cout << setiosflags(ios::left) << setw(60) <<  "I've thought of a number between 1 and 100." << endl;
  cout << setiosflags(ios::left) << setw(60) <<  "Guess it!" << endl;
  line();
  cout << setiosflags(ios::left) << setw(60) << "You can enter -1 to exit anytime." << endl;
  line();
  int user_guess = 0;
  do {
    if (!(cin >> user_guess)) {
      cout << "You've entered a non-numeric." << endl;
      cin.clear();
      cin.ignore(10000, '\n');
    }

    if (user_guess == -1) {
      cout << "Thank you for playing." << endl;
      cout << "Exiting..." << endl;
      break;
    }

    if (user_guess < random_number) {
       cout << "Try again!" << endl;
       cout << "You guessed " << user_guess << " but I thought of a larger number." << endl;
    }

    if (user_guess > random_number) {
      cout << "Try again!" << endl;
      cout << "You guessed " << user_guess << " but I thought of a smaller number." << endl;
    }

    if (user_guess == random_number) {
        cout << "Congratulations! It's your lucky day today!" << endl;
    }
  } while (user_guess != random_number);

  return 0;
}
