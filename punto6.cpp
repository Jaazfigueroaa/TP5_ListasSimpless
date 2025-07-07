#include <iostream>
using namespace std;
struct Nodo{
int dato;
Nodo* sig;
};
int esPrimo(int n){
if(n<2)return 0;
for(int i=2;i*i<=n;i++){
if(n %i==0)return 0;
}
return 1;
}
int contarPrimos(Nodo* inicio){
int cont=0;
while(inicio!=NULL){
if(esPrimo(inicio->dato))cont++;
inicio=inicio->sig;
}
return cont;
}
int contarMayusculas(Nodo* inicio){
int cont=0;
while(inicio!=NULL){
if(inicio->dato>='A'&&inicio->dato<='Z')cont++;
inicio=inicio->sig;
}
return cont;
}
int contarMinusculas(Nodo* inicio){
int cont=0;
while(inicio!=NULL){
if(inicio->dato>='a'&&inicio->dato<='z')cont++;
inicio=inicio->sig;
}
return cont;
}
