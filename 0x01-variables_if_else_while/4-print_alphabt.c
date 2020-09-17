#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	char letter;
	
	for (letter='a'; letter<='z'; letter++)
	{
		if(letter != 'e' && letter != 'q')
		{
			putchar(letter);
		}
	}
	return (0);
}