#include <iostream>
using namespace std;
bool cuarto[105][105];
int main(){
    cin.tie(0);ios_base::sync_with_stdio(0);
    int n, m, formas = 0, lugares, a, b;
    cin >> n >> m;
    cin >> lugares;
    while(lugares-->0){
    cin >> a >> b;
      cuarto[a][b]=true;
    }
    for(int i=1;i<=n;i++){
       for(int j=1;j<=m;j++){
        if( (i+1) <= n && (j+1)<= m ){
         if( !cuarto[i][j] && !cuarto[i][j+1]  && !cuarto[i+1][j] && !cuarto[i+1][j+1] ) formas++;
        }
       }
    }
	cout<<formas;
    return 0;
}
