#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int area(int x, int y)
{
	int area;
	if (x >= 0 && y >= 0)
	{
		area = x * y;
	}
	else
	{
		printf("Error");
	}
	return area;
}
int main()
{
	int x, y;
	printf("Enter length and width respectively: ");
	scanf("%d%d", &x, &y);
	printf("%d", area(x, y));
	return 0;
}