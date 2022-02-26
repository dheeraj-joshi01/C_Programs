#include<stdio.h>

int swap(int,int);

int main()
{
	int v1,v2;
	printf("Enter the values to swap\n");
	scanf("%d%d", &v1,&v2);

	swap(v1,v2);
	
	return 0;
}

int swap(int a, int b)
{
	a += b;
	b = a-b;
	a = a-b;
	
	printf("The values after swapping are %d and %d\n", a,b);

	return 0;
}
