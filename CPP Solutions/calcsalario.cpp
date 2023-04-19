#include <bits/stdc++.h>
using namespace std;


int horas(){
    int horas;
    cin >> horas;
    return horas;
}
double sueldoHora(){
    double sueldo;
    cin >> sueldo;
    return sueldo;
}
double calcSalario(int horas_trabajo, double sueldo_por_hora){
   double salario;
   
    if(horas_trabajo<=40){
        salario = horas_trabajo*sueldo_por_hora;
    }if( horas_trabajo<=50){
        salario = 40*sueldo_por_hora;
        salario+=((horas_trabajo-40)*sueldo_por_hora*1.5);
    }else{
        salario = 40*sueldo_por_hora+ 10*(sueldo_por_hora*1.5) + ((horas_trabajo-50)*2*sueldo_por_hora);

    }
    return salario;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int hora = horas();
    double sueldo = sueldoHora();
    
    cout << calcSalario(hora,sueldo);
    return 0;
}
