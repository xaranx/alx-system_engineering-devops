#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * infinite_while - infinit loo
 * Return: always 0
 */

int infinite_while(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}


/**
 * main - create 5 zombie process
 * Return: always 0
 */

int main(void)
{
	int i = 0;
	pid_t zombie;

	while (i < 5)
	{
		zombie = fork();
		if (!zombie)
			return (0);
		printf("Zombie process created, PID: %d\n", zombie);
		i++;
	}
	infinite_while();
	return (0);
}
