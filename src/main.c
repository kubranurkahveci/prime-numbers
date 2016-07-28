/*
 ============================================================================
 Name        : main.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Fİnds prime numbers
 ============================================================================
 */

#include <stdio.h>

#include "prime.h"

int main(void) {
	int number = 0;
	printf("Enter a number:");
	scanf("%d", &number);

	if (is_prime(number)) {
		printf("%d is a prime number.\n", number);
	} else {
		printf("%d is not a prime number.\n", number);
	}

	return 0;
}
