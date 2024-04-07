#include <iostream>
using namespace std;

int trailingZeros(int n){
    int res = 0;
    for(int i = 5; i<=n; i = i*5){
        res = n/i + res;
    }
    return res;
}

int main(){
    int x;
    cin >> x;
    cout << trailingZeros(x) << endl;

    return 0;
}