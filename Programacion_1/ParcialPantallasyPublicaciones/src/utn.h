/*
 * utn.h
 *
 *  Created on: 23 sep. 2019
 *      Author: javijps
 */

#ifndef UTN_H_
#define UTN_H_

#define QTY_CARACTERES 50

int getInt(   int *pNumero,
		      char mensaje[],
			  char mensajeError[],
			  int minimo,
			  int maximo,
			  int reintentos);
int getFloat(   float *pNumero,
		      char *mensaje,
			  char *mensajeError,
			  int minimo,
			  int maximo,
			  int reintentos);
int getChar(   char *pChar,
		      char *mensaje,
			  char *mensajeError,
			  int minimo,
			  int maximo,
			  int reintentos);
int getLetter(   char *pChar,
		      char *mensaje,
			  char *mensajeError,
			  int reintentos);
//float esDecimal(float *numero);
int initArrayInt(int array[],int limite,int valor);
int getStringToInt(int *pResultado);
int imprimeArrayInt(int array[],int limite);
int esNumerica(char *cadena);
int getArrayInt(	int array[],
					int limite,
					char *pMensaje,
					char *pMensajeError,
					int minimo,
					int maximo,
					int reintentos);
int getString(char *pResultado,
		      char *pMensaje,
			  char *pMensajeError,
			  int minimo,
			  int maximo,
			  int reintentos);
int imprimeArrayString(char aArray[][50],int limite);
int getNombre(char *pResultado,int limite);




#endif /* UTN_H_ */
