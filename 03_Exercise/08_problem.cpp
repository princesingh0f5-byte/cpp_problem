#include<iostream>
//  WAP to input a number and check whether the number is an Armstrong 
// nuQuestionmber or not. 
using namespace std;
int main()
{
int num;
cout<<"ENTER A NUMBER :";
cin>>num;
int sum=0;
int orignal=num;
while(num>0){
    int last_digit =num%10;
    sum +=last_digit*last_digit*last_digit;
    num /=10;
}
if (sum==orignal){
    cout<<"armstrong number";
}
else{
    cout<<"not armstrong number";
}
return 0;
}