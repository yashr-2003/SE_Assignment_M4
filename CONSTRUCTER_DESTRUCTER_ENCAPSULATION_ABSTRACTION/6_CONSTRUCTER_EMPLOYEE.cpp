/*6. Write a C++ program to implement a class called Employee 
that has private member variables for name, employee ID, and 
salary. Include member functions to calculate and set salary 
based on employee performance. Using of constructor.*/ 

#include<iostream>
using namespace std;

class Employee
{
	int E_ID,E_salary;
	string E_name;	
	
	public:
			Employee(int id,int salary,string name)
			{
				E_ID=id;
				E_salary=salary;
				E_name=name;
				
			}
			void calculate_salary()
			{
				int R;
				cout<<"\n\n\tEnter performance rating(out of 5)=";
				cin>>R;
				
				if(R>=4)
				{
					int j;
					j=E_salary*0.1;	//10%
					E_salary=E_salary+j;
				}
				
				else if(R==3)
				{
				
					int j;
					j=E_salary*0.08;//8%
					E_salary=E_salary+j;	
				}
				
				
				else if(R==2)
				{
				
					int j;
					j=E_salary*0.05;//5%
					E_salary=E_salary+j;	
				}
				
				else if(R==1)
				{
				
					int j;
					j=E_salary*0.03;//3%
					E_salary=E_salary+j;	
				}
			}
			void set_salry()
			{
				cout<<"\n\tyour salary After performance="<<E_salary;
			}
			
};
main()
{

	int id,salary;
	string name;
	

	
	cout<<"\n\tEnter the id=";
	cin>>id;
	
	cout<<"\n\tEnter the salary=";
	cin>>salary;
	
	cout<<"\n\tEnter the name=";
	cin>>name;
	
	

	
	Employee E(id,salary,name);
	E.calculate_salary();
	E.set_salry();
}
