/*4. Write a C++ Program display Student Mark sheet using Multiple
inheritance*/

#include<iostream>
using namespace std;

class Student
{
	protected:
		int rollno;
		string name;
	
	public:
		void get_value_student()
		{
			cout<<"\n\tEnter the rollno=";
			cin>>rollno;
			
			cout<<"\n\tEnter the name=";
			cin>>name;
		}
};
class marks
{
	protected:
		int python,java,php,dw,total,per;
		
	public:
		void get_value_marks()
		{
			cout<<"\n\n\tEnter marks of python=";
			cin>>python;
			
			cout<<"\n\tEnter marks of java=";
			cin>>java;
			
			cout<<"\n\tEnter marks of php=";
			cin>>php;
			
			cout<<"\n\tEnter marks of dw=";
			cin>>dw;		
		}
		
		
};

class result:public Student,public marks
{
	
	public:
		void total_per_reult()
			{
				total=0;
				total=python+java+php+dw;
			
				per=total/4;
			}
		
		void print_result()
		{
			cout<<"\n\n\tRoll no="<<rollno;
			cout<<"\n\tName="<<name;
			cout<<"\n\n\tmarks of python="<<python;
			cout<<"\n\tmarks of java="<<java;
			cout<<"\n\tmarks of php="<<php;
			cout<<"\n\tmarks of dw="<<dw;
			cout<<"\n\n\ttotal marks="<<total;
			cout<<"\ntpercentage="<<per;
		}
};
main()
{
	result j;
	
	j.get_value_student();
	j.get_value_marks();
	j.total_per_reult();
	j.print_result();
}
