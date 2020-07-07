#pragma once
#include <iostream>
using namespace std;
class integral
{
private:
	//data
	double A, B, N;

public:
	//konstruktor
	integral();

	//destructor
	~integral();

	//Medots
	void setA(double newA);	//присвоение нового значения 

	void setB(double newB);	//присвоение нового значения 

	void setN(double newN); //присвоение нового значения 

	double getA() const;		 //возвращение 

	double getB()	const;	//возвращение 

	double getN() const;

	double xStepen(double x);

	void xVstepen();	//вывод всех данних	
	void SinX();	//вывод всех данних	
	void CosX();
};

