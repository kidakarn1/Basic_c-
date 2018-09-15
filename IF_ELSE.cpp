#include<iostream>
#include<string>
using namespace std;
int main (){
	string full_name,subject_name,grade;
	int number_subject,scroe;
	cout<<"FULL_NAME :";
	cin>>full_name;
	cout<<"number_subject :";
	cin>>number_subject;
	for(int i=1;i<=number_subject;i++){
		cout<<"subject_name"<<i<<" : ";
		cin>>subject_name;
		cout<<"scroe :";
		cin>>scroe;
		if (scroe>=80 && scroe<=100){grade+=subject_name+" = GRADE IS A \n";}
		else if (scroe>=75 && scroe<=79){grade+=subject_name+" = GRADE IS B+ \n";}
		else if (scroe>=70 && scroe<=74){grade+=subject_name+" = GRADE IS B \n";}
		else if (scroe>=65 && scroe<=69){grade+=subject_name+" = GRADE IS C+ \n";}
		else if (scroe>=60 && scroe<=64){grade+=subject_name+" = GRADE IS C \n";}
		else if (scroe>=55 && scroe<=59){grade+=subject_name+" = GRADE IS D+ \n";}
		else if (scroe>=50 && scroe<=54){grade+=subject_name+" = GRADE IS D \n";}
		else{grade+=subject_name+"GRADE IS F \n";}
	}
	cout<<grade;
	return 0;
}