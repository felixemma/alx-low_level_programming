#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Entry point
 *Discription: "check if a number is positive or negative"
 *Return: always 0
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("positive\n," n);
}
else if (n == 0)
{
printf("zero\n", n);
}
else
{
printf("negative\n", n);
}
return (0);
}
