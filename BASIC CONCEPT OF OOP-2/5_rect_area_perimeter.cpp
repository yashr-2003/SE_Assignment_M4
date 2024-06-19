/*5. Write a C++ program to create a class called
 Rectangle that has private member variables for 
 length and width. Implement member functions to 
calculate the rectangle's area and perimeter.*/

#include<iostream>
using namespace std;
class rectangle
{
	int l,w;
	
	public:
		 int input_rect()
		 {
			cout<<"Enter the length and width =";
			cin>>l>>w;	
		 }
		 int area_rect()
		 {
			int area=l*w;
			return area; 	
		 }	
		 int perimeter_rect()
		 {
		 	int	p=2*(l+w);
		 	return p;
		 }
};
main()
{
	rectangle O;
	int q=O.input_rect();
		q=O.area_rect();
		cout<<"aera="<<q;
		q=O.perimeter_rect();
		cout<<"\n\nperimeter"<<q;
}
