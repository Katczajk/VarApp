// VarApp.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>

#ifndef VARAPP_H
#define VARAPP_H

#include "VarApp.h"

#endif // !VARAPP_H

const int INTMAX = INT_MAX;

int main()
{
	int j = 1;
	short i = 2;
	long h = 3;
	long long k = 4;
	float l = 5;
	double m = 6;
	long double n = 7;
	char c = 'A';
	const int* Number = &j;

	// std::cout << *Number << std::endl;
	get_int(&j,&c);

	getchar();
}

/* put something out and try something */
void get_int(int * INT, char * CHR)
{
	std::cout << *INT << std::endl;
	std::cout << sizeof(*INT) << std::endl;
	std::cout << *CHR << std::endl;
	std::cout << get_pi() << std::endl;
}

double get_pi(const double pi)
{
	/* we only return const double pi number here */
	return pi;
}
