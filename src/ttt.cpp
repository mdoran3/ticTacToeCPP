#include "drawBoard.h"
#include "dice.h"
#include <string>
#include <iostream>
#include <thread>

using namespace std;

char board[9] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };

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
    
    return 0;
}
