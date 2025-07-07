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
void iniciarListaContada(ListaContada &lista){
lista.inicio=NULL;
lista.fin=NULL;
lista.cantidad=0;
}
void agregarFinal(ListaContada &lista,int valor){
Nodo* nuevo=new Nodo;
nuevo->dato=valor;
nuevo->sig=NULL;
if(lista.inicio==NULL){
lista.inicio=nuevo;
lista.fin=nuevo;
}else{
lista.fin->sig=nuevo;
lista.fin=nuevo;
}
lista.cantidad++;
}
void eliminarInicio(ListaContada &lista){
if(lista.inicio!=NULL){
Nodo* borrar=lista.inicio;
lista.inicio=lista.inicio->sig;
delete borrar;
lista.cantidad--;
if(lista.inicio==NULL)lista.fin=NULL;
}
}
int cantidadElementos(ListaContada lista){
return lista.cantidad;
}
