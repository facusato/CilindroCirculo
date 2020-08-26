#include <iostream>
#include "circulo.h"
#include "cilindro.h"
using namespace std;

int main()
{
    Circulo circulo;
    Cilindro cilindro;
    crearCirculo(circulo);
    crearCilindro(cilindro,circulo);
    float radio;
    float altura;
    char color[10];
    cout<<"-------*Bienvenidos al tda de Circulo*-------"<<endl;
    cout<<"---------------------------------------------------------"<<endl;
    cout<< "Ingrese el radio deseado para realizar las operaciones del circulo" << endl;
    cin>>radio;
    setRadio(circulo,radio);
    cout<< "Ingrese el color deseado para realizar las operaciones del circulo" << endl;
    cin>>color;
    setColor(circulo,color);
    cout<<"El Radio es: "<<getRadio(circulo)<<endl;
    cout<<"El Color es: "<<getColor(circulo)<<endl;
    cout<<"El Diametro es: "<<getDiametro(circulo)<<endl;
    cout<<"El Perimetro es: "<<getPerimetro(circulo)<<endl;
    cout<<"La Superficie es: "<<getSuperficieCirculo(circulo)<<endl;
    cout<<"El Volumen es : "<<getVolumen(circulo)<<endl;
    cout<<"----------------------"<<endl;
    cout<< "Ingrese la altura deseada para realizar las operaciones del cilindro" << endl;
    cin>>altura;
    setRadio(cilindro.circulo,getRadio(circulo));
    setAltura(cilindro,altura);
    cout<<"El Radio es: "<<getRadio(cilindro.circulo)<<endl;
    cout<<"La Altura es: "<<getAltura(cilindro)<<endl;
    cout<<"La Superficie lateral es: "<<getSuperficieLateral(cilindro)<<endl;
    cout<<"La Superfice de la base es: "<<getSuperficieCirculo(cilindro.circulo)<<endl;
    cout<<"La Superficie total es: "<<getSuperficieCilindro(cilindro)<<endl;
    cout<<"El Volumen es: "<<getVolumen(cilindro)<<endl;
    destruirCirculo(circulo);
    destruirCilindro(cilindro);
    return 0;

}
