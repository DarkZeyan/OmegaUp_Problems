#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int eventos;
    cin >> eventos;
    list<string> clientes1, clientes2, atendidos;
    int clientesRegistrados = 0;
    for (int i = 0; i < eventos; i++)
    {

        char typeEvent;
        cin >> typeEvent;

        if (typeEvent == 'E')
        {
            int numFila;

            cin >> numFila;
            string nombre;
            cin >> nombre;
            if (numFila == 1)
            {
                clientes1.push_front(nombre);
            }
            else if (numFila == 2)
            {
                clientes2.push_front(nombre);
            }
        }
        if(typeEvent == 'A'){
            int numFila;
            cin >> numFila;

            if(numFila==1 && clientes1.size()>0){
                atendidos.push_front(clientes1.front());
                clientes1.pop_front();
            }
            if(numFila==2 && clientes2.size()>0){
                atendidos.push_front(clientes2.back());
                clientes2.pop_back();
            }
        }
    }

    for( auto i:atendidos){
        cout << i << endl;
    }

    return 0;
}