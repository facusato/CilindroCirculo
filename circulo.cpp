#include "circulo.h"
#include <cctype>
#include <string.h>

void crearCirculo(Circulo &circulo){
 circulo.radio=1;
}

void destruirCirculo(Circulo &circulo){
}

void setRadio(Circulo &circulo,float radio){
  if (radio > 0) {
        circulo.radio = radio;
    }
}

float getRadio(Circulo &circulo){
 return circulo.radio;
}

float getPerimetro(Circulo &circulo){
 return getDiametro(circulo)*PI;
}

float getSuperficieCirculo(Circulo &circulo){
 return circulo.radio*circulo.radio*PI;
}

float getDiametro(Circulo &circulo){
 return circulo.radio*2;
}

float getVolumen(Circulo &circulo){
 return getSuperficieCirculo(circulo)*getRadio(circulo)*4/3;
}

void setColor(Circulo &circulo,char* color){
    strcpy(circulo.color,color);
}

char* getColor(Circulo &circulo){
 return circulo.color;
}
