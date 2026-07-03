#include<iostream>
// Question 5 : For any 3 digit number check whether it’s an Armstrong number or not. 
// Armstrong number is a number that is equal to the sum of cubes of its digits. 
// Eg : 371 is an armstrong number. 
// 3*3*3 + 7*7*7 + 1*1*1 = 371 
using namespace std;
int main()
{
int num;
cout<<"ENTER NUMBER: ";
cin>>num;
int orginal=num;
int num1=num%10;
num /=10;
int num2=num%10;
num /=10;
int num3=num;
int sum=num1*num1*num1+num2*num2*num2+num3*num3*num3;
if(orginal==sum){
    cout<<"is an Armstrong number";
}
else{
    cout<<"is not an Armstrong number";
}
return 0;
}