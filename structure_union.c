#include<stdio.h>
#include<string.h>

struct stud{
	int id;
	char name[10];
	float cgpa;
}s1;

union book{
	int model;
	char name[10];
	int price;
}b1;

void main()
{
s1.id = 786;
s1.cgpa = 9.8;
printf("stud info of s1\n%d %f\n", s1.id, s1.cgpa);

b1.model = 01;
printf("book info of b1\n%d\n", b1.model);
b1.price = 900;
printf("book info of b1\n%d %d\n", b1.model, b1.price);



}
