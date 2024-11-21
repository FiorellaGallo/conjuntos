// 2. Desarrollar un algoritmo que dado dos conjuntos de elementos tipo numérico (clave)
// verifique las operaciones de Unión, Intersección, Diferencia y Pertenencia.
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "conjuntos.h"
#include "listas.h"
#include "tipo_elemento.h"
#include "validacion.h"
#include "ejercicio2.h"

Conjunto cargar_conjunto(Conjunto conjunto){
    printf("Ingrese cuantos elementos desea cargar ");
    int clave = entero_entre(0,100);
    while (getchar() != '\n');
    TipoElemento TE;
    for (int i = 1; i <= clave; i++)
    {
        printf("Ingrese clave %d ",i);
        int clavela = entero_entre(0,1000);
        while (getchar() != '\n');
        TE = te_crear(clavela);
        cto_agregar(conjunto, TE);
    }
    return conjunto;
}

int main() {

    Conjunto ConjuntoA = cto_crear();
    Conjunto ConjuntoB = cto_crear();
    Conjunto Resu = cto_crear();

    printf("Cargando conjunto A:\n");
    ConjuntoA = cargar_conjunto(ConjuntoA);
    printf("Cargando conjunto B:\n");
    ConjuntoB = cargar_conjunto(ConjuntoB);

    printf("\nConjunto A: ");
    cto_mostrar(ConjuntoA);
    printf("Conjunto B: ");
    cto_mostrar(ConjuntoB);

    acciones(ConjuntoA, ConjuntoB, Resu);

    printf("Saliendo del programa.\n");
    return 0;
}
