/*12. Write a program to swap the two numbers using friend function 
without using third variable*/

#include<iostream>
using namespace std;

class swapp
{
	int a;
	int b;
	
	public:
		void get_number()
		{
			
			cout<<"\n\n\tEnter the Number1=";
			cin>>a;
			cout<<"\n\tEnter the Number2=";
			cin>>b;
			
			cout<<"\n\n\t*Before swapping";
			
			cout<<"\n\tA="<<a;
			cout<<"\n\tB="<<b;
		}
		
		friend void swap(swapp j)
		{

			j.a=j.a+j.b;
			j.b=j.a-j.b;
			j.a=j.a-j.b;
			
			cout<<"\n\n\t*After Swappin";
			
			cout<<"\n\tA="<<j.a;
			cout<<"\n\tB="<<j.b;
		}
};
main()
{
	swapp j;
	
	j.get_number();
	swap(j);
}
