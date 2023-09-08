#include <unistd.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Description: printing while using write command
 */
int main(void)
{
	char stringArray[] = "and that piece of art is useful\"
	       	- Dora Korpar, 2015-10-19\n";
write(STDOUT_FILENO, stringArray, strlen(stringArray));
	return (1);
}

