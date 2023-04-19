#include <bits/stdc++.h>
using namespace std;


int max(int numbers[], int n){
    int maximum = numbers[0];
    for(int i=0; i<n; i++){
        if(numbers[i]>maximum)
            maximum = numbers[i];
    }
    return maximum;
}

int calculateMcm(int max, int numbers[],int n){
    int resultado = max;
    while(true){
        bool isDivisible=true;
        for (int i = 0; i <n; i++)
        {
            if(resultado%numbers[i]!=0){
                isDivisible=false;
                break;
            }
        }
        if(isDivisible) return resultado;
        resultado+=max;
    }
}
int main(){
       
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    int numeros[n];
    for(int i=0; i<n; i++){
        cin >> numeros[i];
    }
    int maximum = max(numeros,n);
    int resultado = calculateMcm(maximum,numeros,n);
    cout << resultado;
    
}


