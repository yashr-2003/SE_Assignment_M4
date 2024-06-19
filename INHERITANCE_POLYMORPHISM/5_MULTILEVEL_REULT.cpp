/*5. Assume that the test results of a batch of students are stored
in three different classes. Class Students are storing the roll 
number. Class Test stores the marks obtained in two subjects and 
class result contains the total marks obtained in the test. The class
result can inherit the details of the marks obtained in the test
and roll number of students. (Multilevel Inheritance)*/

#include<iostream>
using namespace std;


class Students
{
	protected:
		int rollno;
	
	public:
		void get_rollno()
		{
			cout<<"\n\tEnter the rollno=";
			cin>>rollno;
		}
}; 

class test : public Students
{
	protected:
		int sub1,sub2;
	
	public:
			void get_marks()
			{
				cout<<"\n\tEnter sub1 marks=";
				cin>>sub1;
				
				cout<<"\n\tEnter sub2 marks=";
				cin>>sub2;
			}
};

class result :public test
{
	int total;
	
		public:
				void total_result()
				{
					total=0;
					total=sub1+sub2;
				}
				void print_data()
				{
					cout<<"\n\tRollno="<<rollno;
					cout<<"\n\tsub1="<<sub1;
					cout<<"\n\tsub2="<<sub2;
					cout<<"\n\tTotal marks="<<total;
				}
};
main()
{
	result J;
	
	J.get_rollno();
	J.get_marks();
	J.total_result();
	J.print_data();
}
