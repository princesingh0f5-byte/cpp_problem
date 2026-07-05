//Question 2 : WAP to print the multiplication table of a number, entered by the user.
#include<iostream>
using namespace std;
int main()
{
int num;
cout<<"ENTER A NUMBER :";
cin>>num;
cout<<"........TABLE OF "<<num<<"........."<<endl;
for(int i=1;i<=10;i++){
    cout<<num<<"*"<<i<<"="<<num*i<<endl;
}
return 0;
}