#include "TP_librerias.h"

void menuPrincipal(){

    int Salir=1;
    int opcion;
    char *titulo="Menu Principal";
    char *opciones[]={"Sumar","Restar","Multiplicar","Dividir","Factorial",
    "Ayuda","Configuracion","Acerca de","Salir"};
    int NumOpciones=9;
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
            ayudaPrincipal();
            break;
        case 7:
            system("cls");
            menuConfiguracion();
            break;
        case 8:
            system("cls");
            acerca_de();
            break;
        case 9:
            Salir=0;
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
     printf("Ingrese un numero entero: \n");
        printf("Numero A:");
        scanf(" %d ",&a);
        printf("Numero B:");
        scanf(" %d ",&b);
        printf(" %d + %d = %d",a,b,a+b);
        printf("\nPara Volver al menu presione enter");
        system("pause>nul");
        system("cls");
}
void opcionSumaDecimales(){

    float Da;
    float Db;
        printf("Ingrese un numero Decimal: ");
        printf("Numero A: ");
        scanf(" %f ",&Da);
        printf("Numero B: ");
        scanf(" %f ",&Db);
        printf(" %.2f + %.2f = %.2f",Da,Db,Da+Db);
        printf("\nPara Volver al menu presione enter");
        system("pause>nul");
        system("cls");
}
void opcionRestaEnteros(){

    int Ea;
    int Eb;
        printf("Ingrese un numero entero: ");
        printf("Numero A: ");
        scanf(" %d ",&Ea);
        printf("Numero B: ");
        scanf(" %d ",&Eb);
        printf(" %d - %d = %d",Ea,Eb,Ea-Eb);
        printf("\nPara Volver al menu presione enter");
        system("pause>nul");
        system("cls");
}
void opcionRestaDecimales(){

    float Da;
    float Db;
        printf("Resta de Decimales ");
        printf("Ingrese un numero Decimal: ");
        printf("Numero A: ");
        scanf(" %f ",&Da);
        printf("Numero B: ");
        scanf(" %f ",&Db);
        printf(" %.2f - %.2f = %.2f ",Da,Db,Da-Db);
        printf("\nPara Volver al menu presione enter");
        system("pause>nul");
        system("cls");
}
void opcionMultiplicacionEnteros(){

    int Ea;
    int Eb;
        printf("Ingrese un numero entero: ");
        printf("Numero A: ");
        scanf(" %d ",&Ea);
        fflush(stdin);
        printf("Numero B: ");
        scanf(" %d ",&Eb);
        printf(" %d * %d = %d",Ea,Eb,Ea*Eb);
        printf("\nPara Volver al menu presione enter");
        system("pause>nul");
        system("cls");

}
void opcionMultiplicacionDecimales(){
    float Da;
    float Db;
        printf("Ingrese un numero Decimal: ");
        printf("Numero A: ");
        scanf(" %f ",&Da);
        printf("Numero B: ");
        scanf(" %f ",&Db);
        printf(" %.2f * %.2f = %.2f",Da,Db,Da*Db);
        printf("\nPara Volver al menu presione enter");
        system("pause>nul");
        system("cls");
}
void opcionDivisionEnteros(){
    int Ea;
    int Eb;
        printf("Ingrese un numero entero: ");
        printf("Numero A: ");
        scanf(" %d ",&Ea);
        printf("Numero B: ");
        scanf(" %d ",&Eb);

    if(Eb==0){
        printf("No se puede Dividir por cero");
        }
    else{
        printf("Resultado %d / %d = %d",Ea,Eb,Ea/Eb);
        }
        printf("\nPara Volver al menu presione enter");
        system("pause>nul");
        system("cls");
}
void opcionDivisionDecimales(){
    float Da;
    float Db;
        printf("Ingrese un numero Decimal: ");
        printf("Numero A: ");
        scanf(" %f ",&Da);
        printf("Numero B: ");
        scanf(" %f ",&Db);
    if(Db==0){
        printf("No se puede Dividir por cero");
    }
    else{
        printf("Resultado %.2f / %.2f = %.2f",Da,Db,Da/Db);
    }
        printf("\nPara Volver al menu presione enter");
        system("pause>nul");
        system("cls");
}
void opcionFactorialEnteros(){
    int Ea;
    int resultado;
        printf("Ingrese un numero Entero: ");
        printf("Un Numero: ");
        scanf(" %d ",&Ea);
        int n=Ea;
        if(n==1)
        return 1;
        resultado=n*(n-1);
        printf("\nEl factorial de %d es %d",Ea,resultado);
        printf("\nPara Volver al menu presione enter");
        system("pause>nul");
        system("cls");
}
void opcionFactorialDecimales(){
    float Da;
    float resultado;
        printf("Ingrese un numero Decimal: ");
        printf("Un Numero: ");
        scanf(" %f ",&Da);
        int n=Da;
        if(n==1)
        return 1;
        resultado=n*(n-1);
        printf("\nEl factorial de %.2f es %.2d ",Da,resultado);
        printf("\nPara Volver al menu presione enter");
        system("pause>nul");
        system("cls");
}
void menuConfiguracion(){

    int Salir=1;
    int opcion;
    char *titulo="Menu Configuracion";
    char *opciones[]={"Modificar Color de Fondo","Modificar Color de Texto",
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
void acerca_de(){

    printf("Aca van los atributos, integrantes\n",
    "datos relevantes del programa, version y\n",
    "datos del TP...");
     printf("\nPara Volver al menu presione enter");
     system("pause>nul");
     system("cls");
}
void ayudaPrincipal(){

     cordenadas_xy(50,3);
     printf("Ayuda de Menu Principal\n");
     cordenadas_xy(0,5);
     printf("________________________________________________________________________________________________________________________");
     cordenadas_xy(5,8);
     printf("Utilice el cursor del teckado ARRIBA O ABAJO para navegar por el menu, para seleccionar la opcion presione ENTER.\n ");
     cordenadas_xy(0,26);
     printf("________________________________________________________________________________________________________________________");
     cordenadas_xy(20,30);
     printf("\nPara Volver al menu presione enter");
     system("pause>nul");
     system("cls");
}
/**void modificaAspecto(){

    printf("Aca va la configuracion de menu");
}*/
void modificaColorFondo(){
int Salir=1;
    int opcion;
    char *titulo="Modificaion de Colores de Fondo";
    char *opciones[]={"Color Negro","Color Azul","Color Verde","Color Aguamarina","Color Rojo","Color Purpura","Color Amarillo","Color Blanco","Ayuda","Atras"};
    int NumOpciones=10;
      do{
        opcion = menu(titulo,opciones,NumOpciones);
    int aceptar=0;

     switch(opcion){

        case 1:
            system("cls");
            if(aceptar=13)
            system("color 0E");
            printf("Presione 'Enter' para cambiar el Color",'\n');
            printf("\nVuelva a presionar Enter para Volver al Menu");
            system("pause>nul");
            system("cls");
            break;
        case 2:
            system("cls");
            if(aceptar=13)
            system("color 1E");
            printf("Presione 'Enter' para cambiar el Color",'\n');
            printf("\nVuelva a presionar Enter para Volver al Menu");
            system("pause>nul");
            system("cls");
            break;
        case 3:
            system("cls");
            if(aceptar=13)
            system("color 2E");
            printf("Presione 'Enter' para cambiar el Color",'\n');
            printf("\nVuelva a presionar Enter para Volver al Menu");
            system("pause>nul");
            system("cls");
            break;
        case 4:
           system("cls");
            if(aceptar=13)
            system("color 3E");
            printf("Presione 'Enter' para cambiar el Color",'\n');
            printf("\nVuelva a presionar Enter para Volver al Menu");
            system("pause>nul");
            system("cls");
            break;
        case 5:
           system("cls");
            if(aceptar=13)
            system("color 4E");
            printf("Presione 'Enter' para cambiar el Color",'\n');
            printf("\nVuelva a presionar Enter para Volver al Menu");
            system("pause>nul");
            system("cls");
            break;
        case 6:
           system("cls");
            if(aceptar=13)
            system("color 5E");
            printf("Presione 'Enter' para cambiar el Color",'\n');
            printf("\nVuelva a presionar Enter para Volver al Menu");
            system("pause>nul");
            system("cls");
            break;
        case 7:
           system("cls");
            if(aceptar=13)
            system("color 6E");
            printf("Presione 'Enter' para cambiar el Color",'\n');
            printf("\nVuelva a presionar Enter para Volver al Menu");
            system("pause>nul");
            system("cls");
            break;
        case 8:
            system("cls");
            if(aceptar=115)
            system("color 79");
            printf("Presione 'Enter' para cambiar el Color",'\n');
            printf("\nVuelva a presionar Enter para Volver al Menu");
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
    char *titulo="Modificaion de Colores de Fondo";
    char *opciones[]={"Color Gris","Color Azul","Color Verde","Color Aguamarina","Color Rojo","Color Rojo","Color Purpura","Color Amarillo","Color Blanco","Ayuda","Atras"};
    int NumOpciones=10;
      do{
        opcion = menu(titulo,opciones,NumOpciones);
    int aceptar=0;

     switch(opcion){
        case 1:
            system("cls");
            if(aceptar=13)
            system("color 8");
            printf("Presione 'Enter' para cambiar el Color",'\n');
            printf("\nVuelva a presionar Enter para Volver al Menu");
            system("pause>nul");
            system("cls");
            break;
        case 2:
            system("cls");
            if(aceptar=13)
            system("color 9");
            printf("Presione 'Enter' para cambiar el Color",'\n');
            printf("\nVuelva a presionar Enter para Volver al Menu");
            system("pause>nul");
            system("cls");
            break;
        case 3:
            system("cls");
            if(aceptar=13)
            system("color A");
            printf("Presione 'Enter' para cambiar el Color",'\n');
            printf("\nVuelva a presionar Enter para Volver al Menu");
            system("pause>nul");
            system("cls");
            break;
        case 4:
           system("cls");
            if(aceptar=13)
            system("color B");
            printf("Presione 'Enter' para cambiar el Color",'\n');
            printf("\nVuelva a presionar Enter para Volver al Menu");
            system("pause>nul");
            system("cls");
            break;
        case 5:
           system("cls");
            if(aceptar=13)
            system("color C");
            printf("Presione 'Enter' para cambiar el Color",'\n');
            printf("\nVuelva a presionar Enter para Volver al Menu");
            system("pause>nul");
            system("cls");
            break;
        case 6:
           system("cls");
            if(aceptar=13)
            system("color D");
            printf("Presione 'Enter' para cambiar el Color",'\n');
            printf("\nVuelva a presionar Enter para Volver al Menu");
            system("pause>nul");
            system("cls");
            break;
        case 7:
           system("cls");
            if(aceptar=13)
            system("color E");
            printf("Presione 'Enter' para cambiar el Color",'\n');
            printf("\nVuelva a presionar Enter para Volver al Menu");
            system("pause>nul");
            system("cls");
            break;
        case 8:
            system("cls");
            if(aceptar=115)
            system("color F");
            printf("Presione 'Enter' para cambiar el Color",'\n');
            printf("\nVuelva a presionar Enter para Volver al Menu");
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
/** modificaCuadroDeVentana(){

    printf("Aca va la configuracion de cuadro de ventana");
    printf("\nPara Volver al menu presione enter");
    system("pause>nul");
    system("cls");
}*/
void ayudaConfiguracion(){

    printf("Aca va el texto de ayuda para configuracion");
    printf("\nPara Volver al menu presione enter");
    system("pause>nul");
    system("cls");
}
void ayudaSuma(){
    ;
    printf("Aca va el texto de ayuda para suma");
    printf("\nPara Volver al menu presione enter");
    system("pause>nul");
    system("cls");
}
void ayudaResta(){

    printf("Aca va el texto de ayuda para resta");
    printf("\nPara Volver al menu presione enter");
    system("pause>nul");
    system("cls");
}
void ayudaMultiplicacion(){
    system("cls");
    printf("Aca va el texto de ayuda para multiplicacion");
    printf("\nPara Volver al menu presione enter");
    system("pause>nul");
    system("cls");
}
void ayudaDivision(){

    printf("Aca va el texto de ayuda para division");
    printf("\nPara Volver al menu presione enter");
    system("pause>nul");
    system("cls");
}
void ayudaFactorial(){

    printf("Recursividad es el proceso de definir algo en terminos de si mismo El caso mas comun para explicar recursividaes\n el calculo del factorial. Si recordamos la definicion de factorial\n 1 si n=0\n n!= n * (n-1)! si n>0\n Si queremos calcular el factorial de 4 tendremos\n 4!= 4 . 3 . 2 . 1 = 24\n");
    printf("\nPara Volver al menu presione enter");
    system("pause>nul");
    system("cls");

}
void ayudaColor(){

    printf("Aca va el texto de ayuda para cambio de color");
    printf("\nPara Volver al menu presione enter");
    system("pause>nul");
    system("cls");
}
int menu(char titulo[], char *opciones[], int NumOpciones){
 #define ARRIBA 72
 #define ABAJO 80
 #define ENTER 13

   int seleccion = 1;  // Indica la seleccion
   int cursor;
   int busqueda = 1; // controla el bucle para regresar a la rutina que lo llamo, al presionar ENTER

   do {
      SetConsoleTitle("Calculadora TP1 Grupo Numero 11");
      system("mode con: cols=120 lines=30");
      cordenadas_xy(40, 7 + seleccion);
      printf("==>");
      // Imprime el título del menú

      cordenadas_xy(43,2);
      printf("%s",titulo);
      cordenadas_xy(0,4);
      printf("========================================================================================================================");
      cordenadas_xy(0,20);
      printf("________________________________________________________________________________________________________________________");
      cordenadas_xy(15,22);
      printf("Utilice 'FLECHA ARRIBA' o'FLECHA ABAJO' para desplazarse y ENTER para seleccionar");
      cordenadas_xy(0,23);
      printf("________________________________________________________________________________________________________________________");
      cordenadas_xy(14,25);
      printf("\n\t\tSI PRESIONA CUALQUIER OTRA TECLA DEBERA PRESIONAR LA TECLA ENTER PARA VOLVER AL MENU");

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
      } while (cursor != ARRIBA && cursor != ABAJO && cursor != ENTER);
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
