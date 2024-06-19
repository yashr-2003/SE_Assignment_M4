/*8. Write a program to Mathematic operation like Addition, Subtraction, 
Multiplication, Division Of two number using different parameters and 
Function Overloading*/

#include<iostream>
using namespace std;

class maths
{
	int a,b,c;
	
	public:
		void op(int x,int y)
		{
			a=x;
			b=y;
			
			cout<<"\n\n\tAdition="<<a+b;
		}
		
		void op(int x,float y)
		{
			b=x;
			a=y;
			
			cout<<"\n\n\tSubtraction="<<a-b;
		}
		
		void op(float x,int y)
		{
			a=x;
			b=y;

			cout<<"\n\n\tMultiplication="<<a*b;
		}
		
		void op(float x,float y)
		{
			a=x;
			b=y;
			
			cout<<"\n\n\tDivision="<<a/b;
		}
}; 
main()
{
	maths j;
	
	j.op(2,2);
	j.op(8,2.2f);
	j.op(2.2f,2);
	j.op(2.2f,2.2f);
}
