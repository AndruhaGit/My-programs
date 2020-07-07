#include <iostream>
#include <cmath>
#include <windows.h>
#include "integral.h"
#include "derivative.h"
#include "QuadraticEquation.h"
#include "factorial.h"
#include "FindTheSum.h"
using namespace std;

int choose_case(float mark)
{
	int mark_key;
	if (mark == 1)
		mark_key = 1;
	else if (mark == 2)
		mark_key = 2;
	else if (mark == 3)
		mark_key = 3;
	else if (mark == 4)
		mark_key = 4;
	else if (mark == 5)
		mark_key = 5;
	else if (mark == 6)
		mark_key = 6;
	return mark_key;
}

int main(){
	setlocale(LC_ALL, "Ukrainian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int mark;
	int a;
	do {
		system("cls");
		cout << "|***************************************|" << endl;
		cout << "|������ ����� ����:		    	|\n| 1 - ����� ��������� (������� ѳ������)|\n| 2 - ����� �������	                |\n| 3 - ������ ����������� �������      |\n| 4 - ����������� ���������            |\n| 5 - ����������� c��� ������ n �����	|\n| 6 - �����				|\n";
		cout << "|***************************************|" << endl;
		cin >> mark;
		switch (choose_case(mark))
		{
			case 1: 
			{
				integral fromConsole;
				bool isUserNeedToCarryOnProcedure;
				do
				{
					double A, B, N;
					system("cls");
					cout << "|********************|" << endl;
					cout << "|������ ����� ����: |\n|1 - x^2             |\n|2 - sin(x)          |\n|3 - cos(x)          |\n";
					cout << "|********************|" << endl;
					cin >> mark;
					switch (choose_case(mark))
					{
						case 1:
						{
							cout << "������� x^n" << endl;
							cout << "������ ������ (n): ";
							cin >> N;
							cout << "������ ����� ������� (a) - ";
							cin >> A;

							cout << "������ ������� ������� (b) - ";
							cin >> B;

							fromConsole.setA(A);
							fromConsole.setB(B);
							fromConsole.setN(N);

							fromConsole.xVstepen();
							break;
						}
						case 2:
						{
							cout << "������� sin(n)" << endl;
							cout << "������ ����� ������� (a) - ";
							cin >> A;

							cout << "������ ������� ������� (b) - ";
							cin >> B;

							fromConsole.setA(A);
							fromConsole.setB(B);

							fromConsole.SinX();
							break;
						}

						case 3:
						{
							cout << "������� cos(n)" << endl;
							cout << "������ ����� ������� (a) - ";
							cin >> A;

							cout << "������ ������� ������� (b) - ";
							cin >> B;

							fromConsole.setA(A);
							fromConsole.setB(B);

							fromConsole.CosX();
							break;
						}
					}
					cout << "���������� ����������? 1 - ��, 0 - ����� � ����" << endl;
					cin >> isUserNeedToCarryOnProcedure;
				} while (isUserNeedToCarryOnProcedure == 1 || !(isUserNeedToCarryOnProcedure == 0));
				a = 0;
				break;
			}
			case 2:
			{
				derivative fromConsole;
				bool isUserNeedToCarryOnProcedure;
				do
				{
					cout << "������� �� x^2" << endl;
					cout << "����� �� ����� �������? - \n 1 - ����� �������\n 2 - ����� ������� " << endl;
					cin >> mark;
					switch (choose_case(mark)) 
					{
						case 1:
						{

							double x;
							string gender;
							cout << "������� x - ";
							cin >> x;
							fromConsole.setx(x);

							fromConsole.FirstDerivative();
							break;
						}
						case 2:
						{
							double x;
							string gender;
							cout << "������� x - ";
							cin >> x;
							fromConsole.setx(x);

							fromConsole.SecondDerivative();
							break;
						}
					}
					cout << "���������� ����������? 1 - ��, 0 - ����� � ����" << endl;
					cin >> isUserNeedToCarryOnProcedure;
				} while (isUserNeedToCarryOnProcedure == 1 || !(isUserNeedToCarryOnProcedure == 0));
				a = 0;
				break;
			}
			break;
			case 3:
			{
				QuadraticEquation fromConsole;
				bool isUserNeedToCarryOnProcedure;
				do
				{
					double a;
					double b;
					double c;
					double d = 1;
					cout << "������� a - ";
					cin >> a;

					cout << "������� b - ";
					cin >> b;

					cout << "������� c - ";
					cin >> c;

					fromConsole.setA(a);
					fromConsole.setB(b);
					fromConsole.setC(c);

					fromConsole.discriminant();
					
					if (d > 0)
						{
							fromConsole.Root();
						}
					else if (d == 0)
						{
							fromConsole.RootIsZero();
						}
					if (d < 0)
					{
						fromConsole.RootLessThanZero();
					}
					cout << "���������� ����������? 1 - ��, 0 - ����� � ����" << endl;
					cin >> isUserNeedToCarryOnProcedure;
				} while (isUserNeedToCarryOnProcedure == 1 || !(isUserNeedToCarryOnProcedure == 0));
				a = 0;
				break;
			}
			case 4:
			{
				factorial fromConsole;
				bool isUserNeedToCarryOnProcedure;
				do
				{
					int n = 0;
					int res = 0;
					cout << "������� �����: ";
					cin >> n;

					fromConsole.setN(n);

					fromConsole.fact();

					cout << "���������� ����������? 1 - ��, 0 - ����� � ����" << endl;
					cin >> isUserNeedToCarryOnProcedure;
				} while (isUserNeedToCarryOnProcedure == 1 || !(isUserNeedToCarryOnProcedure == 0));
				a = 0;
				break;
			}

			case 5:
			{
				FindTheSum fromConsole;
				bool isUserNeedToCarryOnProcedure;
				do
				{
					int n = 0;
					int res = 0;
					cout << "������� �����: ";
					cin >> n;

					fromConsole.setN(n);

					fromConsole.summa();

					cout << "���������� ����������? 1 - ��, 0 - ����� � ����" << endl;
					cin >> isUserNeedToCarryOnProcedure;
				} while (isUserNeedToCarryOnProcedure == 1 || !(isUserNeedToCarryOnProcedure == 0));
				a = 0;
				break;
				break;
			}

			case 6:
			{
				system("color 4");
				cin.get();
				a = 2;
			}
		}
	} while (a == 1 || a == 0);
	return 0;
}