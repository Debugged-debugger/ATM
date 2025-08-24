#include <iostream>
#include <string>
using namespace std;

	/*
	functionalities:
	1. check balance
	2. withdraw money
	3. deposit money
	4.show menu
	
	*/

	void showmenu()
	{
		cout<<"Choose one option from below:\n";
		cout<<"1. Show balance\n";
		cout<<"2. withdraw money\n";
		cout<<"3. Deposit money\n";
		cout<<"4. Exit \n";
	}
	void showbalance(double balance)
	{
		cout<<"Your current balance is $"<<balance<<endl;
	}
	void withdraw(double &balance)
	{
		cout<<"Enter withdraw amount: $";
		double amount;
		cin>>amount;
		if (amount>balance)
		{
			cout<<"Insufficient balance\n";
		 
		} else 
		{
			balance-=amount;
			cout<<"You have successfully withdraw $"<<amount<<endl;
		}
		
	}
	
	void deposit(double &balance)
	{
		cout<<"Enter amount to deposit: $";
		double amount;
		cin>>amount;
		balance+=amount;
		cout<<"You have successfully deposited $"<<amount<<endl;
	}
	
	

int main()
{
	char option;
	double balance = 500.40;
	
	cout<<"Welcome to Roro's ATM\n";
	showmenu();
	cin>>option;
	switch (option){
	case '1':
		showbalance(balance);
		break;
	case '2':
	 	withdraw(balance);
		break;
	case '3':
		deposit(balance);
		break;
	case '4':
		exit;
	break;
	}
	
	
	

	return 0;
}