#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - A c program to print whether a number is stored in the variable
 * Return: Always 0 (Success)
 */
int main(void)
{
        int n;
        srand(time(0));
        n = rand() - RAND_MAX /2;
        if (n > 0)
	printf("%d id positive \n", n);
        else if (n = 0)
	printf("%d is zero\n", n);
        else 
	printf("%d is negative\n", n);
return (0);
}
