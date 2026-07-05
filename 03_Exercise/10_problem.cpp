// Question 5 : For a positive N , WAP that prints the first N Fibonacci numbers. 
// (Assume N >= 2) 
// Fibonacci series : 0, 1, 1, 2, 3, 5, 8, 13, 21, 34 …. 
// This is a series where each number is a sum of previous 2 numbers in the series. Eg 
// : 
// 1 = 0 + 1, 
// 2 = 1 + 1, 
// 3 = 1 + 2, 
// 5 = 2 + 3, 
// 8 = 3 + 5 & so on. 
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "ENTER N: ";
    cin >> n;

    int a = 0, b = 1;

    cout << "Fibonacci Series: ";

    for(int i = 1; i <= n; i++)
    {
        cout << a << " ";

        int next = a + b;
        a = b;
        b = next;
    }

    return 0;
}