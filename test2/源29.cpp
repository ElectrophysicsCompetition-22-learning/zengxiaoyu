#include<stdio.h>
int main()
{
	int x;
	float y = 10.5;
	x = (int)y % 4;
	printf("x=%d,y=%.2f", x, y);
	return 0;
}

