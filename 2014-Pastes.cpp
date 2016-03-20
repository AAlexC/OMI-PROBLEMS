#include <stdio.h>
int main(){
    long long auxP, p, n, m, pos, r, res, auxM;
    scanf("%lli %lli", &m, &n);
    scanf("%lli", &p);
        while(p--){
        scanf("%lli", &auxP);
        r = auxP%m, pos = auxP/m;
        res = (r>0) ? ((n*m) - (n-(pos+1))) - ((r-1)*n) : ((n*m) - (n-(pos))) - ((m-1)*n);
        printf("%lli ", res);
        }
    return 0;
}
