#include <stdio.h>
int main(void)
{
	printf("Size of a char: %zf bytes(s)\n", sizeof(char));
	printf("Size of an int: %zf byte(s)\n", sizeof(int));
	printf("Size of a long int: %zf byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %zf byte(s)\n", sizeof(long long int));
	printf("Size of a float: %zf byte(s)", sizeof(float));
}
