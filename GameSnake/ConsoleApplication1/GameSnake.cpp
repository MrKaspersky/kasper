#include "stdafx.h"
#include "iostream"
#include "conio.h"
#include "fstream"
#include "Windows.h"

using namespace std;

bool GameOver;
const int width = 20;
const int height = 20;
int x, y, frutX, frutY, score;
int tailX[100], tailY[100];
int nTail = 0;

enum eDirection { STOP = 0, LEFT, RIGHT, UP, DOWN };
eDirection dir;


void Setup() {
	GameOver = false;
	dir = STOP;
	x = width / 2 - 1;
	y = height / 2 - 1;
	frutX = rand() % width;
	frutY = rand() % height;
	score = 0;
}

void Draw() {
	system("cls");
	for (int i = 0; i < width + 1; i++)
		cout << "X";
	cout << endl;
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			if (j == 0 or j == width - 1)
				cout << "X";
			if (i == y and j == x)
				cout << "0";
			else if (i == frutY and j == frutX)
				cout << "F";
			else {
				bool print = false;
				for (int k = 0; k < nTail; k++) {
					if (tailX[k] == j and tailY[k] == i) {
						cout << "o";
						print = true;
					}
				}
				if (!print)
					cout << " ";
			}
		}

		cout << endl;
	}



	for (int i = 0; i < width + 1; i++)
		cout << "X";
	cout << endl;
	cout << " " << endl;
	cout << "Score: " << score << endl;

}

void Input() {
	if (_kbhit()) {
		switch (_getch()) {
		case 'a':
			dir = LEFT;
			break;
		case 'd':
			dir = RIGHT;
			break;
		case 'w':
			dir = UP;
			break;
		case 's':
			dir = DOWN;
			break;
		case 'x':
			GameOver = true;
			break;
		}

	}
}

void Logic() {
	Sleep(200);
	int prevX = tailX[0];
	int prevY = tailY[0];
	tailX[0] = x;
	tailY[0] = y;
	int prev2X = 0, prev2Y = 0;
	for (int i = 1; i < nTail; i++) {
		prev2X = tailX[i];
		prev2Y = tailY[i];
		tailX[i] = prevX;
		tailY[i] = prevY;
		prevX = prev2X;
		prevY = prev2Y;
	}
	switch (dir)
	{
	case LEFT:
		x--;
		break;
	case RIGHT:
		x++;
		break;
	case UP:
		y--;
		break;
	case DOWN:
		y++;
		break;
	}
	//if (x > width or x < 0 or y > height or y < 0)
	//GameOver = true;
	if (x >= width - 1)
		x = 0;
	else if (x < 0)
		x = width - 2;

	if (y >= height)
		y = 0;
	else if (y < 0)
		y = height - 1;

	for (int i = 0; i < nTail; i++) {
		if (tailX[i] == x and tailY[i] == y)
			GameOver = true;
	}

	if (x == frutX and y == frutY) {
		score += 1;
		frutX = rand() % width;
		frutY = rand() % height;
		nTail++;
	}
}


int main()
{
	cout << " " << endl;
	cout << " " << endl;
	cout << " " << endl;
	cout << "                          GAME " << endl;
	cout << "         ____   _____   _____   _    __   _____ " << endl;
	cout << "        |  __| |  _  | |  _  | | |  / /  |  ___| " << endl;
	cout << "        | |    | | | | | | | | | | / /   | | " << endl;
	cout << "        | |__  | | | | | |_| | | |/ /__  | |___" << endl;
	cout << "        |__  | | | | | |  _  | |  ____ | |  ___| " << endl;
	cout << "           | | | | | | | | | | | |   / / | | " << endl;
	cout << "         __| | | | | | | | | | | |  / /  | |___" << endl;
	cout << "        |____| |_| |_| |_| |_| |_| /_/   |_____| " << endl;
	cout << " "  << endl;
	cout << " " << endl;
	char *name = new char[255];
	cout << "                Enter you name: ";
	cin >> name;

	Setup();
	while (!GameOver) {
		Draw();
		Input();
		Logic();
	}
	ofstream writer;
	writer.open("Score.txt", ios::out | ios::app);
	writer << name << " - " << score << " fruits" << endl;
	writer.close(); 

	cout << " " << endl;
	cout << " " << endl;
	cout << " " << endl;
	cout << " " << endl;
	cout << " " << endl;
	cout << "                      Score: " << score << endl;
	cout << " " << endl;
	cout << " " << endl;
	cout << "         _____       ___       __  __   ____" << endl;
	cout << "        /  ___|     /   |     /  |/  | |  __|" << endl;
	cout << "        | |        / /| |    /       | | |__" << endl;
	cout << "        | |  _    / __  |   / /|__/| | |  __|" << endl;
	cout << "        | |_| |  / /  | |  / /     | | | |__" << endl;
	cout << "        |_____/ /_/   |_| /_/      |_| |____|" << endl;
	cout << "         _____   _     __  ____   _____" << endl;
	cout << "        /  _  | | |   / / |  __| |  _  |" << endl;
	cout << "        | | | | | |  / /  | |__  | |_| |" << endl;
	cout << "        | | | | | | / /   |  __| |  _  /" << endl;
	cout << "        | |_| | | |/ /    | |__  | | | |" << endl;
	cout << "        |_____/ |___/     |____| |_| |_|" << endl;
	cout << " " << endl;
	cout << " " << endl;
	cout << "           [Game SNAKE] By Kaspersky. " << endl;
	cout << " " << endl;
	cout << " " << endl;
	cout << " " << endl;
	system("pause");
    return 0;
}

