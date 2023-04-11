// Number convertor
#include<stdio.h>
#include<stdlib.h>
int dectobin();
int bintodec();
int dectohex();
int power(int ,int);

int main() {
	int ent;

	printf("(0)To exit the program \n");
    printf("(1)Decimal to Binary \n");
    printf("(2)Binary to Decimal \n");
    printf("(3)Decimal to Hexadcimal\n");
    printf("Enter respective number for the operation : ");
    scanf("%d", &ent); printf("\n");

   if(ent == 1) {
		dectobin();
   }
   else if(ent == 2) {
		bintodec();
   }
   else if(ent == 3) {
		dectohex();
   }
   else if(ent == 0) {
   		exit(1);
   }
   else {
       printf("\tInvalid Input\n");
   }
}

// conversion fuctions

// Decimal to Binary func
int dectobin() {
    long int dec,bin=0, rem, f=1;
	printf(" Enter a Decimal value: ");
	scanf("%ld", &dec);
    while(dec != 0) {
        rem = dec % 2;
        bin = bin + rem * f;
        f = f * 10;
        dec = dec / 2;
    }
	printf(" The Binary value is: %ld \n\n", bin);
    return bin;
}

// Binary to Decimal
int bintodec() {
    int dec = 0, i = 0, rem;
	long bin;
	printf(" Enter a binary value: ");
	scanf("%ld", &bin);

    while(bin != 0) {
        rem = bin % 10;
        bin /= 10;
        dec += rem * power(2,i);
        ++i;
    }
	printf(" The Decimal value is: %d \n\n", dec);
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
int dectohex() {
    int rem, i=0, decnum;
    char hexnum[50];
	printf(" Enter a Decimal value: ");
	scanf("%d",&decnum);
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
