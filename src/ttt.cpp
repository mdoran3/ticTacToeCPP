#include <string>
#include <iostream>
#include <thread>

using namespace std;

void draw(char board[9]) {
    cout << "     |     |      \n";
    cout << "  " << board[0] << "  |  " << board[1] << "  |  " << board[2] << "\n";
    cout << "_____|_____|_____ \n";
    cout << "     |     |      \n";
    cout << "  " << board[3] << "  |  " << board[4] << "  |  " << board[5] << "\n";
    cout << "_____|_____|_____ \n";
    cout << "     |     |      \n";
    cout << "  " << board[6] << "  |  " << board[7] << "  |  " << board[8] << "\n";
    cout << "     |     |      \n";
    cout << "\n";
}

int main() {
    char board[9] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };

    cout << "\n"
         << " _____ _        _____             _____           \n"
         << "/__   (_) ___  /__   \\__ _  ___  /__   \\___   ___ \n"
         << "  / /\\/ |/ __|   / /\\/ _` |/ __|   / /\\/ _ \\ / _ \\\n"
         << " / /  | | (__   / / | (_| | (__   / / | (_) |  __/\n"
         << " \\/   |_|\\___|  \\/   \\__,_|\\___|  \\/   \\___/ \\___|\n"
         << "                                                  \n";

    draw(board);

    cout << "\n\nWho goes first, X's or O's?\n\n";
    cout << "Rolling the Dice...\n";
    this_thread::sleep_for(chrono::seconds(2));

    cout << "\n"
         << "  ____\n"
         << " /'  .\\    _____\n"
         << "/: \\___\\  / .  /\\\n"
         << "\\' / . / /____/..\\\n"
         << " \\/___/  '  '    /\n"
         << "          '__' /\n" << endl;

    return 0;
}
