#include<stdio.h>
struct students{
	char name[50];
	int number;
};
int main()
{
	struct students s1;
	printf("enter your name");
	scanf("%s",s1.name);
		printf("enter your number");
	scanf("%d",&s1.number);
	printf("%s",s1.name);
	printf("%d",s1.number);
	return 0;
}