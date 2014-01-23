//Kyle Skabelund
//CS1410

#include <iostream>
#include <time.h>

using namespace std;

int GetConnectionSize(void);

char** BuildGameBoardSize(int winSize);

void DisplayGameBoard(char **GameBoard, int winSize);

void PlayerMove(char **GameBoard, int winsize);

void ComputerMove(char **GameBoard, int winsize);

bool CheckColumnWin(char **Gameboard, int winsize);

bool CheckRowWin(char **Gameboard, int winsize);

bool CheckLeftDiagonalWin(char **Gameboard, int winsize);

bool CheckRightDiagonalWin(char **Gameboard, int winsize);

bool CheckTie(char **Gameboard,int winsize);

void DestroyGameboard(char **Gameboard, int winsize);

