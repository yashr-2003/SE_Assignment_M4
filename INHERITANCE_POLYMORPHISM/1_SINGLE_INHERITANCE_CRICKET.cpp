/*1. Assume a class cricketer is declared. Declare a derived
class batsman from cricketer. Data member of batsman. Total 
runs, Average runs and best . Member functions 
input data, calculate average runs, Display data. (Single 
Inheritance).*/

#include<iostream>
using namespace std;

class cricketer
{
	string C_name;
	int C_age;
	string C_type;

	
	public:
			int C_t_match;
			void get_cric()
			{
				cout<<"\n\tEnter the name=";
				cin>>C_name;
				
				cout<<"\n\tEnter the age=";
				cin>>C_age;
				
				cout<<"\n\tEnter the type=";
				cin>>C_type;
				
				cout<<"\n\t Enter the total matches=";
				cin>>C_t_match;
			}
				
			void print_cric()
			{
				cout<<"\n\tCricketer Name="<<C_name;
				cout<<"\n\tCricketer Age="<<C_age;
				cout<<"\n\tCricketer Type="<<C_type;
				cout<<"\n\tCricketer total matches="<<C_t_match;
			}
			
};

class batsman : public cricketer
{
	int B_runs;
	int B_perf;
	int B_Avr_run;
	
	public :
			void get_bats()
			{
				cout<<"\n\tEnter the runs= ";
				cin>>B_runs;
			
				cout<<"\n\tEnter the Matches of best perform=";
				cin>>B_perf;
			}
			void print_bats()
			{
				cout<<"\n\n\tTotal rund="<<B_runs;
				
				int a=B_runs/C_t_match;
				cout<<"\n\tAverage runs="<<a;
				cout<<"\n\tperformance(matches)="<<B_perf;
			}
};

main()
{
	batsman J;
	J.get_cric();
	J.get_bats();
	J.print_cric();
	J.print_bats();	
} 
