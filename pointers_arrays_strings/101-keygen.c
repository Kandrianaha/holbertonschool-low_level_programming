#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates a valid password
 * Return: Always 0 (Success)
 */
int main(void)
{
	char password[10];
	int i;

	srand(time(NULL));

	for (i = 0; i < 9; i++)
		password[i] = 'A' + (rand() % 26);

	password[9] = '\0';

	printf("%s", password);
	return (0);
}
