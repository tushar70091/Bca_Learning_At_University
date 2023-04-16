//Write a C code to sort a string in alphabetical order
//input: Anitha
//output: Aahint 

#include<stdio.h>
int main()
{
	int i;
	char str[10000];
	printf("Enter a string: ");
	for(i=0;str[i-1]!='\n';i++) // We can also use gets(str) function of string.h library to get the string input until the user press enter
	{
		scanf("%c",&str[i]);
	}
	int len=i-1;
	for(int i=0;i<len-1;i++)
	{
		for(int j=0;j<len-i-1;j++)
		{
			if(str[j]>str[j+1])
			{
				char temp;
				temp=str[j];
				str[j]=str[j+1];
				str[j+1]=temp;
			}
		}
	}
	for(int i=0;i<len;i++)
	{
		printf("%c",str[i]);
	}
	return 0;
}
