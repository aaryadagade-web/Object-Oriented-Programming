#include<iostream>
using namespace std;
class student
{
	protected:
		int sid;
	public:
		void acc()
		{
			cout<<"Enter the student id:";
			cin>>sid;
		}
};

class sports:public student
{
	public:
		int prn;
	public:
		void acc3()
		{
			cout<<"Enter prn:";
			cin>>prn;
		}
};
class fees:public sports
{
	private:
		int amt;
	public:
		void acc2()
		{
			cout<<"Enter the fees:";
			cin>>amt;
		}
		void disp()
		{
			cout<<"Details"<<endl;
			cout<<sid<<endl<<amt<<endl<<prn<<endl;
		}
};
int main()
{
	fees obj;
	obj.acc();
	obj.acc2();
	obj.acc3();
	obj.disp();
	return 0;
}
