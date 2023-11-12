#include "drawBoard.h"
#include "playGame.h"
#include <string>
#include <iostream>

using namespace std;

char board[9] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };

int play(int xo) {
    int xo = xo;
    if (xo == 0) {
        playO();
    }
    else {
        playX();
    }
}

//O turn
int playO() {

    draw(board);

    int input;
    cout << "Where would you like to place your O? (type an available number 1-9): \n";
    cin >> input;
    if (input < 1 || input > 9) {
        cout << "Invalid input, try again.\n";
        playO();
    }
    else {
        for (int i = 0; i < 9; i++) {
            if (input == board[i] - '0') {
                board[i] = 'O';
            }
            i++;
        }
        draw(board);
        playX();
    }

    return 0;
}

//X turn
int playX() {

    draw(board);

    int input;
    cout << "Where would you like to place your X? (type an available number 1-9): \n";
    cin >> input;
    if (input < 1 || input > 9) {
        cout << "Invalid input, try again.\n";
        playX();
    }
    else {
        for (int i = 0; i < 9; i++) {
            if (input == board[i] - '0') {
                board[i] = 'X';
            }
            i++;
        }
        draw(board);
        playO();
    }

    return 0;
}