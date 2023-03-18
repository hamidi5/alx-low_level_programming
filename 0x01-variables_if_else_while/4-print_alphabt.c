#include <stdio.h>
/**
 * main - This program prints the alphabet
 * in lowercase, followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
char alphabet;

for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
if (alphabet == 'q')
continue;

else if (alphabet == 'e')
continue;

putchar(alphabet);
}

putchar('\n');

return (0);

}
