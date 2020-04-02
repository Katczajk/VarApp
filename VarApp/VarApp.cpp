// VarApp.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <string>
#include <windows.h>

#ifndef VARAPP_H
#define VARAPP_H

#include "VarApp.h"

#endif // !VARAPP_H

const int INTMAX = INT_MAX;


void makeSome() {
	std::string myVarStr;
	int Num100 = 100;
	myVarStr = static_cast<int>(Num100);

	Suit st2 = Suit::Diamonds;
	char s2 = static_cast<char>(st2);
	// MessageBox(nullptr, L"Text", L"Caption", MB_OK);
	box l_info;
	l_info.text = L"My Text";
	l_info.caption = L"My Caption";
	show_box(l_info);
}

void show_box(box Box)
{
	MessageBox(nullptr, Box.text, Box.caption, MB_OK);
}

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

	makeSome();

	getchar();
}

/* put something out and try something */
void get_int(int * INT, char * CHR)
{
	std::cout << *INT << std::endl;
	std::cout << sizeof(*INT) << std::endl;
	std::cout << *CHR << std::endl;
	std::cout << get_pi() << std::endl;


	unsigned char myChar = 'A';
	myTarget = &myChar;
	std::cout << *myTarget << std::endl;

	Suit Card = Suit::Diamonds;
	/* we cast here Suit::Diamonds into int Num10 Var */
	int Num10 = static_cast<int>(Suit::Diamonds);
	PlayCard(Card, Num10);

	login f_User;
	f_User.username = "Testuser";
	f_User.password = "TopSecret";
	try_login(f_User);

}

double get_pi(const double pi)
{
	/* we only return const double pi number here */
	return pi;
}

void try_login(login Login)
{
	// printf(Login.username);
	// printf(Login.password);
	std::string st_r = "GoGo Girls";
	std::cout << st_r << std::endl;
}

void PlayCard(Suit suit, int Zahl1)
{
	if (suit == Suit::Diamonds) {
		std::cout << "Suit has entered a Function and got working with Value " << Suit::Diamonds << std::endl;
		std::cout << "int Var Zahl1 has also reached Fuction with Value " << Zahl1 << " it works" << std::endl;
	}
}
