#include<iostream>
#include<string>
using namespace std;
void  menu (int &number_menu,int number,int *total,int customer,string *product_buy,int &count,int *price,string *product,int *quantity,int *quantity_total);
void read_number (int number_menu,int &number,int *total,int customer,string product[],int price[],string *product_buy,int *quantity,int &count,int *quantity_total);
void calc(int number_menu,int number,int *total,int customer,string *product_buy,string product[],int *quantity,int &count,int price[],int *quantity_total);
void print_report_customer (int number_menu,int number,int total[],int customer,string product[],int price[],string product_buy[],int quantity[],int &count,int quantity_total[]);
void check_report(int number_menu,int number,int total[],int customer,string product[],int price[],string product_buy[],int quantity[],int count,int number_product,int quantity_total[]);
void report_by_total_sales(string product[],int quantity[],int total[],int quantity_total[],int price[],int count);
int main (){
	int number_menu=0,number=0,total[6],customer,count=0,
	quantity_total[6]={0,0,0,0,0,0},quantity[6]={0,0,0,0,0,0},
	price[]={120,100,90,150,80,50};
	string product_buy[6],
	product[]={"Product A","Product B","Product C","Product D","Product E","Product F"};	
	menu(number_menu,number,total,customer,product_buy,count,price,product,quantity,quantity_total);
return 0;
}
	void  menu (int &number_menu,int number,int *total,int customer,string *product_buy,int &count,int *price,string *product,int *quantity,int *quantity_total){
		cout<<"-------------------------"<<endl;
		cout<<"Item No."<<"|"<<"   Item"<<"  |"<<"Price"<<"|"<<endl;
		cout<<"-------------------------"<<endl;
		for (int i=0;i<6;i++){
		cout<<"   "<<i+1<<"    |"<<product[i]<<"|"<<price[i]<<endl;
	 	}
	 	cout<<"   0\t"<<"|"<<"EXIT     "<<"|"<<"    "<<endl;
	 	cout<<"NUMBER_MENU:";
		cin>>number_menu;
		read_number(number_menu,number,total,customer,product,price,product_buy,quantity,count,quantity_total);
	}
	void read_number (int number_menu,int &number,int *total,int customer,string product[],int price[],string *product_buy,int *quantity,int &count,int *quantity_total){
		if (number_menu>=1 and number_menu<=6){
		cout<<"number:";
		cin>>number;
		calc(number_menu,number,total,customer,product_buy,product,quantity,count,price,quantity_total);
		}
		else{
		print_report_customer(number_menu,number,total,customer,product,price,product_buy,quantity,count,quantity_total);
		}
	}
	void calc(int number_menu,int number,int *total,int customer,string *product_buy,string product[],int *quantity,int &count,int price[],int *quantity_total){
			switch (number_menu){
			case 1: total[0]+=120*number;
					if (quantity[0]==0){
						product_buy[0]=product[0];
						quantity[0]+=number;
						quantity_total[0]+=quantity[0];
					}
					else{
						quantity[0]+=number;
						//cout<<"number"<<" "<<count[0]<<" = "<<number;
					}
								menu(number_menu,number,total,customer,product_buy,count,price,product,quantity,quantity_total);
				break;
			case 2: total[1]+=100*number;
					if (quantity[1]==0){
						product_buy[1]=product[1];
						quantity[1]+=number;
						quantity_total[1]+=quantity[1];
					}
					else{
						quantity[1]+=number;
						//cout<<"quantity"<<" "<<quantity[1];
					}
								menu(number_menu,number,total,customer,product_buy,count,price,product,quantity,quantity_total);
				break;
			case 3: total[2]+=90*number;
					if (quantity[2]==0){
						product_buy[2]=product[2];
						quantity[2]+=number;
						quantity_total[2]+=quantity[2];
					}
					else{
						quantity[2]+=number;
						cout<<"quantity"<<" "<<quantity[2];
					}
						menu(number_menu,number,total,customer,product_buy,count,price,product,quantity,quantity_total);
				break;
			case 4: total[3]+=150*number;
					if (quantity[3]==0){
						product_buy[3]=product[3];
						quantity[3]+=number;
						quantity_total[3]+=quantity[3];
					}
					else{
						quantity[3]+=number;
						//cout<<"number"<<" "<<count[3]<<" = "<<number;
					}
							menu(number_menu,number,total,customer,product_buy,count,price,product,quantity,quantity_total);
				break;
			case 5: total[4]+=80*number;
					if (quantity[4]==0){
						product_buy[4]=product[4];
						quantity[4]+=number;
						quantity_total[4]+=quantity[4];
					}
					else{
						quantity[4]+=number;
					//	cout<<"number"<<" "<<count[4]<<" = "<<number;
					}
						menu(number_menu,number,total,customer,product_buy,count,price,product,quantity,quantity_total);
				break;
			case 6: total[5]+=50*number;
						if (quantity[5]==0){
						product_buy[5]=product[5];
						quantity[5]+=number;
						quantity_total[5]+=quantity[5];
					}
					else{
						quantity[5]+=number;
					//	cout<<"number"<<" "<<count[5]<<" = "<<number;
					}
					 		menu(number_menu,number,total,customer,product_buy,count,price,product,quantity,quantity_total);
				break;
			default:
				cout<<"ERROR";
					 		menu(number_menu,number,total,customer,product_buy,count,price,product,quantity,quantity_total);
				break;
			}
		}
	void print_report_customer (int number_menu,int number,int total[],int customer,string product[],int price[],string product_buy[],int quantity[],int &count,int quantity_total[]){
		int number_check_report;
		cout<<"----------------------------"<<endl;
		cout<<" Report By Customer No:"<<customer<<endl;
		cout<<"----------------------------"<<endl;
		cout<< "Item"<<"      |"<<"Quantity"<<"|"<<"Total salary"<<endl;
		int number_product=0;
		int total_of_sum=0;
		for (int i=0;i<6;i++){
			if (quantity[i]!=0){
				number_product+=quantity[i];
			int sum=price[i]*quantity[i];
				total_of_sum+=sum;
			cout<<product_buy[i]<<" |  "<<quantity[i]<<"     |  "<<sum<<endl;
			quantity[i]=0;
		}
	}
	if (quantity[0]==0){
	count+=1;
	}
	cout<<"Total     |  "<<number_product<<"     |  "<<total_of_sum;
	cout<<endl<<"-------------------------"<<endl;
	cout<<"1 buy product"<<endl;
	cout<<"2 Report By Total Sales"<<endl;
	cout<<"number:";
	cin>>number_product;
	check_report(number_menu,number,total,customer,product,price,product_buy,quantity,count,number_product,quantity_total);
	}
	void check_report(int number_menu,int number,int total[],int customer,string product[],int price[],string product_buy[],int quantity[],int count,int number_product,int quantity_total[]){
		switch(number_product){
			case 1:	
							menu(number_menu,number,total,customer,product_buy,count,price,product,quantity,quantity_total);
				break;
			case 2:
					report_by_total_sales(product,quantity,total,quantity_total,price,count);
				break;
		}
	}
	void report_by_total_sales(string product[],int quantity[],int total[],int quantity_total[],int price[],int count){
		cout<<"----------------------------"<<endl;
		cout<<"Summary Report By Total Sales \n  Total Customer_persons:"<<endl;
		cout<<"----------------------------"<<endl;
		cout<< "Item"<<"      |"<<"Quantity"<<"|"<<"Total salary"<<endl;
		int all_quantity=0,
			all_total=0;
		for (int i=0;i<6;i++){
			all_quantity+=quantity_total[i];
			all_total+=quantity_total[i]*price[i];
		cout<<product[i]<<" |  "<<quantity_total[i]<<"     |  "<<quantity_total[i]*price[i]<<endl;
	}
	cout<<"Total     |  "<<all_quantity<<"     |  "<<all_total;
	cout<<endl<<"-------------------------"<<endl;
	cout<<"peplo:"<<count;
	}
