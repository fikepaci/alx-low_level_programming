#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int a;
	
	for (a=0; a<10; a++)
	{
		putchar((a%10 + '0'));
	}
	putchar('\n');
	return (0);
}