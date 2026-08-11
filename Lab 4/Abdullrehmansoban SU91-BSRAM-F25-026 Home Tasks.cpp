//										HOME TASKS 1:

//#include<iostream>
//using namespace std;
//struct date
//{
//	int day;
//	int month;
//	int year;
//};
//struct phonebook
//{
//	string name;
//	string city;
//	string phoneNumber;
//	date Date;
//};
//int main()
//{
//	phonebook data;
//	cout<<"Enter Day:";
//	cin>>data.Date.day;
//	cout<<endl;
//	cout<<"Enter Month:";
//	cin>>data.Date.month;
//	cout<<endl;
//	cout<<"Enter Year:";
//	cin>>data.Date.year;
//	cout<<endl;
//	cin.ignore();
//	cout<<"Enter name:";
//	getline(cin,data.name);
//	cout<<endl;
//	cin.ignore();
//	cout<<"Enter City:";
//	getline(cin,data.city);
//	cout<<endl;
//	cout<<"Enter the phone number of the user:";
//	getline(cin,data.phoneNumber);
//	cout<<endl;
//	cout<<"----------------"<<endl;
//	cout<<"DD/MM/YY:"<<data.Date.day<<"/"<<data.Date.month<<"/"<<data.Date.year<<endl;
//	cout<<"Name:"<<data.name<<endl;
//	cout<<"City:"<<data.city<<endl;
//	cout<<"Phone number:"<<data.phoneNumber<<endl;
//	return 0;
//}

//=============================================================================================================================================

//														HOME TASK 2:

//#include<iostream>
//using namespace std;
//struct Parametre
//{
//	float length;
//	float width;
//};
//struct Result
//{
//	double area;
//	double perimetre;
//};
//struct Rectangle
//{
//	Parametre parametre;
//	Result result;
//};
//int main()
//{
//	Rectangle data;
//	cout<<"Enter length:";
//	cin>>data.parametre.length;
//	cout<<endl;
//	cout<<"Enter width:";
//	cin>>data.parametre.width;
//	cout<<endl;
//	data.result.area=data.parametre.length*data.parametre.width;
//	data.result.perimetre=2*(data.parametre.length+data.parametre.width); 
//	cout<<"The length is:"<<data.parametre.length<<endl;
//	cout<<"The Width is:"<<data.parametre.width<<endl;
//	cout<<"The area is:"<<data.result.area<<endl;
//	cout<<"The perimetre is:"<<data.result.perimetre<<endl;
//	return 0;
//}

//==============================================================================================================================================

//													HOME TASK 3:

//#include<iostream>
//using namespace std;
//struct Instructor
//{
//	string name;
//	string Department;
//	
//};
//struct Course
//{
//	string courseCode;
//	string courseName;
//	int creditHours;
//	int maxSeats;
//	int enrolledStudents;
//	Instructor instructor;
//};
//void enrollStudent(Course &s)
//{
//	if(s.enrolledStudents<=s.maxSeats)
//	{
//		s.enrolledStudents++;
//	}
//	else 
//	cout<<"Sorry the seats are full."<<endl;
//}
//void displayCourse(Course s)
//{
//	cout<<"===Course Detail==="<<endl;
//	cout<<"Code:"<<s.courseCode<<endl;
//	cout<<"Name:"<<s.courseName<<endl;
//	cout<<"Credit Hours:"<<s.creditHours<<endl;
//	cout<<"Instructor:"<<s.instructor.name<<"("<<s.instructor.Department<<")"<<endl;
//	cout<<"Seats:"<<s.enrolledStudents<<"/"<<s.maxSeats<<"("<<(s.maxSeats-s.enrolledStudents)<<"Remaining)"<<endl;
//	cout<<endl;
//	cout<<endl;
//}
//int main()
//{
//	Course data;
//	Course data2;
//
//	cout<<"Enter Course Code:";
//	getline(cin,data.courseCode);
//	cout<<endl;
//	
//	cout<<"Enter the name of the Course:";
//	getline(cin,data.courseName);
//	cout<<endl;
//	
//	cout<<"Enter Credit hours:";
//	cin>>data.creditHours;
//	cout<<endl;
//	
//	cout<<"Enter the max seats:";
//	cin>>data.maxSeats;
//	cout<<endl;
//	
//	cout<<"Enter Enrolled students:";
//	cin>>data.enrolledStudents;
//	cout<<endl;
//	
//	cin.ignore();
//	cout<<"Enter Instructor Name:";
//	getline(cin,data.instructor.name);
//	cout<<endl;
//	
//	cin.ignore();
//	cout<<"Enter the department of the Instructor:";
//	getline(cin,data.instructor.Department);
//	cout<<endl;
//	
//	displayCourse(data);
//	enrollStudent(data);
//	
//	cout<<"Enter Course Code:";
//	getline(cin,data2.courseCode);
//	cout<<endl;
//	
//	cout<<"Enter the name of the Course:";
//	getline(cin,data2.courseName);
//	cout<<endl;
//	
//	cout<<"Enter Credit hours:";
//	cin>>data2.creditHours;
//	cout<<endl;
//	
//	cout<<"Enter the max seats:";
//	cin>>data2.maxSeats;
//	cout<<endl;
//	
//	cout<<"Enter Enrolled students:";
//	cin>>data2.enrolledStudents;
//	cout<<endl;
//	
//	cin.ignore();
//	cout<<"Enter Instructor Name:";
//	getline(cin,data2.instructor.name);
//	cout<<endl;
//	
//	cin.ignore();
//	cout<<"Enter the department of the Instructor:";
//	getline(cin,data2.instructor.Department);
//	cout<<endl;
//	
//	displayCourse(data2);
//	enrollStudent(data2);
//
//		
//	return 0;
//}

//==============================================================================================================================================

//														HOME TASK 4:

#include<iostream>
using namespace std;
struct date
{;

	int day,month,year;
};
struct doctor
{
	string name,specialization;
};
struct patient
{
	string patienID,name;
	int age;
	date admissionDate;
	doctor assignedDoctor;
	double dailyCharge;
};
void calculateBill(patient &s,int days)
{
	double totalBill;
	
	totalBill=s.dailyCharge*days;
	cout<<"Total bill is:"<<totalBill<<endl;
}
void displayPatientReport(patient &s,int days)
{
	 cout<<"=======Hospital Bill======="<<endl;
	 cout<<"Patient ID  :"<<s.patienID<<endl;
	 cout<<"Name        :"<<s.name<<endl;
	 cout<<"Age         :"<<s.age<<endl;
	 cout<<"Admission   :"<<s.admissionDate.day<<"/"<<s.admissionDate.month<<"/"<<s.admissionDate.year<<endl;
	 cout<<"Doctor      :"<<s.assignedDoctor.name<<endl;
	 cout<<"Specialization:"<<s.assignedDoctor.specialization<<endl;
	 cout<<"---------------------------------"<<endl;
	 cout<<"Days Admitted:"<<days<<endl;
	 cout<<"Daily Charged:"<<s.dailyCharge<<endl;
	 cout<<"Total Bill   :"<<s.dailyCharge*days<<endl;
	 cout<<"================================="<<endl;
}
int main()
{
	patient data;
	patient data2;
	int days;
	int days2;
	
	cout<<"Enter patient Name:";
	cin.ignore();
	getline(cin,data.name);
	cout<<endl;
	
	cout<<"Enter Patient ID:";
	cin.ignore();
	getline(cin,data.patienID);
	cout<<endl;
	
	cout<<"Enter Patient Age:";
	cin>>data.age;
	cout<<endl;
	
	cout<<"Enter admission data DD/MM/YY:";
	cin>>data.admissionDate.day>>data.admissionDate.month>>data.admissionDate.year;
	cout<<endl;
	
	cout<<"Enter days Admitted:";
	cin>>days;
	cout<<endl;
	
	cout<<"Enter Doctor Name or specialization:";
	cin.ignore();
	getline(cin,data.assignedDoctor.name);
	getline(cin,data.assignedDoctor.specialization);
	cout<<endl;
	
	cout<<"Enter Per day charges:";
	cin>>data.dailyCharge;
	cout<<endl;
	
	calculateBill(data,days);
	displayPatientReport(data,days);
	
	cout<<"Enter second patient Name:";
	cin.ignore();
	getline(cin,data2.name);
	cout<<endl;
	
	cout<<"Enter second Patient ID:";
	cin.ignore();
	getline(cin,data2.patienID);
	cout<<endl;
	
	cout<<"Enter second Patient Age:";
	cin>>data2.age;
	cout<<endl;
	
	cout<<"Enter admission data DD/MM/YY:";
	cin>>data2.admissionDate.day>>data2.admissionDate.month>>data2.admissionDate.year;
	cout<<endl;
	
	cout<<"Enter days Admitted:";
	cin>>days2;
	cout<<endl;
	
	cout<<"Enter Doctor Name or specialization:";
	cin.ignore();
	getline(cin,data2.assignedDoctor.name);
	getline(cin,data2.assignedDoctor.specialization);
	cout<<endl;
	
	cout<<"Enter Per day charge:";
	cin>>data2.dailyCharge;
	cout<<endl;
	
	calculateBill(data2,days2);
	displayPatientReport(data2,days2);
	
	return 0;
}
