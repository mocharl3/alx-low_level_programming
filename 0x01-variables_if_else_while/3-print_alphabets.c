nclude <stdio.h>



/**

 * main - Prints a to z and A to Z.

 *

 * Return: Always 0 (Success)

 */

int main(void)

{

	char letter;



	for (letter = 'a'; letter <= 'z'; letter++)

		putchar(letter);



	for (letter = 'A'; letter <= 'Z'; letter++)

		putchar(letter);



	putchar('\n');



	return (0);

}
