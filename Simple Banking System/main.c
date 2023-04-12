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
	scanf("%d", &runa);

	if (runa == 0)
	{
		printf("log");

		run();
	}
	else if (runa == 1)
	{
		 menu();
	}
	else
	{
		printf("Invalid option");
	}
	run();
}

void menu() {
	printf("0. Logout\n");
	printf("1. Show Balance\n");
	printf("2. Deposit Money\n");
	printf("3. Withdraw Money\n");
	// printf("4. Transfer Money\n");
	int option;
	printf("Enter option: ");
	scanf("%d", &option);

	if (option == 0)
	{
		run();
	}
	else if (option == 1)
	{
		showBalance();
	}
	else if (option == 2)
	{
		depositMoney();
	}
	else if (option == 3)
	{
		withdrawMoney();
	}
	else
	{
		printf("Invalid option");
	}
}

// Banlace 
int Balance = 10000;

void showBalance()
{
	printf("%d \n", Balance);
	menu();
}

void depositMoney()
{
	int dep;
	printf("Enter the amount: ");
	scanf("%d", &dep);
	Balance = Balance + dep;
	showBalance();
}

void withdrawMoney()
{
	int withdraw;
	printf("Enter the amount: ");
	scanf("%d", &withdraw);
	Balance = Balance - withdraw;
	showBalance();
}