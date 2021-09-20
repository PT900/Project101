#include <iostream>
using namespace std;

int main() {
        int guess;
        // Edit Here to change value of correct answer.
        const int x = 13;
        while (x != guess) {
                cout << "Wrong! Please try again.\n";
                cout << "Guess (1-20): ";
                cin >> guess;
        }
        cout << "That's correct!";
}