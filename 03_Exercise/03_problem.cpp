#include<iostream>
//print reverse order of number
using namespace std;
int main()
{
int num;
cout<<"ENTER A NUMBER: ";
cin>>num;
int sum=0;
int result=0;
while(num>0){
    int last_digit=num%10;
    result=result*10+last_digit;
    num /=10;
}
cout<<"PRINT DIGIT IN REVERSE ORDER"<<" "<<result;
return 0;
}