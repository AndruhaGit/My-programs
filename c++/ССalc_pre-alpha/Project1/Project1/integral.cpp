#include "integral.h"
//konstruktor
integral::integral() {
	A = 1;
	B = 1;
	N = 1;
}

//Destructor
integral::~integral() { }

//Medots

void integral::setA(double newA)//���������� ������ �������� 
{
	A = newA;
}

void integral::setB(double newB)	//���������� ������ �������� 
{
	B = newB;
}

void integral::setN(double newN)
{
	N = newN;
}

double integral::getA() const		 //����������� 
{
	return A;
}

double integral::getB()	const	//����������� 
{
	return B;
}

double integral::getN()	const	//����������� 
{
	return N;
}

double integral::xStepen(double x)
{
	return x*N;
}

double sinX(double x)
{
	return sin(x);
}

double cosX(double x)
{
	return cos(x);
}

void integral::xVstepen()	//����� ���� ������
{
	int i = 0;
	double Integral; // ��������
	double h = 0.1;// ����� ��� ��������������

	double n; // ����� ����� ��������� n

	n = (B - A) / h;

	Integral = h * (xStepen(A) + xStepen(B)) / 6.0;
	for (i = 1; i <= n; i++)
		Integral = Integral + 4.0 / 6.0 * h * xStepen(A + h * (i - 0.5));
	for (i = 1; i <= n - 1; i++)
		Integral = Integral + 2.0 / 6.0 * h * xStepen(A + h * i);
	cout << "���� ������������: " << h << endl;
	cout << "��������: " << Integral << endl;
}

void integral::SinX()	//����� ���� ������
{
	int i = 0;
	double Integral; // ��������
	double h = 0.1;// ����� ��� ��������������

	double n; // ����� ����� ��������� n

	n = (B - A) / h;

	Integral = h * (sinX(A) + sinX(B)) / 6.0;
	for (i = 1; i <= n; i++)
		Integral = Integral + 4.0 / 6.0 * h * sinX(A + h * (i - 0.5));
	for (i = 1; i <= n - 1; i++)
		Integral = Integral + 2.0 / 6.0 * h * sinX(A + h * i);
	cout << "���� ������������: " << h << endl;
	cout << "��������: " << Integral << endl;
}

void integral::CosX()	//����� ���� ������
{
	int i = 0;
	double Integral; // ��������
	double h = 0.1;// ����� ��� ��������������

	double n; // ����� ����� ��������� n

	n = (B - A) / h;

	Integral = h * (cosX(A) + cosX(B)) / 6.0;
	for (i = 1; i <= n; i++)
		Integral = Integral + 4.0 / 6.0 * h * cosX(A + h * (i - 0.5));
	for (i = 1; i <= n - 1; i++)
		Integral = Integral + 2.0 / 6.0 * h * cosX(A + h * i);
	cout << "���� ������������: " << h << endl;
	cout << "��������: " << Integral << endl;
}
