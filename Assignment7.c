//Write a code find the length of a string and its reverse equivalent without using readymade c functions

#include<stdio.h>
int main()
{
	int i;
	char str[10000];
	printf("Enter a string: ");
	for(i=0;str[i-1]!='\n';i++)
	{
		scanf("%c",&str[i]);
	}
	printf("Length of the entered string is %d\n",i-1);
	for(int a=0;a<(i-1)/2;a++)
	{
		char temp;
		temp=str[a];
		str[a]=str[i-1-1-a];
		str[i-1-1-a]=temp;
	}
	printf("The reverse of the entered string is ");
	for(int b=0;b<(i-1);b++)
	{
		printf("%c",str[b]);
	}
	return 0;
}
