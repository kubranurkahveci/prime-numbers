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
	int number1, number2, i;
	printf("Enter first number:");
	scanf("%d", &number1);
    printf("enter second number :");
    scanf("%d", &number2);
    for(i = number1; i <= number2; i++) {
    	if (is_prime(i)) {
    		printf("%d\n", i);
    	}
    }
	return 0;
}
