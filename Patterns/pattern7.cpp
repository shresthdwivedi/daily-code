#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char k=65;

    for(int j=0; j<n; j++)
    {
        for(int i=0; i<j+1; i++)
        {
            cout<<k;
        }
        cout<<"\n";
        ++k;
    }

    return 0;
}