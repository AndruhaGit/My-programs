#pragma once
#include <iostream>
#include <cmath>
using namespace std;
class factorial
{
private:
	//data
	int n, res;

public:
	//konstruktor
	factorial();

	//destructor
	~factorial();

	//Medots
	void setN(double newN);	//присвоение нового значения 

	void setRes(double newRes);	//присвоение нового значения 

	double getN() const;	//возвращение

	double getRes() const;	//возвращение

	void fact();
};



