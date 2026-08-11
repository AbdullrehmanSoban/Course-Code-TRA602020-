//																	Home Task 1

//#include<iostream>
//using namespace std;
//int main()
//{
//	int a;
//	int b;
//	int c;
//	int d;
//	int e;
//	int *ptr[5];
//	cout<<"Enter the 1st value:";
//	cin>>a;
//	cout<<endl;
//	cout<<"Enter the 2nd value:";
//	cin>>b;
//	cout<<endl;
//	cout<<"Enter the 3rd value:";
//	cin>>c;
//	cout<<endl;
//	cout<<"Enter the 4th value:";
//	cin>>d;
//	cout<<endl;
//	cout<<"Enter the 5th value:";
//	cin>>e;
//	cout<<endl;
//	ptr[0]=&a;
//	ptr[1]=&b;
//	ptr[2]=&c;
//	ptr[3]=&d;
//	ptr[4]=&e;
//	for(int i=0; i<5; i++)
//	{
//		cout<<"This is the address of the "<<i+1<<" value:"<<ptr[i]<<endl;
//		cout<<"This is the "<<i+1<<" value:"<<*ptr[i]<<endl;
//	}
//	return 0;
//}

//----------------------------------------------------------------------------------------------------------------------------------------------------------//

//															Home Task 2:

//#include<iostream>
//using namespace std;
//int main()
//{
//	char array[50];
//	char *ptr;
//	cout<<"Please Enter whatever u want to:";
//	cin.getline(array,50);
//	ptr=&array[49];
//	for(int i=0; i<50; i++)
//	{
//		cout<<*ptr;
//		ptr--;
//	}
//	return 0;
//	
//}
