#include "circulo.h"
#ifndef CILINDRO_H_INCLUDED

typedef struct{
float altura;
Circulo circulo;
}Cilindro;

#define CILINDRO_H_INCLUDED
/**
PRE:
    La instancia del TDA (cilindro) no debe haberse creado (crear) ni destruido (destruir) con anterioridad.
    La instancia del TDA(circulo) debe haberse creado.
POST:
    Deja la instancia del TDA (cilindro) listo para ser usado. El valor por defecto del radio es 1 y la altura es 1.
ATRIBUTOS:
    cilindro: instancia sobre la cual se aplica la primitiva.
RETORNO:
    No aplica.
*/
void crearCilindro(Cilindro &cilindro,Circulo &circulo);
/**
PRE:
    La instancia del TDA (cilindro) debe haberse creado (crear) pero no debe estar destruida (destruir).
POST:
    Destruye la instancia del TDA y ya no podrá ser utilizada.
ATRIBUTOS:
    cilindro: instancia sobre la cual se aplica la primitiva.
RETORNO:
    No aplica.
*/

void destruirCilindro(Cilindro &cilindro);

/**
PRE:
    La instancia del TDA (cilindro) debe haberse creado (crear) pero no debe estar destruida (destruir).
    La altura debe ser mayor a cero.
POST:
    El cilindro queda con la nueva altura.
ATRIBUTOS:
    cilindro: instancia sobre la cual se aplica la primitiva.
    altura: valor de la altura a asignar al cilindro.
RETORNO:
    No aplica.
*/
void setAltura(Cilindro &cilindro, float altura);

/**
PRE:
    La instancia del TDA (cilindro) debe haberse creado (crear) pero no debe estar destruida (destruir).
POST:
    Devuelve la altura del cilindro.
ATRIBUTOS:
    cilindro: instancia sobre la cual se aplica la primitiva.
RETORNO:
    Devuelve la altura del cilindro.
*/
float getAltura(Cilindro &cilindro);

/**
PRE:
    La instancia del TDA (cilindro) debe haberse creado (crear) pero no debe estar destruida (destruir).
POST:
    Devuelve la superficie del cilindro.
ATRIBUTOS:
    cilindro: instancia sobre la cual se aplica la primitiva.
RETORNO:
    Devuelve la superficie del cilindro.
*/
float getSuperficieCilindro(Cilindro &cilindro);

/**
PRE:
    La instancia del TDA (cilindro) debe haberse creado (crear) pero no debe estar destruida (destruir).
POST:
    Devuelve el volúmen del cilindro.
ATRIBUTOS:
    cilindro: instancia sobre la cual se aplica la primitiva.
RETORNO:
    Devuelve el volúmen del cilindro.
*/
float getVolumen(Cilindro &cilindro);
/**
PRE:
    La instancia del TDA (cilindro) debe haberse creado (crear) pero no debe estar destruida (destruir).
POST:
    Devuelve la superficie del cilindro.
ATRIBUTOS:
    cilindro: instancia sobre la cual se aplica la primitiva.
RETORNO:
    Devuelve la superficie lateral del cilindro.
*/
float getSuperficieLateral(Cilindro &cilindro);


#endif // CILINDRO_H_INCLUDED
