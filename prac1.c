#include <stdio.h>
#include <stdlib.h>

void interseccion(int* vec1, int* vec2,int lenVec1,int lenVec2);
void vec1MinusVec2(int* vec1, int* vec2,int lenVec1,int lenVec2);
void vec2MinusVec1(int* vec2, int* vec1,int lenVec2,int lenVec1);

int main(void){
    int vec1 []={2,3,7,9};
    int vec2 []={5,2,3};
    int lenVec1=sizeof(vec1)/sizeof(int);
    int lenVec2=sizeof(vec2)/sizeof(int);
    interseccion(vec1,vec2,lenVec1,lenVec2);
    vec1MinusVec2(vec1,vec2,lenVec1,lenVec2);
    vec2MinusVec1(vec2,vec1,lenVec2,lenVec1);
    return 0;
}

void interseccion(int* vec1, int* vec2,int lenVec1,int lenVec2){
    int coincidencias=0;
    printf("Interseccion De Del Vector 1 y Vector 2 \n[ ");
    for(int idx=0;idx<lenVec1;idx++){
        for(int jdx=0;jdx<lenVec2;jdx++){
            if(vec1[idx]==vec2[jdx])
                coincidencias++;
        }
        if(coincidencias){
            printf("%d ",vec1[idx]);
        }
        coincidencias^=coincidencias;
    }
    printf("]\n\n");
}

void vec1MinusVec2(int* vec1, int* vec2,int lenVec1,int lenVec2){
    int coincidencias=0;
    printf("Numeros Que Solo Existen En El Primer Vector \n[ ");
    for(int idx=0;idx<lenVec1;idx++){
        for(int jdx=0;jdx<lenVec2;jdx++){
            if(vec1[idx]==vec2[jdx])
                coincidencias++;
        }
        if(!coincidencias){
            printf("%d ",vec1[idx]);
        }
        coincidencias^=coincidencias;
    }
    printf("]\n\n");
}

void vec2MinusVec1(int* vec2, int* vec1,int lenVec2,int lenVec1){
    int coincidencias=0;
    printf("Numeros Que Solo Existen En El Segundo Vector \n[ ");
    for(int idx=0;idx<lenVec2;idx++){
        for(int jdx=0;jdx<lenVec1;jdx++){
            if(vec2[idx]==vec1[jdx])
                coincidencias++;
        }
        if(!coincidencias){
            printf("%d ",vec2[idx]);
        }
        coincidencias^=coincidencias;
    }
    printf("]\n\n");
}

/*
Nombre: Brayan Lopez Mercado
Matricula: 1280838
Fecha: 27 de agosto de 2024
Materia: Algoritmos y Estructura De Datos
Practica 1: Analizar la eficiencia de los algoritmos
*/