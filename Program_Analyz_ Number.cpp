#include<iostream>
using namespace std;
int main(){
	int number,check=0,Odd=0,Even=0,Zero=0;
	cout<<"============================"<<endl;
	cout<<"Program Analyze Number"<<endl;
	cout<<"============================"<<endl;
	cout<<"Number : ";
	cin>>number;
	while (number){
		check*=10;
		check=number%10;
		number/=10;
//		cout<<check<<endl;
		if (check==0){
			Zero+=1;
		}
		if (check%2==0 && check!=0){
			Even+=1;
		}
		else if (check%2!=0 && check!=0){
			Odd+=1;
		}
	}
	cout<<"Number Even :"<<Even<<endl;
	cout<<"Number Odd :"<<Odd<<endl;
	cout<<"Number Zero :"<<Zero<<endl;
	return 0;
}
