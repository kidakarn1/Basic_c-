#include<iostream>
using namespace std;
void Read(double &width,double &height,double &length);
void calc(double width,double height,double length,double &kg,double &pay_price,double area);
void print (double kg,double pay_price);
void main(){
	double width,height,length,kg,pay_price,area=0;
	Read(width,height,length);
	calc(width,height,length,kg,pay_price,area);
	print(kg,pay_price);
}
void Read(double &width,double &height,double &length){
	cout<<"width:";
	cin>>width;
	cout<<"height:";
	cin>>height;
	cout<<"length:";
	cin>>length;
}
void calc(double width,double height,double length,double &kg,double &pay_price,double area){
		area = (height*width*2)+(length*width)+(length*height*2);
		kg = (area/2.5)/5;
		pay_price = kg*180;
		cout<<area;
}
void print (double kg,double pay_price){
	cout<<"kg:"<<kg<<endl;
	cout<<"pay_price:"<<pay_price<<endl;
}
