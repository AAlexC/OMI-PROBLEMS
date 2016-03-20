#include <bits/stdc++.h>
using namespace std;
#define MAXN 50005
#define llg unsigned long long int
int ciclos[MAXN];
int A[MAXN];
bool visitado[MAXN];
llg n, i, j, sig, var = 1, tam = 0, total, pos, mul = 1, r;

llg mcm(llg x, llg y){
    return ( x /__gcd(x, y)) * y;
}

int main(){
    cin.tie(0); ios_base::sync_with_stdio(0);
    cin >> n;
    for(i = 1; i <= n ; i++) cin >> A[i];
    total = 0;
    for(i = 1; i<=n; i++){
        if(not visitado[i]){
        tam = 1;
        sig = A[i];
        visitado[i] = true;
            while(sig != i){
            visitado[sig] = true;
            sig = A[sig];
            tam++;
            }
            ciclos[total++] = tam;
        }
    }
    for(i = 0; i < total;i++){
        var = mcm(var, ciclos[i]);
    }
    cout << var << "\n";
    return 0;
}
