#ifndef _DATE_H_
#define _DATE_H_
class Date
{
	int dd;
	int mm;
	int yy;
public:
	Date();
	Date(int, int, int);
	void display();
};
#endif