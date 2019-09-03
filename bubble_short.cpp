#include<iostream>
using namespace std;
int main()
{
	int a[50],temp,i,n,m=0;
	cout<<"enter number of your elements:";
	cin>>n;
	cout<<"Enter elements:";

	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
		
	
	for(i=0;i<(n-1);i++)
	{
		for(int j=0;j<(n-i-1);j++)
		{
			if(a[j]>a[j+1])
			{   m=1;
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	cout<<"after sorting array:";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
