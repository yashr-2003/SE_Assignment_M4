//9. Write a Program of Two 1D Matrix Addition using Operator Overloading..

#include<iostream>
using namespace std;

class mat
{
	int m1[2],m2[2],add[2],r,c,k[2];
	
	
	public:
			
		mat(int w=0,int e=0)
		{
			r=w;
			c=e;
		}
	
		mat operator +(mat &obj)
		{
			mat m;
			
			m.r=r+obj.r;
			m.c=c+obj.c;
			return m;
		}
		void print()
		{
			
			cout<<"\t"<<r<<" "<<c;
		}
		
	
		
};
main()

{
	mat m1(2,4),m2(3,5);
	cout<<"-------matrix-1----------------\n\n";
	m1.print();
	cout<<"\n\n-------matrix-2----------------\n\n";
	m2.print();
	
	mat m3=m1+m2;
	cout<<"\n\n-------matrix-3----------------\n\n";
	m3.print();
	
}
