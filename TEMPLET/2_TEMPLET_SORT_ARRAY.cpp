//2. Write a program of to sort the array using templates.

#include<iostream>
using namespace std;

template<class j>

void sortt(j a[])
{
	j temp;
	for(j i=0;i<5;i++)
	{
		for(j k=i+1;k<5;k++)
		{
			if(a[i]>a[k])
			{
				temp=a[i];
				a[i]=a[k];
				a[k]=temp;
			}
		}
	}
	for(j b=0;b<5;b++)
	{
	cout<<"\n\tsorted Array"<<b+1<<"="<<a[b];
	}
}
main()
{
	int arr[5];
	for(int i=0;i<5;i++)
	{
	cout<<"\n\tEnter number"<<i+1<<"=";
	cin>>arr[i];
	}
	sortt(arr);
}
