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

void integral::setA(double newA)//присвоение нового значения 
{
	A = newA;
}

void integral::setB(double newB)	//присвоение нового значения 
{
	B = newB;
}

void integral::setN(double newN)
{
	N = newN;
}

double integral::getA() const		 //возвращение 
{
	return A;
}

double integral::getB()	const	//возвращение 
{
	return B;
}

double integral::getN()	const	//возвращение 
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

void integral::xVstepen()	//вывод всех данних
{
	int i = 0;
	double Integral; // интеграл
	double h = 0.1;// задаём шаг интегрирования

	double n; // задаём число разбиений n

	n = (B - A) / h;

	Integral = h * (xStepen(A) + xStepen(B)) / 6.0;
	for (i = 1; i <= n; i++)
		Integral = Integral + 4.0 / 6.0 * h * xStepen(A + h * (i - 0.5));
	for (i = 1; i <= n - 1; i++)
		Integral = Integral + 2.0 / 6.0 * h * xStepen(A + h * i);
	cout << "Крок інтегрування: " << h << endl;
	cout << "Інтеграл: " << Integral << endl;
}

void integral::SinX()	//вывод всех данних
{
	int i = 0;
	double Integral; // интеграл
	double h = 0.1;// задаём шаг интегрирования

	double n; // задаём число разбиений n

	n = (B - A) / h;

	Integral = h * (sinX(A) + sinX(B)) / 6.0;
	for (i = 1; i <= n; i++)
		Integral = Integral + 4.0 / 6.0 * h * sinX(A + h * (i - 0.5));
	for (i = 1; i <= n - 1; i++)
		Integral = Integral + 2.0 / 6.0 * h * sinX(A + h * i);
	cout << "Крок інтегрування: " << h << endl;
	cout << "Інтеграл: " << Integral << endl;
}

void integral::CosX()	//вывод всех данних
{
	int i = 0;
	double Integral; // интеграл
	double h = 0.1;// задаём шаг интегрирования

	double n; // задаём число разбиений n

	n = (B - A) / h;

	Integral = h * (cosX(A) + cosX(B)) / 6.0;
	for (i = 1; i <= n; i++)
		Integral = Integral + 4.0 / 6.0 * h * cosX(A + h * (i - 0.5));
	for (i = 1; i <= n - 1; i++)
		Integral = Integral + 2.0 / 6.0 * h * cosX(A + h * i);
	cout << "Крок інтегрування: " << h << endl;
	cout << "Інтеграл: " << Integral << endl;
}
