//													LAB TASK 1:

//#include<iostream>
//using namespace std;
//struct Result
//{
//	int marks;
//	char grade;	
//};
//struct Record
//{
//	int roll_number;	
//	Result result;
//};
//int main()
//{
//	Record student;
//	cout<<"Enter the student Roll.No:";
//	cin>>student.roll_number;
//	cout<<endl;
//	cout<<"Enter the marks of the student:";
//	cin>>student.result.marks;
//	cout<<endl;
//	cout<<"Enter your Grade:";
//	cin>>student.result.grade;
//	cout<<endl;
//	cout<<"The Roll.number is:"<<student.roll_number<<endl;
//	cout<<"The marks are:"<<student.result.marks<<endl;
//	cout<<"The Grade is:"<<student.result.grade<<endl;
//	return 0;
//}

//================================================================================================================================================

//															LAB TASK 2:

//#include<iostream>
//using namespace std;
//struct Data
//{
//	string Name;
//	string Color;
//};
//struct Car
//{
//	int model;
//	int topSpeed;
//	int Number_of_gears;	
//	Data data;
//};
//int main()
//{
//	Car car;
//	cout<<"Enter the Name of your car:";
//	cin>>car.data.Name;
//	cout<<endl;
//	cout<<"Enter the color of the car:";
//	cin>>car.data.Color;
//	cout<<endl;
//	cout<<"Enter the Model of the car:";
//	cin >>car.model;
//	cout<<endl;
//	cout<<"Enter the Top speed of the car:";
//	cin>>car.topSpeed;
//	cout<<endl;
//	cout<<"Enter the Number of gears in your car:";
//	cin>>car.Number_of_gears;
//	cout<<endl;	
//	if (car.topSpeed>200 && car.Number_of_gears>4)
//	{
//		cout<<"Your car is Eligible for race and details of car are:"<<endl;
//		cout<<"The car Name is:"<<car.data.Name<<endl;
//		cout<<"The Color of the car is:"<<car.data.Color<<endl;
//		cout<<"The number of gears in car is:"<<car.Number_of_gears<<endl;
//		cout<<"The Model of the car is:"<<car.model<<endl;
//		cout<<"The Top speed of the car is:"<<car.topSpeed<<endl;
//	}
//	else
//	cout<<"Sorry Your car is not Eligible for the race.";
//	return 0;
//}

//=============================================================================================================================================

//																LAB TASKS 3:

//#include<iostream>
//using namespace std;
//struct Complex
//{
//	int Real;
//	int Imaginary;	
//};
//void addition(Complex number1,Complex number2)
//{
//	int addition1=0;
//	addition1=number1.Real+number2.Real;
//	int addition2=0;
//	addition2=number1.Imaginary+number2.Imaginary;
//	cout<<"The addition of both Real numbers are:"<<addition1<<endl;
//	cout<<"The Addition of both Imaginary numbers are:"<<addition2<<endl;
//}
//void subtraction(Complex number1,Complex number2)
//{
//	int subtraction1=0;
//	subtraction1=number1.Real-number2.Real;
//	int subtraction2=0;
//	subtraction2=number1.Imaginary-number2.Imaginary;
//	cout<<"The Subtraction of Real numbers are:"<<subtraction1<<endl;
//	cout<<"The Subtraction of both Imaginary numbers are:"<<subtraction2<<endl;
//}
//void multiply(Complex number1,Complex number2)
//{
//	int multiply1;
//	multiply1=number1.Real*number2.Real;
//	int multiply2;
//	multiply2=number1.Real*number2.Imaginary;
//	cout<<"The Multiplication of both numnbers are:"<<multiply1<<endl;
//	cout<<"The Multiplication of both Imaginary numbers are:"<<multiply2;
//}
//int main()
//{
//	Complex number1;
//	Complex number2;
//	cout<<"Enter the first number for the real part:";
//	cin>>number1.Real;
//	cout<<endl;
//	cout<<"Enter the second number for the real part:";
//	cin>>number2.Real;
//	cout<<endl;
//	cout<<"Enter the first number for the Imaginary part:";
//	cin>>number1.Imaginary;
//	cout<<endl;
//	cout<<"Enter the second number for the Imaginary part:";
//	cin>>number2.Imaginary;
//	cout<<endl;
//	addition(number1,number2);
//	subtraction(number1,number2);
//	multiply(number1,number2);
//	return 0;
//}

//===============================================================================================================================================================

//														LAB TASKS 4:

//#include<iostream>
//using namespace std;
//
//struct Author
//{
//	string name;
//	string nationality;
//};
//
//struct Book
//{
//	string title;
//	string ISBN;
//	double price;
//	int publicationYear;
//	Author author;
//};
//
//int main()
//{
//	Book data[3];
//
//	for(int i=0; i<3; i++)
//	{
//		cout<<"Enter nationality of the "<<i+1<<" book author: ";
//		getline(cin, data[i].author.nationality);
//		cout<<endl;
//		cout<<"Enter title of "<<i+1<<" book: ";
//		getline(cin, data[i].title); 
//		cout<<endl;
//		cout<<"Enter the ISBN of the "<<i+1<<"book:";
//		getline(cin, data[i].ISBN);
//		cout<<endl;
//		cout<<"Enter price of the "<<i+1<<"book:";
//		cin>>data[i].price;
//		cout<<endl;
//		cout<<"Enter publication year of the"<<i+1<<"book: ";
//		cin>>data[i].publicationYear;
//		cout<<endl;
//		cin.ignore(); 
//	}
//
//	for(int i=0; i<3; i++)
//	{
//		if(data[i].publicationYear > 2015)
//		{
//			cout<<"The Title of the "<<i+1<<"book is:"<<data[i].title<<endl;
//			cout<<"The Nationality of "<<i+1<<"the book is:"<<data[i].author.nationality<<endl; 
//			cout<<"The ISBN number of the "<<i+1<<"book is:"<<data[i].ISBN<<endl;
//			cout<<"The Price of the "<<i+1<<"book is:"<<data[i].price<<endl;
//			cout<<"The publition Year of the "<<i+1<<"book is: "<<data[i].publicationYear<<endl;
//		}
//	}
//
//	return 0;
//}

//============================================================================================================================================

//													LAB TASK 5:

//#include<iostream>
//using namespace std;
//struct student
//{
//	string name;
//	int rollNo;
//	int marks[3];
//	float gpa;
//};
//void calculateGPA(student &s)
//{
//	int sum=0;
//	double average=0;
//	for(int i=0; i<3; i++)
//	{
//		sum=sum+s.marks[i];
//	}
//	average=sum/3;
//	s.gpa=average/10;
//}
//void displayStudent(student s)
//{
//	cout<<"The Name :"<<s.name<<endl;
//	cout<<"The Roll number :"<<s.rollNo<<endl;
//	cout<<"The marks is:"<<s.marks[0]<<" "<<s.marks[1]<<" "<<s.marks[2]<<endl;
//	cout<<"The GPA is:"<<s.gpa<<endl;
//}
//int main()
//{
//	student data;
//	student data2;
//	cout<<"--Student 1---"<<endl;
//	cout<<"Enter the name of the student:";
//	getline(cin,data.name);
//	cout<<endl;
//	cout<<"Enter the roll number of the student:";
//	cin>>data.rollNo;
//	cout<<endl;
//	for(int i=0; i<3; i++)
//	{
//		cout<<"Enter the marks of the"<<i+1<<" subject:";
//		cin>>data.marks[i];
//		cout<<endl;
//	}
//	calculateGPA(data);
//	displayStudent(data);
//	cout<<"---Student 2---"<<endl;
//	cin.ignore();
//	cout<<"Enter the name of the second student:";
//	getline(cin,data2.name);
//	cout<<endl;
//	cout<<"Enter the roll number of the second student:";
//	cin>>data2.rollNo;
//	for(int i=0; i<3; i++)
//	{
//		cout<<"Enter second student marks of the "<<i+1<<" subject:";
//		cin>>data2.marks[i];
//	}
//	cout<<endl;
//	calculateGPA(data2);
//	displayStudent(data2);
//	return 0;
//}

//====================================================================================================================================================

//												LAB TASK 6:

//#include<iostream>
//using namespace std;
//struct account
//{
//	string accountNumber;
//	string holderName;
//	double balance;
//};
//void createAccount(account &s)
//{
//	int acount;
//	cout<<"Enter Account Number:";
//	cin>>s.accountNumber;
//	cout<<endl;
//	
//	cout<<"Enter holder name:";
//	cin>>s.holderName;
//	cout<<endl;
//	
//	cout<<"Enter initital balance:";
//	cin>>s.balance;
//	cout<<endl;
//}
//void deposit(account &acc)
//{
//	double amount;
//	cout<<"Enter the amount u want to deposit:";
//	cin>>amount;
//	cout<<endl;
//	acc.balance=acc.balance+amount;
//	cout<<"account:"<<acc.accountNumber<<endl;
//	cout<<"Holder:"<<acc.holderName<<endl;
//	cout<<"Deposited:"<<amount<<endl;
//	cout<<"Balance:"<<acc.balance<<endl;
//}
//void Withdrawal(account &acc)
//{
//	double amount;
//	cout<<"Enter Amount for withdrawal:";
//	cin>>amount;
//	cout<<endl;
//	
//	if(acc.balance>=amount)
//	{
//		cout<<"Withdrawal successful!"<<endl;
//		acc.balance=acc.balance-amount;
//		cout<<"Balance after Withdrawal:Rs"<<acc.balance<<endl;
//	}
//	else
//	{
//		cout<<"Insufficient Funds!"<<endl;
//		cout<<"Required: R/s"<<amount<<" | "<<" Available: Rs"<<acc.balance<<endl;	
//	}
//}
//int main()
//{
//	account data;
//
//	createAccount(data);
//	deposit(data);
//	Withdrawal(data);
//	return 0;
//}

//=============================================================================================================================================
