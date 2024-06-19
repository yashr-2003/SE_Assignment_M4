/*11. Write a program to calculate the area of circle, rectangle and tria
ngle using Function Overloading*/

#include<iostream>
using namespace std;

class Area

{
	int l,w,r,b,h;
	public:
	void Ar(int x,int y)
	{
		l=x;
		w=y;
		cout<<"\n\n\tArea of Rect="<<l*w;
	}
	void Ar(int q)
	{
		r=q;
		int pi=3.14;
		cout<<"\n\n\tArea of Circle="<<pi*r*r;
	}
	void Ar(int v,float k)
	{
		b=v;
		h=k;
		cout<<"\n\n\tArea of Triagle="<<0.5*(b*h);
	}
};
		
main()
{
	Area j;
	
	j.Ar(2,2);
	j.Ar(2);
	j.Ar(2,2.2f);
}

