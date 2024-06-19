/*2. Write a program of Addition, Subtraction, Division, 
Multiplication using constructor.*/

#include<iostream>
using namespace std;

class calc
{
	int a,b;
	
	public:
		calc()
		{
			cout<<"Enter the Numbers=";
			cin>>a>>b;		
		}	
		int Addition()
		{
			return a+b;	
		}
		int Subtraction()
		{
			return a-b;
		}
		int Multiplication()
		{
			return a*b;
		}
		int Devision()
		{
			return a/b;
		}
};
main()
{
	calc A;
	
	int ans=A.Addition();
	cout<<"\nAddition="<<ans;
	
	ans=A.Subtraction();
	cout<<"\nSubtraction="<<ans;
	
	ans=A.Multiplication();
	cout<<"\nMultiplication="<<ans;
	
	ans=A.Devision();
	cout<<"\nDevision="<<ans;
}
