#include<iostream>
#include<string>
using namespace std;
int main (){
	string full_name,subject_name,subject_name1,grade;
	int sub_number,scroe;
	cout<<"FULL_NAME:";
	cin>>full_name;
	cout<<"SUB_NUMBER:";
	cin>>sub_number;
	for(int i=1;i<=sub_number;i++){
			cout<<"subject_name:";
			cin>>subject_name[i];
			subject_name1+=subject_name[i]+"\n";
			//cout<<subject_name1<<endl;
	}
		for (int k=1;k<=sub_number;k++){
			cout<<"scroe:";
			cin>>scroe;
			if (scroe>=80 && scroe<=100){ grade+=subject_name[k]+" = GRADE A \n";}
			else if (scroe>=65 && scroe<=79){ grade+=subject_name[k]+" = GRADE B+ \n";}
			else if (scroe>=70 && scroe<=74){ grade+=subject_name[k]+" = GRADE B \n";}
			else if (scroe>=65 && scroe<=69){ grade+=subject_name[k]+" = GRADE C+ \n";}
			else if (scroe>=60 && scroe<=64){ grade+=subject_name[k]+" = GRADE C \n";}
			else if (scroe>=55 && scroe<=59){ grade+=subject_name[k]+" = GRADE D+ \n";}
			else if (scroe>=50 && scroe<=54){ grade+=subject_name[k]+" = GRADE D \n";}
			else if (scroe>=0 && scroe<=49){  grade+=subject_name[k]+" = GRADE F \n";}
			else {
			cout<<"NO SCROE";
			}
		}
	cout<<full_name<<endl<<" "<<grade;
	system("pause");
	return 0;
}
