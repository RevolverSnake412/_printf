#include "theader.h"
/**
 * main - This is going to be our test file
 * for this Project.
 *
 * Return: 0 if the code succeed.
*/
int main(void)
{
	int integer = 69;
	double decimal = 4.20;
	char string[] = "Hello World!";
	char character = 'c';

	_printf("This is an integer: %d", integer);
	_printf("These are decimals: %f", decimal); //4.20 should be outputed as 4.200000 (6 digits after dot)
	_printf("This is a string: %s", string);
	_printf("This is a character: %c", character); //if the data has more characters than one, print only the first
						       //and ignore the rest
	return (0); //If we made it!!
}
