#include<stdio.h>
#include<stdlib.h>
#include<math.h>

long dectobin(int);
int bintodec(long);
int dectohex(int);
int main()
{
   long bin; int dec, ent;
       
   printf("Decimal to Binary -> 1\n");
   printf("Binary to Decimal -> 2\n");
   printf("Decimal to Hexadcimal -> 3\n");
   printf("Enter respective number for the operation : ");
   scanf("%d", &ent); printf("\n");

   if(ent == 1)
   {
       printf(" Enter decimal value: ");
       scanf("%d", &dec);
       bin = dectobin(dec);
       printf(" The Binary value is: %d \n\n", bin);
   }
   else if(ent == 2)
   {
       printf(" Enter binary value: ");
       scanf("%d", &bin);
       dec = bintodec(bin);
       printf(" The Decimal value is: %d \n\n", dec);
   }
   else if(ent == 3)
   {
       printf(" Enter decimal value: ");
       scanf("%d", &dec);
       printf("%c", dectohex(dec));
   }
   else
   {
       printf("\tInvalid Input\n");
   }

   return 0;
}

// conversion fuctions
long dectobin(int dec) // Decimal to Binary
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

int bintodec(long bin) // Binary to Decimal
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

int dectohex(int decnum) // Decimal to Binary
{
    int rem, i=0;
    char hexnum[50];
    while(decnum != 0)
    {
        rem = decnum % 16;
        if(rem < 10)
        {
            rem = rem + 48;
        }
        else
            rem = rem + 55;
        hexnum[i] = rem;
        i++;
        decnum = decnum / 16;     
    }
    printf(" Equivalent value in hexadecimal = ");
    for(i=i-1; i>=0; i--)
    {
        printf("%c", hexnum[i]);
    }
    printf("\n\n");
    return 0;
}