#include<iostream>
//sum of digit of number 
using namespace std;
int main()
{
int num;
cout<<"ENTER A NUMBER: ";
cin>>num;
int sum=0;
int orignal=num;
while(num>0){
    int lastdigit=num%10;
    sum +=lastdigit;
    num /=10;
}
cout<<"SUM OF DIGIT "<<orignal<<endl<<"sum ="<<sum;
return 0;
}