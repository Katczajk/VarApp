#pragma once

unsigned char * myTarget;

/* function with one int and one char parameter */
void get_int(int* INT, char * CHR);
/* declare pi as const double and set to 3.14 */
/* do not in main function setup to 3.14 only at init here */
double get_pi(const double pi = 3.14);

enum Suit { Diamonds = 5 };
void PlayCard(Suit suit);