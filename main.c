#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float calcolaDelta(float, float, float);
int esistonoSoluzioniReali(float, float, float);
float soluzione1(float, float, float);
float soluzione2(float, float, float);
void stampa(float, float);

int main(int argc, char** argv) {
    float a,b,c,risultato1,risultato2;
    
    printf("Inserire il coefficente a: ");
    scanf("%f", &a);
    printf("Inserire il coefficente b: ");
    scanf("%f", &b);
    printf("Inserire il termine noto: ");
    scanf("%f", &c);
    
    if (esistonoSoluzioniReali(a, b, c)){
        risultato1=soluzione1(a, b, c);
        risultato2=soluzione2(a, b, c);
        stampa(risultato1, risultato2);
    }
    else {
        printf("Non esistono soluzioni reali.\n");
    }
    return (EXIT_SUCCESS);
}

float calcolaDelta(float a,float b, float c) {
    float delta;
    delta=b*b-(4*a*c);
    return delta;
}

int esistonoSoluzioniReali(float a, float b, float c){
    float delta;
    delta=calcolaDelta(a,b,c);
    if (delta>=0) {
        return 1;
    }
    else {
        return 0;
    }
}

float soluzione1(float a, float b, float c){
    float delta, risultato;
    delta=calcolaDelta(a,b,c);
    delta=sqrt(delta);
    risultato=(-b-delta)/(2*a);
    return risultato;
}

float soluzione2(float a, float b, float c){
    float delta, risultato;
    delta=calcolaDelta(a,b,c);
    delta=sqrt(delta);
    risultato=(-b+delta)/(2*a);
    return risultato;
}

void stampa(float risultato1, float risultato2){
    printf("RISULTATI:\n");
    printf("X1: %f\n", risultato1);
    printf("X2: %f\n", risultato2);
}