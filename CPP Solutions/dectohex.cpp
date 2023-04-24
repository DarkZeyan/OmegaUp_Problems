#include <bits/stdc++.h>
#include <cstring>
using namespace std;


string rvrs(string hex){
    string temp="";
    for(int i = hex.length() - 1; i>=0; i--){
        temp+=hex[i];
    }
    return temp;
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long n;
    cin >> n;
    string hex="";

    while(n!=0){
        switch(n%16){
        case 1:
            hex+="1";
            break;
        case 2:
            hex+="2";
            break;
        case 3:
            hex+="3";
            break;
        case 4:
            hex+="4";
            break;
        case 5:
            hex+="5";
            break;
        case 6:
            hex+="6";
            break;
        case 7:
            hex+="7";
            break;
        case 8:
            hex+="8";
            break;
        case 9:
            hex+="9";
            break;
        case 10:
            hex+="a";
            break;
        case 11:
            hex+="b";
            break;
        case 12:
            hex+="c";
            break;
        case 13:
            hex+="d";
            break;
        case 14:
            hex+="e";
            break;
        case 15:
            hex+="f";
            break;
        default:
            hex+="0";
            break;
    }
        n/=16;
    }



    cout << rvrs(hex);


    return 0;
}