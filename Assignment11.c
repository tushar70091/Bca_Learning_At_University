//Convert an decimal to its binary equivalent using a bitwise operator

#include <stdio.h>
int main() {
    int decimal,binary=0, base=1,rem;
    printf("Enter a decimal number: ");
    scanf("%d",&decimal);
    while(decimal>0) 
	{
        rem=decimal&1;
        binary=binary+(rem*base);
        base=base*10;
        decimal>>=1;
    }
    printf("Binary equivalent: %d",binary);
    return 0;
}
