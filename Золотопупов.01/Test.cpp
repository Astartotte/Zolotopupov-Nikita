#include "Header.h"

int main()
{
	setlocale(LC_ALL, "Russian");
	Disk t;
	t.set_index(1);
	t.set_cost(20);
	t.set_size(64);
	if (t.get_index() == 1 && t.get_cost() == 20 && t.get_size() == 64)
	{
		std::cout << "�������� �������� � �������� ��������� �������!" << std::endl;
	}
	else
	{
		std::cout << "�������� �������� � �������� ���������, ���������� ������!" << std::endl;
	}
	All test;
	test.add_sd(t);
	test.print_all();
	std::cout << "���� ����� ���� ���������� �� ����� �������� ���������� � ����� ������ add_file, print_all � print_disk �������� ���������." << "\n\n";
	test.dell_all();
	test.print_all();
	std::cout << "���� ����� ���� ��������� �� ����� ������ ������ ��������, �� ������ dell_all � dell_sd �������� ���������." << std::endl;
	int x;
	std::cin >> x;
}