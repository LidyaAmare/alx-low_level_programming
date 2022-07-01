#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success/correct)
 */

int main(void)

{
char alpa;

for (alpa = 'a'; alpa <= 'z'; alpa++)
{
if (alpa == 'q')
continue;

else if (alpa == 'e')
continue;

putchar(alpa);
}

putchar ('\n');

return (0);

}
