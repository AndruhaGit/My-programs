#pragma once
#include <iostream>
#include <cmath>
using namespace std;
class factorial
{
private:
	//data
	int n, res;

public:
	//konstruktor
	factorial();

	//destructor
	~factorial();

	//Medots
	void setN(double newN);	//���������� ������ �������� 

	void setRes(double newRes);	//���������� ������ �������� 

	double getN() const;	//�����������

	double getRes() const;	//�����������

	void fact();
};



