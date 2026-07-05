#include<iostream>
// prime or not
using namespace std;
int main()
{
int num;
cout<<"ENTER A NUMBER :";
cin>>num;
bool isprime=true;
if(num < 2){
    cout << "not prime";
    return 0;
}
for(int i=2;i<num;i++){
    if(num%i==0){
        isprime=false;
        break;
    }
}
// output result
if(isprime){
    cout<<"prime number";
}
else{
    cout<<"not prime";
}
return 0;
}