#include <bits/stdc++.h>
using namespace std;

long int fibonacci(long int n){

    if(n<2)
        return n;
    else return fibonacci(n-1) + fibonacci(n-2);

}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long int n; cin >> n;
    cout << fibonacci(n)%2017;

    return 0;
}