//														LAB TASK 1:

//#include<iostream>
//using namespace std;
//struct book
//{
//	int price;
//	int id;
//	int pages;	
//};
//void input(book *data1,book *data2)
//{
//	cout<<"Enter the id of the First book:";
//	cin>>data1->id;
//
//	cout<<"Enter the price of the First book:";
//	cin>>data1->price;
//	
//	cout<<"Enter the number of pages of the first book:";
//	cin>>data1->pages;
//	
//	cout<<"Enter book 2 Id:";
//	cin>>data2->id;
//	
//	cout<<"Enter book 2 Price:";
//	cin>>data2->price;
//	
//	cout<<"Enter book 2 pages:";
//	cin>>data2->pages;
//	
//}
//int main()
//{
//	book data1;
//	book *ptr1=&data1;
//	book data2;
//	book *ptr2=&data2;
//	int user;
//	input(ptr1,ptr2);
//	cout<<"Enter 1 to print details of most expensive book otherwise press 2 to reenter the data:";
//	cin>>user;
//	if(user==1)
//	{
//		if(data1.price>data2.price)
//		{
//			cout<<"The Most costly Book 1 Price:"<<data1.price;
//		}
//		else
//			cout<<"The most costly book is 2 price:"<<data2.price;
//	}
//	if(user==2)
//	{
//		input(ptr1,ptr2);
//	}
//	return 0;
//}

//=============================================================================================================================================

//															LAB TASK 2:

//#include<iostream>
//using namespace std;
//struct citizen
//{
//	string cnicID;
//	string name;
//	string city;
//	int age;
//};
//int main()
//{	
//	citizen c;
//	citizen *ptr=&c;
//	cout<<"Enter Citizen CNIC:";
//	cin>>ptr->cnicID;
//	
//	cin.ignore();
//	cout<<"Enter Citizen Name:";
//	getline(cin,ptr->name);
//	
//	cout<<"Enter Citizen city name:";
//	getline(cin,ptr->city);
//	
//	cout<<"Enter Citizen age:";
//	cin>>ptr->age;
//	int choice;
//	cout<<"Press 1 to re enter the residence,otherwise press 0 to display the data:";
//	cin>>choice;
//	if(choice==1)
//	{
//		cin.ignore();
//		cout<<"Enter new City:";
//		getline(cin,ptr->city);
//	
//		cout<<endl;
//		cout<<"---Updated Nadra Record---"<<endl;
//		cout<<"Citizen ID:"<<ptr->cnicID<<endl;
//		cout<<"Citizen Name:"<<ptr->name<<endl;
//		cout<<"Citizen City:"<<ptr->city<<endl;
//		cout<<"Citizen Age:"<<ptr->age<<endl;
//	}
//	else
//	{
//		cout<<"Citizen CNIC ID:"<<ptr->cnicID<<endl;
//		cout<<" Citizen Name:"<<ptr->name<<endl;
//		cout<<"Citizen City:"<<ptr->city<<endl;
//		cout<<"Citizen Age:"<<ptr->age<<endl;
//	}
//	return 0;
//}

//=============================================================================================================================================

//													LAB TASK 3:

//#include<iostream>
//using namespace std;
//struct petrolPump
//{
//	string name;
//	float pricePerLitre;
//	int availableLitres;
//};
//void input(petrolPump *data)
//{
//	cout<<"Enter Petrol Pump name:";
//	cin>>data->name;
//	cout<<endl;
//	cout<<"Enter Price Per Litres:";
//	cin>>data->pricePerLitre;
//	cout<<endl;
//	cout<<"Enter available litres:";
//	cin>>data->availableLitres;
//}
//void display(petrolPump *data)
//{
//	cout<<"Petrol Pump name:"<<data->name<<endl;
//	cout<<"Petrol price per Litres:"<<data->pricePerLitre<<endl;
//	cout<<"Petrol available:"<<data->availableLitres<<endl;
//}
//int main()
//{
//	petrolPump data;
//	petrolPump *ptr=&data;
//	input(ptr);
//	display(ptr);
//	return 0;
//}

//============================================================================================================================================

//													LAB TASK 4:

//#include<iostream>
//using namespace std;
//struct Bill
//{
//	int accountNumber;
//	string ownerName;
//	int unitsConsumed;
//	float ratePerUnit;
//	float totalBill;
//};
//void input(Bill *data)
//{
//	cout<<"===LESCO BILLING SYSTEM==="<<endl;
//	cout<<"Enter Account Number:";
//	cin>>data->accountNumber;
//	cin.ignore();
//	cout<<"Enter Owner Name:";
//	getline(cin,data->ownerName);
//	
//	cout<<"Enter units consumed:";
//	cin>>data->unitsConsumed;
//	cout<<"Enter rate per unit:";
//	cin>>data->ratePerUnit;
//	cout<<endl;
//}
//void calculateBill(Bill *data)
//{
//	data->totalBill=data->ratePerUnit*data->unitsConsumed;
//	cout<<"Total Bill is:"<<data->totalBill<<endl;
//}
//void display(Bill *data)
//{
//	cout<<"===LESCO BILL==="<<endl;
//	cout<<"Account Number:"<<data->accountNumber<<endl;
//	cout<<"Owner Name:"<<data->ownerName;
//	cout<<"Units Consumed:"<<data->unitsConsumed<<endl;
//	cout<<"Rate Per Units:"<<data->ratePerUnit<<endl;
//	cout<<"Total Bill:"<<data->totalBill<<endl;
//}
//int main()
//{
//	Bill data;
//	Bill *ptr=&data;
//	input(ptr);
//	calculateBill(ptr);
//	display(ptr);
//	return 0;
//}

//============================================================================================================================================

