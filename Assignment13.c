//Design a basic calculator in C. It must be a menu driven program
//Press 1 for addition
//Press 2 for substraction
//Press 3 for multiplication
//Press 4 for division

//after showing result the main menu should appear again.

#include<stdio.h>
int main()
{
    int choice;
    float num1,num2,result;
    char ch='y';
    while(ch=='y' || ch=='Y')
    {
    printf("Press 1 for addition \nPress 2 for subtraction \nPress 3 for multiplication\nPress 4 for division\n");
    printf("Enter your choice : ");
    scanf("%d",&choice);
    switch(choice)
        {
            case 1:
                printf("Enter two numbers : ");
                scanf("%f %f",&num1,&num2);
                result=num1+num2;
                break;
            case 2:
                printf("Enter two numbers : ");
                scanf("%f %f",&num1,&num2);
                result=num1-num2;
                break;
            case 3:
                printf("Enter two numbers : ");
                scanf("%f %f",&num1,&num2);
                result=num1*num2;
                break;
            case 4:
                printf("Enter two numbers : ");
                scanf("%f %f",&num1,&num2);
                result=num1/num2;
                break;

        }
    printf("Output of the operation is : %.2f\n",result);
    printf("Do you want to continue : ");
    fflush(stdin);
    scanf("%c",&ch);
    printf("\n\n\n");
    }
	return 0;
}
