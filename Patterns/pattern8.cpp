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
        for(int i=0; i<j+1; i++)
        {
            char a=65;
            a+=i;
            cout<<a;
        }
        for(int i=j-1; i>=0; i--)
        {
            char a=65;
            a+=i;
            cout<<a;
        }
        cout<<"\n";
    }
    return 0;
}   