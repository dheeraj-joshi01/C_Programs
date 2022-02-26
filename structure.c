#include<stdio.h>
#include<string.h>

struct stud
{
	int sid;
	char name[30];
	float cgpa;
}s[3];


int main()
{
	for(int i = 0; i<3; i++)
	{

	printf("Enter the data for student %d\nSId, name, cgpa\n", i+1);
	scanf("%d%s%f", &s[i].sid, s[i].name, &s[i].cgpa);
	
	}


	for(int i = 0; i<3; i++)
	{

	printf("\nData of Student %d\nSId : %d\nName : %s\ncgpa : %f\n", i+1, s[i].sid, s[i].name, s[i].cgpa);
	
	}
	
	return 0;
}



