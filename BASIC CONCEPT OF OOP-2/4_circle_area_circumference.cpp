/*4. Write a C++ program to implement a class called 
Circle that has private member variables for radius. 
Include member functions to calculate the circle's area 
and circumference.*/

#include<iostream>
using namespace std;

class circle
{
	int radius;
	
	public:
			float area_circle(float radius)
			{
				float area=(2*3.14)*(radius*radius);
				return area;
			}
			float circumference_circle(float radius)
			{
				float c=2*3.14*radius;
				return c;
			}
			
};
main()
{
		
	circle C;
	float a;
	cout<<"Enter the radius=";
	cin>>a;

	float q=C.area_circle(a);
	cout<<"\n\t area of circle="<<q;
	
	q=C.circumference_circle(a);
	cout<<"\n\t circumference of circle="<<q;
}
