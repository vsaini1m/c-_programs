#include<iostream>
using namespace std;
int main()
{
  int array[10];
	cout<<"Enter the size of array:";
	int t;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		cout<<"enter the no. a["<<i<<"]=";
		cin>>array[i];
	}
  int s,found=0;
  cout<<"Enter the number that's you want to search:\n";
  cin>>s;
  for(int i=0;i<=s;i++)
  {
  	if(array[i]==s)
  	{
  		found=1;
  		cout<<"loc="<<i;
  		break;
	}
	if(found==1)
	{
		cout<<"This no. doesn't exiest in this array:";
	}
  }
}
