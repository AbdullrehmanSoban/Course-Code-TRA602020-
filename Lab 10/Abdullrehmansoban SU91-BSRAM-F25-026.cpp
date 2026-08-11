//#include<iostream>
//using namespace std;
//class Shape
//{
//	public:
//	virtual float calculateArea()
//	{
//		return 0;
//	}
//	virtual void describe()
//	{
//		cout<<"This is a Shape.";
//		cout<<endl;
//	}
//};
//class Rectangle:public Shape
//{
//	public:
//	float length;
//	float width;
//	float area;
//	float calculateArea()
//	{
//		area=length*width;
//		return area;
//	}
//	void describe()
//	{
//		Shape::describe();
//		cout<<"This is a rectangle.";
//	}
//};
//class circle:public Shape
//{
//	public:
//		float radius;
//		float area1;
//		float calculateArea()
//		{
//			float pai=3.1416;
//			area1=pai*radius*radius;
//			return area1;
//		}
//		void describe()
//		{
//			Shape::describe();
//			cout<<"This is a Circle";
//		}
//		
//};
//int main()
//{
//	Rectangle R;
//	cout<<"Enter Length of the rectangle:";
//	cin>>R.length;
//	cout<<endl;
//	cout<<"Enter Width of the Rectangle:";
//	cin>>R.width;
//	cout<<endl;
//	cout<<"Area of Rectangle:"<<R.calculateArea()<<endl;
//	R.describe();
//	circle C;
//	cout<<"Enter the radius of the circle:";
//	cin>>C.radius;
//	cout<<endl;
//	cout<<"Area of Circle:"<<C.calculateArea()<<endl;
//	C.describe();
//	return 0;
//}

//#include<iostream>
//using namespace std;
//class animal
//{
//	public:
//	string name;
//	string species;
//	animal(string n,string specie)
//	{
//		name=n;
//		species=specie;
//		cout<<"[Parameteized Constructor] created."<<endl;
//	}
//	virtual void sound()
//	{
//		cout<<"Animal Makes Sound."<<endl;
//	}
//	virtual void describe()
//	{
//		cout<<"Name of Animal:"<<name<<endl;
//		cout<<"Name of the Species:"<<species<<endl;
//	}
//};
//class cat:public animal
//{	
//	public:
//	string breed;
//	cat(string n,string specie,string b):animal(n,specie)
//	{
//		breed=b;
//		cout<<"[Paramterized Constructor for Cat] is Created"<<endl;
//	}
//	void sound()
//	{
//		cout<<"Meow!"<<endl;
//	}
//	void describe()
//	{
//		animal::describe();
//		cout<<"Breed of cat is:"<<breed<<endl;
//	}
//};
//class dog:public animal
//{
//	public:
//		string breed;
//		dog(string n,string specie,string b):animal(n,specie)
//		{
//			breed=b;
//			cout<<"[Paramterized Constructor for Dog]is Created."<<endl;
//		}
//		void sound()
//		{
//			cout<<"Wooooof!"<<endl;
//		}
//		void describe()
//		{
//			animal::describe();
//			cout<<"Breed is:"<<breed<<endl;
//		}
//};
//class GuardDog:public dog
//{
//	public:
//		int trainingLevel;
//		GuardDog(string n,string s,string b,int t):dog(n,s,b)
//		{
//			trainingLevel=t;
//			cout<<"[Parameterized Constructor for Guard Dog]is created."<<endl;
//		}
//		void sound()
//		{
//			cout<<"Grrr!Grrr!WoofWooof!"<<endl;
//		}
//		void describe()
//		{
//			dog::describe();
//			cout<<"Trainig level is:"<<trainingLevel<<endl;
//		}
//};
//int main()
//{
//	GuardDog dog("Jackie","dog","German Shephard",2);
//	dog.sound();
//	dog.describe();
//	return 0;	 
//}
