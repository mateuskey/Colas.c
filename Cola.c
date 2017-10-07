#include <stdio.h>

void Aniadir(pNodo *primero,pNodo *ultimo, int v);

int main(){
	//Usamos typedf struct para poder alamcenar los datos ordenadamente 
	typedef struct nodo{
		//Es la variable donde almacenara el valor de la variable 
		int dato;
		//se usa para poder seguir al siguiente nodo
		struct nodo *sgte;
	//Se le asigna Nodo para después declarar.
	}Nodo;

	//Se asigna Nodo para declarar los nodos.
	typedef Nodo *pNodo;
	//Se asigna Nodo para declarar las colas.
	typedef Nodo *Cola;
	return 0;
}


void Aniadir(pNodo *primero,pNodo *ultimo, int v){
	pNodo new;
	//Crea nuevo nodo y asigna la memoria dinamica con malloc
	new=(pNodo)malloc(sizeof(Nodo));
	new->valor=v;
	new->sgt=NULL;
}


