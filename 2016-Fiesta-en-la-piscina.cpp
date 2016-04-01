#include "fiesta.h"

int BusquedaCool(int n) {
    int i, j, c = 1, suma = 1;
    if (n == 1) return 1; // Caso especial de n = 1.
    for(i = 2; i <= n; i++){
        if ( not (Preguntar(i, c) && !Preguntar(c, i) ) ) c = i;
    }
    for(i = 1; i <= n; i++){
    	if(i != c) suma += Preguntar(i, c);
    }
    if(suma == n) return c;
    return 0; // Ninguno de los dos es un chico popular.
}
