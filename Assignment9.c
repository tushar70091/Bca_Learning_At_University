//Write a C code to find the frequency of each letter in the name
//Sample Input: Raman
//Output: R - 1
//.       a = 2
//.       m = 1
//.       n = 1

#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int count;
    printf("Enter the string : ");
    gets(str);
    for(int i=0;i<strlen(str);i++)
    {
        int a=1;
        count=0;
        for(int j=0;j<i;j++)
        {
            if(str[i]==str[j] && i!=j)
            {
                a=0;
                break;
            }
        }
        if(a==1)
        {
            for(int j=0;j<strlen(str);j++)
            {
                if(str[i]==str[j])
                    count++;
            }
            printf("%c : %d\n",str[i],count);
        }
    }
	return 0;
}
