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
void FindTheSum::setN(double newN)//присвоение нового значения 
{
	n = newN;
}

void FindTheSum::setRes(double newRes)	//присвоение нового значения 
{
	res = newRes;
}

double FindTheSum::getN() const		 //возвращение 
{
	return n;
}

double FindTheSum::getRes()	const	//возвращение 
{
	return res;
}

void FindTheSum::summa()	//вывод всех данних
{
	for (int i = 0; i <= n; i++) 
	{
		res +=  i;
	}
	cout << "Сума перших " << n << " чисел = " << res << endl;
}
