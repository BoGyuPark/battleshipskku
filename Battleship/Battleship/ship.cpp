/*
baseŬ���� Ship

-���� ����-
Carrier (5)
Battleship (4)
Cruiser (3)
Submarine (3)
Destroyer (2)
*/

#include "ship.h"

// Ship ������
Ship::Ship() {
	Ship::size = 0; // ���� ũ�� = 0
}
// Ship ������ (int)
Ship::Ship(int s) {
	Ship::size = s; // ���� ũ�� = s
}

// Shipe�� size�� �޴� �Լ�
void Ship::getSize(int s) {
	size = s;
}
// Ship�� size�� ��ȯ�ϴ� �Լ�
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