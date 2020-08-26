#ifndef CIRCULO_H_INCLUDED

typedef struct{
 float radio;
 char color[10];
}Circulo;

#define CIRCULO_H_INCLUDED
#define PI  3.1415926

/**
PRE:
    La instancia del TDA (circulo) no debe haberse creado (crear) ni destruido (destruir) con anterioridad.
POST:
    Deja la instancia del TDA (circulo) listo para ser usado. El valor por defecto del radio es 1.
ATRIBUTOS:
    circulo: instancia sobre la cual se aplica la primitiva.
RETORNO:
    No aplica.
*/
void crearCirculo(Circulo &circulo);
/**
PRE:
    La instancia del TDA (circulo) debe haberse creado (crear) pero no debe estar destruida (destruir).
POST:
    Destruye la instancia del TDA y ya no podrá ser utilizada.
ATRIBUTOS:
    circulo: instancia sobre la cual se aplica la primitiva.
RETORNO:
    No aplica.
*/
void destruirCirculo(Circulo &circulo);
/**
PRE:
    La instancia del TDA (circulo) debe haberse creado (crear) pero no debe estar destruida (destruir).
    El radio debe ser mayor a cero.
POST:
    El circulo queda con el nuevo radio.
ATRIBUTOS:
    circulo: instancia sobre la cual se aplica la primitiva.
    radio: valor del radio a asignar al circulo.
RETORNO:
    No aplica.
*/
void setRadio(Circulo &circulo,float radio);
/**
PRE:
    La instancia del TDA (circulo) debe haberse creado (crear) pero no debe estar destruida (destruir).
POST:
    Devuelve el radio del circulo.
ATRIBUTOS:
    circulo: instancia sobre la cual se aplica la primitiva.
RETORNO:
    Devuelve el radio del círculo.
*/
float getRadio(Circulo &circulo);
/**
PRE:
    La instancia del TDA (circulo) debe haberse creado (crear) pero no debe estar destruida (destruir).
POST:
    Devuelve el perimetro del circulo.
ATRIBUTOS:
    circulo: instancia sobre la cual se aplica la primitiva.
RETORNO:
    Devuelve el perimetro del circulo.
*/



float getPerimetro(Circulo &circulo);
/**
PRE:
    La instancia del TDA (circulo) debe haberse creado (crear) pero no debe estar destruida (destruir).
POST:
    Devuelve la superficie del circulo.
ATRIBUTOS:
    circulo: instancia sobre la cual se aplica la primitiva.
RETORNO:
    Devuelve la superficie del circulo.
*/

float getSuperficieCirculo(Circulo &circulo);
/**
PRE:
    La instancia del TDA (circulo) debe haberse creado (crear) pero no debe estar destruida (destruir).
POST:
    Devuelve el diámetro del circulo.
ATRIBUTOS:
    circulo: instancia sobre la cual se aplica la primitiva.
RETORNO:
    Devuelve el diámetro del circulo.
*/
float getDiametro(Circulo &circulo);
/**
PRE:
    La instancia del TDA (circulo) debe haberse creado (crear) pero no debe estar destruida (destruir).
POST:
    Devuelve el volumen del circulo.
ATRIBUTOS:
    circulo: instancia sobre la cual se aplica la primitiva.
RETORNO:
    Devuelve el volumen del circulo.
*/
float getVolumen(Circulo &circulo);
/**
PRE:
    La instancia del TDA (circulo) debe haberse creado (crear) pero no debe estar destruida (destruir).
POST:
    El circulo queda con el nuevo color.
ATRIBUTOS:
    circulo: instancia sobre la cual se aplica la primitiva.
    radio: valor del color a asignar al circulo.
RETORNO:
    No aplica.
*/

void setColor(Circulo &circulo,char* color);
/**
PRE:
    La instancia del TDA (circulo) debe haberse creado (crear) pero no debe estar destruida (destruir).
POST:
    Devuelve el color del circulo.
ATRIBUTOS:
    circulo: instancia sobre la cual se aplica la primitiva.
RETORNO:
    Devuelve el color del círculo.
*/

char* getColor(Circulo &circulo);

#endif // CIRCULO_H_INCLUDED
