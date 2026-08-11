//															LAB  6:

//															TASK 1:
//#include<iostream>
//#include<fstream>
//using namespace std;
//struct sensor
//{
//	int sensorID;
//	float temperature;
//	float distance;
//	string timestamp;	
//};
//int main()
//{
//	sensor data[3];
//	for(int i=0; i<3; i++)
//	{
//		cout<<"Enter "<<i+1<<" Sensor ID:";
//		cin>>data[i].sensorID;
//		cout<<endl;
//		cout<<"Enter "<<i+1<<" Sensor Temperature:";
//		cin>>data[i].temperature;
//		cout<<endl;
//		cout<<"Enter "<<i+1<<" Sensor Distance:";
//		cin>>data[i].distance;
//		cout<<endl;
//		cin.ignore();
//		cout<<"Enter "<<i+1<<" Sensor Timestamp:";
//		getline(cin,data[i].timestamp);
//		cout<<endl;
//	}
//	ofstream file;
//	file.open("Sensor_log.txt");
//	if(!file)
//	{
//		cout<<"The File is not Opened!!"<<endl;
//		return 1;
//	}
//	for(int i=0; i<3; i++)
//	{
//		file<<i+1<<"++++++++Sensor Data++++++++"<<endl;
//		file<<"Sensor ID:"<<data[i].sensorID<<endl;
//		file<<"Sensor Temperature:"<<data[i].temperature<<endl;
//		file<<"Sensor Distance:"<<data[i].distance<<endl;
//		file<<"Sensor Timestamp:"<<data[i].timestamp<<endl;
//	}
//	file.close();
//	ifstream f;
//	f.open("Sensor_log.txt");
//	f.seekg(0);
//	if(!f)
//	{
//		cout<<"The File is not Opened!"<<endl;
//		return 1;
//	}
//	string line;
//	while(getline(f,line))
//	{
//		cout<<line<<endl;	
//	}
//	return 0;
//}

//===============================================================================================================================================

//															TASK 2:

//#include<iostream>
//#include<fstream>
//using namespace std;
//struct student
//{
//	int studentRollNo;
//	string name;
//	string section;
//	float cgpa;
//};
//int main()
//{
//	student data[2];
//	for(int i=0; i<2; i++)
//	{
//		
//		cout<<"Enter the Roll number of the "<<i+1<<" Student:";
//		cin>>data[i].studentRollNo;
//		cin.ignore();
//		cout<<endl;
//		cout<<"Enter the Name of the "<<i+1<<" Student:";
//		getline(cin,data[i].name);
//		cout<<endl;
//		cout<<"Enter the Section of the"<<i+1<<" Student:";
//		getline(cin,data[i].section);
//		cout<<endl;
//		cout<<"Enter the CGPA of the "<<i+1<<" Student:";
//		cin>>data[i].cgpa;
//		cout<<endl;
//	}
//	ofstream file;
//	file.open("Student.txt");
//	if(!file)
//	{
//		cout<<"File is not Opened!";
//		return 1;
//	}
//	for(int i=0; i<2; i++)
//	{
//		file<<i+1<<"========Student Data========	"<<endl;
//		file<<"Student Roll Number:"<<data[i].studentRollNo<<endl;
//		file<<"Student Name:"<<data[i].name<<endl;
//		file<<"Student Section:"<<data[i].section<<endl;
//		file<<"Student CGPA:"<<data[i].cgpa<<endl;
//	}
//	file.close();
//	ifstream f;
//	f.open("Student.txt");
//	if(!f)
//	{
//		cout<<"The File is Not Opened!";
//	}
//	string line;
//	while(getline(f,line))
//	{
//		cout<<line<<endl;
//	}
//	f.close();
//	ofstream file2("Student.txt",ios::app);
//	if(!file2)
//	{
//		cout<<"The File is not Opened!";
//		return 1;
//	}
//	file2<<"Total Students:2"<<endl;
//	file2.close();
//	ifstream f2("Student.txt");
//	if(!f2)
//	{
//		cout<<"The File is not Opened!";
//		return 1;
//	}
//	string line2;
//	while(getline(f2,line2))
//	{
//		cout<<line2<<endl;
//	}
//	file2.close();
//	return 0;
//}

//============================================================================================================================================

//														TASK 3:

//#include<iostream>
//#include<fstream>
//using namespace std;
//struct bank
//{
//	string name;
//	int accountNumber;
//	int currentBalance;
//	int *deposit;
//};
//int main()
//{
//	int n=1;
//	bank data[5];
//	for(int i=0; i<5; i++)
//	{
//		cout<<"Enter the Name of the "<<i+1<<" Account Holder:";
//		cin.ignore();
//		getline(cin,data[i].name);
//		cout<<endl;
//		cout<<"Enter the Account number of the "<<i+1<<" Account Holder:";
//		cin>>data[i].accountNumber;
//		cout<<endl;
//		cout<<"Enter the Current Balance of the "<<i+1<<" Account Holder:";
//		cin>>data[i].currentBalance;
//		data[i].deposit=new int[30];
//		for(int j=0; j<30; j++)
//		{
//			cout<<"Enter the "<<n<<" Deposit of the Account "<<i+1<<":";
//			cin>>data[i].deposit[j];
//			cout<<endl;
//			n++;
//		}
//		n=0;
//	}
//	ofstream file;
//	file.open("details.txt");
//	if(!file)
//	{
//		cout<<"The file is not Opened!";
//		return 1;
//	}
//	for(int i=0; i<5; i++)
//	{
//		file<<i+1<<" Account Holder Name:"<<data[i].name<<endl;
//		file<<i+1<<" Account Number:"<<data[i].accountNumber<<endl;
//		file<<i+1<<" Account Current Balance:"<<data[i].currentBalance<<endl;
//		file<<"30 Deposits of "<<i+1<<" Account:"<<endl;
//		for(int j=0; j<30; j++)
//		{
//			file<<data[i].deposit[j]<<endl;
//		}
//	}
//	file.close();
//	ifstream f;
//	f.open("details.txt");
//	string line;
//	while(getline(f,line))
//	{
//		cout<<line<<endl;
//	}
//	
//	f.close();
//	cout<<"Now Displaying the accounts which current balance is more than 50,000."<<endl;
//	for(int i=0; i<5; i++)
//	{
//		if(data[i].currentBalance>50000)
//		{
//			cout<<i+1<<" Account Details:"<<endl;
//			cout<<"Account Name:"<<data[i].name<<endl;
//			cout<<"Account Number:"<<data[i].accountNumber<<endl;
//			cout<<"Account Current Balance:"<<data[i].currentBalance<<endl;
//			for(int j=0; j<30; j++)
//			{
//				cout<<"Deposits:"<<endl;
//				cout<<data[i].deposit[j]<<endl;
//			}
//		}
//	}
//	for(int i=0; i<5; i++)
//	{
//		delete[] data[i].deposit;
//	}
//	return 0;
//}

//============================================================================================================================

//											HOME TASKS 
//											HOME TASK 1:

//#include<iostream>
//#include<fstream>
//#include<cmath>
//using namespace std;
//struct robot
//{
//	int waypoint_id;
//	int x;
//	int y;
//	int z;
//	double timestamp;
//};
//int main()
//{
//	robot data[10];
//	for(int i=0; i<10; i++)
//	{
//		cout<<"Enter the Waypoint of the "<<i+1<<" Robot:";
//		cin>>data[i].waypoint_id;
//		cout<<endl;
//		cout<<"Enter the X-Axis of the "<<i+1<<" Robot:";
//		cin>>data[i].x;
//		cout<<endl;
//		cout<<"Enter the Y-Axis of the "<<i+1<<" Robot:";
//		cin>>data[i].y;
//		cout<<endl;
//		cout<<"Enter the Z-Axis of the "<<i+1<<" Robot:";
//		cin>>data[i].z;
//		cout<<endl;
//		cout<<"Enter the Timestamp of the "<<i+1<<" Robot:";
//		cin>>data[i].timestamp;
//		cout<<endl;
//	}
//	ofstream file;
//	file.open("path_log.csv");
//	if(!file)
//	{
//		cout<<"The File is not Opened!"<<endl;
//		return 1;
//	}
//	for(int i=0; i<10; i++)
//	{
//		file<<data[i].waypoint_id<<","<<data[i].x<<","<<data[i].y<<","<<data[i].z<<","<<data[i].timestamp<<endl;
//	}
//	file.close();
//	ifstream f;
//	f.open("path_log.csv");
//	if(!f)
//	{
//		cout<<"File is not Opened!";
//		return 1;
//	}
//	string line;
//	while(getline(f,line))
//	{
//		cout<<line<<endl;
//	}
//	f.close();
//	for(int i=0; i<10; i++)
//	{
//		if(data[i].x>100)
//		{
//			cout<<i+1<<"-"<<"The Waypoint is outside the safezone!"<<endl;
//		}
//		else
//		cout<<i+1<<"-"<<"The Waypoint is Inside the Safe zone"<<endl;
//	}
//	int distancex[9];
//	int distancey[9];
//	int distancez[9];
//	for(int i=0; i<9; i++)
//	{
//		distancex[i]=data[i+1].x-data[i].x;
//		distancey[i]=data[i+1].y-data[i].y;
//		distancez[i]=data[i+1].z-data[i].z;
//	}
//	double distance[9];
//	for(int i=0; i<9; i++)
//	{
//		distance[i]=sqrt(distancex[i]*distancex[i]+distancey[i]*distancey[i]+distancez[i]*distancez[i]);
//	}
//	double dist=0;
//	for(int i=0; i<9; i++)
//	{
//		dist=distance[i]+dist;
//	}
//	double totalTime=0;
//	totalTime=data[9].timestamp-data[0].timestamp;
//	double totalSpeed=0;
//	if(totalTime!=0)
//	{
//		totalSpeed=dist/totalTime;
//	}
//	ofstream file2;
//	file2.open("path_log.csv",ios::app);
//	if(!file2)
//	{
//		cout<<"The File is not Opened!";
//		return 1;
//	}
//	file2<<"--------Summary--------"<<endl;
//	file2<<"Total Distance:"<<dist<<endl;
//	file2<<"Total Time:"<<totalTime<<endl;
//	file2<<"Total Speed:"<<totalSpeed<<endl;
//	file2.close();
//	ifstream f2;
//	f2.open("path_log.csv");
//	if(!f2)
//	{
//		cout<<"The file is not Opened!";
//		return 1;
//	}
//	string line2;
//	while(getline(f2,line2))
//	{
//		cout<<line2<<endl;
//	}
//	f2.close();
//	return 0;
//}

//=============================================================================================================================================

//													HOME TASK 2:

#include<iostream>
#include<fstream>
using namespace std;
struct robot
{
	int RobotID;
	float temperature;
	float batteryPercentage;
	float sensorReading[5];
};
int main()
{
	robot data[3];
	for(int i=0; i<3; i++)
	{
		cout<<"Enter the "<<i+1<<" Robot ID:";
		cin>>data[i].RobotID;
		cout<<endl;
		cout<<"Enter the "<<i+1<<" Robot Temperature:";
		cin>>data[i].temperature;
		cout<<endl;
		cout<<"Enter the "<<i+1<<" Robot Battery %:";
		cin>>data[i].batteryPercentage;
		cout<<endl;
		for(int j=0; j<5; j++)
		{
			cout<<"Enter the "<<j+1<<" Robot Sensor Reading No."<<i+1<<":";
			cin>>data[i].sensorReading[j];
			cout<<endl;	
		}	
	}	
	ofstream file;
	file.open("robot1_log.txt");
	if(!file)
	{
		cout<<"The file is not Opened!";
		return 1;
	}
	file<<"1 Robot Readings:"<<endl;
	file<<"Robot ID:"<<data[0].RobotID<<endl;
	file<<"Robot Temperature:"<<data[0].temperature<<endl;
	file<<"Robot Battery%:"<<data[0].batteryPercentage<<endl;
	for(int i=0; i<5; i++)
	{
		file<<"Robot "<<i+1<<" Sensor Reading:"<<data[0].sensorReading[i]<<endl;
	}
	file.close();
	ofstream file1;
	file1.open("robot2_log.txt");
	if(!file1)
	{
		cout<<"The file is not Opened!"<<endl;
		return 1;
	}
	file1<<"2-Robot Readings:"<<endl;
	file1<<"Robot ID:"<<data[1].RobotID<<endl;
	file1<<"Robot Temperature:"<<data[1].temperature<<endl;
	file1<<"Robot Battery%:"<<data[1].batteryPercentage<<endl;
	for(int i=0; i<5; i++)
	{
		file1<<"2-Robot "<<i+1<<" Sensor Reading:"<<data[1].sensorReading[i]<<endl;
	}
	file1.close();
	ofstream file2;
	file2.open("robot3_log.txt");
	if(!file2)
	{
		cout<<"File is not Opened!";
		return 1;
	}
	file2<<"3-Robot Readings:"<<endl;
	file2<<"Robot ID:"<<data[2].RobotID<<endl;
	file2<<"Robot Temperature:"<<data[2].temperature<<endl;
	file2<<"Robot Battery%:"<<data[2].batteryPercentage<<endl;
	for(int i=0; i<5; i++)
	{
		file2<<"3-Robot "<<i+1<<" Sensor Reading:"<<data[2].sensorReading[i]<<endl;
	}
	file2.close();
	ofstream mainFile;
	mainFile.open("Fleet_log.txt");
	if(!mainFile)
	{
		cout<<"File is not Opened!";
		return 1;
	}
	ifstream f;
	f.open("robot1_log.txt");
	if(!f)
	{
		cout<<"File is not Opened!.";
		return 1;
	}
	string line1;
	string line2;
	string line3;
	mainFile<<"Data of first file:"<<endl;
	while(getline(f,line1))
	{
		mainFile<<line1<<endl;
	}
	if(data[0].batteryPercentage<20)
	{
		mainFile<<"The Battery is in Critical."<<endl;
	}
	f.close();
	ifstream f2;
	f2.open("robot2_log.txt");
	if(!f2)
	{
		cout<<"The file is not Opened!.";
		return 1;
	}
	mainFile<<"Data of second File:"<<endl;
	while(getline(f2,line2))
	{
		mainFile<<line2<<endl;
	}
	if(data[1].batteryPercentage<20)
	{
		mainFile<<"The Battery is in Critical."<<endl;
	}
	f2.close();
	ifstream f3;
	f3.open("robot3_log.txt");
	if(!f3)
	{
		cout<<"File is not Opened!.";
		return 1;
	}
	while(getline(f3,line3))
	{
		mainFile<<line3<<endl;
	}
	if(data[2].batteryPercentage<20)
	{
		mainFile<<"The Battery is in Critical."<<endl;
	}
	f3.close();
	mainFile.close();
	ifstream f4;
	f4.open("Fleet_log.txt");
	string line4;
	if(!f4)
	{
		cout<<"The file is not Opened!.";
		return 1;
	}
	while(getline(f4,line4))
	{
		cout<<line4<<endl;
	}
	f4.close();
	remove("robot1_log.txt");
	remove("robot2_log.txt");
	remove("robot3_log.txt");
	return 0;
}
