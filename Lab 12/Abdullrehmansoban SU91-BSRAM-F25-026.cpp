#include<iostream>
using namespace std;
class shape
{
	protected:
		float side;
	public:
		shape(float s)
		{
			side=s;
		}
		float calculateArea()
		{
			float area=0;
			area=side*side;
			return area;
		}
};
class circle:public shape
{
	float pi=3.1416;
	public:
		circle(float s):shape(s)
		{
			
		}
	float calculateArea()
	{
		float area=0;
		area=pi*side*side;
		return area;
	}
};
class rectangle:protected shape
{
	public:
	rectangle(float s):shape(s)
	{
		
	}
	float calculateArea()
	{
		float area=0;
		area=side*2*side;
		return area;
	}
	float getarea()
	{
		return calculateArea();
	}
};
int main()
{
	circle c(5.2);
	rectangle r(4.3);
	cout<<"Calculate area for the circle is:"<<c.calculateArea()<<endl;
	cout<<"The Get area of the Rectangle is:"<<r.getarea()<<endl;
	return 0;
}
