/*
 * prime.c
 *
 *  Created on: Jul 28, 2016
 *      Author: yemre
 */


#include "prime.h"

// Definitions

int is_prime(int x)
{
	int i;
	if (x < 2) {
		return 0;
	}
	for (i = 2; i < x; ++i) {
		if (x % i ==  0) {
			return 0;
		}
	}
	return 1;
}
