#include "FindTheSum.h"
//konstruktor
FindTheSum::FindTheSum() 
{
	n = 1;
	res = 1;
}

//Destructor
FindTheSum::~FindTheSum() { }

//Medots
void FindTheSum::setN(double newN)//���������� ������ �������� 
{
	n = newN;
}

void FindTheSum::setRes(double newRes)	//���������� ������ �������� 
{
	res = newRes;
}

double FindTheSum::getN() const		 //����������� 
{
	return n;
}

double FindTheSum::getRes()	const	//����������� 
{
	return res;
}

void FindTheSum::summa()	//����� ���� ������
{
	for (int i = 0; i <= n; i++) 
	{
		res +=  i;
	}
	cout << "���� ������ " << n << " ����� = " << res << endl;
}
