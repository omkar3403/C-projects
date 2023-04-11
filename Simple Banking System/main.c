// Simple Banking System 
/*
	Things the should be able to do:
	- create an new account
	- login with thein id and password
	- check balance
	- deposit money
	- withdraw money
	- transfer money

*/
#include <stdio.h>
#include <stdlib.h>

void run();
void login();
void menu();
void showBalance();
void depositMoney();
void withdrawMoney();
void transferMoney();

int main() {

	run();
	return 0;
}

void run() {
	int run;
	printf("1. Login\n");
	printf("0. Quit\n");
	printf("Enter option: ");
	scanf("%d", &run);
	if (run == 1) 
	{
		login();
	}
	else if(run == 0)
	{
		exit(0);
	}
	else
	{
		printf("Invalid option");
	}
}

void login() {
	char Id[50] = {'o','m','k','a','r'}, password[20] = {'1','2','3'};
	int runa, option;

	char EId[50], Epassword[20];
	printf("Id: ");
	scanf("%s", EId);
	printf("Password: ");
	scanf("%s", Epassword);

	printf("0. logout\n");
	printf("1. menu\n");
	printf("Enter option: ");
	scanf("%d", &run);

	if (runa == 0)
	{
		printf("log");

		run();
	}
	//else if (runa == 1)
	//{
		// menu();
	//}
	else
	{
		printf("Invalid option");
	}
	run();
}

void menu() {


}