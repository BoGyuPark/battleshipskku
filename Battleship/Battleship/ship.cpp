/*
base클래스 Ship

-배의 종류-
Carrier (5)
Battleship (4)
Cruiser (3)
Submarine (3)
Destroyer (2)
*/

#include "ship.h"

// Ship 생성자
Ship::Ship() {
	Ship::size = 0; // 배의 크기 = 0
}
// Ship 생성자 (int)
Ship::Ship(int s) {
	Ship::size = s; // 배의 크기 = s
}

// Shipe의 size를 받는 함수
void Ship::getSize(int s) {
	size = s;
}
// Ship의 size를 반환하는 함수
int Ship::putSize() {
	return size;
}



// Carrier (5)
Carrier::Carrier() {
	getSize(5);
}
// Battleship(4)
Battleship::Battleship() {
	getSize(4);
}
// Cruiser(3)
Cruiser::Cruiser() {
	getSize(3);
}
// Submarine(3)
Submarine::Submarine() {
	getSize(3);
}
// Destroyer(2)
Destroyer::Destroyer() {
	getSize(2);
}