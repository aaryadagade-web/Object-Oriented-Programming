#include <iostream>
using namespace std;
class demo{
	private:
		int a,b,t;
	public:
		void get(int x,int y)
		{
			a=x;
			b=y;
		}
		void disp()
		{
			cout<<a<<"\n"<<b<<"\n";
		}
		void swap(demo &d)
		{
			int t;
			t=d.a;
			d.a=d.b;
			d.b=t;
		}
};
int main()
{
	demo d1,d2;
	int w,e;
	cout<<"Enter the variables\n";
	cin>>w>>e;
	d1.get(w,e);
	cout<<"Before swapping the variables are:\n";
	d1.disp();
	d2.swap(d1);
	cout<<"The swapped variables are:\n";
	d1.disp();
	return 0;
}
