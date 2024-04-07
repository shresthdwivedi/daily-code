#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int j=0; j<n; j++)
    {
        for(int k=n-j-1; k>0; k--)
        {
            cout<<" ";
        }
        for(int i=0; i<2*j+1; i++)
        {
            cout<<"*";
        }
        cout <<"\n";
    }
    for(int j=n; j>0; j--)
    {
        for(int k=0; k<(n-j); k++)
        {
            cout << " ";
        }
        for(int i=2*j-1; i>0; i--)
        {
            cout << "*";
        }
        cout << "\n";

    }

    return 0;
}