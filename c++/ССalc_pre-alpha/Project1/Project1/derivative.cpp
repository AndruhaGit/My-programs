#include "derivative.h"

//konstruktor
derivative::derivative() {
	x = 1;
	h = 0.1;
}

//Destructor
derivative::~derivative() { }

//Medots

void derivative::setx(double newX)//���������� ������ �������� 
{
	x = newX;
}

void derivative::seth(double newH)	//���������� ������ �������� 
{
	h = newH;
}

double derivative::getx() const	//����������� 
{
	return x;
}

double derivative::geth() const	//����������� 
{
	return h;
}

double f(double x)
{
	//����� �������, ����������� ������� ����� �����, ��������, x^2
	return x * x;
}

void derivative::FirstDerivative()	
{
	fc = (f(x + h) - f(x - h)) / (2 * h); // �����������
	cout << "����� ������� = " << fc << endl;
}

void derivative::SecondDerivative()
{
	// ����������� ��������� ������ �����������
	f2 = (f(x + h) - 2 * f(x) + f(x - h)) / (h * h);
	cout << "����� ������� = " << f2 << endl;
}