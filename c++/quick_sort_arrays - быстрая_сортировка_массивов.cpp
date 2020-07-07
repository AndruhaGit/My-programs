#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
const int n = 15;
int first, last;
//функция сортировки
void quicksort(int* mas, int first, int last)
{
	int mid, count;
	int f = first, l = last;
	mid = mas[(f + l) / 2]; //вычисление опорного элемента
	do
	{
		while (mas[f] < mid) f++; //указатель смещатся с шагом в один элемент к концу массива, до тех пор, пока mas[f] > mid
		while (mas[l] > mid) l--; //указатель смещатся с шагом в один элемент к началу массива, до тех пор, пока mas[f] < mid

		if (f <= l) //каждые два найденных элемента меняются местами
		{
			count = mas[f];
			mas[f] = mas[l];
			mas[l] = count;
			f++;		//переход к следующему элементу
			l--;		//переход к следующему элементу
		}
	} while (f < l); //выполняем пока первый элемент больше последнего

	//Если в какой-то из получившихся в результате разбиения массива частей находиться больше одного элемента,
	//то следует произвести рекурсивное упорядочивание этой части

	if (first < l) quicksort(mas, first, l); //если l < last выполнить рекурсивное упорядочивание левой части
	if (f < last) quicksort(mas, f, last);	//если f > last выполнить рекурсивное упорядочивание правой части
}
//главная функция
int main()
{
	setlocale(LC_ALL, "Rus");
	int* A = new int[n]; //создание массива
	srand(time(NULL));       
	cout << "Исходный массив: ";
	for (int i = 0; i < n; i++) //генерация рандомных чисел исходного масива
	{
		A[i] = rand();
		cout << A[i] << " ";
	}
	first = 0; last = n - 1; //обозначение начально и последнего элемента массива
	quicksort(A, first, last); //вызов сортирующей функции
	cout << endl << "Результирующий массив: ";
	for (int i = 0; i < n; i++) cout << A[i] << " "; //вывод отсортированого масива
	cout << "\n";
	delete[]A;  //удаление масива
	system("pause");
}