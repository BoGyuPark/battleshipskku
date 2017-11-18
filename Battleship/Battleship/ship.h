/*
�θ�Ŭ���� Ship

-���� ����-
Carrier (5)
Battleship (4)
Cruiser (3)
Submarine (3)
Destroyer (2)
*/

#pragma once
#include <string>
using std::string;

// �θ� Ŭ���� Ship
class Ship {
private:
	std::string name; // ���� �̸�
	int size; // ���� ũ��
public:
	Ship(); // Ship ������
	Ship(int s); // Ship ������ (int)
	void getSize(int s); // Ship�� size�� �޴� �Լ�
	int putSize(); // Ship�� size�� ��ȯ�ϴ� �Լ�
};

// Carrier
class Carrier : public Ship {
public:
	Carrier(); // Carrier ������
};

// Battleship
class Battleship : public Ship {
	Battleship(); // Battleship ������
};

// Cruiser
class Cruiser : public Ship {
	Cruiser(); // Cruiser ������
};

// Submarine
class Submarine : public Ship {
	Submarine(); // Submarine ������
};

// Destroyer
class Destroyer : public Ship {
	Destroyer(); // Destroyer ������
};