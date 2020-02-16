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
		std::cout << "Проверка геттеров и сеттеров проведена успешно!" << std::endl;
	}
	else
	{
		std::cout << "Проверка геттеров и сеттеров проведена, обнаружена ошибка!" << std::endl;
	}
	All test;
	test.add_sd(t);
	test.print_all();
	std::cout << "Если перед этим сообщением на экран вывелась информация о файле методы add_file, print_all и print_disk работают корректно." << "\n\n";
	test.dell_all();
	test.print_all();
	std::cout << "Если перед этим сообщение на экран ничего небыло выведено, то методы dell_all и dell_sd работают корректно." << std::endl;
	int x;
	std::cin >> x;
}