/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
     int check=0,total=0;
     long long int number=0;
     srand(time(NULL));
    cout<<"NUMBER:";
    cin>>number;
    while(number){
        check=number%10;
        total+=check;
        number/=10;
    }
         cout<<"total_id_student ="<<total<<endl;  
		 total+=1;  
  for (int i=0;i<5;i++){
            number=(rand()%total);
            cout<<number<<" ";
    }
    return 0;
}

