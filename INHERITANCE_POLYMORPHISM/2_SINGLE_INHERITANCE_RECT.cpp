/*2. Write a C++ Program to find Area of Rectangle using 
inheritance*/

#include<iostream>
using namespace std;

class rect_l
{
	protected:
			int L;
			
			public:
					void get_length()
					{
						cout<<"\n\n\tEnter the length of rect=";
						cin>>L;
					}
};
class rect_w : public rect_l
{
	int W;
	
	public:
			void get_width()
			{
				cout<<"\n\tEnter the widht of rect=";
				cin>>W;
			}
			
			void calcu_area()
			{
				int A;
				A=L*W;
				
				cout<<"\n\n\tArea of Rectangle="<<A;
			}
};
main()
{
	rect_w J;
	
	J.get_length();
	J.get_width();
	J.calcu_area();
}
