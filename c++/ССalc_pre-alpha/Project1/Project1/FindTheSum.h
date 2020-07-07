#pragma once
#include <iostream>
#include <cmath>
using namespace std;
class FindTheSum {
private:
	//data
	int n, res;

public:
	//konstruktor
	FindTheSum();

	//destructor
	~FindTheSum();

	//Medots
	void setN(double newN);	//присвоение нового значения 

	void setRes(double newRes);	//присвоение нового значения 

	double getN() const;	//возвращение

	double getRes() const;	//возвращение

	void summa();
};




