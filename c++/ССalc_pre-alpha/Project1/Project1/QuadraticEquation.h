#pragma once
#include <iostream>
#include <cmath>
using namespace std;
class QuadraticEquation
{
private:
	//data
	double a, b, c, d, x1, x2, v;

public:
	//konstruktor
	QuadraticEquation();

	//destructor
	~QuadraticEquation();

	//Medots
	void setA(double newA);	//присвоение нового значения 

	void setB(double newB);	//присвоение нового значения 

	void setC(double newC);	//присвоение нового значения 


	double getA();	//возвращение

	double getB();	//возвращение

	double getC();	//возвращение 


	double discriminant();

	void Root();

	void RootIsZero();

	void RootLessThanZero();
};


