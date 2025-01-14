

#include<iostream>
#include<string>
#include "ListaDuplamenteEncadeadaInter.h"

using namespace std;

int main (){
ListaDuplamenteEncadeadaInter l;

l.vazia();
l.inserirnaCabeca("1");
l.imprimir();
l.inserirnaCabeca("2");
l.imprimir();
l.inserirnaCabeca("3");
l.imprimir();
l.inserirnaCabeca("4");
l.imprimir();
l.inserirnaCabeca("5");
l.imprimir();
l.inserirnaCauda("2");
l.imprimir();
l.inserirnaCauda("3");
l.imprimir();
l.inserirnaCauda("4");
l.imprimir();
l.inserirnaCauda("5");
l.imprimir();

std::cout << "CALMA VIDA TA DE BOA ><VAVAVAVA-TADEBAO" << " ";

system("Pause");
return 0;


}