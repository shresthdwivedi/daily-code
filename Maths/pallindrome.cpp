#include <iostream>
using namespace std;

bool isPalindrome(int n){

    if(n<0 || (n!=0 && n%10==0)){
        return false;
    }
    int rev = 0;
    while(n>rev){
        rev = rev*10 + n%10;
        n = n/10;
    }
    return(n == rev || n == rev/10);
}
int main(){
    int x;
    cin >> x;
    cout << isPalindrome(x) << endl;

    return 0;
}