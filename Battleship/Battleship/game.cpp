// �Լ� �̸� : nameOfFunction
// ���� �̸� : name_of_variable
// Ŭ����(����ü) �̸� : Ship

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
0: ��
1: ��
2: ���� ����
3: ���� ����
*/

void printBorad(char board_p1[11][11], char board_p2[11][11])
{
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (board_p1[i][j] == '0')
				cout << "��";
			else if (board_p1[i][j] == '1')
				cout << "��";
			else if (board_p1[i][j] == '2')
				cout << "��";
			else if (board_p1[i][j] == '3')
				cout << "��";
			
		}
		cout << "\t";

		for (int j = 0; j < 10; j++) {
			if (board_p2[i][j] == '0')
				cout << "��";
			else if (board_p2[i][j] == '1')
				cout << "��";
			else if (board_p1[i][j] == '2')
				cout << "��";
			else if (board_p1[i][j] == '3')
				cout << "��";
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
	int checkPlayer = 1;	//Ȧ�� : player1, ¦�� : plyaer2
	while (true) {
		system("cls");
		printBorad(p1_str_of_board, p2_str_of_board);
		int temp = 0;	//����� ���ڿ� ���� ������ ���ڸ� ���߱����� �ӽ�
		if (checkPlayer % 2 == 1) {
			cout << "Player1�� Player2�� ������ ���� ��ǥ �Է�(0 ~ 9) : ";
			cin >> p2.x;
			cout << "Player1�� Player2�� ������ ���� ��ǥ �Է�(0 ~ 9) : ";
			cin >> p2.y;

			for (int i = 0; i < 10; i++) {
				for (int j = 0; j < 10; j++) {
					if (p2_str_of_board[p2.x][p2.y] == '0')		//���ݽ���
						p2_str_of_board[p2.x][p2.y] = '3';
					else if(p2_str_of_board[p2.x][p2.y]=='1')		//���ݼ���
						p2_str_of_board[p2.x][p2.y] = '2';
				}
			}
			checkPlayer++;	//Player2�� ����
		}
		else {
			cout << "Player2�� Player1�� ������ ���� ��ǥ �Է�(0 ~ 9) : ";
			cin >> p1.x;
			cout << "Player2�� Player1�� ������ ���� ��ǥ �Է�(0 ~ 9) : ";
			cin >> p1.y;
			

			for (int i = 0; i < 10; i++) {
				for (int j = 0; j < 10; j++) {
					if (p1_str_of_board[p1.x][p1.y] == '0')		//���ݽ���
						p1_str_of_board[p1.x][p1.y] = '3';
					else if (p1_str_of_board[p1.x][p1.y] == '1')		//���ݼ���
						p1_str_of_board[p1.x][p1.y] = '2';
				}
			}
			checkPlayer++;	//Player1�� ����

		}

		
	}
	
	

	
	return 0;
}