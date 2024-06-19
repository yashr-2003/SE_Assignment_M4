//10.Write a program to concatenate the two strings using Operator Overloading 

#include<iostream>
using namespace std;

class concat
{
	//concat &obj;
	string a;	
	
	
	public:
		concat(string q)
		{
		a=q;
		}
		
		concat operator +(concat &obj)
		{
			concat c(obj);
			
			c.a=a+obj.a;
			return c;
		}
		void print()
		{
			cout<<"\t"<<a;
		}

};
main()
{
	concat j1("yash"),j2("chavda");
	cout<<"\n\n-----------string-1-------------\n\n";
	j1.print();
	cout<<"\n\n-----------string-2-------------\n\n";
	j2.print(); 
	concat j3=j1+j2;
	cout<<"\n\n-----------string-3-------------\n\n";
	j3.print();
}
