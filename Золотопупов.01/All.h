#pragma once

class All
{
private:
	Disk* dev;
	Disk* pseud;
	int next_i = 0;
	int new_i = 1;
public:
	void add_sd(const Disk& d);
	void dell_sd(const int& num);
	void dell_all();
	void print_sd(const int& num);
	void print_all();
};