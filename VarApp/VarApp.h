#pragma once

unsigned char * myTarget;

/* function with one int and one char parameter */
void get_int(int* INT, char * CHR);
/* declare pi as const double and set to 3.14 */
/* do not in main function setup to 3.14 only at init here */
double get_pi(const double pi = 3.14);

/* first declared enumerator */
enum Suit { Diamonds = 5 };


/* here a struct object */
struct login {
	std::string username = "";
	std::string password = "";
	bool p_loginOK;
};

login g_User;


struct box {
	LPCWSTR caption;
	LPCWSTR text;
};

bool try_login(login Login);
void PlayCard(Suit suit, int Zahl1);
void makeSome();
void show_box(box Box);
bool is_logged_in(bool result);