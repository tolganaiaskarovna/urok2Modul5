#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<time.h>
#include<math.h>

using namespace std;
void main()

{
	setlocale(LC_ALL, "Rus");
	int nz = 0;
	cout << "Введите номер задания: " << endl;
	cin >> nz;
	srand(time(NULL));

	if (nz == 1)
	{
/*1.Массив предназначен для хранения значений весов двадцати человек. 
С помощью датчика случайных чисел заполнить массив целыми значениями, 
лежащими в диапазоне от 50 до 100 включительно*/
		unsigned short int Weights[20];
		for (int i = 19; i >= 0; i--)
		{
			Weights[i] = 50 + rand() % 50;
		}
		for (int i = 0; i < 20; i++)
		{
			cout << Weights[i] << endl;
		}

	}
	else if (nz == 2)
	{
		/* 2.Заполнить массив из восьми элементов таким образом, чтобы значения элементов
		при просмотре массива слева направо образовывали:
a.	убывающую последовательность;
b.	возрастающую последовательность
  */

		unsigned short int mass1[8], temp,temp1;
		char Nom;
		cout << "до сортировки:" << endl;
		for (int i = 0; i < 8; i++)

		{
			mass1[i] = 1 + rand() % 10;

			cout << mass1[i] << endl;
		}
		cout << "Введите номер подзадания:  ";
		cin >> Nom;
		 if (Nom=='a')
		{
			for (int i = 0; i < 7; i++)
			{
				int max = i;
				for (int j = i + 1; j < 8; j++)
				{

					if (mass1[j] > mass1[max])
						max = j;
				}
				 temp = mass1[i];
				mass1[i] = mass1[max];
				mass1[max] = temp;
			}
			cout << "после сортировки:" << endl;
			for (int i = 0; i < 8; i++)
			{
				
				cout << mass1[i] << endl;
			}
		}
		 else if (Nom=='b')
		{
			  
			for (int i = 0; i <7; i++)
			{
				int min = i;

				for (int j = i + 1; j < 8; j++)
				{
					if (mass1[j] < mass1[min])
						min = j;
				}
				temp1 = mass1[i];
				mass1[i] = mass1[min];
				mass1[min] = temp1;
			}
			cout << "после сортировки " << endl;
			for (int i = 0; i<7; i++)
			{
				
				cout << mass1[i] << endl;
			}
		}
		
			
		}
	else if (nz == 3)
	{
		// 3.Ввести целочисленный массив, состоящий из 10 элементов. 
				//Поменять местами максимальный и первый элементы.

		int m[10], max, pos;
		cout << " массив до сортировки:" << endl;
		for (int i = 0; i < 10; i++)
		{

			m[i] = 1 + rand() % 10;
			cout << m[i] << endl;
		}
		for (int i = 0; i < 1; i++)
		{
			max = i;
			for (int j = i + 1; j < 10; j++)
			{
				if (m[j] > m[max])
					max = j;
			}
			pos = m[i];
			m[i] = m[max];
			m[max] = pos;
		}
		cout << "после сортировки " << endl;
		for (int i = 0; i<10; i++)
		{

			cout << m[i] << endl;
		}
	}
	else if (nz == 4)
	{
		//4.Задан массив, состоящий из 15 элементов вещественного типа.
		//Определить количество элементов, значения которых больше первого элемента.
		float v[15];
		int countBigger1 = 0;
		cout << "в массиве: " << endl;
		for (int i = 0; i < 15; i++)
		{
			v[i] = 10 + rand() % 20;
			cout << v[i] << endl;
		}
		for (int i = 0; i < 15; i++)
		{
			if (v[i] > v[0])
				countBigger1++;
		}
		 cout << "количество элементов, значения которых больше первого элемента: " << countBigger1 <<endl;

	}
	else if (nz == 5)
	{
		//5.Ввести целочисленный массив, состоящий из 15 элементов. 
		   //Определить сумму и разность максимального и минимального  элементов
		int A[15];
		int max, min, maxElem, minElem;


		cout << "массив А :" << endl;
		for (int i = 0; i < 15; i++)
		{
			A[i] = 1 + rand() % 19;

			cout << A[i] << endl;
		}

		for (int i = 0; i < 14; i++)
		{
			int max = i;
			for (int j = i + 1; j < 15; j++)
			{

				if (A[j] > A[max])
					max = j;
			}
			maxElem = A[i];
			A[i] = A[max];
			A[max] = maxElem;
		}
		cout << "максимальное число: " << endl;
		for (int i = 0; i < 1; i++)
		{

			cout << A[i] << endl;

		}
		int max1 = A[0];
		for (int i = 0; i < 14; i++)
		{
			int min = i;
			for (int j = i + 1; j < 15; j++)
			{

				if (A[j] < A[min])
					min = j;
			}
			minElem = A[i];
			A[i] = A[min];
			A[min] = minElem;
		}
		cout << "минимальное число: " << endl;
		for (int i = 0; i < 1; i++)
		{

			cout << A[i] << endl;

		}
		int min1 = A[0];
			cout << " maxElem-minElem ="  <<max1 - min1 << endl;
			cout << " maxElem+minElem =" << max1 + min1 << endl;
	}

	else if (nz == 6)
	{
		// 6.Ввести целочисленный массив, состоящий из 17 элементов.
				//Заменить элементы кратные трем на сумму нечетных по значению элементов
		int mak[17];
		int sum = 0;
		cout << " массив до сортировки:" << endl;
		for (int i = 0; i < 17; i++)
		{

			mak[i] = 1 + rand() % 9;
			cout << mak[i] << endl;
		}
		cout << " массив after сортировки:" << endl;
		for (int i = 0; i < 17; i++)
		{
			if (mak[i] % 2 != 0)
				sum += mak[i];
		}
		cout << " сумма нечет= " << sum << endl;
		for (int i = 0; i < 17; i++)
		{
			if (mak[i] % 3 == 0)
				mak[i] = sum;
			cout << mak[i] << endl;
		}
	}
	else if (nz == 7)
	{
		//7.Ввести массив, состоящий из 15 элементов целого типа.
		//Определить количество отрицательных, произведение положительных и количество нулевых элементов
		int B[15];
		int kolotr = 0;
		int proizplus = 1;
		int kolnul = 0;
		cout << "------------- " << endl;
		for (int i = 0; i < 15; i++)
		{
			B[i] = -10 + rand() % 20;
			cout << B[i] << endl;
		}
			for (int i = 0; i < 15; i++)
			{
				if (B[i] == 0) {
				kolnul++;
				}
			}
			cout << "количество нулевых элементов: " << kolnul << endl;	
			for (int i = 0; i < 15; i++)
			{
				if (B[i] > 0) {
					proizplus = proizplus*B[i];
				}
			}
			cout << "произведение положительных элементов: " << proizplus << endl;
			for (int i = 0; i < 15; i++)
			{
				if (B[i] < 0) {
					kolotr++;
				}
			}
			cout << "количество отрицательных количество отрицательных:" << kolotr << endl;
	}

	else if (nz == 8)
	{//8.	Дан массив − 19 элементов целого типа.
		//Найти сумму элементов, расположенных до первого отрицательного элемента. 
		//Если отрицательных элементов нет, то выдать соответствующее сообщение.

		int C[19];
		int summado1otr = 0;
		cout << "------------- " << endl;
		for (int i = 0; i < 19; i++)
		{
			C[i] = -10 + rand() % 20;
			cout << C[i] << endl;
		}
		
		for (int i = 0; i < 19; i++)
		{
			if (C[i] < 0)
			{
				cout << " cумма элементов, расположенных до первого отрицательного элемента: " << summado1otr << endl;
				break;
			} 
			else
				summado1otr += C[i];

		}
	}

	else if (nz == 9)
	{//9.В заданном массиве М(12) действительных чисел увеличить минимальный элемент в три раза
		//и поменять местами с последним
		float M[12];
		int min, vrem;
		cout << "_____________" << endl;
		for (int i = 0; i < 12; i++)
		{
			M[i] = -10 + rand() % 20;
			cout << M[i] << endl;
		}
		for (int i = 0; i < 12; i++)
		{
			min = i;
			for (int j = i + 1; j < 12; j++)
			{
				if (M[j] < M[min])
					min = j;
			}
			vrem = M[11];
			M[11] = M[min];
			M[min] = vrem;

		}
				cout << " массив после перестановки"<< endl;
				for (int i=0; i<12; i++)
				{

					cout << "M[" << i << "]= " << M[i] << endl;
				
				}
		}
	else if (nz == 10)
	{//10.Дан массив М(15) вещественных чисел. Расположить элементы в обратном порядке
		float N[15];
		cout << "_______________"<< endl;
		for (int i = 0; i < 15; i++)
		{
			
			N[i] = -10 + rand ()% 30;
			cout << N[i] << endl;
		}
		cout << "______________" << endl;
		for (int i = 14
			; i >= 0; i--)
		{

			cout << N[i] << endl;

		}
	}

	
		system("pause");

}