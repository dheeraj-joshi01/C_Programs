#include<stdio.h>
#include<stdlib.h>

void main()
{
	int *ptr, n,m,sum=0;
	printf("How many nos. ?\n");
	scanf("%d",&n);
	ptr = (int *)calloc(n, sizeof(int));
	for(int i=0;i<n;i++)
	{
		scanf("%d",ptr+i);
	}

	printf("How many additional nos. ?\n");
	scanf("%d",&m);
	ptr = (int *)realloc(ptr,sizeof(int)*(n+m));
	
	for(int i=n;i<n+m;i++)
	{
		scanf("%d",ptr+i);
	}

	for(int i=0;i<n+m;i++)
	{
		sum+=*(ptr+i);
	}
	printf("%d\n%d\n", sum, *ptr);

	free(ptr);
	printf("%d\n", *ptr);
}
