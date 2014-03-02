#include "stdafx.h"
#include <stdio.h>

unsigned long Change_bits(unsigned long n);

int main()
{
	printf("enter unsigned integer number: ");
	char n;
	scanf("%c", &n);


	return 0;
}

char Change_bits(char n)
{
	unsigned long val1, val2;
	val1 = n >> 1;
	val2 = n << 1;
	n = val1 | val2;
	return n;
}
