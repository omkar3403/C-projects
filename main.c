#include<stdio.h>
#include<stdlib.h>

long dectobin(int);
int bintodec(long);
int main()
{
    long bin; int dec;
    printf(" Ënter any decimal integer: ");
    scanf("%d", &dec);
    bin = dectobin(dec);
    printf(" The Binary value is: %d\n\n", bin);
    
    printf(" Enter any binary: ");
    scnaf("%d", &bin);
    dec = bintodec(bin);
    printf(" The Decimal value is: %d \n\n", dec);

    return 0;
}

long dectobin(int dec)
{
    long bin=0, rem, f=1;
    while(dec != 0)
    {
        rem = dec % 2;
        bin = bin + rem * f;
        f = f * 10; 
        dec = dec / 2;
    }
    return bin;
}

int bintodec(long bin)
{
    int dec = 0, i = 0, rem;
    while(bin != 0)
    {
        rem = bin % 10;
        bin /= 10;
        dec += rem * pow(2,i);
        ++i;
    }
    return dec;
}