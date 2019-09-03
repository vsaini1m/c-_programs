#include<iostream>
#include<fstream>
using namespace std;
class st
{ 
   public:
	char name[100];
	char age[100];
	void tt()
	{
		ofstream ou;
	ou.open("vini.txt");
	cout<<"What's your name: \t";
	cin.ignore();
	cin.getline(name,100);
	ou<<name;
	cout<<"Enter your age:";
	cin.ignore();
	cin.getline(age,100);
	ou<<age;
	ou.close();
	}
	void yy()
	{
		ifstream ff;
		ff.open("vini.txt");
		ff>>name;
		ff>>age;
		cout<<endl<<name<<endl;
		cout<<age;
		ff.close();
	}
};
int main()
{ 
    st g;
	w:cout<<"\nW,R,q:";
	char e;
	cin>>e;
	if(e=='w')
	{
		g.tt();
	goto w;
	}
	if(e=='r')
	{
		g.yy();
		goto w;
	}
	if(e=='q')
	{
		return 0;
	}
	else{
	system(clrscr);
	}
	}
}

