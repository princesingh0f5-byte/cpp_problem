#include<iostream>
// Question 2 : Write a C++ program that takes a year from the user and print whether 
// that year is a leap year or not. 
using namespace std;
int main()
{
int year;
cout<<"ENTER A LEAP YEAR(YYYY): ";
cin>>year;
if(year%400==0||year%4==0&&year%100!=0){
cout<<"leap year";
}
else{
    cout<<"not leap year";
}
return 0;
}