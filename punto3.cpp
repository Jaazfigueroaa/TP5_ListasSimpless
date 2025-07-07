#include <iostream>
using namespace std;
struct Nodo{
int dato;
Nodo* sig;
};
struct ListaContada{
Nodo* inicio;
Nodo* fin;
int cantidad;
};
int buscarIndice(ListaContada lista,int valor){
Nodo* aux=lista.inicio;
int i=0;
while(aux!=NULL){
if(aux->dato==valor)return i;
aux=aux->sig;
i++;
}
return -1;
}
Nodo* buscarPorIndice(ListaContada lista,int indice){
Nodo* aux=lista.inicio;
int i=0;
while(aux!=NULL){
if(i==indice) return aux;
aux=aux->sig;
i++;
}
return NULL;
}
