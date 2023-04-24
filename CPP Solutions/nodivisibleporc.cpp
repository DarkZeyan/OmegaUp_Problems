#include <bits/stdc++.h>
using namespace std;


long sumatoria(int mayor,int menor, int c){
    if(mayor==menor)
        return menor;
    else
        if(mayor%c!=0)
            return  mayor+sumatoria(mayor-1,menor,c);
        else
            return  sumatoria(mayor-1,menor,c);
}


int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int numFilas;
    cin >> numFilas;
    
    long sumas[numFilas];
    memset(sumas,0,sizeof(sumas));

    for(int i=0; i<numFilas; i++){
        int a,b,c;
        cin >> a >> b >> c;

        int mayor=0, menor=0;
        if(a>b){
            mayor = a;
            menor = b;
        }else{
            mayor=b;
            menor=a;
        }

        sumas[i]+=sumatoria(mayor,menor,c);
        // for(int j=menor; j<=mayor; j++){
            
            
        //     if(j%c!=0){
        //         sumas[i]+=j;
        //     }   

            
        // }
    }

   

    for(int i=0; i<numFilas; i++)
        cout << sumas[i] << "\n";

    return 0;
}