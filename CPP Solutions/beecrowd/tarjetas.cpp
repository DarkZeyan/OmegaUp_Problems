#include <bits/stdc++.h>
using namespace std;

long mcm(long, long);

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int intercambios[n];
    memset(intercambios,0,sizeof(intercambios));
    for (int i = 0; i < n; i++)
    {
        long a, b;
        cin >> a >> b;
        if (a > b)
            intercambios[i] = mcm(a, b);
        else
            intercambios[i]=mcm(b, a);
    }
    for(int i=0; i<n; i++){
        cout << intercambios[i] << endl;
    }
    return 0;
}
long mcm(long a, long b)
{
    if (b == 0)
        return a;
    else
        return mcm(b, a % b);
}