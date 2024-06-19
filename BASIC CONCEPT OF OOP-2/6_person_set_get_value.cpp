/*6. Write a C++ program to create a class called Person
 that has private member variables for name, age and 
 country. Implement member functions to set and get the
  values of these variables.*/
  
#include<iostream>
using namespace std;
class person
{
	string name;
	int age;
	string country;
	
	public:
			void set_person()
			{
				cout<<"Enter the name=";
				cin>>name;
				
				cout<<"\nEnter the age=";
				cin>>age;
				
				cout<<"\nEnter the country";
				cin>>country;
			}
			void get_person()
			{
				cout<<"\n\n Name="<<name;
				cout<<"\n age="<<age;
				cout<<"\n countr="<<country;
			}
			
};
main()
{
	person P;
	P.set_person();
	P.get_person();
}
