#include<iostream>
// Question 2 : Enter cost of 3 items from the user (using float data type) - a pencil, a 
// pen and an eraser. You have to output the total cost of the items back to the user as 
// their bill. 
// (Add on : You can also try adding 18% GST tax to the items in the bill as an advanced 
// problem) 
using namespace std;
int main()
{
float pencil,pen,eraser;
float total_price,final_price,gst;
cout<<"ENTER THE COST OF PENCIL:";
cin>>pencil;
cout<<"ENTER THE COST OF PEN:";
cin>>pen;
cout<<"ENTER THE COST OF ERASER:";
cin>>eraser;
total_price=pencil+pen+eraser;
gst=0.18*total_price;
final_price=gst+total_price;
cout<<"\n...............BILL..................";
cout<<"\nTotal_cost "<<total_price;
cout<<"\nGST "<<gst;
cout<<"\nFinal_price "<<final_price;
return 0;
}