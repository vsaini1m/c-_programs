#include<iostream>
using namespace std;
int main()
{
	int n;
	char a[2][2];
	for(int i=1;i<=3;i++)
	{
		for(int j=1;j<=3;j++)
		{
			cin>>a[i]>>a[j];
		}
	}
	for(int l=1;l<=3;l++)
	{
		for(int k=1;k<3;k++)
		{
			cout<<a[l]<<" "<<a[k];
		}
		cout<<endl;
	}
}  
