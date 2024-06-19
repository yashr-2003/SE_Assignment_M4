//1. WAP to create simple calculator using class.

#include<iostream>
using namespace std;

class calculator
{
	private:
		int choice,a,b;
	public:
		void opration_calculator()
		{
			cout<<"1.Addition";
			cout<<"\n2.subtraction";
			cout<<"\n3.multiplication";
			cout<<"\n4.division";
		}

		void  choice_calculator()
		{
			cout<<"\n select your choice=";
			cin>>choice;
		}
		
		void input_calculator()
		{
		cout<<"Enter the num1=";
		cin>>a;
		
		cout<<"\nEnter the num2=";
		cin>>b;		
		}			
		void opration_calculator()
		{
			if(choice==1)
				cout<<"addition="<<a+b;
			else if(choice==2)
				cout<<"subtraction"<<a-b;
			else if(choice==3)
				cout<<"multiplication="<<a*b;
			else if(choice==4)
				cout<<"division="<<a/b;
		}
			
	
};
main()
{
	calculator obj;
	
	obj.print_choice_calculator();	
	obj.choice_calculator();
	obj.input_calculator();
	obj.opration_calculator();

}
