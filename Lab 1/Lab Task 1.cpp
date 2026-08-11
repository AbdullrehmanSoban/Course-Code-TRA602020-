//															Lab Task 1

//#include<iostream>
//using namespace std;
//int main()
//{
//	int array[5];
//	int *ptr;
//	for(int i=0; i<5; i++)
//	{
//		cout<<"Enter the value for the "<<i+1<<" value:";
//		cin>>array[i];
//		cout<<endl;
//	}
//	ptr=&array[2];
//	cout<<"This is the value of the third element u entered: "<<*ptr<<endl;
//	cout<<"This is the Memory Address of the third element u entered: "<<ptr;
//	return 0;
//}

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//

//																Lab Task 2

//#include<iostream>
//using namespace std;
//int main()
//{
//	int array[]={1,2,3,4,5,6};
//	int *ptr;
//	ptr=array;
//	cout<<"This is the values printed by using pointer: "<<endl;
//	for(int i=0; i<6; i++)
//	{
//		cout<<*ptr;
//		ptr++;
//	}
//	return 0;
//}

//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//

//																lab task 3

//#include<iostream>
//using namespace std;
//int main()
//{
//	int array[5];
//	int *ptr;
//	for(int i=0; i<5; i++)
//	{
//		cout<<"Enter the value for the "<<i+1<<" value:";
//		cin>>array[i];
//		cout<<endl;
//	}
//	for(int i=0; i<5; i++)
//	{
//		ptr=&array[i];
//		cout<<"This is the address of the "<<i+1<<" value of array:"<<ptr;
//		cout<<endl;
//	}
//	return 0;	
//}

//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//

//															Lab Task 4

//#include<iostream>
//using namespace std;
//int main()
//{
//	int a;
//	int b;
//	cout<<"Enter the integer value for A: ";
//	cin>>a;
//	cout<<endl;
//	cout<<"Enter the integer value for B: ";
//	cin>>b;
//	cout<<endl;
//	int *ptrA;
//	ptrA=&a;
//	int *ptrB;
//	ptrB=&b;
//	cout<<"This is the Value of the A: "<<*ptrA<<endl;
//	cout<<"This is the memory address of the A: "<<ptrA<<endl;
//	cout<<"This is the Value of the B: "<<*ptrB<<endl;
//	cout<<"This is the memory address of the B: "<<ptrB<<endl;
//	return 0;
//}

//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//

//															Lab Task 5

//#include<iostream>
//using namespace std;
//int main()
//{
//	float array[10];
//	float *ptr;
//	for(int i=0; i<10; i++)
//	{
//		cout<<"Enter the floating value for the "<<i+1<<" value: ";
//		cin>>array[i];
//	}
//	for(int i=9; i>=0; i--)
//	{
//		ptr=&array[i];
//		cout<<*ptr<<" ";
//		
//	}
//	return 0;
//}

//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//

//															Lab Task 6

//#include<iostream>
//using namespace std;
//int main()
//{
//	char array[20];
//	char *ptr;
//	ptr=array;
//	int length=0;
//	cout<<"Enter whatever u want:"<<endl;
//	cin.getline(array,20);
//	while(*ptr!='\0')
//	{
//		length++;
//		ptr++;
//	}
//	cout<<"This is the length of the characters u entered: "<<length;
//	return 0;
//}

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//

//															Lab Task 7

//#include<iostream>
//using namespace std;
//int main()
//{
//	int array[8];
//	int *ptr;
//	ptr=&array[0];
//	int max=0;
//	for(int i=0; i<8; i++)
//	{
//		cout<<"Enter the number for the "<<i+1<<" position:";
//		cin>>array[i];
//		cout<<endl;
//	}
//for(int i=0; i<8; i++)
//{
//	if(array[i] > max)
//	{
//		max = array[i];
//		ptr = &array[i];
//	}
//}
//	cout<<"The Max value in the integral array is:"<<max;
//	return 0;
//	
//}

//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//

