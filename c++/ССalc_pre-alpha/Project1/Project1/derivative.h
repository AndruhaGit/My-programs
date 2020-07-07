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
	void setx(double newX);	//���������� ������ �������� 

	void seth(double newH);	//���������� ������ �������� 

	double getx() const;	//����������� 

	double geth() const;	//����������� 

	void FirstDerivative();

	void SecondDerivative();
};

