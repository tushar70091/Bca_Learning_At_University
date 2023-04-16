//Input marks of 10 students in an array and then find the student with maximum marks

#include<stdio.h>
int main()
{
    int num;
    float marks[10],max;
    printf("Enter the marks of 10 students: ");
    for(int i=0;i<10;i++)
    {
        scanf("%f",&marks[i]);
    }
    max=marks[0];
    for(int i=0;i<10;i++)
    {
        if(marks[i]>=max)
        {
            max=marks[i];
		}
    }
    printf("Maximum marks scored are: %.2f",max);
	return 0;
}
