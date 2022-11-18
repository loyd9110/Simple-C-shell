#include "main.h"

/**
* main - A function that gets the process indentification code
* and the parent process indentification
* Return: Always 0 on success
*/

int main()
{
	pid_t mypid;
	pid_t myppid;

	mypid = getpid();
	myppid = getppid();

	printf("%u\n", mypid);
	printf("%u\n", myppid);

	return (0);
		
}
