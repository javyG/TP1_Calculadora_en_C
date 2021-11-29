#include "TP_librerias.h"2//
int sumar(int a, int b);
float sumardecimales(float a, float b);
float opcionSumaDecimales();
int restar(int a,int b);
float restardecimales(float a,float b);
int multiplicar(int a, int b);
float multiplicardecimales(float a, float b);
int dividir(int a, int b);
float dividirdecimales(float a, float b);
int factorial(int f);
float factorialdecimal(float f);
int calcularTodosEnteros();
float calcularTodosDecimales();
void generadorDeMarcos(int x1,int y1,int x2,int y2);
//void ingresoValor();
//int validar_numeroA(char numeroA[]);
//int validar_numeroB(char numeroB[]);


void menuPrincipal(){

    int Salir=1;
    int opcion;
    char  *titulo="Menu Principal";
    char  *opciones[]={"Sumar","Restar","Multiplicar","Dividir","Factorial","Realizar todos los calculos",
    "Configuracion","Ayuda","Acerca de","Salir"};
    int NumOpciones=10;
      do{
            opcion =menu(titulo,opciones,NumOpciones);

     switch(opcion){

        case 1:
            system("cls");
            menuSuma();
            break;
        case 2:
            system("cls");
            menuResta();
            break;
        case 3:
            system("cls");
            menuMultiplicacion();
            break;
        case 4:
            system("cls");
            menuDivision();
            break;
        case 5:
            system("cls");
            menuFactorial();
            break;
        case 6:
            system("cls");
            menuCalcularTodos();
            break;
        case 7:
            system("cls");
            menuConfiguracion();
            break;
        case 8:
            system("cls");
            ayudaPrincipal();
            break;

        case 9:
            system("cls");
            acerca_de();
            break;

        case 10:
            Salir=0;
            int delay = 0;
            for(delay=0; delay<10; delay++){
                Sleep(200);
                system("cls");
                cordenadas_xy(43,12);
            printf("El programa terminara en 10 segundos...");
            }
            for(delay=0; delay<10; delay++){
                Sleep(1000);
                system("cls");
                cordenadas_xy(43,12);
                printf("El programa terminara en: %i...", delay+1);
            }
            system("cls");
            cordenadas_xy(45,12);
            printf("Gracias por Utilizar Calculadora!!!");
            cordenadas_xy(45,15);
            system("pause=nul");
            system("cls");
            system("exit");
            break;
        }
    }
    while(Salir);
}
void menuSuma(){

    int Salir=1;
    int opcion;
    char *titulo="Menu Suma";
    char *opciones[]={"Sumar Numeros Enteros","Sumar Numeros Decimales",
    "Ayuda","Atras"};
    int NumOpciones=4;
      do{
        opcion = menu(titulo,opciones,NumOpciones);

     switch(opcion){

        case 1:
            system("cls");
            opcionSumaEnteros();
            break;
        case 2:
            system("cls");
            opcionSumaDecimales();
            break;
        case 3:
            system("cls");
            ayudaSuma();
            break;
        case 4:
            Salir=0;
            break;
        }
    }
    while(Salir);
}
void menuResta(){

    int Salir=1;
    int opcion;
    char *titulo="Menu Resta";
    char *opciones[]={"Restar Numeros Enteros","Restar Numeros Decimales",
              "Ayuda","Atras"};
    int NumOpciones=4;
      do{
        opcion = menu(titulo,opciones,NumOpciones);

     switch(opcion){

        case 1:
            system("cls");
            opcionRestaEnteros();
            break;
        case 2:
            system("cls");
            opcionRestaDecimales();
            break;
        case 3:
            system("cls");
            ayudaResta();
            break;
        case 4:
            Salir=0;
            break;
        }
    }
    while(Salir);
}
void menuMultiplicacion(){
    int Salir=1;
    int opcion;
    char *titulo="Menu Multiplicacion";
    char *opciones[]={"Multiplicar Numeros Enteros","Multiplicar Numeros Decimales",
              "Ayuda","Atras"};
    int NumOpciones=4;
      do{
        opcion = menu(titulo,opciones,NumOpciones);

     switch(opcion){

        case 1:
            system("cls");
            opcionMultiplicacionEnteros();
            break;
        case 2:
            system("cls");
            opcionMultiplicacionDecimales();
            break;
        case 3:
            system("cls");
            ayudaMultiplicacion();
            break;
        case 4:
            Salir=0;
            break;
        }
    }
    while(Salir);
}
void menuDivision(){

    int Salir=1;
    int opcion;
    char *titulo="Menu Dividicion";
    char *opciones[]={"Dividir Numeros Enteros","Dividir Numeros Decimales",
              "Ayuda","Atras"};
    int NumOpciones=4;
      do{
        opcion = menu(titulo,opciones,NumOpciones);

     switch(opcion){

        case 1:
            opcionDivisionEnteros();
            break;
        case 2:
            system("cls");
            opcionDivisionDecimales();
            break;
        case 3:
            system("cls");
            ayudaDivision();
            break;
        case 4:
            Salir=0;
            break;
        }
    }
    while(Salir);
}
void menuFactorial(){

    int Salir=1;
    int opcion;
    char *titulo="Menu Factorial";
    char *opciones[]={"Factorial de Numeros Enteros","Factorial de Numeros Decimales",
              "Ayuda","Atras"};
    int NumOpciones=4;
      do{
        opcion = menu(titulo,opciones,NumOpciones);

     switch(opcion){

        case 1:
            system("cls");
            opcionFactorialEnteros();
            break;
        case 2:
            system("cls");
            opcionFactorialDecimales();
            break;
        case 3:
            system("cls");
            ayudaFactorial();
            break;
        case 4:
            Salir=0;
            break;
        }
    }
    while(Salir);
}
int opcionSumaEnteros(){
    int a;
    int b;
    int r;
        generadorDeMarcos(0,0,118,28);
        generadorDeMarcos(1,1,117,5);
        generadorDeMarcos(1,6,117,21);
        generadorDeMarcos(1,22,117,28);
        cordenadas_xy(45,3);
        printf("Suma de Enteros ");
        cordenadas_xy(45,8);
        printf("Ingrese un numero entero: ");
        cordenadas_xy(45,9);
        printf("Numero A: ");
        scanf("%d",&a);
        cordenadas_xy(45,10);
        printf("Numero B: ");
        scanf("%d",&b);
        r=sumar(a,b);
        cordenadas_xy(45,12);
        printf(" %d - %d = %d",a,b,r);
        cordenadas_xy(45,24);
        printf("Para Volver al menu presione enter");
        system("pause>nul");
        system("cls");
}
float opcionSumaDecimales(){

    float a;
    float b;
    float r;
        generadorDeMarcos(0,0,118,28);
        generadorDeMarcos(1,1,117,5);
        generadorDeMarcos(1,6,117,21);
        generadorDeMarcos(1,22,117,28);
        cordenadas_xy(45,3);
        printf("Suma de Decimales ");
        cordenadas_xy(45,8);
        printf("Ingrese un numero Decimal: ");
        cordenadas_xy(45,9);
        printf("Numero A: ");
        scanf("%f",&a);
        cordenadas_xy(45,10);
        printf("Numero B: ");
        scanf("%f",&b);
        r=sumardecimales(a,b);
        cordenadas_xy(45,12);
        printf(" %.2f + %.2f = %.2f ",a,b,r);
        cordenadas_xy(45,24);
        printf("Para Volver al menu presione enter");
        system("pause>nul");
        system("cls");
}
int opcionRestaEnteros(){

    int a;
    int b;
    int r;
        generadorDeMarcos(0,0,118,28);
        generadorDeMarcos(1,1,117,5);
        generadorDeMarcos(1,6,117,21);
        generadorDeMarcos(1,22,117,28);
        cordenadas_xy(45,3);
        printf("Resta de Enteros ");
        cordenadas_xy(45,8);
        printf("Ingrese un numero entero: ");
        cordenadas_xy(45,9);
        printf("Numero A: ");
        scanf("%d",&a);
        cordenadas_xy(45,10);
        printf("Numero B: ");
        scanf("%d",&b);
        r=restar(a,b);
        cordenadas_xy(45,12);
        printf(" %d - %d = %d",a,b,r);
        cordenadas_xy(45,24);
        printf("Para Volver al menu presione enter");
        system("pause>nul");
        system("cls");
}
float opcionRestaDecimales(){

    float a;
    float b;
    float r;
        generadorDeMarcos(0,0,118,28);
        generadorDeMarcos(1,1,117,5);
        generadorDeMarcos(1,6,117,21);
        generadorDeMarcos(1,22,117,28);
        cordenadas_xy(45,3);
        printf("Resta de Decimales ");
        cordenadas_xy(45,8);
        printf("Ingrese un numero Decimal: \n");
        cordenadas_xy(45,9);
        printf("Numero A: ");
        scanf("%f",&a);
        cordenadas_xy(45,10);
        printf("Numero B: ");
        scanf("%f",&b);
        r=restardecimales(a,b);
        cordenadas_xy(45,12);
        printf(" %.2f - %.2f = %.2f ",a,b,r);
        cordenadas_xy(45,24);
        printf("Para Volver al menu presione enter");
        system("pause>nul");
        system("cls");
}
int opcionMultiplicacionEnteros(){

    int a;
    int b;
    int r;
        generadorDeMarcos(0,0,118,28);
        generadorDeMarcos(1,1,117,5);
        generadorDeMarcos(1,6,117,21);
        generadorDeMarcos(1,22,117,28);
        cordenadas_xy(45,3);
        printf("Multiplicacion de Enteros ");
        cordenadas_xy(45,8);
        printf("Ingrese un numero entero:");
        cordenadas_xy(45,9);
        printf("Numero A: ");
        scanf("%d",&a);
        cordenadas_xy(45,10);
        printf("Numero B: ");
        scanf("%d",&b);
        r=multiplicar(a,b);
        cordenadas_xy(45,12);
        printf(" %d * %d = %d",a,b,r);
        fflush(stdin);
        cordenadas_xy(45,24);
        printf("Para Volver al menu presione enter");
        system("pause>nul");
        system("cls");

}
float opcionMultiplicacionDecimales(){
    float a;
    float b;
    float r;
        generadorDeMarcos(0,0,118,28);
        generadorDeMarcos(1,1,117,5);
        generadorDeMarcos(1,6,117,21);
        generadorDeMarcos(1,22,117,28);
        cordenadas_xy(45,3);
        printf("Multiplicacion de Decimales");
        cordenadas_xy(45,8);
        printf("Ingrese un numero Decimal: \n");
        cordenadas_xy(45,9);
        printf("Numero A: ");
        scanf("%f",&a);
        cordenadas_xy(45,10);
        printf("Numero B: ");
        scanf("%f",&b);
        r=multiplicardecimales(a,b);
        cordenadas_xy(45,12);
        printf(" %.2f * %.2f = %.2f",a,b,r);
        cordenadas_xy(45,24);
        printf("Para Volver al menu presione enter");
        system("pause>nul");
        system("cls");
}
int opcionDivisionEnteros(){
    int a;
    int b;
    int r;
    do{
        generadorDeMarcos(0,0,118,28);
        generadorDeMarcos(1,1,117,5);
        generadorDeMarcos(1,6,117,21);
        generadorDeMarcos(1,22,117,28);
        cordenadas_xy(45,3);
        printf("Division de Enteros ");
        cordenadas_xy(45,8);
        printf("Ingrese un numero entero: \n");
        cordenadas_xy(45,9);
        printf("Numero A: ");
        scanf("%d",&a);
        cordenadas_xy(45,10);
        printf("Numero B: ");
        scanf("%d",&b);
    if(b==0){
        cordenadas_xy(45,22);
        printf("No se puede dividir por cero, ingrese otro numero.\n");
        fflush(stdin);
        }
    else{
        r=dividir(a,b);
        cordenadas_xy(45,12);
        printf("Resultado %d / %d = %d",a,b,r);
        }
    }while(b==0);
        cordenadas_xy(45,24);
        printf("\nPara Volver al menu presione enter");
        system("pause>nul");
        system("cls");
}
float opcionDivisionDecimales(){
    float a;
    float b;
    float r;
do{
        generadorDeMarcos(0,0,118,28);
        generadorDeMarcos(1,1,117,5);
        generadorDeMarcos(1,6,117,21);
        generadorDeMarcos(1,22,117,28);
        cordenadas_xy(45,3);
        printf("Division de Decimales ");
        cordenadas_xy(45,8);
        printf("Ingrese un numero Decimal: \n");
        cordenadas_xy(45,9);
        printf("Numero A: ");
        scanf("%f",&a);
        cordenadas_xy(45,10);
        printf("Numero B: ");
        scanf("%f",&b);
        if(b==0){
        cordenadas_xy(45,22);
        printf("No se puede dividir por cero,ingrese otro  numero\n");
            }
        else{
        r=dividirdecimales(a,b);
        cordenadas_xy(45,12);
        printf("Resultado %.2f / %.2f = %.2f",a,b,r);
            }
}while(b==0);
        cordenadas_xy(45,24);
        printf("Para Volver al menu presione enter");
        system("pause>nul");
        system("cls");
}
int opcionFactorialEnteros(){
    int a;
    long long int resultado;
    do{

        generadorDeMarcos(0,0,118,28);
        generadorDeMarcos(1,1,117,5);
        generadorDeMarcos(1,6,117,21);
        generadorDeMarcos(1,22,117,28);
        cordenadas_xy(45,3);
        printf("Factorial con Enteros ");
        cordenadas_xy(45,8);
        printf("Ingrese un numero Entero: \n");
        cordenadas_xy(45,9);
        printf("Valor:");
        scanf("%d",&a);
        if(a<=0){
        cordenadas_xy(45,22);
        printf("Numero no valido, ingrese un numero natural mayor a cero. \n");
        }else{
        resultado=factorial(a);
        cordenadas_xy(45,10);
        printf("El factorial de %d es %d\n",a,resultado);
        getch();
        cordenadas_xy(45,24);
        printf("Para Volver al menu presione enter");
        system("pause>nul");
        system("cls");
        }
      }while(a<=0);
}
float opcionFactorialDecimales(){
    float a;
    float resultado;
    do{

        generadorDeMarcos(0,0,118,28);
        generadorDeMarcos(1,1,117,5);
        generadorDeMarcos(1,6,117,21);
        generadorDeMarcos(1,22,117,28);
        cordenadas_xy(45,3);
        printf("Factorial con Decimales ");
        cordenadas_xy(45,8);
        printf("Ingrese un numero Decimal: \n");
        cordenadas_xy(45,9);
        printf("\nValor:");
        scanf("%f",&a);
      if(a<=0){
        cordenadas_xy(45,22);
        printf("Numero no valido, ingrese un numero natural mayor a cero. \n");
      }else{
        resultado=factorialdecimal(a);
        cordenadas_xy(45,10);
        printf("\nEl factorial de %.2f es %.2f \n",a,resultado);
        }
     }while(a<=0);
        getch();
        cordenadas_xy(45,24);
        printf("\nPara Volver al menu presione enter");
        system("pause>nul");
        system("cls");
}
void menuCalcularTodos(){

    int Salir=1;
    int opcion;
    char *titulo="Menu Resta";
    char *opciones[]={"Calcular Todos en numeros Enteros", "Calcular Todos en numeros Decimales",
              "Ayuda","Atras"};
    int NumOpciones=4;
      do{
        opcion = menu(titulo,opciones,NumOpciones);

     switch(opcion){

        case 1:
            system("cls");
            calcularTodosEnteros();
            break;
        case 2:
            system("cls");
            calcularTodosDecimales();
            break;
        case 3:
            system("cls");
            ayudaCalcularTodos();
            break;
        case 4:
            Salir=0;
            break;
        }
    }
    while(Salir);
}

int calcularTodosEnteros(){

    int a;
    int b;
    int r;
    long long int resultado;
        generadorDeMarcos(0,0,118,28);
        generadorDeMarcos(1,1,117,5);
        generadorDeMarcos(1,6,117,9);
        generadorDeMarcos(1,10,117,27);
        generadorDeMarcos(1,18,117,28);
        cordenadas_xy(45,3);
        printf("Calcular Todas las Operacines con Enteros ");
        cordenadas_xy(45,8);
        printf("Ingrese un numero entero: \n");
        cordenadas_xy(45,11);
        printf("Numero A:");
        scanf("%d",&a);
        cordenadas_xy(45,12);
        printf("Numero B:");
        scanf("%d",&b);
        cordenadas_xy(45,13);
        printf("Suma: %d + %d = %d\n",a,b,sumar(a,b));
        cordenadas_xy(45,14);
        printf("Resta: %d - %d = %d\n",a,b,restar(a,b));
        cordenadas_xy(45,15);
        printf("Multiplicacion: %d * %d = %d\n",a,b,multiplicar(a,b));
      if(b==0){
        cordenadas_xy(45,19);
        printf("No se puede Dividir por cero, ingrese otro numero.\n");
        }
    else{
        r=dividir(a,b);
        cordenadas_xy(45,16);
        printf("Division %d / %d = %d\n",a,b,r);
        }
      if(a<=0){
        cordenadas_xy(45,20);
        printf("Numero no valido, ingrese un numero mayor a cero. ");
   }else{
        resultado=factorialdecimal(a);
        cordenadas_xy(45,17);
        printf("El factorial de %d es %d \n",a,resultado);
        }
        cordenadas_xy(45,24);
        printf("Para Volver al menu presione enter");
        system("pause>nul");
        system("cls");
}
float calcularTodosDecimales(){

    float a;
    float b;
    float r;
    float resultado;
     generadorDeMarcos(0,0,118,28);
        generadorDeMarcos(1,1,117,5);
        generadorDeMarcos(1,6,117,9);
        generadorDeMarcos(1,10,117,27);
        generadorDeMarcos(1,18,117,28);
        cordenadas_xy(45,3);
        printf("Calcular Todas las Operacines con Decimales ");
        cordenadas_xy(45,8);
        printf("Ingrese un numero entero: \n");
        cordenadas_xy(45,11);
        printf("Numero A:");
        scanf("%f",&a);
        cordenadas_xy(45,12);
        printf("Numero B:");
        scanf("%f",&b);
        factorialdecimal(a);
        cordenadas_xy(45,13);
        printf("Suma: %.2f + %.2f = %.2f \n",a,b,sumardecimales(a,b));
        cordenadas_xy(45,14);
        printf("Resta: %.2f - %.2f = %.2f \n",a,b,restardecimales(a,b));
        cordenadas_xy(45,15);
        printf("Multiplicacion: %.2f * %.2f = %.2f\n",a,b,multiplicardecimales(a,b));
        if(b==0){
        cordenadas_xy(45,19);
        printf("No se puede dividir por cero, ingrese otro numero.\n");
        }
    else{
        r=dividirdecimales(a,b);
        cordenadas_xy(45,16);
        printf("Division: %.2f / %.2f = %.2f\n",a,b,r);
        }
      if(a<=0){
        cordenadas_xy(45,20);
        printf("Numero no valido, ingrese un numero mayor a cero. \n");
    }else{
        resultado=factorialdecimal(a);
        cordenadas_xy(45,17);
        printf("El factorial de %.2f es %.2f ",a,resultado);
        }
        cordenadas_xy(45,24);
        printf("Para Volver al menu presione enter");
        system("pause>nul");
        system("cls");
}
void menuConfiguracion(){

    int Salir=1;
    int opcion;
    char *titulo="Menu Configuracion";
    char *opciones[]={"Cambiar Tema","Cambiar Color de Texto",
              "Ayuda","Atras"};
    int NumOpciones=4;
      do{
        opcion = menu(titulo,opciones,NumOpciones);
     switch(opcion){

        case 1:
            system("cls");
            modificaColorFondo();
            break;
        case 2:
            system("cls");
            modificaColorTexto();
            break;
        case 3:
            system("cls");
            ayudaConfiguracion();
            break;
        case 4:
            Salir=0;
            break;
        }
    }
    while(Salir);
}

void modificaColorFondo(){
int Salir=1;
    int opcion;
    char *titulo="Modificacion de Colores de Fondo";
    char *opciones[]={"Color Negro","Color Azul","Color Verde","Color Aguamarina","Color Rojo","Color Purpura","Color Amarillo","Color Blanco","Ayuda","Atras"};
    int NumOpciones=10;
      do{
        opcion = menu(titulo,opciones,NumOpciones);
    int aceptar=0;

     switch(opcion){

        case 1:
            system("cls");
            if(aceptar=13)
            generadorDeMarcos(35,13,85,17);
            system("color 0E");
            cordenadas_xy(39,15);
            printf("Vuelva a presionar Enter para Volver al Menu");
            system("pause>nul");
            system("cls");
            break;
        case 2:
            system("cls");
            if(aceptar=13)
            generadorDeMarcos(35,13,85,17);
            system("color 1E");
            cordenadas_xy(39,15);
            printf("Vuelva a presionar Enter para Volver al Menu");
            system("pause>nul");
            system("cls");
            break;
        case 3:
            system("cls");
            if(aceptar=13)
            generadorDeMarcos(35,13,85,17);
            system("color 2f");
            cordenadas_xy(39,15);
            printf("Vuelva a presionar Enter para Volver al Menu");
            system("pause>nul");
            system("cls");
            break;
        case 4:
           system("cls");
            if(aceptar=13)
            generadorDeMarcos(35,13,85,17);
            system("color 3f");
            cordenadas_xy(39,15);
            printf("Vuelva a presionar Enter para Volver al Menu");
            system("pause>nul");
            system("cls");
            break;
        case 5:
           system("cls");
            if(aceptar=13)
            generadorDeMarcos(35,13,85,17);
            system("color 4E");
            cordenadas_xy(39,15);
            printf("Vuelva a presionar Enter para Volver al Menu");
            system("pause>nul");
            system("cls");
            break;
        case 6:
           system("cls");
            if(aceptar=13)
            generadorDeMarcos(35,13,85,17);
            system("color 5E");
            cordenadas_xy(39,15);
            printf("Vuelva a presionar Enter para Volver al Menu");
            system("pause>nul");
            system("cls");
            break;
        case 7:
           system("cls");
            if(aceptar=13)
            generadorDeMarcos(35,13,85,17);
            system("color 6f");
            cordenadas_xy(39,15);
            printf("Vuelva a presionar Enter para Volver al Menu");
            system("pause>nul");
            system("cls");
            break;
        case 8:
            system("cls");
            if(aceptar=13)
            generadorDeMarcos(35,13,85,17);
            system("color 7D");
            cordenadas_xy(39,15);
            printf("Vuelva a presionar Enter para Volver al Menu");
            system("pause>nul");
            system("cls");
            break;
        case 9:
            system("cls");
            ayudaColor();
            break;
        case 10:
            Salir=0;
            break;
        }
    }
    while(Salir);
}
void modificaColorTexto(){
int Salir=1;
    int opcion;
    char *titulo="Modificacion de Colores de Fondo";
    char *opciones[]={"Color Gris", "Color Azul", "Color Verde", "Color Aguamarina", "Color Rojo", "Color Purpura", "Color Amarillo", "Color Blanco", "Ayuda", "Atras"};
    int NumOpciones=10;
      do{
        opcion = menu(titulo,opciones,NumOpciones);
    int aceptar=0;

     switch(opcion){
        case 1:
            system("cls");
            if(aceptar=13)
            generadorDeMarcos(35,13,85,17);
            system("color 8");
            cordenadas_xy(39,15);
            printf("Vuelva a presionar Enter para Volver al Menu");
            system("pause>nul");
            system("cls");
            break;
        case 2:
            system("cls");
            if(aceptar=13)
            generadorDeMarcos(35,13,85,17);
            system("color 9");
            cordenadas_xy(39,15);
            printf("Vuelva a presionar Enter para Volver al Menu");
            system("pause>nul");
            system("cls");
            break;
        case 3:
            system("cls");
            if(aceptar=13)
            generadorDeMarcos(35,13,85,17);
            system("color A");
            cordenadas_xy(39,15);
            printf("Vuelva a presionar Enter para Volver al Menu");
            system("pause>nul");
            system("cls");
            break;
        case 4:
           system("cls");
            if(aceptar=13)
            generadorDeMarcos(35,13,85,17);
            system("color B");
            cordenadas_xy(39,15);
            printf("Vuelva a presionar Enter para Volver al Menu");
            system("pause>nul");
            system("cls");
            break;
        case 5:
           system("cls");
            if(aceptar=13)
            generadorDeMarcos(35,13,85,17);
            system("color C");
            cordenadas_xy(39,15);
            printf("Vuelva a presionar Enter para Volver al Menu");
            system("pause>nul");
            system("cls");
            break;
        case 6:
           system("cls");
            if(aceptar=13)
            generadorDeMarcos(35,13,85,17);
            system("color D");
            cordenadas_xy(39,15);
            printf("Vuelva a presionar Enter para Volver al Menu");
            system("pause>nul");
            system("cls");
            break;
        case 7:
           system("cls");
            if(aceptar=13)
            generadorDeMarcos(35,13,85,17);
            system("color E");
            cordenadas_xy(39,15);
            printf("Vuelva a presionar Enter para Volver al Menu");
            system("pause>nul");
            system("cls");
            break;
        case 8:
            system("cls");
            if(aceptar=13)
            generadorDeMarcos(35,13,85,17);
            system("color F");
            cordenadas_xy(39,15);
            printf("Vuelva a presionar Enter para Volver al Menu");
            system("pause>nul");
            system("cls");
            break;
        case 9:
            system("cls");
            ayudaColor();
            break;
        case 10:
            Salir=0;
            break;
        }
    }
    while(Salir);
}
void acerca_de(){

     generadorDeMarcos(0,0,118,29);
     generadorDeMarcos(1,1,117,5);
     generadorDeMarcos(1,6,117,23);
     generadorDeMarcos(1,24,117,28);
     cordenadas_xy(50,3);
     printf("Acerca de Calculadora");
     cordenadas_xy(50,8);
     printf("Nombre; Programa Calculadora");
     cordenadas_xy(50,9);
     printf(" CUDi -(UTNFRA) ");
     cordenadas_xy(50,10);
     printf("Materia Programacion 1");
     cordenadas_xy(50,11);
     printf("PROFESOR: Miguel Miño");
     cordenadas_xy(50,12);
     printf("Trabajo Practico: Numero 1");
     cordenadas_xy(50,13);
     printf("GRUPO 11 - INTEGRANTES");
     cordenadas_xy(50,14);
     printf("Eliana Martinez");
     cordenadas_xy(50,15);
     printf("MAIL: eli15martinez22@gmail.com");
     cordenadas_xy(50,16);
     printf("Daiana Solange Meaurio");
     cordenadas_xy(50,17);
     printf("MAIL: solmds8@gmail.com");
     printf("Gerardo Garcia");
     cordenadas_xy(50,18);
     printf("MAIL: ggeraweb@gmail.com");
     cordenadas_xy(50,19);
     printf("Javier Gustavo Garcia");
     cordenadas_xy(50,20);
     printf("MAIL: javyergarcia1987@gmail.com");
     cordenadas_xy(50,26);
     printf("Para Volver al menu presione enter");
     system("pause>nul");
     system("cls");
}
void ayudaPrincipal(){

     generadorDeMarcos(0,0,118,29);
     generadorDeMarcos(1,1,117,3);
     generadorDeMarcos(1,4,117,27);

     cordenadas_xy(50,2);
     printf("Ayuda de Menu Principal");
     cordenadas_xy(2,5);
     printf("Utilice el cursor del teclado ARRIBA O ABAJO para navegar por el menu, para seleccionar la opcion presione ENTER.");
     cordenadas_xy(10,8);
     printf("MENU PRINCIPAL| -> SUMAR| -> SUMAR ENTEROS -> CALCULADORA");
     cordenadas_xy(10,9);
     printf("              |         | -> SUMAR DECIMALES -> CALCULADORA");
     cordenadas_xy(10,10);
     printf("              | --> RESTAR | ---> RESTAR ENTEROS -> CALCULADORA ");
     cordenadas_xy(10,11);
     printf("              |           | ----> RESTAR DECIMALES -> CALCULADORA ");
     cordenadas_xy(10,12);
     printf("              | ---> MULTIPLICA| -----> MULTIPLICA ENTEROS -> CALCULADORA");
     cordenadas_xy(10,13);
     printf("              |                |------> MULTIPLICA DECIMALES -> CALCULADORA");
     cordenadas_xy(10,14);
     printf("              | ----> DIVISION  | ---------> DIVISION ENTEROS --> CALCULADORA");
     cordenadas_xy(10,15);
     printf("              |                 | ---------> DIVISION DECIMALES -> CALCULADORA");
     cordenadas_xy(10,16);
     printf("              | ----  -> FACTORIAL| -------------> FACTORIAL ENTEROS -> CALCULADORA");
     cordenadas_xy(10,17);
     printf("              |                   | -------------> FACTORIAL DECIMALES -> CALCULADORA");
     cordenadas_xy(10,18);
     printf("              | -> TODOS LOS CALCULOS| -------------> CALCULOS ENTEROS -> CALCULADORA");
     cordenadas_xy(10,19);
     printf("              |                      | -------------> CALCULOS DECIMALES -> CALCULADORA");
     cordenadas_xy(10,20);
     printf("              | -> CONFIGURACION | --------------------> CAMBIAR TEMA -----> LISTA DE TEMAS");
     cordenadas_xy(10,21);
     printf("              |                  | --------------> CAMBIAR COLOR DE TEXTO ----> LISTA DE COLORES");
     cordenadas_xy(10,22);
     printf("              |                  | ---------------------------------------------> AYUDA DEL MENU");
     cordenadas_xy(10,23);
     printf("              |                  | -------------------------------------> ATRAS -> VUELVA A MENU PRINCIPAL");
     cordenadas_xy(10,24);
     printf("              | ----------------> AYUDA ----------> ARBOL DE MENUS");
     cordenadas_xy(10,25);
     printf("              | ----------------> ACERCA DE ------> DATOS DELA PROGRAMA Y SUS CREADORES ");;
     cordenadas_xy(10,26);
     printf("              | ----------------> SALIR| ---------> SALIR DEL PROGRAMA");
     cordenadas_xy(45,28);
     printf("Para Volver al menu presione enter");
     system("pause>nul");
     system("cls");
}

void ayudaConfiguracion(){
    generadorDeMarcos(0,0,118,28);
    generadorDeMarcos(1,1,117,5);
    generadorDeMarcos(1,6,117,22);
    generadorDeMarcos(1,23,117,28);
    cordenadas_xy(45,3);
    printf("Ayuda para Configuracion ");
    cordenadas_xy(35,8);
    printf("Para cambiar la combinacion de colores de fondo:");
    cordenadas_xy(30,10);
    printf("PREIMERO: Ingresar en la opcion cambio de color de fondo.");
    cordenadas_xy(30,11);
    printf("Segundo: desplazarse por el menu con  flecha ARRIBA O ABAJO.");
    cordenadas_xy(30,12);
    printf("Tercero: Presione la tecla ENTER para efectuar el cambio.");
    cordenadas_xy(30,13);
    printf("Cuarto: seleccione opcion 4'ATRAS', o presione la tecla ESCAPE.");
    cordenadas_xy(45,25);
    printf("Para Volver al menu presione enter");
    system("pause>nul");
    system("cls");
}
void ayudaSuma(){
    generadorDeMarcos(0,0,118,28);
    generadorDeMarcos(1,1,117,5);
    generadorDeMarcos(1,6,117,22);
    generadorDeMarcos(1,23,117,28);
    cordenadas_xy(50,3);
    printf("Ayuda de la Suma");
    cordenadas_xy(35,8);
    printf("Para realizar la operacion de suma");
    cordenadas_xy(35,9);
    printf("Elija dos números para sumarse y obtener un resultado.");
    cordenadas_xy(40,26);
    printf("Para Volver al menu presione enter");
    system("pause>nul");
    system("cls");
}
void ayudaResta(){
    generadorDeMarcos(0,0,118,28);
    generadorDeMarcos(1,1,117,5);
    generadorDeMarcos(1,6,117,22);
    generadorDeMarcos(1,23,117,28);
    cordenadas_xy(50,3);
    printf("Ayuda de la Resta");
    cordenadas_xy(35,8);
    printf("Para realizar la operacion de resta");
    cordenadas_xy(35,9);
    printf("Elija dos numeros para obtener un resultado. Si el primer numero es inferior al segundo numero obtendra un numero negativo.");
    cordenadas_xy(40,26);
    printf("Para Volver al menu presione enter");
    system("pause>nul");
    system("cls");
}
void ayudaMultiplicacion(){
    generadorDeMarcos(0,0,118,28);
    generadorDeMarcos(1,1,117,5);
    generadorDeMarcos(1,6,117,22);
    generadorDeMarcos(1,23,117,28);
    cordenadas_xy(50,3);
    printf("Ayuda Multiplicacion");
    cordenadas_xy(35,8);
    printf("Para realizar la operacion de multiplicacion,");
    cordenadas_xy(35,9);
    printf("Elija un número a multiplicando (numero a multiplicar) y un numero multiplicador para obtener un producto.");
    cordenadas_xy(40,26);
    printf("Para Volver al menu presione enter");
    system("pause>nul");
    system("cls");
}
void ayudaDivision(){
    generadorDeMarcos(0,0,118,28);
    generadorDeMarcos(1,1,117,5);
    generadorDeMarcos(1,6,117,22);
    generadorDeMarcos(1,23,117,28);
    cordenadas_xy(50,3);
    printf("Ayuda Division");
    cordenadas_xy(35,8);
    printf("Para realizar la operacion de division,");
    cordenadas_xy(35,9);
    printf("Elija un dividendo (numero a dividir) y un divisor distinto a cero.");
    cordenadas_xy(40,26);
    printf("Para Volver al menu presione enter");
    system("pause>nul");
    system("cls");
}
void ayudaFactorial(){

    generadorDeMarcos(0,0,118,28);
    generadorDeMarcos(1,1,117,5);
    generadorDeMarcos(1,6,117,22);
    generadorDeMarcos(1,23,117,28);
    cordenadas_xy(50,3);
    printf("Ayuda para Factorial");
    cordenadas_xy(35,8);
    printf("Recursividad es el proceso de definir algo en terminos de si mismo");
    cordenadas_xy(35,9);
    printf("El caso mas comun para explicar recursividaes el calculo del factorial.");
    cordenadas_xy(35,10);
    printf("Si recordamos la definicion de factorial");
    cordenadas_xy(35,12);
    printf("1 si n=0 n!= n * (n-1)! si n>0");
    cordenadas_xy(35,13);
    printf("Si queremos calcular el factorial de 4 tendremos");
    cordenadas_xy(35,14);
    printf("4!= 4 . 3 . 2 . 1 = 24");
    cordenadas_xy(45,24);
    printf("Para Volver al menu presione enter");
    system("pause>nul");
    system("cls");

}
void ayudaColor(){

    generadorDeMarcos(0,0,118,28);
    generadorDeMarcos(1,1,117,5);
    generadorDeMarcos(1,6,117,22);
    generadorDeMarcos(1,23,117,28);
    cordenadas_xy(45,3);
    printf("Ayuda para Cambio de Color");
    cordenadas_xy(30,8);
    printf("Seleccione una opcion y presione ENTER para grabar los cambios");
    cordenadas_xy(30,9);
    printf("NOTA 1:En la opcion cambio de color de fondo, al cambiar el fondo");
    cordenadas_xy(30,10);
    printf("cambiara tambien");
    cordenadas_xy(30,11);
    printf("el color del texto con el fin de optimizar la visualizacion.");
    cordenadas_xy(30,12);
    printf("En alguna combinacion sera mejor el contraste que en otra.");
    cordenadas_xy(30,13);
    printf("Elija la opcion mas conveniente segun su preferencia");
    cordenadas_xy(30,14);
    printf("NOTA 2: Cuando elija cambiar el color del texto, el cambio sera");
    cordenadas_xy(30,15);
    printf("solamente sobre el mismo,");
    cordenadas_xy(30,16);
    printf("mientras el fondo quedara siendo de color negro en todas las opciones");
    cordenadas_xy(35,26);
    printf("Para Volver al menu presione la tecla 'ENTER'");
    system("pause>nul");
    system("cls");
}
void ayudaCalcularTodos(){

    printf("Aca va el texto de ayuda para calculo total");
    printf("Para Volver al menu presione enter");
    system("pause>nul");
    system("cls");
}
void generadorDeMarcos(int x1,int y1,int x2,int y2){
 int i;
    for (i=x1;i<x2;i++){
	cordenadas_xy(i,y1); printf("\304"); //linea horizontal superior
	cordenadas_xy(i,y2); printf("\304"); //linea horizontal inferior
    }
    for (i=y1;i<y2;i++){
	cordenadas_xy(x1,i); printf("\263"); //linea vertical izquierda
	cordenadas_xy(x2,i); printf("\263"); //linea vertical derecha
	}
    cordenadas_xy(x1,y1); printf("\332");
    cordenadas_xy(x1,y2); printf("\300");
    cordenadas_xy(x2,y1); printf("\277");
    cordenadas_xy(x2,y2); printf("\331");
}
int menu(char titulo[], char *opciones[], int NumOpciones){
 #define ARRIBA 72
 #define ABAJO 80
 #define ENTER 13
 #define ESCAPE 27

   int seleccion = 1;  // Indica la seleccion
   int cursor;
   int busqueda = 1; // controla el bucle para regresar a la rutina que lo llamo, al presionar ENTER

   do {
      SetConsoleTitle("Calculadora TP1 Grupo Numero 11");
      system("mode con: cols=120 lines=30");
      cordenadas_xy(42, 7 + seleccion);
      printf("==>");
      // Imprime el título del menú
      generadorDeMarcos(0,0,118,28);
      generadorDeMarcos(1,1,117,5);
      generadorDeMarcos(1,6,117,20);
      generadorDeMarcos(1,21,117,27);
      cordenadas_xy(45,3);
      printf("%s",titulo);
      cordenadas_xy(18,23);
      printf("Utilice 'FLECHA ARRIBA' o'FLECHA ABAJO' para desplazarse y ENTER para seleccionar");
      cordenadas_xy(18,24);
      printf("SI PRESIONA CUALQUIER OTRA TECLA DEBERA PRESIONAR LA TECLA ENTER PARA VOLVER AL MENU");

      int i = 0;

      // Imprime las opciones del menú
      for (; i < NumOpciones; ++i) {
         cordenadas_xy(45, 8 + i);
         printf(" %d - %s",(i + 1),opciones[i]);
      }

      // Solo permite que se ingrese ARRIBA, ABAJO o ENTER

      do {
        cursor=getch();
        system("cls");
        cordenadas_xy(50, 15);
      } while (cursor != ARRIBA && cursor != ABAJO && cursor != ENTER && cursor != ESCAPE);
      switch (cursor) {
         case ARRIBA:   // En caso que se presione ARRIBA
            seleccion--;
            if (seleccion < 1) {
               seleccion = NumOpciones;
            }
            break;
         case ABAJO:
                seleccion++;
            if (seleccion > NumOpciones) {
               seleccion = 1;
            }
            break;
         case ESCAPE:
             seleccion=NumOpciones;
             busqueda=0;
            break;
         case ENTER:
            busqueda = 0;
            break;
      }
   } while (busqueda);

   return seleccion;
}
void cordenadas_xy(int x , int y){
/**controlador para manejo de ventana*/
HANDLE ventana;
ventana = GetStdHandle(STD_OUTPUT_HANDLE);/**Crea un objeto de las cordenadas*/
COORD cordenadas;
cordenadas.X = x;/**Asociacion de objeto a los nombres que se dio en la funcion*/
cordenadas.Y = y;
SetConsoleCursorPosition(ventana,cordenadas);/**Posiciona cursor en las cordenadas*/
}
int sumar(int a, int b){
    int total;
    total=a+b;
    return total;
}
float sumardecimales(float a, float b){
    float total;
    total=a+b;
    return total;
}
int restar(int a, int b){
    int total;
    total=a-b;
    return total;
}
float restardecimales(float a,float b){
    float total;
    total=a-b;
    return total;
}
int multiplicar(int a, int b){
    int total;
    total=a*b;
    return total;
}
float multiplicardecimales(float a, float b){
    float total;
    total=a*b;
    return total;
}
int dividir(int a, int b){
    int total;
    total=a/b;
    return total;
}
float dividirdecimales(float a, float b){
    int total;
    total=a/b;
    return total;
}
int factorial(int n){
   long long int resp;
        if(n==1)
            return 1;
            resp=n* factorial(n-1);
            return (resp);
}
float factorialdecimal(float n){
    float resp;
        if(n==1)
            return 1;
            resp=n* factorial(n-1);
        return (resp);
}
/**
void ingresoValor(char *numeroA,char *numeroB)
{

   int NA;
   int NB;
   int numerovalidoA;
   int numerovalidoB;
   *numeroA=&numerovalidoA;
   *numeroB=&numerovalidoB;

   do
   {
       cordenadas_xy(45,8);
       printf("INGRESA UN NUMERO ENTERO A: ");
       gets(numeroA);
       NA=validar_numeroA(numeroA);
       cordenadas_xy(45,9);
       printf("INGRESA UN NUMERO ENTERO B: ");
       gets(numeroB);
       NB=validar_numeroB(numeroB);
       if(NA==0||NB==0){
       cordenadas_xy(45,18);
       printf("\nValor no Valido, Ingrese un Numero\n");
       getch();
       }

   }while(NA==0||NB==0);

   numerovalidoA=atoi(numeroA);
   numerovalidoB=atoi(numeroB);
   printf("\nLos Valores ingresodos son correctos\n");
   getch();
   return *numeroA,*numeroB;
}
int validar_numeroA(char numeroA[])
{
    int i;
    int PrimerCaracter=0;

        if(strlen(numeroA)==0){
            return 0;
        }
        if(numeroA[0]== '+'||numeroA[0]=='-'){
            PrimerCaracter=1;
            if(strlen(numeroA)==1){
            return 0;
            }
        }
     for(i=PrimerCaracter; i<strlen(numeroA); i++){
        if(!(isdigit(numeroA[i])))
        {
            return 0;
        }
     }
    return 1;
}
int validar_numeroB(char numeroB[])
{
    int i;
    int PrimerCaracter=0;


        if(strlen(numeroB)== 0){
            return 0;
        }
        if(numeroB[0]== '+'||numeroB[0]=='-'){
            PrimerCaracter=1;
            if(strlen(numeroB) == 1){
            return 0;
            }
        }
     for(i=PrimerCaracter; i<strlen(numeroB); i++){
        if(!(isdigit(numeroB[i])))
        {
            return 0;
        }
     }
    return 1;
}*/
