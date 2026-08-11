//#include<iostream>
//using namespace std;
//class person
//{
//	public:
//		string name;
//		string address;
//		person(string n,string a)
//		{
//			name=n;
//			address=a;
//			cout<<"[Paramterized constructor] for person is created."<<endl;
//		}
//		virtual void showperson()
//		{
//			cout<<"The name of the person is:"<<name<<endl;
//			cout<<"The Address of the person is:"<<address<<endl;
//		}
//};
//class employee:public person
//{
//	public:
//		int id;
//		employee(string n,string a,int i):person(n,a)
//		{
//			id=i;
//			cout<<"[Parameterized Constructor] for id is created."<<endl;
//		}
//		void showemployee()
//		{
//			person::showperson();
//			cout<<"The Employee id is:"<<id<<endl;
//		}
//};
//class manager:public employee
//{
//	public:
//		string qualification;
//		manager(string n,string a,int i,string q):employee(n,a,i)
//		{
//			qualification=q;
//			cout<<"[Parameterized constructor] for the manager is created."<<endl;
//		}
//		void showmanager()
//		{
//			employee::showemployee();
//			cout<<"The qualification is:"<<qualification<<endl;
//		}
//};
//int main()
//{
//	manager m("Abdullrehmansoban","Lahore",25,"Bachelors");
//	m.showmanager();
//	return 0;
//}

//#include<iostream>
//using namespace std;
//class person
//{
//	private:
//		string name;
//		string address;
//	public:
//		person(string n,string a)
//		{
//			name=n;
//			address=a;
//		}
//		virtual void getdata()
//		{
//			cin.ignore();
//			cout<<"Enter the name of the person:";
//			getline(cin,name);
//			cout<<"Enter the address of the person:";
//			getline(cin,address);
//		}
//		virtual void showdata()
//		{
//			cout<<"Name of the person:"<<name<<endl;
//			cout<<"Address of the person:"<<address<<endl;
//		}
//};
//class Qualification
//{
//	private:
//		string qualification;
//	public:
//		Qualification(string q)
//		{
//			qualification=q;
//		}
//		void getdataQualification()
//		{
//			cin.ignore();
//			cout<<"Enter the qualification of the person:";
//			getline(cin,qualification);
//		}
//		void showdataQualification()
//		{
//			cout<<"Qualification is:"<<qualification<<endl;
//		}
//};
//class employee:public Qualification,public person
//{
//	private:
//		int empID;
//	public:
//		employee(string n,string a, string q,int id):Qualification(q),person(n,a)
//		{
//			empID=id;
//			cout<<"[Parameterized Constructor] for the employee is created."<<endl;
//		}
//		void getdata()
//		{
//			person::getdata();
//			Qualification::getdataQualification();
//			cout<<"Enter the name of the employee id:";
//			cin>>empID;
//		}
//		void showdata()
//		{
//			person::showdata();
//			Qualification::showdataQualification();
//			cout<<"Employee id is:"<<empID<<endl;
//		}
//};
//int main()
//{
//	employee data("Abdullrehman soban","Lahore","Bahelors",255);
//	data.getdata();
//	data.showdata();
//	return 0;
//}
