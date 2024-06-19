/*13. Write a program to find the max number from given two numbers 
using friend function*/

#include<iostream>
using namespace std;

class maxnum
{
	int a,b;
	
	public:
		void get_value()
		{
			cout<<"\n\tEnter the number 1=";
			cin>>a;
			
			cout<<"\n\tEnter the number 2=";
			cin>>b;
		}
		
		friend void max(maxnum j)
		{
			if(j.a>j.b)
				cout<<"\n\n\ta is max";
			else
				cout<<"\n\n\tb is max";
		}
};
main()
{
	maxnum j;
	
	j.get_value();
	max(j);
	
}


