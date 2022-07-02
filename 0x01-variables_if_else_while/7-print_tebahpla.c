#include <stdio.h>
/**
 *main - prints the lowercase alphabet in reverse, followed by a new line
 *
 *Retrun: Always 0 (success/correct)
 **/

int main(void)

{
int alpa;

for (alpa = 122 ; alpa >= 97; alpa--)
{
putchar(alpa);
}

putchar('\n');

return (0);

}
