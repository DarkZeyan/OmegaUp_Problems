#include <bits/stdc++.h>
using namespace std;

int main(){

    cin.tie(0);ios_base::sync_with_stdio(0);

    
	int a,b;
	cin >> a >> b;
	
	
	
	if(a==b){
		cout << "Nivel Optimo" << endl;
	}else if(a < b)
	{
		cout << a/a << " " << b-a << endl;	
	}else{
        cout << 2 << " " << a-b << endl;
    }

    return 0;
}