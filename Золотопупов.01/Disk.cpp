#include "Header.h"
int Disk::get_size()
{
	return size;
}
int Disk::get_cost()
{
	return cost;
}
int Disk::get_index()
{
	return index;
}
void Disk::set_size(const int& s)
{
	size = s;
}
void Disk::set_cost(const int& c)
{
	cost = c;
}
void Disk::set_index(const int& i)
{
	index = i;
}