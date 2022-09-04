#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int dectobin(int);
int bintodec(long);
int dectohex(int);
int power(int ,int);
void run();

int main()
{
   long int bin; int dec, ent;

   printf("(1)Decimal to Binary \n");
   printf("(2)Binary to Decimal \n");
   printf("(3)Decimal to Hexadcimal\n");
   printf("Enter respective number for the operation : ");
   scanf("%d", &ent); printf("\n");

   if(ent == 1)
   {
       printf(" Enter decimal value: ");
       scanf("%d", &dec);
       bin = dectobin(dec);
       printf(" The Binary value is: %ld \n\n", bin);
   }
   else if(ent == 2)
   {
       printf(" Enter binary value: ");
       scanf("%ld", &bin);
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
}

// conversion fuctions

// Decimal to Binary func
int dectobin(int dec) {
    long int bin=0, rem, f=1;

    while(dec != 0) {
        rem = dec % 2;
        bin = bin + rem * f;
        f = f * 10; 
        dec = dec / 2;
    }
    return bin;
}

// Binary to Decimal
int bintodec(long bin) {
    int dec = 0, i = 0, rem;

    while(bin != 0) {
        rem = bin % 10;
        bin /= 10;
        dec += rem * power(2,i);
        ++i;
    }
    return dec;
}

// self made power func
int power(int base, int expo) {
	int result=1;
	while(expo != 0) {
		result = base * result;
		--expo;
	}
	return result;
}

// Decimal to Hexadecimal
int dectohex(int decnum) {
    int rem, i=0;
    char hexnum[50];
    while(decnum != 0) {
        rem = decnum % 16;
        if(rem < 10) {
            rem = rem + 48;
        }
		else
            rem = rem + 55;
        hexnum[i] = rem;
        i++;
        decnum = decnum / 16;
    }
    printf(" Equivalent value in hexadecimal = ");
    for(i=i-1; i>=0; i--) {
        printf("%c", hexnum[i]);
    }
    printf("\n\n");
    return 0;
}
