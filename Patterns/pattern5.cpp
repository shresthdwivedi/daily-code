#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int k=1;

    for(int j=0; j<n; j++)
    {
        for(int i=0; i<j+1; i++)
        {
            cout<<k<<" ";
            k+=1;
        }
        cout<<"\n";
    }

    return 0;
}