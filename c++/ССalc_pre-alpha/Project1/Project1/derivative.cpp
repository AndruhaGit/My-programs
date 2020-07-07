#include "derivative.h"

//konstruktor
derivative::derivative() {
	x = 1;
	h = 0.1;
}

//Destructor
derivative::~derivative() { }

//Medots

void derivative::setx(double newX)//присвоение нового значения 
{
	x = newX;
}

void derivative::seth(double newH)	//присвоение нового значения 
{
	h = newH;
}

double derivative::getx() const	//возвращение 
{
	return x;
}

double derivative::geth() const	//возвращение 
{
	return h;
}

double f(double x)
{
	//здесь функция, производную которой нужно найти, например, x^2
	return x * x;
}

void derivative::FirstDerivative()	
{
	fc = (f(x + h) - f(x - h)) / (2 * h); // центральная
	cout << "Перша похідна = " << fc << endl;
}

void derivative::SecondDerivative()
{
	// приближенно вычисляем вторую производную
	f2 = (f(x + h) - 2 * f(x) + f(x - h)) / (h * h);
	cout << "Друга похідна = " << f2 << endl;
}