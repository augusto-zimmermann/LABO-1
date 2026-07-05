#include <stdio.h>
#include <math.h>

int main(){

    int legajo;

    int acumuladorA,cantidad_legajoA,acumuladorB,cantidad_legajoB,nota;
    char grado;
    float promedioA,promedioB;

    float promedioMayor;
    int anioMayor;
    char gradoMayor;

    int total_legajos=0;

    for (int anio=1; anio<=7;anio++)
    {
        cantidad_legajoA=0;
        acumuladorA=0;
        cantidad_legajoB=0;
        acumuladorB=0;

        printf("Ingrese legajos del Anio %d:\n",anio);
        printf("Ingrese legajo:");
        scanf("%d",&legajo);

        while(legajo > 0){

            printf("Ingrese grado:");
            fflush(stdin);
            scanf("%c",&grado);

            printf("Ingrese nota:");
            scanf("%d",&nota);

            if (grado == 'A')
            {
                acumuladorA += nota;
                cantidad_legajoA++;
            }else{
                acumuladorB += nota;
                cantidad_legajoB++;
            }

            printf("Ingrese legajo:");
            scanf("%d",&legajo);

        }

        total_legajos = total_legajos +cantidad_legajoA + cantidad_legajoB;
        printf(" Anio %d : promedio general: \n",anio);
        promedioA = (acumuladorA / cantidad_legajoA);
        promedioB = (acumuladorB / cantidad_legajoB);

        if(anio==1)
        {
            promedioMayor=promedioA;
            gradoMayor='A';
            anioMayor=anio;
        }

        if(promedioA > promedioMayor)
        {
            promedioMayor=promedioA;
            gradoMayor='A';
            anioMayor=anio;
        }

        if(promedioB > promedioMayor)
        {
            promedioMayor=promedioB;
            gradoMayor='B';
            anioMayor=anio;
        }

        printf("El promedio de A es: %0.2f - El promedio de B es: %0.2f\n",promedioA,promedioB);
    }
    
    printf(" ------FIN----- \n");
    printf(" Cantidad de legajos: %d\n",total_legajos);
    printf(" promedio Mayor: %0.2f\n",promedioMayor);
    printf(" grado %c anio %d\n",gradoMayor,anioMayor);
}
