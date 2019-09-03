#include<iostream>
using namespace std;
int main()
{
	int n,reverse=0;
	cout<<"Enter a number to reverse:\n";
	cin>>n;
	while(n!=0)
	{
		reverse=reverse*10;
		reverse=reverse+n%10;
		n=n/10;
	}
	cout<<"resule::::::"<<reverse;
}
