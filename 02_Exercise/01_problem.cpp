#include<iostream>
using namespace std;
// Question 1 : Write a C++ program to get a number from the user and print whether 
// it's positive, negative or zero.
int main()
{
int num;
cout<<"ENTER A NUMBER: ";
cin>>num;
if(num>0){
    cout<<"positive number";
}
else if (num<0){
    cout<<"negative number";
}
else{
    cout<<"number is zero";
}
return 0;
}