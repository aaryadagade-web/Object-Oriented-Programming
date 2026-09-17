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
class fees:public student
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
			cout<<sid<<endl<<amt<<endl;
		}
};
int main()
{
	fees obj;
	obj.acc();
	obj.acc2();
	obj.disp();
	return 0;
}
