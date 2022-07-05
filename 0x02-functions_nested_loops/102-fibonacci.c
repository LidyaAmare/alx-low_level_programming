#include <stdio.h>
#include <stdlib.h>
#include <main.h>
/**
 * main - Entry point
 * 
 * Return: Always 0.
 */
int  main(void)
{

int fib1 = 1, fib2 = 2, fib3, num = 50, count = 1;

printf("%i", &num);

printf("First %i FIBONACCI numbers are ...\n", num);

printf("%i\n", fib1);

printf("%i\n", fib2);

count = 50; 

while (count < num)

{

fib3 = fib1 + fib2;

count++;

printf("%i\n", fib3);

fib1 = fib2;

fib2 = fib3;

}
return (0);
}
