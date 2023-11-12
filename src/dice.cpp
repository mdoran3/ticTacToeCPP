#include <iostream>
#include <thread>
#include "dice.h"

using namespace std;

void rollDice() {
    cout << "\n\nWho goes first, X's or O's?\n\n";
    cout << "Rolling the Dice...\n";

    this_thread::sleep_for(chrono::seconds(2));


    // First pair of dice
    cout << "\n"
         << " ╭-------╮  ╭-------╮\n"
         << " |       |  |       |\n"
         << " |   ●   |  |   ●   |\n"
         << " |       |  |       |\n"
         << " ╰-------╯  ╰-------╯\n" << endl;

    this_thread::sleep_for(chrono::milliseconds(500));

    // Second pair of dice
    cout << "\n"
         << " ╭-------╮  ╭-------╮\n"
         << " | ●   ● |  | ●   ● |\n"
         << " |       |  |   ●   |\n"
         << " | ●   ● |  | ●   ● |\n"
         << " ╰-------╯  ╰-------╯\n" << endl;

    this_thread::sleep_for(chrono::milliseconds(500));

    // Third pair of dice
    cout << "\n"
         << " ╭-------╮  ╭-------╮\n"
         << " | ●   ● |  | ●   ● |\n"
         << " |   ●   |  | ●   ● |\n"
         << " | ●   ● |  | ●   ● |\n"
         << " ╰-------╯  ╰-------╯\n" << endl;

    this_thread::sleep_for(chrono::milliseconds(500));

    // First pair of dice
    cout << "\n"
         << " ╭-------╮  ╭-------╮\n"
         << " |       |  |       |\n"
         << " |   ●   |  |   ●   |\n"
         << " |       |  |       |\n"
         << " ╰-------╯  ╰-------╯\n" << endl;

    this_thread::sleep_for(chrono::milliseconds(500));

    // Second pair of dice
    cout << "\n"
         << " ╭-------╮  ╭-------╮\n"
         << " | ●   ● |  | ●   ● |\n"
         << " |       |  |   ●   |\n"
         << " | ●   ● |  | ●   ● |\n"
         << " ╰-------╯  ╰-------╯\n" << endl;

    this_thread::sleep_for(chrono::milliseconds(500));

    // Third pair of dice
    cout << "\n"
         << " ╭-------╮  ╭-------╮\n"
         << " | ●   ● |  | ●   ● |\n"
         << " |   ●   |  | ●   ● |\n"
         << " | ●   ● |  | ●   ● |\n"
         << " ╰-------╯  ╰-------╯\n" << endl;

    this_thread::sleep_for(chrono::milliseconds(500));

}
