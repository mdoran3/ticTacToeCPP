#include "drawBoard.h"
#include "playGame.h"
#include "board.h"
#include <string>
#include <iostream>

using namespace std;

int totalTurns = 0;

int play(int xo) {
    int firstChoice = xo;
    if (firstChoice == 0) {
        playO();
    }
    else {
        playX();
    }
    return 0;
}

//check if 0s win
bool checkWinO() {

    //check Os columns
    if (board[0] == 'O'&& board[3] == 'O' && board[6] == 'O') {
        return true;
    }
    else if (board[1] == 'O'&& board[4] == 'O' && board[7] == 'O') {
        return true;
    }
    else if (board[2] == 'O'&& board[5] == 'O' && board[8] == 'O') {
        return true;
    }
    //check Os rows
    else if (board[0] == 'O'&& board[1] == 'O' && board[2] == 'O') {
        return true;
    }
    else if (board[3] == 'O'&& board[4] == 'O' && board[5] == 'O') {
        return true;
    }
    else if (board[6] == 'O'&& board[7] == 'O' && board[8] == 'O') {
        return true;
    }
    else if (board[0] == 'O'&& board[1] == 'O' && board[2] == 'O') {
        return true;
    }
    else if (board[3] == 'O'&& board[4] == 'O' && board[5] == 'O') {
        return true;
    }
    //check 0s diagnals
    else if (board[0] == 'O'&& board[4] == 'O' && board[8] == 'O') {
        return true;
    }
    else if (board[2] == 'O'&& board[4] == 'O' && board[6] == 'O') {
        return true;
    }

    return false; 
}

//check if Xs win
bool checkWinX() {

    //check Os columns
    if (board[0] == 'X'&& board[3] == 'X' && board[6] == 'X') {
        return true;
    }
    else if (board[1] == 'X'&& board[4] == 'X' && board[7] == 'X') {
        return true;
    }
    else if (board[2] == 'X'&& board[5] == 'X' && board[8] == 'X') {
        return true;
    }
    //check Os rows
    else if (board[0] == 'X'&& board[1] == 'X' && board[2] == 'X') {
        return true;
    }
    else if (board[3] == 'X'&& board[4] == 'X' && board[5] == 'X') {
        return true;
    }
    else if (board[6] == 'X'&& board[7] == 'X' && board[8] == 'X') {
        return true;
    }
    else if (board[0] == 'X'&& board[1] == 'X' && board[2] == 'X') {
        return true;
    }
    else if (board[3] == 'X'&& board[4] == 'X' && board[5] == 'X') {
        return true;
    }
    //check 0s diagnals
    else if (board[0] == 'X'&& board[4] == 'X' && board[8] == 'X') {
        return true;
    }
    else if (board[2] == 'X'&& board[4] == 'X' && board[6] == 'X') {
        return true;
    }

    return false; 
}

void xWins() {

    cout << "\n"
         << " 8b        d8     I8,        8        ,8I  88  888b      88   ad88888ba   88\n"
         << "  Y8,    ,8P      `8b       d8b       d8'  88  8888b     88  d8\"     \"8b  88\n"
         << "   `8b  d8'        \"8,     ,8\"8,     ,8\"   88  88 `8b    88  Y8,          88\n"
         << "     Y88P           Y8     8P Y8     8P    88  88  `8b   88  `Y8aaaaa,    88\n"
         << "     d88b           `8b   d8' `8b   d8'    88  88   `8b  88    `\"\"\"\"\"8b,  88\n"
         << "   ,8P  Y8,          `8a a8'   `8a a8'     88  88    `8b 88          `8b  \"\"\n"
         << "  d8'    `8b          `8a8'     `8a8'      88  88     `8888  Y8a     a8P  aa\n"
         << " 8P        Y8          `8'       `8'       88  88      `888   \"Y88888P\"   88\n" << endl;
}

void oWins() {

        cout << "\n"
         << "                                                                               \n"
         << "  ,ad8888ba,       I8,        8        ,8I  88  888b      88   ad88888ba   88\n"
         << " d8\"'    `\"8b      `8b       d8b       d8'  88  8888b     88  d8\"     \"8b  88\n"
         << "d8'        `8b      \"8,     ,8\"8,     ,8\"   88  88 `8b    88  Y8,          88\n"
         << "88          88       Y8     8P Y8     8P    88  88  `8b   88  `Y8aaaaa,    88\n"
         << "88          88       `8b   d8' `8b   d8'    88  88   `8b  88    `\"\"\"\"\"8b,  88\n"
         << "Y8,        ,8P        `8a a8'   `8a a8'     88  88    `8b 88          `8b  \"\"\n"
         << " Y8a.    .a8P          `8a8'     `8a8'      88  88     `8888  Y8a     a8P  aa\n"
         << "  `\"Y8888Y\"'            `8'       `8'       88  88      `888   \"Y88888P\"   88\n" << endl;
}

//O turn
int playO() {

    //draw(board);

    int input;
    cout << "O TURN\n";
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
                break;
            }
        }
        draw(board);
        printf("\n\n\n");
        if (checkWinO() == false) {
            totalTurns++;
            if (totalTurns == 9) {
                printf("\n\nDRAW! NO WINNER! TIC-TAC-TOE - DRAW! NO WINNER!\n\n");
                return 0;
            }
            playX();
        }
        else {
            printf("TIC-TAC-TOE - Os WIN!\n\n");
            oWins();
        }
    }

    return 0;
}

//X turn
int playX() {

    //draw(board);

    int input;
    cout << "X TURN\n";
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
                break;
            }
        }
        draw(board);
        printf("\n\n\n");
        if (checkWinX() == false) {
            totalTurns++;
            if (totalTurns == 9) {
                printf("\n\nDRAW! NO WINNER! TIC-TAC-TOE - DRAW! NO WINNER!\n\n");
                return 0;
            }
            playO();
        }
        else {
            printf("TIC-TAC-TOE - Xs WIN!\n\n");
            xWins();
        }
    }

    return 0;
}