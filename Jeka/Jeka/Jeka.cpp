// Jeka.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <ctime>

int main()
{
	const int size = 5;
	int massive[size] = { 6, 5, 3, 1, 0 }; 
	int number;
	std::cout << "Enter the number: ";
	std::cin >> number;
	const int new_size = 6;
	int new_massive[new_size];
	if (number < massive[size - 1])
	{
		for (size_t i = 0; i < size; i++)
		{
			new_massive[i] = massive[i];
			new_massive[new_size - 1] = number;
		}
		for (size_t i = 0; i < new_size ; i++)
		{
			std::cout << new_massive[i] << " ";
		}
	}
	if (number > massive[0])
	{
		for (size_t i = 1; i < size; i++)
		{
			new_massive[0] = number;
			new_massive[i] = massive[i - 1];		
		}
	}
	int point = 0;
	for (size_t i = 1; i < size; i++)
	{
		if ((number < massive[i - 1]) && (number > massive[i]))
		{
			std::cout << i << "\n";
			point = i;
		}
	}
	for (size_t i = 0; i < point; i++)
	{
		new_massive[i] = massive[i];
		new_massive[point] = number;
	}
	int next = point + 1;
	for (next; next < new_size; next++)
	{
		new_massive[next] = massive[next - 1];
	}
	for (size_t i = 0; i < new_size; i++) // полученный массив
	{
		std::cout << new_massive[i] << " ";
	}
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
