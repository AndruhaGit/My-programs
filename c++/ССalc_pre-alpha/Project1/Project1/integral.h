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
	void setA(double newA);	//���������� ������ �������� 

	void setB(double newB);	//���������� ������ �������� 

	void setN(double newN); //���������� ������ �������� 

	double getA() const;		 //����������� 

	double getB()	const;	//����������� 

	double getN() const;

	double xStepen(double x);

	void xVstepen();	//����� ���� ������	
	void SinX();	//����� ���� ������	
	void CosX();
};

