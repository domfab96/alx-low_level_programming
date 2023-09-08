#!/bin/bash
#include <stdio.h>
/**
 * main - this describes the main fuunction of the code
 * Return:0
 */

int main(void)
{
	char ;
	int ;
	long int ;
	long long int ;
	float ;

	printf("Size of a char: %lu bytes\n", sizeof(char));
	printf("Size of an int: %lu bytes\n", sizeof(int));
	printf("Size of a long int: %lu bytes\n", sizeof(long int));
	printf("Size of a long long int: %lu bytes\n", sizeof(long long int));
	printf("Size of a float: %lu bytes\n", sizeof(float));

	return 0;
}
