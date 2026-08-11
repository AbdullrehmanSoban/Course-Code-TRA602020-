//												HOME TASK 1:

//#include<iostream>
//using namespace std;
//struct hotel
//{
//	string name;
//	int dishes;
//	float bill;	
//};
//int main()
//{
//	hotel data[3];
//	double total=0;
//	for(int i=0; i<3; i++)
//	{
//		cout<<"Enter the name of the "<<i+1<<" hotel:";
//		cin.ignore();
//		getline(cin,data[i].name);
//		cout<<endl;
//		cout<<"Enter total dishes u eat in "<<i+1<<" hotel:";
//		cin>>data[i].dishes;
//		cout<<endl;
//		cout<<"Enter the total amount of bill in "<<i+1<<" hotel:";
//		cin>>data[i].bill;
//		cout<<endl;
//	}
//	for(int i=0; i<3; i++)
//	{
//		cout<<"The 15% bill amount of "<<i+1<<" hotel is:"<<data[i].bill+(data[i].bill*15/100)<<endl;
//	}
//	for(int i=0; i<3; i++)
//	{
//	    total += data[i].bill + (data[i].bill * 15 / 100);
//	}
//	for(int i=0; i<3; i++)
//	{
//		cout<<"The record of the "<<i+1<<" Hotel is "<<endl;
//		cout<<data[i].name<<" "<<data[i].dishes<<" "<<data[i].bill<<endl;
//	}
//	cout<<"Total bill of three hotels with 15% tax is:"<<total;
//	return 0;	
//}

//===============================================================================================================================================================

//															HOME TASK 2:

//#include<iostream>
//using namespace std;
//struct person
//{
//	int salary;
//	float taxRate;
//	float tax;	
//};
//int main()
//{
//	person data[5];
//	for(int i=0; i<5; i++)
//	{
//		cout<<"Enter the "<<i+1<<" Salary:";
//		cin>>data[i].salary;
//		cout<<"Enter the Tax Rate "<<i+1<<" of your salary:";
//		cin>>data[i].taxRate;
//	}
//	for(int i=0; i<5; i++)
//	{
//		data[i].tax=(data[i].salary*data[i].taxRate)/100;
//	}
//	for(int i=0; i<5; i++)
//	{
//		cout<<"The Salary of the "<<i+1<<" Employee is:"<<data[i].salary<<endl;
//		cout<<"The Tax rate of the "<<i+1<<" Employee is:"<<data[i].taxRate<<endl;
//		cout<<"The total Tax of the "<<i+1<<" Employee is:"<<data[i].tax<<endl;
//	}
//	return 0;
//}
