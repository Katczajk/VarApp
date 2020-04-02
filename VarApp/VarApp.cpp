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

	/* after struct and assign we make a pointer here */
	login* l_User = &g_User;
	l_User->username = "Testuser";
	l_User->password = "TopSecret";

	std::string l_test1;
	std::string* l_test2 = &l_test1;
	*l_test2 = "Polaroid";
	std::cout << l_test1 << std::endl;

	// bool result = try_login(l_User);
	// bool r;
	/* we see it is readable and in one line */
	/* in same we declare result as bool and take return from try_login(*g_User) into it */
	/* now submit with pointer */
	switch (bool l_result = try_login(*l_User))
	{
		case true:
			std::cout << "Login works" << std::endl;
			break;
		case false:
			std::cout << "Login wrong" << std::endl;
			break;
		default:
			std::cout << "Login wrong" << std::endl;
			break;
	}
	
}

double get_pi(const double pi)
{
	/* we only return const double pi number here */
	return pi;
}

bool try_login(login Login)
{
	// printf(Login.username);
	// printf(Login.password);
	if (Login.username == "Testuser" && Login.password == "TopSecret")
	{
		return true;
	}
	else {

		return false;
	}
}

void PlayCard(Suit suit, int Zahl1)
{
	if (suit == Suit::Diamonds) {
		std::cout << "Suit has entered a Function and got working with Value " << suit << std::endl;
		std::cout << "int Var Zahl1 has also reached Fuction with Value " << Zahl1 << " it works" << std::endl;
	}
}
