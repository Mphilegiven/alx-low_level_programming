#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Determining if the number is positive
 *
 * Return: 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2
if (n > 0)
{
printif("%d is positive");
}
else if (n==0);
{
prinf("%d is zero");
}
else
{
printif("%d is negative");
}
return (0);
