#ifndef TP_LIBRERIAS_H_INCLUDED
#define TP_LIBRERIAS_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include "TP_librerias.h"

void menuPrincipal();
void menuSuma();
void menuResta();
void menuMultiplicacion(); //menu principal
void menuDivision();
void menuFactorial();
void menuCalcularTodos();
void menuConfiguracion();
void ayudaPrincipal();
void acerca_de();

int opcionSumaEnteros(); //submenu suma
float opcionSumaDecimales();

int opcionRestaEnteros();//submenu resta
float opcionRestaDecimales();

int opcionMultiplicacionEnteros();//submenu multiplicacion
float opcionMultiplicacionDecimales();

int opcionDivisionEnteros();//submenu division
float opcionDivisionDecimales();

int opcionFactorialEnteros();
float opcionFactorialDecimales();

//void modificaAspecto();
void modificaColorFondo();
void modificaColorTexto();
//void modificaCuadroDeVentana(); /**sub menu configuracion*/

int menu(char titulo[], char *opciones[], int NumOpciones);
void cordenadas_xy(int x , int y); /**Esta funcion determina las cordenadas de la posicion del caracter*/
void canbioColor(char color);

#endif // TP_LIBRERIAS_H_INCLUDED
