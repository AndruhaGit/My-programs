#pragma once
#include <iostream>
using namespace std;
class derivative
{
private:
	//data
	double x, h, fc, f2;

public:
	//konstruktor
	derivative();

	//destructor
	~derivative();

	//Medots
	void setx(double newX);	//присвоение нового значения 

	void seth(double newH);	//присвоение нового значения 

	double getx() const;	//возвращение 

	double geth() const;	//возвращение 

	void FirstDerivative();

	void SecondDerivative();
};

