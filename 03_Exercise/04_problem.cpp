#include<iostream>
// wap where user can keep entering numbers till they 
//enter a multiple of 10
using namespace std;
int main()
{
do{
int num;
cout<<"ENTER A NUMBER :";
cin>>num;
if(num%10==0){
    cout<<"YOU ENTER MULTIPLE OF 10";
    break;
}
cout<<"YOU ENTER :"<<num<<endl;
}while(true);
return 0;
}