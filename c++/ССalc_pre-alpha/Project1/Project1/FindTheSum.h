#pragma once
#include <iostream>
#include <cmath>
using namespace std;
class FindTheSum {
private:
	//data
	int n, res;

public:
	//konstruktor
	FindTheSum();

	//destructor
	~FindTheSum();

	//Medots
	void setN(double newN);	//���������� ������ �������� 

	void setRes(double newRes);	//���������� ������ �������� 

	double getN() const;	//�����������

	double getRes() const;	//�����������

	void summa();
};




