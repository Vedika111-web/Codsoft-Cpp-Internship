#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int randomNumber, userGuess;

    // Seed random number generator
    srand(time(0));

    // Generate random number between 1 and 100
    randomNumber = rand() % 100 + 1;

    // Welcome message
    cout << "=====================================" << endl;
    cout << "   Welcome to the Number Guessing Game" << endl;
    cout << "=====================================" << endl;
    cout << "I have selected a number between 1 and 100." << endl;
    cout << "Try to guess the correct number." << endl;

    do {
        cout << "\nEnter your guess: ";
        cin >> userGuess;

        if (userGuess > randomNumber) {
            cout << "Too high! Try again." << endl;
        }
        else if (userGuess < randomNumber) {
            cout << "Too low! Try again." << endl;
        }
        else {
            cout << "\nCongratulations! You guessed the correct number." << endl;
        }

    } while (userGuess != randomNumber);

    cout << "\nThanks for playing the Number Guessing Game!" << endl;

    return 0;
}
