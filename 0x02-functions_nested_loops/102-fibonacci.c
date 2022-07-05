#include <stdio.h>
/**
 * main - Entry point
 * 
 * Return: Always 0.
 */
int  main(void)
{

    int fib1 = 1, fib2 = 2, fib3, num, count = 1;

    printf("Enter the value of num \n");

    scanf("%d", &num);

    printf("First %d FIBONACCI numbers are ...\n", num);

    printf("%d\n", fib1);

    printf("%d\n", fib2);

    count = 50; 

    while (count < num)

    {

        fib3 = fib1 + fib2;

        count++;

        printf("%d\n", fib3);

        fib1 = fib2;

        fib2 = fib3;

   }

}
