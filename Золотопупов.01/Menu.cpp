#include "Header.h"

void menu()
{
	setlocale(LC_ALL, "Russian");
	int check = 0, del = 0;
	All all_disks;
	Disk disk;
	disk.set_cost(200);
	disk.set_size(160);
	all_disks.add_sd(disk);
	disk.set_cost(400);
	disk.set_size(250);
	all_disks.add_sd(disk);
	disk.set_cost(780);
	disk.set_size(500);
	all_disks.add_sd(disk);
	while (check != 4)
	{
		std::cout << "---------------------------MENU--------------------------" << "\n"
			<< "1 - Добавить диск в список." << "\n" << "2 - Удалить диск из списка." << "\n" << "3 - Вывод на экран." << "\n" << "4 - Конец" << std::endl;
		std::cin >> check;
		if (check == 1)
		{
			disk.set_cost(1250);
			disk.set_size(750);
			all_disks.add_sd(disk);
			std::cout << "Complite." << std::endl;
		}
		if (check == 2)
		{
			std::cout << "Введите номер удаляемого диска." << std::endl;
			std::cin >> del;
			all_disks.dell_sd(del - 1);
			std::cout << "Complite." << std::endl;
		}
		if (check == 3)
		{
			all_disks.print_all();
		}
	}
	all_disks.dell_all();
}