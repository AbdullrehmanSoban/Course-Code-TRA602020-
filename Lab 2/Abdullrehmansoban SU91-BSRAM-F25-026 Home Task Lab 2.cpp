//												HOME TASK 1:

//#include<iostream>
//using namespace std;
//void findMax(int *ptr,int size)
//{
//	int max=0;
//	for(int i=0; i<5; i++)
//	{
//		cout<<"Enter the "<<i+1<<" value:";
//		cin>>*ptr;
//		ptr++;
//	}
//	ptr=ptr-size;
//	max=*ptr;
//	for(int i=0; i<5; i++)
//	{
//		if(*ptr>max)
//		{
//			max=*ptr;
//		}
//		ptr++;
//	}
//	cout<<"This is the maximum value in array:"<<max;
//}
//int main()
//{
//	int size=5;
//	int array[5];
//	int *ptr1;
//	ptr1=array;
//	findMax(array,5);
//	return 0;
//}

//---------------------------------------------------------------------------------------------------------------------------------------------

//														HOME TASK 2:

//#include<iostream>
//using namespace std;
//void swapping(int *ptr,int size)
//{
//	int temp;
//	for(int i=0; i<5; i++)
//	{
//		cout<<"Enter the "<<i+1<<" value:";
//		cin>>*(ptr+i);
//	}
//	int *ptr1=ptr;
//	int *ptr2=ptr+size-1;
//	while(ptr<ptr2)
//	{
//		temp=*ptr1;
//		*ptr1=*ptr2;
//		*ptr2=temp;
//		ptr1++;
//		ptr2--;
//	}
//	cout<<"The values of array after swapping are:"<<endl;
//	for(int i=0; i<5; i++)
//	{
//		cout<<*(ptr+i)<<" ";
//	}
//}
//int main()
//{
//	int array[5];
//	int size=5;
//	swapping(array,5);	
//	return 0;
//}

//--------------------------------------------------------------------------------------------------------------------------------------------

//												HOME TASK 3:

//#include<iostream>
//using namespace std;
//void vowels(char array[25])
//{
//	cin.getline(array,25);
//	int count=0;
//	char *ptr=array;
//	while(*ptr!='\0')
//	{
//		if(*ptr=='a' || *ptr=='A' || *ptr=='E' || *ptr=='e' || *ptr=='I' || *ptr=='i' || *ptr=='o' || *ptr=='O' || *ptr=='U' || *ptr=='u')
//		{
//		count++;
//		}
//		ptr++;
//	}
//	cout<<count;
//}
//int main()
//{
//	char array[25];
//	vowels(array);
//	return 0;
//}

//--------------------------------------------------------------------------------------------------------------------------------------------

//												HOME TASK 4:

//#include<iostream>
//using namespace std;
//void myStringCopy(char *dest, char *src)
//{
//	while(*src!='\0')
//	{
//		*dest=*src;
//		src++;
//		dest++;
//	}
//	*dest='\0';
//}
//int main()
//{
//	char src[25];
//	char dest[25];
//	cout<<"Enter something u like:";
//	cin.getline(src,25);	
//	myStringCopy(dest, src);
//	cout<<"The Source String array is copied to Destination String array:";
//	char *temp=dest;
//	while(*temp!='\0')
//	{
//		cout<<*temp;
//		temp++;
//	}
//	return 0;
//}

//-------------------------------------------------------------------------------------------------------------------------------------------

//														HOME TASK 5:

#include<iostream>
using namespace std;
void bubbleSort(int *arr, int n)
{
	int temp;
	for(int i=0; i<=n-2; i++)
	{
		for(int j=0; j<=n-i-2; j++)
		{
			if(*(arr+j)>*(arr+j+1))
			{
				temp=*(arr+j);
				*(arr+j)=*(arr+j+1);
				*(arr+j+1)=temp;	
			}
		}
	}
	cout<<"The Sorted array is:";
	for(int i=0; i<5; i++)
	{
		cout<<*(arr+i)<<" ";
	}
}
int main()
{
	int n=5;
	int values[5];
	int *arr;
	arr=values;
	for(int i=0; i<5; i++)
	{
		cout<<"Enter the "<<i+1<<" value:";
		cin>>*(arr+i);
	}
	cout<<"The unsorted array is:"<<endl;
	for(int i=0; i<5; i++)
	{
		cout<<*(arr+i);
	}
	cout<<endl;
	bubbleSort(arr, n);
	return 0;
}

//--------------------------------------------------------------------------------------------------------------------------------------------

//												HOME TASK 9:

//#include<iostream>
//using namespace std;
//void inputArray(int *ptr)
//{
//	for(int i=0; i<5; i++)
//	{
//		cout<<" Enter the "<<i+1<<" value:";
//		cin>>*ptr;
//		ptr++;
//	}
//}
//void doubArray(int *ptr)
//{
//	int *ptr2=ptr;
//	for(int i=0; i<5; i++)
//	{
//		*ptr2=(*ptr2)*2;
//		ptr2++;
//	}
//	ptr2=ptr;
//	for(int i=0; i<5; i++)
//	{
//		cout<<"The "<<i+1<<" value after multiplication is:"<<*ptr2<<endl;
//		ptr2++;
//	}
//}
//int main()
//{
//	int array[5];
//	int *ptr;
//	ptr=array;
//	inputArray(array);
//	doubArray(array);
//	return 0;
//}

//--------------------------------------------------------------------------------------------------------------------------------------------

//													HOME TASK 8:

//#include<iostream>
//using namespace std;
//void primeNumber(int *ptr)
//{
//	int count=0;
//	for(int i=2; i<*ptr-1; i++)
//	{
//		if(*ptr%i==0)
//		{
//			count++;
//		}
//	}
//	if(count==0)
//	{
//		cout<<"The number is prime.";
//	}
//	else
//	cout<<"The number is not prime.";
//}
//int main()
//{
//	int num=0;
//	cout<<"Enter the value:";
//	cin>>num;
//	int *ptr=&num;
//	primeNumber(&num);
//	return 0;
//}
