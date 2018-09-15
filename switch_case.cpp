#include<iostream>
#include<string>
using namespace std;
int main (){
	string subject_name,full_name,grade;
	int number_subject,scroe;
	cout<<"full_name:";
	cin>>full_name;
	cout<<"subject_name :";
	cin>>subject_name;
	cout<<"scroe : ";
	cin>>scroe;
		switch(scroe){
			case 80 :
				cout<<"A"<<endl;
				break;
			case 75 :
				cout<<"B+"<<endl;
				break;
			case 70 :
				cout<<"B"<<endl;
				break;
			case 65 :
				cout<<"C+"<<endl;
				break;
			case 60 :
				cout<<"C"<<endl;
				break;
			case 55 :
				cout<<"D+"<<endl;
				break;
			case 50 :
				cout<<"D"<<endl;
				break;
			case 49 :
				cout<<"F"<<endl;
				break;
			default:
				cout<<"โปรแกรมไม่ได้ผิดพลาด เพราะ case ทำได้แค่ค่า fix ไว้ เช่น case fix 75 ไว้ พิม 76 มา ก็ไม่ทำงาน"<<endl;
				cout<<"ต้องเพิ่ม case เข้าไป ดู case 80 และ 80 เป็นตัวอย่าง ";
				break;//kidakarn_naja
			}
return 0;
}	