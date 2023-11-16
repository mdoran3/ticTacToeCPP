#include "drawBoard.h"
#include "dice.h"
#include "playGame.h"
#include "board.h"
#include <string>
#include <iostream>
#include <thread>
#include <random>

using namespace std;

//random generator of either 0 or 1
int XorO() {
    // Create a random number generator
    random_device rd;
    mt19937 gen(rd());
    
    // Create a uniform integer distribution for values between 0 and 1
    uniform_int_distribution<int> dist(0, 1);
    
    // Generate a random number between 0 and 1
    int randomValue = dist(gen);

    if (randomValue == 0) {
        cout << "\n\nO's are up first!\n\n\n";
        draw(board);
        play(0);
    }
    else if (randomValue ==1) {
        cout << "\n\nX's are up first!\n\n\n";
        draw(board);
        play(1);
    }
    
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

    //draw tic-tac-toe board
    draw(board);
    
    //run ascii dice animation
    rollDice();

    //select if Xs of Os go first
    XorO();

    char input;
    printf("\n\nWould you like to play again? (y/n)\n");
    cin >> input;

    if (input == 'y') {
        main();
    }
    else if (input == 'n') {
        printf("Thank you for playing!\n");
    }
    
    return 0;
}
