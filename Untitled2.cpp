#include<iostream>
using namespace std;
class scant
{
	private:
		float a,b,c,steps;
	public:
		float f(float x)
		{
			z=(x*x)+(4*x)-11;
			return z;
		}
	void input_my_data()
	{
		cout<<"Enter the value of a,b and steps:";
		cin>>a>>b>>steps;
	}
	void calculate_my_data()
	{
		float r;
		for(int i=1;i<=steps;i++)
		{
			r=b-((b-a)/(f(a)-f(b))*f(a));
			a=b;
			b=r;
			cout<<"The_root_"<<i<<"_is="<<r<<endl;	
		}
	}
}
int main()
{
	scant s;
	s.input_my_data();
	s.calculate_my_data();
}
