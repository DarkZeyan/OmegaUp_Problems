#include <bits/stdc++.h>
using namespace std;

bool esPrimo(int num){
    int contdiv = 0;
    for(int i=1; i<=num; i++){
        if(num%i==0){
            contdiv++;
        }
    }
    if(contdiv==2) return true;
    return false;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    if(esPrimo(n)) cout << "SI";
    else cout << "NO";
}