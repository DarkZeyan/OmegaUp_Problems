#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(0);cin.tie(0);

    double a,b,c;

    cin >> a >> b >> c;

    double media = (a*2+b*3+c*5)/(2+3+5);

    cout << "MEDIA = "<< fixed << setprecision(1) << media << endl;


    return 0;
}