#include<stdio.h>

void main()
{
	FILE *file1, *file2;
	int flag = 0;
	//char c1,c2;
	file1 = fopen("file1.txt","r");
	file2 = fopen("file2.txt","r");

	while(fgetc(file1) != EOF && fgetc(file2) != EOF)
	{
		if(fgetc(file1) != fgetc(file2))
		{
			flag=0;
			break;
		}

		else
		{
			flag = 1;
		}

	}

	if(flag == 1)
	{
			printf("File Matched\n");
	}
	
	else
	{
		printf("File Not Matched\n");
	}

	fclose(file1);
	fclose(file2);

}
		
/*printf("Enter name of student 1:\n");
scanf("%s",name);
printf("Enter marks of student 1:\n");
scanf("%d",&marks);

myfile = fopen("file1.txt", "w");

fprintf(myfile,"Name of student 1: %s\nMarks of Student 1: %d\n",name,marks);*/


/*#include<stdio.h>

void main()
{
FILE *myfile;
int marks,n;
char name[20];

printf("Enter no. of students:\n");
scanf("%d",&n);

myfile = fopen("data.txt", "a+");

for(int i=0;i<n;i++)
{
	printf("Enter name of student %d:\n",i+1);
	scanf("%s",name);
	printf("Enter marks of student %d:\n",i+1);
	scanf("%d",&marks);

	fprintf(myfile,"Name of student %d: %s\nMarks of Student %d: %d\n\n",i+1,name,i+1,marks);

}
printf("Data Entered successfully.\n");
fclose(myfile);

}*/

