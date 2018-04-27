#include <stdio.h>

struct Flags
{
	unsigned int a:31;
	char b:3;
	unsigned int c:7;
};

int main()
{
	struct Flags f1;

	f1.a = 1;
	f1.b = 15;
	f1.c = 255;

	printf("%d\n", sizeof(f1));
	printf("%d\n", sizeof(f1));
	printf("%d\n", sizeof(f1));

	return 0;
}
