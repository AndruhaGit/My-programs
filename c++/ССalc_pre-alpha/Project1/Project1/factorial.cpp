#include "factorial.h"
//konstruktor
factorial::factorial() {
	n = 1;
	res = 1;
}

//Destructor
factorial::~factorial() { }

//Medots

void factorial::setN(double newN)//присвоение нового значения 
{
	n = newN;
}

void factorial::setRes(double newRes)	//присвоение нового значения 
{
	res = newRes;
}

double factorial::getN() const		 //возвращение 
{
	return n;
}

double factorial::getRes()	const	//возвращение 
{
	return res;
}

void factorial::fact()	//вывод всех данних
{
	for (int i = 1; i <= n; i++)
	{
		res = res * i;
	}
	cout << "Факторіал " << n << " = " << res << endl;
}
