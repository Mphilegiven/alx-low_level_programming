#include <stdio.h>
/**
 * main - various types and sizes
 *
 * Return: 0 (Succes)
 *
 */
int main(void)
{
printf("Size of a char: %zu byte(s)\n", sizeof(char));
printfprintf("Size of an int: %zu byte(s)\n", sizeof(int));
printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
printf("Size of a float: %zu byte(s)\n", sizeof(float));
return (0);
}
