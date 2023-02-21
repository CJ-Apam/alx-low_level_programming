#include <unistd.h>
#include "main.c"

/**
 * main - Check description
 * Description: It prints the word main.h, followed by a new line.
 * Return: 0.
 */
int main(void)
{
	char word[9] = "main.c";
	int i;

	for (i = 0; i < 9; i++)
		_putchar(word[i]);
	_putchar('\n');

	return (0);
}
