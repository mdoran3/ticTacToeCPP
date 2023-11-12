#include "drawBoard.h"
#include "dice.h"
#include "playGame.h"
#include <string>
#include <iostream>
#include <thread>
#include <random>

using namespace std;

char board[9] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };

//random generator of either 0 or 1
int XorO() {
    // Create a random number generator
    random_device rd;
    mt19937 gen(rd());
    
    // Create a uniform integer distribution for values between 0 and 1
    uniform_int_distribution<int> dist(0, 1);
    
    // Generate a random number between 0 and 1
    int randomValue = dist(gen);
    
    return 0;
}

int main() {

    cout << "\n"
         << " _____ _        _____             _____           \n"
         << "/__   (_) ___  /__   \\__ _  ___  /__   \\___   ___ \n"
         << "  / /\\/ |/ __|   / /\\/ _` |/ __|   / /\\/ _ \\ / _ \\\n"
         << " / /  | | (__   / / | (_| | (__   / / | (_) |  __/\n"
         << " \\/   |_|\\___|  \\/   \\__,_|\\___|  \\/   \\___/ \\___|\n"
         << "                                                  \n";

    draw(board);
    
    rollDice();

    if (XorO == 0) {
        cout << "\n\nO's are up first!\n";
        play(0);
    }
    else {
        cout << "\n\nX's are up first!\n";
        play(1);
    }
    
    return 0;
}
