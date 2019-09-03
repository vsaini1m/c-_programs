#include<iostream>
using namespace std;
int bubble_sort();
int binery_search();
int main()
{
	 bubble_sort();
	 binery_search();
}
int binery_search()
{
	int item,n,mid,beg=0,end=n,a[10];
	cout<<"enter size of array:";
	cin>>n;
	cout<<"entter elements:";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int j=0;j<=n;j++)
	{
		mid=(beg+end)/2;
		if(item==a[mid])
		{
			cout<<"item found on the location ="<<a[j];
		}
		if(item>a[mid])
		{
			beg=mid+1;
		}
		if(item<a[mid])
		{
			end=mid-1;
		}
		if(beg>end)
		{
			cout<<"the item is not found in this array:";
		}
	}
}
int bubble_sort()
{
	int a[50],temp,i,n,flag=0;
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
			{   flag=1;
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
				if(flag==1)
	{
		return 0;
	}
		}
	}
	cout<<"after sorting array:";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
