#include <stdio.h>
/**
 *main - prints the lowercase alphabet in reverse, followed by a new line
 *
 *Retrun: Always 0 (success/correct)
 **/

int main(void)

{
char ch:
for (ch = 'z'; ch >= 'a'; ch--)
{
putchar(ch);
}
putchar(10);

return (0);

}
