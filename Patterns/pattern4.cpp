#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int j=0; j<n; j++)
    {
        for(int i=0; i<n; i++)
        {
            if(i<=j)
            cout<<i+1;
            else
            cout<<" ";
        }
        for(int i=n; i>0; i--)
        {
            if(i<=j+1)
            cout<<i;
            else
            cout<<" ";
        }
        cout<<"\n";
    }

    return 0;
}