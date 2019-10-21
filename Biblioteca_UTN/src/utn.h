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
		      char *mensaje,
			  char *mensajeError,
			  int minimo,
			  int maximo,
			  int reintentos);
int esInt(char *nInt);
int getFloat(float *pResultado,
	      char *pMensaje,
		  char *pMensajeError,
		  int minimo,
		  int maximo,
		  int reintentos);;
int esFloat(char *nfloat);
int getChar(   char *pChar,
		      char *mensaje,
			  char *mensajeError,
			  int minimo,
			  int maximo,
			  int reintentos);
int getString(char *pResultado,
		      char *pMensaje,
			  char *pMensajeError,
			  int minimo,
			  int maximo,
			  int reintentos);
int esNombre(char pNombre[50]);//
int getNombre(char pNombre[49],int reintentos);
int getStringNumeros(char *input,int reintentos);
int esNumerica(char cadena[50]);
int esAlfaNumerica(char cadena[50]);//usar para direccion en el parcial
int getAlfanumerica(char *input,int reintentos);
int esCuit(char cadena[50]);
int getCuit(char *input,int reintentos);













#endif /* UTN_H_ */
