#include <iostream>
#include <Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int zadacha;
	std::cout << "�����, ����� ������� �� ������ ���������? 1, 2, 3, 4, 5, 6 ";
	std::cin >> zadacha;
	int number;
	int sum =0;

	int x;
	int y;
	int result;

	int sum3 =0;
	int clv3 = 0;
	int sred;

	int number4;
	int prois = 1;

	int k;
	int table;
	if (zadacha == 1)
	{
		std::cout << "������� �����";
		std::cin >> number;
		for ( int i = number; i < 500; i++)
		{
			sum = sum + i;
		}
		std::cout << sum;
	}
	else if (zadacha == 2)
	{
		std::cout << "������� ����� x";
		std::cin >> x;
		std::cout << "������� ����� y";
		std::cin >> y;
		result = pow(x, y);
		std::cout << x <<" � ������� " << y << " = " << result;
		
	}
	else if (zadacha == 3)
	{
		for (size_t i = 1; i < 1000; i++)
		{
			sum3 = sum3 + i;
			clv3 = clv3 + 1;
		}
		sred = sum3 / clv3;
		std::cout << "������� �������������� ����� �� 1 �o 1000 = " << sred;
	}
	else if (zadacha == 4)
	{
		std::cout << "������� ����� �� 1 �� 20";
		std::cin >> number4;
		if (number4 <= 20 && number4 >= 1)
		{
			for (int i = number4; i <= 20; i++)
			{
				prois = prois * i;
			}
			std::cout << "������������ = " << prois;
		}
		else
		{
			std::cout << "����� ������ ���� 1 <= � <= 20";
		}
	}
	else if (zadacha == 5)
	{
		std::cout << "�� ����� ����� �� ������ ������� ������� ���������";
		std::cin >> k;
		for (size_t i = 1; i < 10; i++)
		{
			std::cout << k<<" * "<< i << " = " <<k*i<< "\n";
		}
	}
	else
	{
		std::cout << "������ ���� �������)";
	}






	return 0;
}