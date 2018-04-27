#include <stdio.h>

int max(const int *p)
{
	int i = 0, tmp = -10000;
	
	while(i < 10)
	{
		if(tmp < *p)
		{
			tmp = *p;
		}
		p += 1;
		i++;
	}

	return tmp;
}

void main()
{
	int a[] = {1,2,3,4,5,6,7,8,9,10};
	int m;
	m = max(a);

	printf("%d\n", m);
}
