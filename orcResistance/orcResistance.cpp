#include <iostream>
#include <string>
#include <Windows.h>
#include <cstring>
#include <cmath>
#include <iomanip>


using namespace std;

int main() {

	setlocale(LC_ALL, "RUS");

	float orcHp;
	float resistance;
	float fireBall;

	do {
		cout << "Введитк колличество здоровья орка: "; cin >> orcHp;
		cout << "Введите уровень резиста к магии: "; cin >> resistance;

		if (orcHp > 1 || orcHp < 0 || resistance > 1 || resistance < 0) {
			cout << "Вы ввели неверное значение!\n";
		}
	} while (orcHp > 1 || orcHp < 0 || resistance > 1 || resistance < 0);

	while (orcHp > 0) {

		cout << "Введите силу каста фаерболла: "; cin >> fireBall;
		if (fireBall > 1 || fireBall < 0) {
			cout << "Вы ввели неверное значение!";
		}
		float damageResult = fireBall - resistance * fireBall;
		orcHp = orcHp - damageResult;
		cout << "Урон " << fireBall << " резист " << resistance << " по орку, прилетит " << damageResult << " урона. Здоровье орка равно " << orcHp << "\n";
	}
	cout << "Орк пал в славной битве! Лок тар огар!";
	return 0;
}
