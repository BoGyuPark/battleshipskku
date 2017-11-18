/*
부모클래스 Ship

-배의 종류-
Carrier (5)
Battleship (4)
Cruiser (3)
Submarine (3)
Destroyer (2)
*/

#pragma once
#include <string>
using std::string;

// 부모 클래스 Ship
class Ship {
private:
	std::string name; // 배의 이름
	int size; // 배의 크기
public:
	Ship(); // Ship 생성자
	Ship(int s); // Ship 생성자 (int)
	void getSize(int s); // Ship의 size를 받는 함수
	int putSize(); // Ship의 size를 반환하는 함수
};

// Carrier
class Carrier : public Ship {
public:
	Carrier(); // Carrier 생성자
};

// Battleship
class Battleship : public Ship {
	Battleship(); // Battleship 생성자
};

// Cruiser
class Cruiser : public Ship {
	Cruiser(); // Cruiser 생성자
};

// Submarine
class Submarine : public Ship {
	Submarine(); // Submarine 생성자
};

// Destroyer
class Destroyer : public Ship {
	Destroyer(); // Destroyer 생성자
};