#include <bits/stdc++.h>
using namespace std;
int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    double a,b ;
    cin >> a >> b;

    double media = (a*3.5+b*7.5)/(3.5+7.5);


    cout << "MEDIA = " << setprecision(5) << fixed << media << endl;


    return 0;
}