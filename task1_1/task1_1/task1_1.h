#include "stdafx.h"

/*display some information about program*/
void Interface();

/*Make inputs for unsigned long integer number*/
unsigned long Input();

/*checking entered data and return 0 if type doesn't match requirements*/
unsigned char Type_checking(int retCode, int val);

/*changes two adjacent bits*/
unsigned char Change_bits(unsigned long* n);

/*displays numbers in binary numeral system*/
void Binary_Display(unsigned long n);