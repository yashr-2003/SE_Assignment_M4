/*3. Create a class person having members name and age. Derive a 
class student having member percentage. Derive another class teacher
having member salary. Write necessary member function to initialize,
read and write data. Write also Main function (Multiple Inheritance)*/

#include<iostream>
using namespace std;

class person
{
	protected:
		int rollno,age;
		string name;
		
		public:
			void get_value_person()
			{
				cout<<"Enter the rollno=";
				cin>>rollno;
				
				cout<<"Enter the age=";
				cin>>age;
				
				cout<<"Enter the name=";
				cin>>name;
			}
};

class student 
{
	protected:
		int sub1,sub2,sub3,total,per;
		
		public:
			void get_value_std()
			{
				cout<<"Enter the sub1 marks=";
				cin>>sub1;
				
				cout<<"Enter the sub2 marks=";
				cin>>sub2;
				
				cout<<"Enter the sub3 marks=";
				cin>>sub3;
			}
			void total_per_std()
			{
				total=0;
				total=sub1+sub2+sub3;
				
				per=total/3;
			}
		

};
class teacher : public person,public student
{
	int salary;
	
	public:
			void get_salary_teacher()
			{
				cout<<"Enter the salary=";
				cin>>salary;
			}
			
			void print_data_teacher()
			{
				cout<<"\n\trollno of student="<<rollno;
				cout<<"\n\tage of student="<<age;
				cout<<"\n\tname of sudent"<<name;
				cout<<"\n\tsub1 marks="<<sub1;
				cout<<"\n\tsub2 marks="<<sub2;
				cout<<"\n\tsub3 marks="<<sub3;
				cout<<"\n\t total="<<total;
				cout<<"\n\tper="<<per;
				cout<<"\n\tsalary of teacher="<<salary;
			}
};
main()
{
	teacher j;
	
	j.get_value_person();
	j.get_value_std();
	j.get_salary_teacher();
	j.print_data_teacher();
}
