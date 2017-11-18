// 함수 이름 : nameOfFunction
// 변수 이름 : name_of_variable
// 클래스(구조체) 이름 : Ship

#include <iostream>
#include <conio.h>
using namespace std;

struct _tagPoint
{
	int x;
	int y;
};


typedef _tagPoint Point;
typedef _tagPoint* PPoint;

void setBoardOfP1(char board[11][11])
{
	strcpy_s(board[0], "0000000000");
	strcpy_s(board[1], "0000000000");
	strcpy_s(board[2], "0000000000");
	strcpy_s(board[3], "0000000000");
	strcpy_s(board[4], "0000000000");
	strcpy_s(board[5], "0000000000");
	strcpy_s(board[6], "0000000000");
	strcpy_s(board[7], "0000000000");
	strcpy_s(board[8], "0000000000");
	strcpy_s(board[9], "1111000000");

}
void setBoardOfP2(char board[11][11])
{
	strcpy_s(board[0], "0000001111");
	strcpy_s(board[1], "0000000000");
	strcpy_s(board[2], "0000000000");
	strcpy_s(board[3], "0000000000");
	strcpy_s(board[4], "0000000000");
	strcpy_s(board[5], "0000000000");
	strcpy_s(board[6], "0000000000");
	strcpy_s(board[7], "0000000000");
	strcpy_s(board[8], "0000000000");
	strcpy_s(board[9], "0000000000");

}
/*
0: 물
1: 배
2: 공격 성공
3: 공격 실패
*/

void printBorad(char board_p1[11][11], char board_p2[11][11])
{
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (board_p1[i][j] == '0')
				cout << "○";
			else if (board_p1[i][j] == '1')
				cout << "■";
			else if (board_p1[i][j] == '2')
				cout << "★";
			else if (board_p1[i][j] == '3')
				cout << "Ｘ";
			
		}
		cout << "\t";

		for (int j = 0; j < 10; j++) {
			if (board_p2[i][j] == '0')
				cout << "○";
			else if (board_p2[i][j] == '1')
				cout << "■";
			else if (board_p1[i][j] == '2')
				cout << "★";
			else if (board_p1[i][j] == '3')
				cout << "Ｘ";
		}
		cout << endl;
	}
	
}

int main() 
{
	Point p1, p2;
	char p1_str_of_board[11][11] = {};
	char p2_str_of_board[11][11] = {};
	setBoardOfP1(p1_str_of_board);
	setBoardOfP2(p2_str_of_board);
	int checkPlayer = 1;	//홀수 : player1, 짝수 : plyaer2
	while (true) {
		system("cls");
		printBorad(p1_str_of_board, p2_str_of_board);
		int temp = 0;	//행렬의 숫자와 실제 보드의 숫자를 맞추기위한 임시
		if (checkPlayer % 2 == 1) {
			cout << "Player1이 Player2를 공격할 행의 좌표 입력(0 ~ 9) : ";
			cin >> p2.x;
			cout << "Player1이 Player2를 공격할 열의 좌표 입력(0 ~ 9) : ";
			cin >> p2.y;

			for (int i = 0; i < 10; i++) {
				for (int j = 0; j < 10; j++) {
					if (p2_str_of_board[p2.x][p2.y] == '0')		//공격실패
						p2_str_of_board[p2.x][p2.y] = '3';
					else if(p2_str_of_board[p2.x][p2.y]=='1')		//공격성공
						p2_str_of_board[p2.x][p2.y] = '2';
				}
			}
			checkPlayer++;	//Player2로 변경
		}
		else {
			cout << "Player2가 Player1를 공격할 행의 좌표 입력(0 ~ 9) : ";
			cin >> p1.x;
			cout << "Player2가 Player1를 공격할 열의 좌표 입력(0 ~ 9) : ";
			cin >> p1.y;
			

			for (int i = 0; i < 10; i++) {
				for (int j = 0; j < 10; j++) {
					if (p1_str_of_board[p1.x][p1.y] == '0')		//공격실패
						p1_str_of_board[p1.x][p1.y] = '3';
					else if (p1_str_of_board[p1.x][p1.y] == '1')		//공격성공
						p1_str_of_board[p1.x][p1.y] = '2';
				}
			}
			checkPlayer++;	//Player1로 변경

		}

		
	}
	
	

	
	return 0;
}