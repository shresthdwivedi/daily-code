#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int j=1; j<=n; j++)
    {

        for(int k=j; k>0; k--)
        {
            if(k%2==0)
            cout<<"0";
            else 
            cout<<"1";
        }
        cout<<"\n";
    }

    return 0;
}