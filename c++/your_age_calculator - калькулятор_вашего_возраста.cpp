#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

void findAge(int current_date, int current_month, int current_year, int birth_date, int birth_month, int birth_year);

int main() {
	setlocale(LC_ALL, "Rus");

	//������������� ������
	int current_date = 24;
	int current_month = 4;
	int current_year = 2020;

	int birth_date = 2;
	int birth_month = 7;
	int birth_year = 2002;

	//������ ���� � ����������
	cout << "�������� �������� ���: ";
	cin >> current_year;
	cout << "�������� �������� �����: ";
	cin >> current_month;
	cout << "�������� �������� ����: ";
	cin >> current_date;
	cout << endl;

	cout << "�������� ��� ��������: ";
	cin >> birth_year;
	cout << "�������� ����� ��������: ";
	cin >> birth_month;
	cout << "�������� ���� ��������: ";
	cin >> birth_date;

	//����� �������
	findAge(current_date, current_month, current_year, birth_date, birth_month, birth_year);
	return 0;
}

void findAge(int current_date, int current_month, int current_year, int birth_date, int birth_month, int birth_year)
{
	int month[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }; //������� ������ � ��������

	if (birth_date > current_date) {		//���� ���� �������� ������ �� �������� ����, ��...
		current_date = current_date + month[birth_month - 1];  //... � ������� ���� ��������� ������� ����� -1
	}

	if (birth_month > current_month) {    //���� ����� �������� ������ ��� �������� ����� ��...
		current_year = current_year - 1;	//... �� ��������� ���� ������� 1
		current_month = current_month + 12;	//... � � ��������� ������ ������� 12
	}

	//������� ����
	int calculated_date = current_date - birth_date;		//����
	int calculated_month = current_month - birth_month;		//�����
	int calculated_year = current_year - birth_year;		//���

	//�����
	cout << "��� ������: " << calculated_year << " ���" << "�������: " << calculated_month << "����: " << calculated_date << endl;

}