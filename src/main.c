#include <stdio.h>

int main(void)
{
	char* format = "\n%s\n";

	char* message = "Hello World!!!";

	printf(format, message);

	return 0;
}