#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int j=n; j>0; j--)
    {
        char a=65;
        for(int i=j; i<j+1; i++)
        {
            a+=i;            
            cout<<a;

        }
        cout<<"\n";
    }
    return 0;
}