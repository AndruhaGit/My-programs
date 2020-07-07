#include "QuadraticEquation.h"
//konstruktor
QuadraticEquation::QuadraticEquation() 
{
	a = 1;
	b = 1;
	c = 1;
}

//destructor
QuadraticEquation::~QuadraticEquation(){}

//Medots
void QuadraticEquation::setA(double newA)	//���������� ������ �������� 
{
	a = newA;
}

void QuadraticEquation::setB(double newB)	//���������� ������ �������� 
{
	b = newB;
}

void QuadraticEquation::setC(double newC)	//���������� ������ �������� 
{
	c = newC;
}


double QuadraticEquation::getA()	//�����������
{
	return a;
}

double QuadraticEquation::getB()	//�����������
{
	return b;
}

double QuadraticEquation::getC()	//�����������
{
	return c;
}


double QuadraticEquation::discriminant()
{
	d = b * b - 4 * a * c; // ������������ ������������
	return d;
}

void QuadraticEquation::Root()
{
	x1 = ((-b) + sqrt(d)) / (2 * a);
	x2 = ((-b) - sqrt(d)) / (2 * a);
	cout << "D = " << d << endl;
	cout << "x1 = " << x1 << endl;
	cout << "x2 = " << x2 << endl;
}

void QuadraticEquation::RootIsZero()
{
	x1 = -(b / (2 * a));
	cout << "D = " << d << endl;
	cout << "x1 = x2 = " << x1 << endl;
}

void QuadraticEquation::RootLessThanZero()
{
	cout << "D = "<< d << endl << "D < 0, ĳ����� ������ ������� �� ����(" << endl;
}