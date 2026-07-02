#include<iostream>
// Question 3 : Build a Simple Interest Calculator. 
// Input : principal (P), rate (R), time (T) Output : 
// (P*R*T) / 100 
using namespace std;
int main()
{
int p,r,t,s;
cout<<"ENTER PRINCIPAL AMOUNT: ";
cin>>p;
cout<<"ENTER RATE OF INTEREST: ";
cin>>r;
cout<<"ENTER TIME: ";
cin>>t;
s=(p*r*t)/100;
cout<<"SIMPLE INTEREST "<<s;
return 0;
}