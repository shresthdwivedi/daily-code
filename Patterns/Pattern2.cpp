#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int j=0; j<n; j++)
    {
        for(int i=0; i<j+1; i++)
        {
            cout<<"*";
        }
        cout <<"\n";
    }
    for(int j=n-1; j>0; j--)
    {
        for(int i=j; i>0; i--)
        {
            cout << "*";
        }
        cout << "\n";

    }

    return 0;
}