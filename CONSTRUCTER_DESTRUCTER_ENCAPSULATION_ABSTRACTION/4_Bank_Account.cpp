/*4. Write a C++ program to implement a class called Bank Account
that has private member variables for account number and balance.
Include member functions to deposit and withdraw money from the
account.*/

#include<iostream>
using namespace std;
class Bank_Account
{
	int Account_num,Balance,Depo,With;
	
	public:
		
			void get_value()
			{
					cout<<"\n\n\tEnter you Account Number=";
					cin>>Account_num;
				
					cout<<"\n\tEnter your Balance=";
					cin>>Balance;
					
					cout<<"\n\tEnter your Deposit Money=";
					cin>>Depo;	
				
					cout<<"\n\tEnter withdrawal money=";
					cin>>With;

			}
			
			friend void print_calcu(Bank_Account A)
			{
				cout<<"\n\n\tAccount Number="<<A.Account_num;
				cout<<"\n\tBalance="<<A.Balance;
				A.Balance=A.Balance+A.Depo;
				A.Balance=A.Balance-A.With;
				cout<<"\n\tAfter Deposit and Withdrawal Balance="<<A.Balance;
						
			}	
}; 
main()
{
	Bank_Account A;
				
	A.get_value();
	print_calcu(A);
}
