/*1. Write a program to find the multiplication values and the cubic values 
using inline function*/

#include<iostream>
using namespace std;

class pinline
{
	int x;
	
	public:
		void get_num(int j)
		{
			x=j;
		}
		
		 inline int multiplication_num()
		 {
		 	return x*x;
		 }
		 inline int cubic_value_num()
		 {
		 	return x*x*x;
		 }
};
main()
{
	pinline V;
		int a,b;
		cout<<"\n\nEnter the Number1=";
	 	cin>>a;
	
	
	V.get_num(a);
	int s=V.multiplication_num();
	cout<<"\n\nMultiplication="<<s;
	int m=V.cubic_value_num();
	cout<<"\n\ncubic value="<<m;
}
