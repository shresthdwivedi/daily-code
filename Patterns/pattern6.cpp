#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int j=0; j<n; j++)
    {
        for(int i=0; i<j; i++)
        {
            char k=i+65;
            cout<<k;
        }
        cout<<"\n";
    }

    return 0;
}