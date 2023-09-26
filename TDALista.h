#ifndef TDALISTA_H
#define TDALISTA_H

#include "Object.h"

class TDALista
{
public:
	/*

	*/
	virtual void anula() = 0;


	/*
	 El m�todo inserta revisa si la posici�n es v�lida
	 y si lo es, guarda el objeto del primer par�mero en la
	 posici�n indicada por el segundo par�metro
	*/
	virtual bool inserta(Object*, int) = 0;
	virtual Object* siguiente(int) = 0;
	virtual Object* anterior(int) = 0;
	virtual void append(Object*) = 0;
	virtual void imprimir_lista() = 0;
	virtual Object* suprime(int) = 0;
	virtual Object* recupera(int) = 0;
	virtual int localiza(Object*) = 0;
	virtual Object* primero() = 0;
	virtual bool vacia() = 0;


protected:
};

#endif