/*7. Write a C++ Program to illustrates the use of Constructors in multilevel 
inheritance*/

#include<iostream>
using namespace std;

class sx
{
	protected:
		int a;
	
	public:
		sx(int w)
		{
			a=w;
		}
		
};
class dx : public sx
{
	protected:
		int b;
	
	public:
		dx(int r)
		{
			b=r;
		}
};
class fx : public dx
{

	
	public:
		void arithmetic op()
		{
			cout<<"\n\t Addition="<<a+b;
			cout<<"\n\t subtraction="<<a-b;
			cout<<"\n\t multiplication="<<a*b;
			cout<<"\n\t division="<<a/b;
		}
	
}; 
main()
{
	int j,e;
	cout<<"Enter the number 1=";
	cin>>j;
	cout<<"Enter the number 2=";
	cin>>e;
	sx a(j);
	dx b(e);
	fx c;
	c.print();
	
}
