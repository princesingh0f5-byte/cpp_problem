#include<iostream>
using namespace std;
// print prime no till n
int main()
{
    int n;
    cout << "ENTER A NUMBER: ";
    cin >> n;

    for(int i = 2; i <= n; i++)
    {
        bool isPrime = true;

        for(int j = 2; j < i; j++)
        {
            if(i % j == 0)
            {
                isPrime = false;
                break;
            }
        }

        if(isPrime)
        {
            cout << i << endl;
        }
    }

    return 0;
}