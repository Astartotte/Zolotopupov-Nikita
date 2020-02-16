#pragma once
#include "Header.h"
class Disk
{
private:
	int size;
	int cost;
	int index;
public:
	int get_size();
	int get_cost();
	int get_index();
	void set_size(const int& s);
	void set_cost(const int& c);
	void set_index(const int& i);
};



