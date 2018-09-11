/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
int V,R1,R2,R3;
double RT,IT,V1,V2,V3;
    cout<<"V:";
    cin>>V;
    cout<<"R1:";
    cin>>R1;
    cout<<"R2:";
    cin>>R2;
    cout<<"R3:";
    cin>>R3;
        RT = R1+R2+R3;
        IT = V/RT;
        V1 = IT*R1;
        V2 = IT*R2;
        V3 = IT*R3;
        cout<<"V :"<<V<<endl;
        cout<<"RT :"<<RT<<endl;
        cout<<"IT :"<<IT<<endl;
        cout<<"V1:" <<V1<<endl;
        cout<<"V2:" <<V2<<endl;
        cout<<"V3:" <<V3<<endl;
        cout<<"total : "<<V1+V2+V3;
    return 0;
}
