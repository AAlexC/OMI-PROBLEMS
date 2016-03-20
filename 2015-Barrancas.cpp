#include <iostream>
#include <algorithm>
#define OP cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;
int x[50500];
int n, k, ultimo, suma;
int main(){
OP;
		cin >> n >> k;
		ultimo = -200000;
		suma = 0;
		for(int i=0; i<n;i++) cin>> x[i];
		int po, resta;
		for(int i=0; i<n;i++){//para evitar desbordarse
  				if(i>=k-1){ //Ya tenemos para restarle
				if(suma > ultimo) ultimo = suma; //Vista máxima
				po = i-(k-1);//posicion inicial
   if(x[po] > x[po+1]) resta = x[po+1] - x[po] ;
        else resta = abs(x[po+1] - x[po]);
				if(resta > 0) suma = suma -  resta;
						else if (resta < 0) suma = suma - resta; 
        }
            if(x[i] > x[i+1]) suma += x[i+1] - x[i] ;
            else suma += abs(x[i+1] - x[i]);
    }
cout << ultimo <<"\n";
    return 0;
}
