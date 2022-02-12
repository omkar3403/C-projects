#include<stdio.h>
#include<stdlib.h>

long dectobin(int);
int bintodec(long);
int main()
{
   long bin; int dec;
   char ent;

   printf("Enter [B]inary to decimal or [D]ecimal to binary: ");
   scanf("%c", &ent);

   if(ent == 'D')
   {
       printf(" Enter any decimal integer: ");
       scanf("%d", &dec);
       bin = dectobin(dec);
       printf(" The Binary value is: %d \n\n", bin);
   }
   else if(ent == 'B')
   {
       printf(" Enter any binary: ");
       scanf("%d", &bin);
       dec = bintodec(bin);
       printf(" The Decimal value is: %d \n\n", dec);
   }
   else
   {
       printf("\tInvalid Input\n");
   }

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