#include "Header.h"
void All::add_sd(const Disk& d)
{
	if (next_i == 0)
	{
		dev = (Disk*)malloc(sizeof(Disk));
		dev[next_i] = d;
		dev[next_i].set_index(new_i);
		new_i++;
		next_i++;
	}
	else
	{
		pseud = (Disk*)malloc(sizeof(Disk) * (new_i));
		for (int i = 0; i < next_i; i++)
		{
			pseud[i] = dev[i];
		}
		free(dev);
		dev = (Disk*)malloc(sizeof(Disk) * (new_i));
		for (int i = 0; i < next_i; i++)
		{
			dev[i] = pseud[i];
		}
		free(pseud);
		dev[next_i] = d;
		dev[next_i].set_index(new_i);
		new_i++;
		next_i++;
	}
}
void All::dell_sd(const int& num)
{
	int n = 0;
	while (n != 1)
	{
		if (num > next_i)
		{
			std::cout << "ќшибка ввода! ¬ведЄн не верный номер элемента!";
			break;
		}
		if (next_i == 1)
		{
			free(dev);
			next_i--;
			n = 1;
		}
		else
		{
			pseud = (Disk*)malloc(sizeof(Disk) * (next_i - 1));
			for (int i = 0; i < num; i++)
			{
				pseud[i] = dev[i];
			}
			for (int i = num + 1; i < next_i; i++)
			{
				pseud[i - 1] = dev[i];
			}
			free(dev);
			dev = (Disk*)malloc(sizeof(Disk) * (next_i - 1));
			for (int i = 0; i < next_i; i++)
			{
				dev[i] = pseud[i];
			}
			free(pseud);
			next_i--;
			n = 1;
		}
	}
}
void All::dell_all()
{
	free(dev);
	next_i = 0;
	new_i = 1;
}
void All::print_sd(const int& num)
{
	std::cout << dev[num].get_size() << "GB " << dev[num].get_cost() << " " << dev[num].get_index() << "ind" << std::endl;
}
void All::print_all()
{
	for (int i = 0; i < next_i; i++)
	{
		std::cout << i + 1 << " ";
		print_sd(i);
	}
}