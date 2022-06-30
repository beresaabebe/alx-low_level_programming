#include<stdio.h>
#include<unistd.h>

/**
 * main -everything starts here
 * Return: always return failure
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 61);
	return (1);
}
