#ifndef TP_LIBRERIAS_H_INCLUDED
#define TP_LIBRERIAS_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "TP_librerias.h"

void menuPrincipal();
void menuSuma();
void menuResta();
void menuMultiplicacion(); //menu principal
void menuDivision();
void menuFactorial();
void menuConfiguracion();
void ayudaPrincipal();
void acerca_de();

int opcionSumaEnteros(); //submenu suma
void opcionSumaDecimales();

void opcionRestaEnteros();//submenu resta
void opcionRestaDecimales();

void opcionMultiplicacionEnteros();//submenu multiplicacion
void opcionMultiplicacionDecimales();

void opcionDivisionEnteros();//submenu division
void opcionDivisionDecimales();

void ayudaSuma();
void ayudaResta();
void ayudaMultiplicacion(); //funciones de ayuda
void ayudaDivision();
void ayudaFactorial();
void ayudaConfiguracion();
void ayudaColor();

//void modificaAspecto();
void modificaColorFondo();
void modificaColorTexto();
//void modificaCuadroDeVentana(); /**sub menu configuracion*/

int menu(char titulo[], char *opciones[], int NumOpciones);
void cordenadas_xy(int x , int y); /**Esta funcion determina las cordenadas de la posicion del caracter*/
void canbioColor(char color);

#endif // TP_LIBRERIAS_H_INCLUDED
