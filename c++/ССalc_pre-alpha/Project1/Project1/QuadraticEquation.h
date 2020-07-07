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
	void setA(double newA);	//���������� ������ �������� 

	void setB(double newB);	//���������� ������ �������� 

	void setC(double newC);	//���������� ������ �������� 


	double getA();	//�����������

	double getB();	//�����������

	double getC();	//����������� 


	double discriminant();

	void Root();

	void RootIsZero();

	void RootLessThanZero();
};


