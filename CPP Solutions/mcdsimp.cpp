#include <bits/stdc++.h>
using namespace std;

long mcm(long,long);

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long a,b;
    cin >> a >> b;
    
    if(a>b)
        cout << mcm(a,b);
    else 
        cout << mcm(b,a);

    return 0;

}
long mcm(long a, long b){
    if(b==0) return a;
    else return mcm(b,a%b);
}