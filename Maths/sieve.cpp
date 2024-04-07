#include<bits/stdc++.h>
using namespace std;

// void sieve(int n){
//     vector<bool> isPrime(n+1, true);
//     for(int i=2; i*i<=n; i++){
//         if(isPrime[i]){
//             for(int j=2*i; j<=n; j=j+i){
//                 isPrime[j] = false;
//             }
//         }
//     }
//     for(int i=2; i<=n; i++){
//         if(isPrime[i]){
//             cout << i << endl;
//         }
//     }

// }

// void sieve(int n){
//     vector<bool> isPrime(n+1, true);
//     for(int i=2; i*i<=n; i++){
//         if(isPrime[i]){
//             for(int j=i*i; j<=n; j=j+i){
//                 isPrime[j] = false;
//             }
//         }
//     }
//     for(int i=2; i<=n; i++){
//         if(isPrime[i]){
//             cout << i << endl;
//         }
//     }

// }

void sieve(int n) {
    vector<bool> isPrime(n+1, true);
    for(int i=2; i<=n; i++){
        if(isPrime[i]){
            cout<< i << endl;
            for(int j=i*i; j<=n; j=j+i){
                isPrime[j]=false;
            }
        }
    }
}

int main(){
    int x;
    cin >> x;
    sieve(x);
    
    return 0;
}