#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "funcionesCalculos.h"

float sumar (float primerNumero, float segundoNumero, float* pTotal){
    *pTotal = primerNumero + segundoNumero;
    return *pTotal;
}
float restar (float primerNumero, float segundoNumero, float* pTotal){
    *pTotal = primerNumero - segundoNumero;
    return *pTotal;
}
float dividir (float primerNumero, float segundoNumero, float* pTotal){
    if (segundoNumero != 0)
    {
        *pTotal = primerNumero / segundoNumero;
    } else {
        *pTotal = -1;
    }
    return *pTotal;
}
float multiplicar (float primerNumero, float segundoNumero, float* pTotal){
    *pTotal = primerNumero * segundoNumero;
    return *pTotal;
}
long int factorial (float numeroUsuario)
{
    long int resultado = 1;
    int numeroInt;
    int i;

    numeroInt = (int)numeroUsuario;

    if (numeroInt > 0)
        {
        for (i = numeroInt; i >= 1; i --)
            {
             resultado = resultado * i;
            }
        }
   return resultado;
}