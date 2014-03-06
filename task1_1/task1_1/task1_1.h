/**
* @file		task1_1.h
* @brief	header file for task1_1.cpp
			defines prototypes for functions used in task1_1.cpp
*/

#include "stdafx.h"

/**
* @brief       This function displays general information about program to users
* @param	void
* @return	void
*/
void Interface();




/**
* @brief					Function for input unsigned long integer number
* @param	void        
* @return	unsigned long	Return inputed from keyboard unsigned long number
*/
unsigned long Input();




/**
* @brief					Checking entered data and return ERROR if type doesn't match requirements
							that is if entered number isn't unsigned integer number

* @param	[in]			int retCode - return value of scanf that read entered from keyboard data
			[in]			int val - entered from keyboard data
* @return	unsigned char	Return ERROR if inputed data doesn't match requirements
							Return SUCCESS if inputed data match requirements
*/
unsigned char Type_checking(int retCode, int val);






/**
* @brief					Function changes two adjacent bits in unsigned long number

* @param	[in/out]		unsigned long* n - pointer to number for changing adjacent bits
* @return	unsigned char	Return ERROR if pointer to n is NULL
							Return SUCCESS if adjacent bits are changed
*/
unsigned char Change_bits(unsigned long* n);




/**
* @brief					Function displays numbers in binary numeral system

* @param	[in]			unsigned long n - displayed number 
* @return	void	
*/
void Binary_Display(unsigned long n);