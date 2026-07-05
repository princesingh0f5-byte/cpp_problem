#include<iostream>
//sum of odd digit of  number
using namespace std;
int main()
{
int num;
cout<<"ENTER A NUMBER: ";
cin>>num;
int sum=0;
int original=num;
while(num>0){
    int last_digit=num%10;
    if(last_digit%2 !=0){
        sum +=last_digit;
    }
    num /=10;
}
cout<<"SUM OF ODD DIGIT OF NUMBER "<<original<<endl<<"SUM="<<sum;
return 0;
}