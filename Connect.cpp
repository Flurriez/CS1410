//Kyle Skabelund
//Cs1410

#include "Connect.h"

const int EXTRA_ROWS;

int GetConnectonSize(void){
	int connectionSize;
	cout << "How many connections are required to win the game?" << endl;
	cin >> connectionSize;
}
char **BuildGameBoardSize(int winSize){

	char **Gameboard = new char *[winSize + EXTRA_ROWS];

}
void DisplayGameBoard(char **GameBoard, int winSize){

}
void PlayerMove(char **GameBoard, int winsize){

}
void ComputerMove(char **GameBoard, int winsize){

}

bool CheckColumnWin(char **Gameboard, int winsize){

}

bool CheckRowWin(char **Gameboard, int winsize){

}

bool CheckLeftDiagonalWin(char **Gameboard, int winsize){

}

bool CheckRightDiagonalWin(char **Gameboard, int winsize){

}

bool CheckTie(char **Gameboard,int winsize){

}

void DestroyGameboard(char **Gameboard, int winsize){

}