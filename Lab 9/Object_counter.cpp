//													LAB 9:

//												HOME TASK 1:

#include<iostream>
using namespace std;
class RobotUnit
{
	
	private:
		string RobotName;
		int robotID;
		static int objectCount;
	public:
		RobotUnit()
		{
			cout<<"[Default Constructor] is Created."<<endl;
			RobotName="Unknown";
			robotID=0;
			objectCount++;
		};
		
		RobotUnit(string robot,int id):RobotName(robot),robotID(id)
		{
			cout<<"[Parameterized Constructor] is created."<<endl;
			objectCount++;
		}
		
		~RobotUnit()
		{
			cout<<"The Destructor is created."<<endl;
			objectCount--;
		}
		
		static int getCount();
		
		void display() const;
};

int RobotUnit::objectCount=0;

int RobotUnit::getCount()
{
	return objectCount;	
}

void RobotUnit::display() const
{
	cout<<"Robot Name is:"<<RobotName<<endl;
	cout<<"Robot ID is:"<<robotID<<endl;
}

int main()
{
	cout<<RobotUnit::getCount()<<endl;
	RobotUnit Data0;
	RobotUnit Data("Terminator T-800",800);
	data.display();
	data0.display();
	return 0;
}
