/**
 * Exercise 1.9 - Write a Program to copy its input to its output, replacing
 * each string of one or more blanks by a single blank.
 *
 * */

#include<stdio.h>

#define NONBLANK '-'

int main(void)
{
	int c, lc;

	lc = NONBLANK;

	while((c = getchar()) != EOF)
	{
		if(c == ' ')
		{
			if(lc != ' ')
				putchar(c);
		}
		else
			putchar(c);
		lc=c;
	}
	return 0;
}
