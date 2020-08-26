#include "cilindro.h"


void crearCilindro(Cilindro &cilindro,Circulo &circulo){
cilindro.altura=1;
setRadio(cilindro.circulo,getRadio(circulo));
}

void destruirCilindro(Cilindro &cilindro){
    destruirCirculo(cilindro.circulo);
}

void setAltura(Cilindro &cilindro,float altura){
  if(altura>0){
    cilindro.altura=altura;
  }
}

float getAltura(Cilindro &cilindro){
  return cilindro.altura;
}


float getSuperficieCilindro(Cilindro &cilindro){
  return 2*getSuperficieCirculo(cilindro.circulo)+(getSuperficieLateral(cilindro));
}

float getVolumen(Cilindro &cilindro){
  return getSuperficieCirculo(cilindro.circulo)*getAltura(cilindro);
}

float getSuperficieLateral(Cilindro &cilindro){
  return getPerimetro(cilindro.circulo)*getAltura(cilindro);
}
