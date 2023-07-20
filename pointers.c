#include "stdio.h"

int area(int base, int altura);
int area_punt(int *base, int *altura);

void main(){
    int base = 2, altura = 3, res_area = 0;

    res_area = area(base, altura);
    printf("La base es %d, la altura es %d\n",base, altura);

    res_area = area_punt(&base, &altura);
    printf("La base es %d, la altura es %d\n",base, altura);
}

int area(int base, int altura){
    base = 4;
    altura = 5;
    return base*altura;
}

int area_punt(int *base, int *altura){
    *base = 4;    
    *altura = 5;
    return *base*(*altura);
}

