#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
  int num;
    cout << "Ingresa un número para verificar si pertenece a la secuencia de Fibonacci: ";
    cin >> num;

    // Calculamos la posición del número en la secuencia de Fibonacci
    int n = round(log(sqrt(5)*num)/log((1+sqrt(5))/2));

    // Verificamos si el número pertenece a la secuencia de Fibonacci
    double fib = ((pow(1+sqrt(5),n)-pow(1-sqrt(5),n))/(pow(2,n)*sqrt(5)));
    if (fib == num) {
        cout << num << " pertenece a la secuencia de Fibonacci y se encuentra en la posición " << n << endl;
    } else {
        cout << num << " no pertenece a la secuencia de Fibonacci" << endl;
    }

   
    return 0;

}
