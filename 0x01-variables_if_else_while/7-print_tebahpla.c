#include<stdio.h>

#include <stdlib.h>

/**
 *  main - entry point
 *  Return: 0
 */

int main(void)

{

	char ch = 'z';

	int i = 26;

	/* Famossy code here */

	while (i > 0)

	{

	putchar(ch);

	ch--;

	i--;

	}

	putchar('\n');

	return (0);

}
