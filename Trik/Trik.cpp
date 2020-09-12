#include<stdio.h>

int ch(int, char);

int main()
{
	char c[10000];
	char* n = c;
	int all;
	int result = 1;
	for (int i = 0; i < 10000; i++)
	{
		scanf_s("%c", &c[i]);
		int a = c[i];
		if (a == 10)
		{
			all = i;
			i = 10002;
		}
		else if (c[i] != 'A' && c[i] != 'B' && c[i] != 'C')
		{
			printf("ERROR");
			return -1;
		}
	}
	for (int i = 0; i < all; i++)
	{
		result = ch(result, c[i]);
	}
	printf("%d", result);
	return 0;
}

int ch(int x, char y)
{
	int r = x;
	if (y == 'A')
	{
		switch (x)
		{
		case 1: r = x + 1; break;
		case 2: r = x - 1; break;
		case 3: r = x; break;
		default: break;
		}
	}
	else if (y == 'B')
	{
		switch (x)
		{
		case 1: r = x; break;
		case 2: r = x + 1; break;
		case 3: r = x - 1; break;
		default: break;
		}
	}
	else if (y == 'C')
	{
		switch (x)
		{
		case 1: r = x + 2; break;
		case 2: r = x ; break;
		case 3: r = x - 2; break;
		default: break;
		}
	}
	return r;
}
