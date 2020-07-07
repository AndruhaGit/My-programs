#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

void findAge(int current_date, int current_month, int current_year, int birth_date, int birth_month, int birth_year);

int main() {
	setlocale(LC_ALL, "Rus");

	//инициализаци€ данных
	int current_date = 24;
	int current_month = 4;
	int current_year = 2020;

	int birth_date = 2;
	int birth_month = 7;
	int birth_year = 2002;

	//ручной ввод с клавиатуры
	cout << "ввведите нынешний год: ";
	cin >> current_year;
	cout << "ввведите нынешний мес€ц: ";
	cin >> current_month;
	cout << "ввведите нынешную дату: ";
	cin >> current_date;
	cout << endl;

	cout << "ввведите год рождени€: ";
	cin >> birth_year;
	cout << "ввведите мес€ц рождени€: ";
	cin >> birth_month;
	cout << "ввведите дату рождени€: ";
	cin >> birth_date;

	//вызов функции
	findAge(current_date, current_month, current_year, birth_date, birth_month, birth_year);
	return 0;
}

void findAge(int current_date, int current_month, int current_year, int birth_date, int birth_month, int birth_year)
{
	int month[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }; //сздани€ масива с мес€цами

	if (birth_date > current_date) {		//если дата рождени€ больше за нынешную дату, то...
		current_date = current_date + month[birth_month - 1];  //... к ннешней дате добавитс€ текущий мес€ц -1
	}

	if (birth_month > current_month) {    //если мес€ц рождени€ больше чем нынешний мес€ц то...
		current_year = current_year - 1;	//... от нынешнего года отнимем 1
		current_month = current_month + 12;	//... и к нынешнему мес€цу добавим 12
	}

	//считаем даты
	int calculated_date = current_date - birth_date;		//день
	int calculated_month = current_month - birth_month;		//мес€ц
	int calculated_year = current_year - birth_year;		//год

	//вывод
	cout << "¬ам сейчас: " << calculated_year << " лет" << "ћес€цев: " << calculated_month << "ƒней: " << calculated_date << endl;

}