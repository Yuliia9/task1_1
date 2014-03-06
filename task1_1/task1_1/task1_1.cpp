/**
* @file		task1_1.cpp
* @brief	Program changes adjacent bits in inputed unsigned long number
			and displays numbers in binary implementation
*

* Copyright 2014 by Yuliia Lyubchik
*
* This software is the confidential and proprietary information
* of Yuliia Lyubchik. ("Confidential Information").  You
* shall not disclose such Confidential Information and shall use
* it only with permission from Yuliia.
*/


#include "stdafx.h"
#include "task1_1.h"
#include <stdio.h>
#include <stdlib.h>

const unsigned long PARITY_MASK = 0xAAAAAAAA; /* mask for getting only parity bits in number*/
const unsigned long UNPARITY_MASK = 0x55555555; /* mask for getting only unparity bits in number*/

const unsigned char ERROR = 0; 
const unsigned char SUCCESS = 1;



int main()
{
	Interface();
	
	unsigned long n;
	n = Input();
	Binary_Display(n);
	if (Change_bits(&n) == ERROR)
	{
		return ERROR;
	}
	
	Binary_Display(n);
	system("pause");
	return 0;
}




void Interface()
{
	printf("---------------------------------------------------------------------------\n");
	printf("Hi! Welcome to your magic bits handler.\n");
	printf("We will show what bits hides inside number and change for you adjacent bits. \n");
	printf("Made by Yuliia Lyubchik ;)\n");
	printf("---------------------------------------------------------------------------\n");
}

unsigned long Input()
{
	unsigned char retCode;
	unsigned long n;
	do 
	{
		printf("Enter unsigned integer number: ");
		retCode = scanf("%u", &n);
		fflush(stdin); // Flush the input buffer
	} while (Type_checking(retCode, (int)n) == ERROR);
	
	return n;
}


void Binary_Display(unsigned long n)
{
	printf("Binary interpretation of number: ");
	unsigned long mask = 0x80000000;
	unsigned int i = 0;
	while (i < 32) {
		if (n & mask)
			printf("1");
		else
			printf("0");

		n <<= 1;
		++i;
	}
	printf("\n");
}


unsigned char Type_checking(int retCode, int val)
{
	if (retCode == ERROR)
	{
		printf("Type mismatch. Please next time check if you enter integer number. \n");
		return ERROR;
	}
	if (val < 0)
	{
		printf("The value can not be negative.\n");
		return ERROR;
	}
	return SUCCESS;

}


unsigned char Change_bits(unsigned long* n)
{
	if (n == NULL)
	{
		printf("Can't get data to change bits. \n");
		return ERROR;
	}
	unsigned long parity, unparity;
	parity = *n & PARITY_MASK;
	parity = parity >> 1;
	unparity = *n & UNPARITY_MASK;
	unparity = unparity << 1;
	*n = parity | unparity;
	printf("\nBits changed!\n");
	return SUCCESS;
}





