#include<iostream>
using namespace std;
int main(){
	int number,check=0,sum=0,total=0;
		cout<<"==========================="<<endl;
		cout<<"Program Calculate Number"<<endl;
		cout<<"==========================="<<endl;
		cout<<"Enter Number";
		cin>>number;
			while(number){
				check*=10;
				check=number%10;
				sum=sum*10+check;
				number/=10;
			}
			while(sum){
				check*=10;
				check=sum%10;
				sum/=10;
				total+=check;
				cout<<check;
				if(sum%10!=0){
					cout<<"+";
				}				
			}
			cout<<"="<<total;	
//				cout<<sum<<endl;	
//		cout<<"="<<sum;
//cout<<endl;
//						while(sum){
//				check*=10;
//				check=sum%10;
//				sum/=10;
//				total+=sum;
////				cout<<check;
//					if(number%10!=0){
//						cout<<"+";
//					}
//				}
return 0 ;
}
