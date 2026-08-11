//												LAB TASK 1:

//#include<iostream>
//using namespace std;
//struct country
//{
//	char countryName[20];
//	int population;
//};
//int main()
//{
//	country data;
//	cout<<"Enter the Country name:";
//	cin>>data.countryName;
//	cout<<"Enter the population of the Country:";
//	cin>>data.population;
//	cout<<"This is the name of the country:"<<data.countryName<<endl;
//	cout<<"This is the population of the country:"<<data.population<<endl;
//	return 0;	
//}

//-----------------------------------------------------------------------------------------------------------------------------------------------

//												LAB TASK 2:

//#include<iostream>
//using namespace std;
//struct student
//{
//	int roll_no;
//	int marks[5];
//	string subjects[5]={"Programming","English","Calculus","Circuit analysis","Python"};
//};
//int main()
//{
//	student data;
//	cout<<"Enter the roll no of the student:";
//	cin>>data.roll_no;
//	for(int i=0; i<5; i++)
//	{
//		cout<<"Enter the marks of "<<data.subjects[i]<<" :";
//		cin>>data.marks[i];	
//	}
//	cout<<"________________________________________"<<endl;
//	for(int i=0; i<5; i++)
//	{
//		cout<<"The Roll.No of Student is:"<<data.roll_no<<endl;
//		cout<<"The marks of "<<data.subjects[i]<<" is:"<<data.marks[i]<<endl;	
//	}
//	return 0;
//}

//--------------------------------------------------------------------------------------------------------------------------------------------

//														LAB TASK 3:

//#include<iostream>
//using namespace std;
//struct car
//{
//	int model;
//	string color;
//	double price;
//};
//int main()
//{
//	int max=0;
//	int user=0;
//	car data[5];
//	for(int i=0; i<5; i++)
//	{
//		cout<<"Enter the Model of the "<<i+1<<" car:";
//		cin>>data[i].model;
//		cout<<endl;
//		cout<<"Enter the color of the "<<i+1<<" car:";
//		cin>>data[i].color;
//		cout<<endl;
//		cout<<"Enter the price of the "<<i+1<<" car:";
//		cin>>data[i].price;	
//	}
//	cout<<"Please enter 1 if u want to display the price of the expensive car otherwise press 2 to display the result of all cars:";
//	cin>>user;
//	if(user==1)
//	{
//		for(int i=0; i<5; i++)
//		{
//			while(max<data[i].price)
//			{
//				max=data[i].price;	
//			}	
//		}
//	}
//	cout<<"The mostly expensive car is:";
//	cout<<data[0].model<<endl;
//	cout<<data[0].color<<endl;
//	cout<<data[0].price<<endl;
//	
//	if(user==2)
//	{
//		for(int i=0; i<5; i++)
//		{
//			cout<<"The model of "<<i+1<<" car is:"<<data[i].model<<endl;
//			cout<<"The Price of the "<<i+1<<" car is:"<<data[i].price<<endl;
//			cout<<"The Color of the "<<i+1<<" car is:"<<data[i].color<<endl;
//		}
//	}		
//	return 0;
//}

//=============================================================================================================================================

//													LAB TASK 4:

//#include<iostream>
//using namespace std;
//struct phone
//{
//	int areaCode;
//	int exchangeCode;
//	int phoneNumber;
//};
//int main()
//{
//	phone myNumber;
//	phone yourNumber;
//	myNumber.areaCode=212;
//	myNumber.exchangeCode=767;
//	myNumber.phoneNumber=8900;
//	cout<<"Enter your Area code:";
//	cin>>yourNumber.areaCode;
//	cout<<"Enter your Exchange code:";
//	cin>>yourNumber.exchangeCode;
//	cout<<"Enter your Phone number:";
//	cin>>yourNumber.phoneNumber;
//	cout<<"My Number is:"<<"("<<myNumber.areaCode<<")"<<myNumber.exchangeCode<<"-"<<myNumber.phoneNumber<<endl;
//	cout<<"Your Number is:"<<"("<<yourNumber.areaCode<<")"<<myNumber.exchangeCode<<"-"<<myNumber.phoneNumber<<endl;
//	return 0;
//}

//=============================================================================================================================================

//												LAB TASK 5:

//#include<iostream>
//using namespace std;
//struct point
//{
//	int x;
//	int y;
//};
//int main()
//{
//	point p1[3];
//	for(int i=0; i<2; i++)
//	{
//		cout<<"Enter The x-axis:";
//		cin>>p1[i].x;
//		cout<<"Enter the y-axis:";
//		cin>>p1[i].y;
//	}
//	p1[2].x=p1[0].x+p1[1].x;
//	p1[2].y=p1[0].y+p1[1].y;
//	cout<<"The sum of P1 or P2 X-axis is:"<<p1[2].x<<endl;
//	cout<<"The sum of P1 or P2 Y-axis is:"<<p1[2].y;
//	return 0;
//}

//============================================================================================================================================

//												LAB TASK 6:

//#include<iostream>
//using namespace std;
//struct Distance
//{
//	int feet;
//	float inches;
//};
//struct volume
//{
//	Distance length;
//	Distance width;
//	Distance height;
//};
//int main()
//{
//	float length;
//	float width;
//	float height;
//	float vol;
//	volume room;
//	cout<<"Enter the Length of the room:";
//	cin>>room.length.feet>>room.length.inches;
//	cout<<endl;
//	cout<<"Enter the Width of the room:";
//	cin>>room.width.feet>>room.width.inches;
//	cout<<endl;
//	cout<<"Enter the height of the room:";
//	cin>>room.height.feet>>room.height.inches;
//	cout<<endl;
//	length=room.length.feet+(room.length.inches/12);
//	width=room.width.feet+(room.width.inches/12);
//	height=room.height.feet+(room.height.inches/12);
//	vol=length*width*height;
//	cout<<"The Volume of the room is:"<<vol;
//	return 0; 
//}

//=============================================================================================================================================================

//												LAB TASK 7:

//#include<iostream>
//using namespace std;
//struct employee
//{
//	int number;
//	float salary;
//};
//int main()
//{
//	employee emp[3];
//	for(int i=0; i<3; i++)
//	{
//		cout<<"Enter the "<<i+1<<" Employee number:";
//		cin>>emp[i].number;	
//		cout<<"Enter the "<<i+1<<" Employee Salary:";
//		cin>>emp[i].salary;	
//	}	
//	for(int i=0; i<3; i++)
//	{
//		cout<<"The Data of the "<<i+1<<" employee is:"<<emp[i].number+emp[i].salary<<endl;
//	}
//	return 0;
//}

//==========================================================================================================================================

//												LAB TASK 8:

//#include<iostream>
//using namespace std;
//struct date
//{
//	int month;
//	int day;
//	int year;
//};
//int main()
//{
//	date d;
//	cout<<"Enter the Month,Day,Year of your birth:";
//	cin>>d.month>>d.day>>d.year;
//	cout<<endl;
//	cout<<"The Date or month or year of your birth is:"<<d.day<<"/"<<d.month<<"/"<<d.year;
//	return 0;
//}

//============================================================================================================================================

//												LAB TASK 9:

//#include<iostream>
//using namespace std;
//struct time
//{
//	int hours;
//	int minutes;
//	int seconds;
//};
//int main()
//{
//	int totalSeconds=0;
//	time t;
//	cout<<"Enter the Hours,minutes,seconds";
//	cin>>t.hours>>t.minutes>>t.seconds;
//	cout<<endl;
//	totalSeconds=t.hours*3600+t.minutes*60+t.seconds;
//	cout<<"The total seconds are:"<<totalSeconds;	
//	return 0;
//}

//============================================================================================================================================

//												LAB TASK 10:

//#include<iostream>
//using namespace std;
//struct time
//{
//	int hours;
//	int minutes;
//	int seconds;
//};
//int main()
//{
//	int remaining=0;
//	int minutes=0;
//	int seconds=0;
//	int hours=0;
//	int totalSeconds1=0;
//	int totalSeconds2=0;
//	int total=0;
//	time first;
//	time second;
//	cout<<"Enter the hours,minutes,seconds of the first time:";
//	cin>>first.hours>>first.minutes>>first.seconds;
//	cout<<endl;
//	cout<<"Enter the hours,minutes,seconds of the second time:";
//	cin>>second.hours>>second.minutes>>second.seconds;	
//	cout<<endl;
//	totalSeconds1=first.hours*3600+first.minutes*60+first.seconds;
//	totalSeconds2=second.hours*3600+second.minutes*60+second.seconds;
//	total=totalSeconds1+totalSeconds2;
//	hours=total/3600;
//	remaining=total%3600;
//	minutes=remaining/60;
//	seconds=remaining%60;
//	cout << hours << ":" << minutes << ":" << seconds;
//	return 0;
//}

//======================================================================================================================================
