//																Assignment 8:

//																LAB TASK 1:

#include<iostream>
using namespace std;
class ServoMotor
{
	int id;
	float angle;
	float maxAngle;	
	public:
		ServoMotor()
		{
			id=0;
			angle=0;
			maxAngle=180;
			cout<<"Default Constructor is Created."<<endl;
		}
		ServoMotor(int a,float b,float c):id(a),angle(b),maxAngle(c)
		{
			cout<<"Parameterized Constructor is Created."<<endl;
		}
		void display()
		{
			cout<<" first Constructor id:"<<id<<endl;
			cout<<" first constructor angle:"<<angle<<endl;
			cout<<" first constructor max Angle:"<<maxAngle<<endl;
		}
		void rotate(float newAngle)
		{
			if(newAngle>180)
			{
				newAngle=maxAngle;
			}
			if(newAngle<180)
			{
				
			}
		}
};
int main()
{
	ServoMotor s1;
	s1.display();
	ServoMotor s2(1,30,180);
	s2.display();
		
	return 0;	
} 						



