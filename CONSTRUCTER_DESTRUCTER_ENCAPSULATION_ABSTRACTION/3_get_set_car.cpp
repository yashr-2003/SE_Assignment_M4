/*3. Write a C++ program to create a class called Car that has
 private member variables for company, model, and year. 
 Implement member functions to get and set these variables*/
 
#include<iostream>
using namespace std;

class car
{
	int year;
	string company;
	string model;
	
	public:
		car()
		{
			cout<<"Enter the company of car=";
			cin>>company;
			
			cout<<"Enter the model of car=";
			cin>>model;
			
			cout<<"Enter the year of car=";
			cin>>year;		
		}	
		void print();
};

void car :: print()
{
	cout<<"\n\tThe Company of car="<<company;
	cout<<"\n\tThe Model of car="<<model;
	cout<<"\n\t Year of car="<<year;
}
main()
{
	car A;

	A.print();		
} 

