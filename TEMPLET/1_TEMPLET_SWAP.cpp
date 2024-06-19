//1. Write a program of to swap the two values using template.

#include<iostream>
using namespace std;

template<class j>

void swapp(j a,j b)
{
	j temp=0;
	
	temp=a;
	a=b;
	b=temp;
	
	cout<<"\n\n\ta="<<a;
	cout<<"\n\tb="<<b;
}



main()
{
	int a,b;
	
	cout<<"Enter a=";
	cin>>a;
	
	cout<<"Enter b=";
	cin>>b;
	
	swapp(a,b);
	
}
