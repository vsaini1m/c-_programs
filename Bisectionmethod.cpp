#include<iostream>
using namespace std;
class bisection
{
	private:
		float a,b,c,steps;
	public:
		float f(float x)
		{
			float z=x*x*x-5*x-9;
			return z;
		}
	void input()
	{
		cout<<"Enter the value of a and b:\n";
		cin>>a>>b;
		cout<<"Enter the steps:\n";
		cin>>steps;
	}
	void calculate()
	{
		for(int i=0;i<steps;i++)
		{
			c=(a+b)/2;
			if(f(c)<0)
			{
				a=c;
			}
			else if(f(c)>0)
			{
				b=c;
			}
			cout<<"\n*"<<i<<"="<<c;
		}
	}
};
int main()
{
	bisection b;
	b.input();
	b.calculate();
	return 0;
}
