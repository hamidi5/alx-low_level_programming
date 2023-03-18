#include <stdio.h>
/**
 * main - this program should print out all
 * lowercase letters of the alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
char alphabet;

for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
putchar(alphabet);
}

putchar('\n');

return (0);

}
