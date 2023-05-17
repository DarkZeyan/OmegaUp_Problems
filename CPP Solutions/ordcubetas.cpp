#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);


    int cantidadNumeros; 
    int numCubetas;

    cin >> cantidadNumeros >> numCubetas;
    int cubetas[numCubetas];

    memset(cubetas,0,sizeof(cubetas));
    

    for(int i=0; i<cantidadNumeros; i++){
        int n; cin >> n;
        cubetas[n-1]++;
    }

    for(int i=0; i<numCubetas; i++){
        cout << i+1 << ": " << cubetas[i] << endl;
    }


    return 0;

}