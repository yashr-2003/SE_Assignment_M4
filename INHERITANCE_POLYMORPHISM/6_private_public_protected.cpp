/*6. Write a C++ Program to show access to Private Public and Protected
using Inheritance.*/



#include<iostream>
using namespace std;

class student
{
	private:
			int rnum;
			
	
	protected:
			int s1,s2,s3;
			int total;	
	
	public:
			string sname;
			
			
			void get_rnum()
			{
				cout<<"\n\tEnter the rollno=";
				cin>>rnum;
			}

			void print_rnum()
			{
				cout<<"\n\n\tRollno="<<rnum;
			}
			
};
class print: public student
{
	public:
		
		void get_marks()
			{
				get_rnum();
				
				cout<<"\n\tEnter s1 marks=";
				cin>>s1;
				
				cout<<"\n\tEnter s2 marks=";
				cin>>s2;
				
				cout<<"\n\tEnter s3 marks=";
				cin>>s3;
			}
			
		void total_marks()
			{
				total=s1+s2+s3;
			}
		void get_name()
			{
				cout<<"\n\n\tEnter the name=";
				cin>>sname;
			}
		void print_data()
		{
		
				print_rnum();
				cout<<"\n\n\tName="<<sname;
				cout<<"\n\n\ts1 marks="<<s1;
				cout<<"\n\n\ts2 marks="<<s2;
				cout<<"\n\n\ts3 marks="<<s3;
				cout<<"\n\n\ttotal="<<total;
				
		}
};
main()
{
	print j;
	
	j.get_name();
	j.get_marks();
	j.total_marks();
	j.print_data();
}
