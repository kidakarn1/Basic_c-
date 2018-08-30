#include<iostream>
using namespace std;
int main(){
int start,end;
	for(;;){
		cout<<"========================================"<<endl;
		cout<<"Program Multiplication Table"<<endl;
		cout<<"========================================"<<endl;
		cout<<"Start";
		cin>>start;
		if (start==0)break;
		cout<<"End";
		cin>>end;
		if (end==0)break;
			if (start<=end){
				for(int i=2;i<=12;i++){
					for(int check=start;check<=end;check++){
						cout<<check<<"*"<<i<<"="<<check*i<<"\t";
					}
					cout<<endl;
				}
			}
			else {
				for(int i=2;i<=12;i++){
					for(int check=end;check<=start;check++){
						cout<<check<<"*"<<i<<"="<<check*i<<"\t";
					}
					cout<<endl;
				}
			}
			system("pause");
			system("cls");
	}
	cout<<"Exit Program";
return 0;
}
