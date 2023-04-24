#include <bits/stdc++.h>
using namespace std;

unsigned long long int factorial(unsigned long long int n);


int main(){
    
    for(int i=0; i<101; i++){
        cout << i<<"!" <<" = " << factorial(i) << "\n";
    }

};

unsigned long long int factorial(unsigned long long int n){
    if(n==0 || n==1)
        return 1;
    else return n*factorial(n-1);
}