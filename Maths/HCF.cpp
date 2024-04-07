#include <iostream>
using namespace std;

// ==> Naive Solution
// int hcf(int a, int b){
//     int res = min(a,b);
//     while(res>0){
//         if(a%res==0 && b%res==0){
//             break;
//         }
//         res--;
//     }
//     return res;
// }

// ==> Basic Solution
// int hcf(int a, int b){
//     while(a!=b){
//         if(a>b){
//             a = a-b;
//         }
//         else{
//             b = b-a;
//         }
//     }
//     return a;
// }

// ==> Optimized Solution
int hcf(int a, int b){
    if (b==0){
        return a;
    }
    else {
        return hcf(b,a%b);
    }
}

int main(){
    int x, y;
    cin >> x >> y;
    cout << hcf(x,y) << endl;
    
    return 0;
}