/*
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void main()
{
	int a = 0, b = 0, c = 0;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	if (a > b)
	{
		if (b > c)
		printf("%d %d %d", a, b, c);
		else
		{
			if (a > c)
			printf("%d %d %d", a, c, b);
			else
			printf("%d %d %d", c, a, b);
		}
	}
	else
	{
		if (b < c)
		printf("%d %d %d", c, b, a);
		else
		{
			if (b > c)
				printf("%d %d %d", b, a, c);
			else
				printf("%d %d %d", b, c, a);
		}
	}
}
*/