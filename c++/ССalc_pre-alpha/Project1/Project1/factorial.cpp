#include "factorial.h"
//konstruktor
factorial::factorial() {
	n = 1;
	res = 1;
}

//Destructor
factorial::~factorial() { }

//Medots

void factorial::setN(double newN)//���������� ������ �������� 
{
	n = newN;
}

void factorial::setRes(double newRes)	//���������� ������ �������� 
{
	res = newRes;
}

double factorial::getN() const		 //����������� 
{
	return n;
}

double factorial::getRes()	const	//����������� 
{
	return res;
}

void factorial::fact()	//����� ���� ������
{
	for (int i = 1; i <= n; i++)
	{
		res = res * i;
	}
	cout << "�������� " << n << " = " << res << endl;
}
