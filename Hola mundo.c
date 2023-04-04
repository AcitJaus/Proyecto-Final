#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <locale.h>
#include <unistd.h>

// Prototipos

void inicio();
void end();
void carga();
void marco();
void repetir();
void bienvenido();
int contra ();
int pers();
void marco2();
void marco2c();
void marco3();
void marco4();
void menu();
void capturar();
void mostrar();
void buscar();
void firma();
void f0();
void f1();
void f2();
void f3();
void f4();
void f5();
void f6();


char name[30];
int n = 0;
    struct Agenda{       //Estructurada Anidada
    char fecha[35];
    char apellido[35];
    char nombre[35];
    char col[25];          //Campos
    char calle[30];
    char cp[6];
    char city[25];
    char correo[40];
    char phone[10];
    char civil[10];
    char cumple[12];
    char genero[15];
    struct Academicos{   //Datos Academicos
        int creditos;
        char codigo[10];
        float promedio;
        char carrera[30];
        char centro[30];
        char estado[10];
        char nivel[20];
        int creditost;
        char ingreso[10];
        int materias;

    }alu;// alías que manipula la estructura Alumno

}bol[10]; // bol manipula a cualquier elemento dentro de la estructura.

int main()
{
    int opc3 = 0;
    carga();
    inicio();
    do{

       carga();
       contra();
       repetir();
       gotoxy(42,18);
       scanf("%i",&opc3);
       fflush(stdin);
       system("cls");


    }while(opc3 <= 1);


    end();



    return 0;
}

// agregar el siguiente programa para que se pueda trabajar la funcion "gotoxy(x,y)"
void gotoxy(int x, int y)
{
   HANDLE hCon;
   hCon=GetStdHandle(STD_OUTPUT_HANDLE);
   COORD dwPos;
   dwPos.X = x;
 dwPos.Y = y;
 SetConsoleCursorPosition(hCon, dwPos);
  }

 void inicio()
//Programa Inicio()
 {
      marco();
      bienvenido();
      system("cls");


  return 0;
 }

void end()
//Programa end()
 {    system("cls");
      marco();


      for(int i=19;i<65;i++){
        Sleep(10);
        printf("\033[7;44;32m");
        gotoxy(i,20);
        printf("%c",220);

            }

      for(int i=20;i<65;i++){
        Sleep(10);
        printf("\033[7;44;32m");
        gotoxy(i,4);
        printf("%c",220);

            }
     for(int i=4;i<20;i++){
        Sleep(30);
        printf("\033[7;44;32m");
        gotoxy(64,i);
        printf("%c",220);

            }

      for(int i=4;i<20;i++){
        Sleep(30);
        printf("\033[7;44;32m");
        gotoxy(19,i);
        printf("%c",220);

            }

      system("COLOR 0F");

      gotoxy(22,10);
      printf("\tGracias por utilizar mi programa :)\n");
      gotoxy(29,18);
      printf("DOBLE ENTER PARA FINALIZAR\n");

      fflush(stdin);
      getch();
      system("cls");



  return 0;
 }

void carga(){
    int i = 0;
    int j = 1;
    marco();
    for(j=10; j<=100; j++){
        gotoxy(22,13);
        printf("\aC A R G A N D O   S I S T E M A ... %i%%",j);
        Sleep(10);
        marco();
        j=j+30;
        printf("\033[7;44;32m");
        for(i=19;i<65;i++){
            verdeblanco();
            //Sleep(5);
            gotoxy(i,15);
            printf("%c",220);
            }

        for(i=19;i<65;i++){
            //Sleep(5);
            gotoxy(i,11);
            printf("%c",220);
            }
        for(i=12;i<15;i++){
            //Sleep(5);
            gotoxy(64,i);
            printf("%c",220);
            }

        for(i=12;i<15;i++){
            //Sleep(5);
            gotoxy(19,i);
            printf("%c",220);
            }


        Sleep(200);
        verderojo();

        for(i=18;i<66;i++){
            //Sleep(5);               //Para agrandar: i=-1, i<65+1,
            gotoxy(i,16);
            printf("%c",220);       //y+1
            }

        for(i=18;i<66;i++){      //Para agrandar: i=-1, i<65+1,
            //Sleep(5);
            gotoxy(i,10);           //y-1
            printf("%c",220);
            }
        for(i=10;i<17;i++){         //Para agrandar i=-2 i<15+2
            //Sleep(5);
            gotoxy(18,i);           //x-1
            printf("%c",220);
            }

        for(i=10;i<17;i++){        //Para agrandar i=-2 i<15+2
            //Sleep(5);
            gotoxy(65,i);           // X= i<65+1
            printf("%c",220);
        }

        //Tercera
        Sleep(200);
        verdeazul();

        for(i=17;i<67;i++){
            //Sleep(5);
            gotoxy(i,17);
            printf("%c",220);
            }

        for(i=17;i<67;i++){
            //Sleep(5);
            gotoxy(i,9);
            printf("%c",220);
            }
        for(i=9;i<18;i++){
            //Sleep(5);
            gotoxy(17,i);
            printf("%c",220);
            }

        for(i=9;i<18;i++){
            //Sleep(5);
            gotoxy(66,i);
            printf("%c",220);
            }
        printf("\033[0m");

        Sleep(800);

        system("cls");

   }
}


 void marco()
//Programa Marco()
 {
    int i;

// revisar los colores con los numeros del 01 al 09.
// el priemr valor es para la coordenada de x y el ssegundo para la coordenada de y - gotoxy(x,y)
    system("COLOR 0F");
    setlocale(LC_ALL,"C");

    for(i=1;i<29;i++)
  {

       gotoxy(3,i);
       printf("%c",219);

  }
  for(i=4;i<80;i++)
  {
      printf("\033[1;32m");
      gotoxy(i,1);
      printf("%c",223);
      printf("\033[0m");
  }
  for(i=1;i<29;i++)
  {

      gotoxy(80,i);
      printf("%c",219);

  }
  for(i=4;i<80;i++)
  {
      printf("\033[1;32m");
      gotoxy(i,28);
      printf("%c",220);
      printf("\033[0m");
  }



  return 0;
 }

 void repetir(){
       system("cls");
       marco();
       printf("\033[1;32m");
       gotoxy(25,7);
       printf("\t%cRepetir programa%c",168,63);
       gotoxy(29,10);
       printf("***********************");
       printf("\033[1;35m");
       gotoxy(30,12);
       printf("1)Repetir");
       gotoxy(30,14);
       printf("2)Borrar y continuar");
       printf("\033[1;32m");
       gotoxy(29 ,16);
       printf("***********************\a");

 }

 void bienvenido(){

    int x = 15;
    int y = 7;
    int i = 1;


    printf("\033[1;32m");
    gotoxy(x,y);
    printf("\a****");
    gotoxy(x,y+1);
    printf("*  *");
    gotoxy(x,y+2);
    printf("***");
    gotoxy(x,y+3);
    printf("*  *");
    gotoxy(x,y+4);
    printf("****");

    Sleep(400);
    printf("\033[1;33m");

    gotoxy(x+5,y);
    printf("****");
    gotoxy(x+6,y+1);
    printf("**");
    gotoxy(x+6,y+2);
    printf("**");
    gotoxy(x+6,y+3);
    printf("**");
    gotoxy(x+5,y+4);
    printf("****");

    Sleep(400);
    printf("\033[0;32m");

    gotoxy(x+10,y);
    printf("****");
    gotoxy(x+10,y+1);
    printf("*");
    gotoxy(x+10,y+2);
    printf("****");
    gotoxy(x+10,y+3);
    printf("*");
    gotoxy(x+10,y+4);
    printf("****");

    Sleep(400);
    printf("\033[1;35m");


    gotoxy(x+15,y);
    printf("*   *");
    gotoxy(x+15,y+1);
    printf("**  *");
    gotoxy(x+15,y+2);;
    printf("* * *");
    gotoxy(x+15,y+3);
    printf("*  **");
    gotoxy(x+15,y+4);
    printf("*   *");

    Sleep(400);
    printf("\033[1;33m");

    gotoxy(x+21,y);
    printf("*  *");
    gotoxy(x+21,y+1);
    printf("*  *");
    gotoxy(x+21,y+2);
    printf("*  *");
    gotoxy(x+21,y+3);
    printf("*  *");
    gotoxy(x+21,y+4);
    printf(" ** ");

    Sleep(400);
    printf("\033[1;31m");

    gotoxy(x+26,y);
    printf("****");
    gotoxy(x+26,y+1);
    printf("*");
    gotoxy(x+26,y+2);
    printf("****");
    gotoxy(x+26,y+3);
    printf("*");
    gotoxy(x+26,y+4);
    printf("****");

    Sleep(400);
    printf("\033[1;32m");

    gotoxy(x+31,y);
    printf("*   *");
    gotoxy(x+31,y+1);
    printf("**  *");
    gotoxy(x+31,y+2);;
    printf("* * *");
    gotoxy(x+31,y+3);
    printf("*  **");
    gotoxy(x+31,y+4);
    printf("*   *");

    Sleep(400);
    printf("\033[0m");

    gotoxy(x+37,y);
    printf("****");
    gotoxy(x+38,y+1);
    printf("**");
    gotoxy(x+38,y+2);
    printf("**");
    gotoxy(x+38,y+3);
    printf("**");
    gotoxy(x+37,y+4);
    printf("****");

    Sleep(400);
    printf("\033[1;35m");

    gotoxy(x+42,y);
    printf("***");
    gotoxy(x+42,y+1);
    printf("*  *");
    gotoxy(x+42,y+2);
    printf("*   *");
    gotoxy(x+42,y+3);
    printf("*  *");
    gotoxy(x+42,y+4);
    printf("***");

    Sleep(400);
    printf("\033[1;31m");

    gotoxy(x+49,y);
    printf("\a **");
    gotoxy(x+48,y+1);
    printf("*    *");
    gotoxy(x+48,y+2);
    printf("*    *");
    gotoxy(x+48,y+3);
    printf("*    *");
    gotoxy(x+49,y+4);
    printf(" ** ");

    printf("\033[0m");


    Sleep(1500);

    for(i=4;i<80;i++)
  {
      Sleep(10);
      gotoxy(i,24);
      printf("%c",220);
  }

    gotoxy(x+31,y+20);
    printf("\033[1;32m");
    printf("P R O Y E C T O  F I N A L");
    printf("\033[0m");


      for(i=12;i<71;i++)
  {
      Sleep(10);
      gotoxy(i,22);
      printf("%c",220);
  }

    for(i=23;i<25;i++)
  {
      Sleep(10);
      gotoxy(12,i);
      printf("%c",219);
  }

   for(i=23;i<25;i++)
  {
      Sleep(10);
      gotoxy(70,i);
      printf("%c",219);
  }

    gotoxy(x,y+16);
    printf("\033[1;32m");
    printf("P R E S I O N E  E N T E R   P A R A   I N G R E S A R");
    printf("\033[0m");

    getch();


}

int contra (){

    int h=1;
    int i;
    char pin[50];


        while(h<=3){

        marco3();

        for(i=18;i<33;i++){
                Sleep(10);
                gotoxy(i,3);printf("%c",220);}

        for(i=1;i<4;i++){
                Sleep(10);
                gotoxy(18,i);printf("%c",219);}

        for(i=1;i<4;i++){
                Sleep(10);
                gotoxy(33,i);printf("%c",219);}

        gotoxy(7,6);printf("I N G R E S E   S U  C O N T R A S E %c A ",165);

        printf("\033[1;32m");
        gotoxy(20,2);printf(" L O G   I N ");
        printf("\033[0m");

        printf("\033[1;32m");
        gotoxy(25,9);gets(pin);
        printf("\033[1;32m");


        if (strcmp(pin,"123")==0){

            pers();
            carga();
            menu();
            break;
        }
        else{

            system("cls");
             marco3();
             system("COLOR 4F");

             for(i=12;i<38;i++){
                Sleep(10);
                gotoxy(i,3);printf("%c",220);}

             for(i=1;i<4;i++){
                Sleep(10);
                gotoxy(12,i);printf("%c",219);}

             for(i=1;i<4;i++){
                Sleep(10);
                gotoxy(38,i);printf("%c",219);}

            printf("\033[1;32m");
            gotoxy(20,2);printf("L O G   I N ");
            printf("\033[0m");

            system("COLOR 4F");
            gotoxy(7,8);
            printf("C O N T R A S E %c A   I N V %c L I D A  ",165,181);
            Sleep(1000);
            system("cls");
            h=h+1;

        }

    }

    return 0;

}

int pers(){


    int i=1;

             system("cls");
             marco3();




             for(i=12;i<38;i++){
                Sleep(10);
                gotoxy(i,3);printf("%c",220);}

             for(i=1;i<4;i++){
                Sleep(10);
                gotoxy(12,i);printf("%c",219);}

             for(i=1;i<4;i++){
                Sleep(10);
                gotoxy(38,i);printf("%c",219);}

            printf("\033[1;32m");
            gotoxy(20,2);printf("L O G   I N ");


            printf("\033[0;32m");
            setlocale(LC_ALL,"");

            gotoxy(9,7);
            printf("¿ C Ú A L  E S  S U  U S U A R I O ? ");
            gotoxy(18,9);
            fflush(stdin);
            gets(name);
            Sleep(1000);
            system("cls");

}


 void marco2()
//Programa Marco()
 {
    int i;

// revisar los colores con los numeros del 01 al 09.
// el priemr valor es para la coordenada de x y el ssegundo para la coordenada de y - gotoxy(x,y)
    system("COLOR 0F");
    setlocale(LC_ALL,"C");

    for(i=1;i<32;i++)
  {
       gotoxy(3,i);
       printf("%c",219);
  }
  for(i=4;i<50;i++)
  {
      gotoxy(i,1);
      printf("%c",223);
  }
  for(i=1;i<32;i++)
  {
      gotoxy(50,i);
      printf("%c",219);
  }
  for(i=4;i<50;i++)
  {

      gotoxy(i,31);
      printf("%c",220);
  }

  for(i=11;i<43;i++){
        Sleep(10);
        gotoxy(i,3);printf("%c",220);}

  for(i=1;i<4;i++){
        Sleep(10);
        gotoxy(10,i);printf("%c",219);}

  for(i=1;i<4;i++){
        Sleep(10);
        gotoxy(43,i);printf("%c",219);}

   printf("\033[1;32m");
   gotoxy(12,2);printf("D A T O S  P E R S O N A L E S");
   printf("\033[0m");


  return 0;
 }

 void marco2c()
//Programa Marco()
 {
    int i;

// revisar los colores con los numeros del 01 al 09.
// el priemr valor es para la coordenada de x y el ssegundo para la coordenada de y - gotoxy(x,y)
    system("COLOR 0F");
    setlocale(LC_ALL,"C");

    for(i=1;i<32;i++)
  {
       gotoxy(53,i);
       printf("%c",219);
  }
  for(i=54;i<100;i++)
  {
      gotoxy(i,1);
      printf("%c",223);
  }
  for(i=1;i<32;i++)
  {
      gotoxy(100,i);
      printf("%c",219);
  }
  for(i=54;i<100;i++)
  {

      gotoxy(i,31);
      printf("%c",220);
  }

  for(i=60;i<93;i++){
        Sleep(10);
        gotoxy(i,3);printf("%c",220);}

  for(i=1;i<4;i++){
        Sleep(10);
        gotoxy(60,i);printf("%c",219);}

  for(i=1;i<4;i++){
        Sleep(10);
        gotoxy(93,i);printf("%c",219);}

   printf("\033[1;32m");
   gotoxy(62,2);printf("D A T O S  A C A D %c M I C O S",144);
   printf("\033[0m");

  return 0;
 }

 void marco3()
//Programa Marco()
 {
    int i;

// revisar los colores con los numeros del 01 al 09.
// el priemr valor es para la coordenada de x y el ssegundo para la coordenada de y - gotoxy(x,y)
    system("COLOR 0F");
    setlocale(LC_ALL,"C");

    for(i=1;i<15;i++)
  {
       gotoxy(3,i);
       printf("%c",219);
  }
  for(i=4;i<50;i++)
  {
      gotoxy(i,1);
      printf("%c",223);
  }
  for(i=1;i<15;i++)
  {
      gotoxy(50,i);
      printf("%c",219);
  }
  for(i=4;i<50;i++)
  {
      gotoxy(i,14);
      printf("%c",220);
  }

  return 0;
 }

  void marco4()
//Programa Marco()
 {
    int i;

// revisar los colores con los numeros del 01 al 09.
// el priemr valor es para la coordenada de x y el ssegundo para la coordenada de y - gotoxy(x,y)
    printf("\033[1;33m");
    setlocale(LC_ALL,"C");

    for(i=1;i<29;i++)
  {
       gotoxy(3,i);
       printf("%c",219);
  }
  for(i=4;i<80;i++)
  {
      gotoxy(i,1);
      printf("%c",223);
  }
  for(i=1;i<29;i++)
  {
      gotoxy(80,i);
      printf("%c",219);
  }
  for(i=4;i<80;i++)
  {

      gotoxy(i,28);
      printf("%c",220);
  }

  return 0;
 }

void menu(){

    char opc[50];
    do{
        system("cls");
        marco4();
        f0();
        gotoxy(23,10);
        printf("%cEn qu%c est%cs pensando%c   %s ",168,130,160,63,name);
        printf("\033[0;33m");
        gotoxy(27,12);
        printf(" 1%c C A P T U R A R        %c ",186,186);
        gotoxy(27,14);
        printf(" 2%c M O S T R A R          %c ",186,186);
        gotoxy(27,16);
        printf(" 3%c B U S C A R            %c ",186,186);
        printf("\033[0m");
        gotoxy(27,18);
        printf(" 4%c A C E R C A  D E . . . %c ",186,186);
        printf("\033[1;31m");
        gotoxy(27,20);
        printf(" 5%c R E P E T I R          %c ",186,186);
        printf("\033[1;32m");
        gotoxy(15,23);
        printf("  %c D I G I T E  S U  O P C I %c N %c :  ",186,224,186);

        gotoxy(55,23);
        gets(opc);

        if(strcmp(opc,"1")==0){
            system("cls");
            capturar();
        }


        else
        if(strcmp(opc,"2")==0){
            system("cls");
            mostrar();
        }

        else
        if(strcmp(opc,"3")==0){
            system("cls");
            buscar();

        }

        else
        if(strcmp(opc,"4")==0){
            firma();

        }

    }while(strcmp(opc,"5")!=0);

    n=0;
}

void capturar(){

    if(n<10){

        marco2();

        printf("\033[1;32m");
        gotoxy(7,6);
        printf("DAME LA FECHA DE HOY:");
        printf("\033[0m");
        fflush(stdin);
        gotoxy(29,6);
        scanf("%s",&bol[n].fecha);

        printf("\033[1;32m");
        gotoxy(7,8);
        printf("DAME EL/LOS NOMBRE/S DEL ALUMNO:");
        printf("\033[0m");
        gotoxy(7,9);
        fflush(stdin);
        gets(bol[n].nombre);

        printf("\033[1;32m");
        gotoxy(7,11);
        printf("DAME LOS APELLIDOS DEL ALUMNO:");
        printf("\033[0m");
        gotoxy(7,12);
        fflush(stdin);
        gets(bol[n].apellido);

        printf("\033[1;32m");
        gotoxy(7,14);
        printf("FECHA DE NACIMIENTO: ");
        printf("\033[0m");
        fflush(stdin);
        gets(bol[n].cumple);

        printf("\033[1;32m");
        gotoxy(7,16);
        printf("GENERO:");
        printf("\033[0m");
        gotoxy(15,16);
        fflush(stdin);
        gets(bol[n].genero);

        printf("\033[1;32m");
        gotoxy(7,18);
        printf("CIUDAD:");
        printf("\033[0m");
        gotoxy(15,18);
        fflush(stdin);
        gets(bol[n].city);

        printf("\033[1;32m");
        gotoxy(7,20);
        printf("COLONIA: ");
        printf("\033[0m");
        fflush(stdin);
        gets(bol[n].col);

        printf("\033[1;32m");
        gotoxy(7,22);
        printf("CODIGO POSTAL:");
        printf("\033[0m");
        gotoxy(22,22);
        fflush(stdin);
        gets(bol[n].cp);

        printf("\033[1;32m");
        gotoxy(7,24);
        printf("CALLE:");
        printf("\033[0m");
        gotoxy(14,24);
        fflush(stdin);
        gets(bol[n].calle);

        printf("\033[1;32m");
        gotoxy(7,26);
        printf("CORREO:");
        printf("\033[0m");
        gotoxy(15,26);
        fflush(stdin);
        gets(bol[n].correo);

        printf("\033[1;32m");
        gotoxy(7,28);
        printf("TEL%cFONO:",144);
        printf("\033[0m");
        gotoxy(17,28);
        fflush(stdin);
        gets(bol[n].phone);

        printf("\033[1;32m");
        gotoxy(7,30);
        printf("ESTADO CIVIL:");
        printf("\033[0m");
        gotoxy(21,30);
        fflush(stdin);
        gets(bol[n].civil);


        //Datos Academicos

        marco2c();

        printf("\033[1;32m");
        gotoxy(57,6);
        printf("CODIGO UDG: ");
        printf("\033[0m");
        fflush(stdin);
        gets(bol[n].alu.codigo);

        printf("\033[1;32m");
        gotoxy(57,8);
        printf("PROMEDIO: ");
        printf("\033[0m");
        fflush(stdin);
        scanf("%f",&bol[n].alu.promedio);

        printf("\033[1;32m");
        gotoxy(57,10);
        printf("CREDITOS ADQUIRIDOS: ");
        printf("\033[0m");
        fflush(stdin);
        scanf("%i",&bol[n].alu.creditos);

        printf("\033[1;32m");
        gotoxy(57,12);
        printf("CREDITOS REQUERIDOS DEL PROGRAMA: ");
        printf("\033[0m");
        fflush(stdin);
        scanf("%i",&bol[n].alu.creditost);

        printf("\033[1;32m");
        gotoxy(57,14);
        printf("TOTAL DE MATERIAS: ");
        printf("\033[0m");
        fflush(stdin);
        scanf("%i",&bol[n].alu.materias);

        printf("\033[1;32m");
        gotoxy(57,16);
        printf("CARRERA: ");
        printf("\033[0m");
        fflush(stdin);
        gets(bol[n].alu.carrera);

        printf("\033[1;32m");
        gotoxy(57,18);
        printf("CENTRO UNIVERSITARIO: ");
        printf("\033[0m");
        fflush(stdin);
        gets(bol[n].alu.centro);

        printf("\033[1;32m");
        gotoxy(57,20);
        printf("NIVEL EDUCATIVO: ");
        printf("\033[0m");
        fflush(stdin);
        gets(bol[n].alu.nivel);

        printf("\033[1;32m");
        gotoxy(57,22);
        printf("ESTADO ACTUALMENTE: ");
        printf("\033[0m");
        fflush(stdin);
        gets(bol[n].alu.estado);

        printf("\033[1;32m");
        gotoxy(57,24);
        printf("CICLO DE ADMISI%cN: ",224);
        printf("\033[0m");
        fflush(stdin);
        gets(bol[n].alu.ingreso);

        printf("\033[1;32m");
        gotoxy(69,28);
        printf("ENTER PARA GUARDAR");
        printf("\033[0m");

        fflush(stdin);
        getch();

        n++;
        system("cls");
        //menu();
    }

        else{

            system("cls");
             marco3();

             for(int i=12;i<38;i++){
                Sleep(10);
                gotoxy(i,3);printf("%c",220);}

             for(int i=1;i<4;i++){
                Sleep(10);
                gotoxy(12,i);printf("%c",219);}

             for(int i=1;i<4;i++){
                Sleep(10);
                gotoxy(38,i);printf("%c",219);}

            printf("\033[1;32m");
            gotoxy(20,2);printf(" E R R O R ");
            printf("\033[0m");


            gotoxy(12,8);
            printf("R E G I S T R O S  L L E N O S",165,181);
            fflush(stdin);
            getch();
            system("cls");
            //menu();
    }
}


void mostrar(){

    system("cls");
    if(n!=0){
        for (int i=0; i<n; i++){
            marco2();


             gotoxy(7,6);
             printf("FECHA DE REGISTRO: %s",bol[i].fecha);

             gotoxy(7,8);
             printf("Nombre: %s ",bol[i].nombre);

             gotoxy(7,10);
             printf("APELLIDOS: %s",bol[i].apellido);

             gotoxy(7,12);
             printf("FECHA DE NACIMIENTO: %s",bol[i].cumple);

             gotoxy(7,14);
             printf("GENERO: %s",bol[i].genero);

             gotoxy(7,16);
             printf("CIUDAD: %s",bol[i].city);

             gotoxy(7,18);
             printf("COLONIA: %s",bol[i].col);

             gotoxy(7,20);
             printf("CODIGO POSTAL: %s",bol[i].cp);

             gotoxy(7,22);
             printf("CALLE: %s",bol[i].calle);

             gotoxy(7,24);
             printf("CORREO: %s",bol[i].correo);

             gotoxy(7,26);
             printf("TEL%cFONO: %s",144,bol[i].phone);

             gotoxy(7,28);
             printf("ESTADO CIVIL: %s",bol[i].civil);


            //Datos Academicos

            marco2c();


            gotoxy(57,6);
            printf("CODIGO UDG: %s ",bol[i].alu.codigo);

            gotoxy(57,8);
            printf("CARRERA: %s",bol[i].alu.carrera);

            gotoxy(57,10);
            printf("PROMEDIO: %f ",bol[i].alu.promedio);

            gotoxy(57,12);
            printf("CREDITOS ADQUIRIDOS: %i ",bol[i].alu.creditos);

            gotoxy(57,14);
            printf("CREDITOS REQUERIDOS DEL PROGRAMA: %i",bol[i].alu.creditost);

            gotoxy(57,16);
            printf("TOTAL DE MATERIAS: %i",bol[i].alu.creditost);

            gotoxy(57,18);
            printf("CENTRO UNIVERSITARIO: %s",bol[i].alu.centro);

            gotoxy(57,20);
            printf("NIVEL EDUCATIVO: %s",bol[i].alu.nivel);

            gotoxy(57,22);
            printf("ESTADO ACTUALMENTE: %s",bol[i].alu.estado);

            gotoxy(57,24);
            printf("CICLO DE ADMISI%cN: %s",224,bol[i].alu.ingreso);


            gotoxy(65,28);
            printf("ENTER PARA CONTINUAR");
            fflush(stdin);
            getch();
            system("cls");
        }
    }
    else{

            system("cls");
            marco3();

            for(int i=12;i<38;i++){
                Sleep(10);
                gotoxy(i,3);printf("%c",220);}

            for(int i=1;i<4;i++){
                Sleep(10);
                gotoxy(12,i);printf("%c",219);}

            for(int i=1;i<4;i++){
                Sleep(10);
                gotoxy(38,i);printf("%c",219);}

            printf("\033[1;32m");
            gotoxy(20,2);printf(" V A C %c O ",214);
            printf("\033[0;33m");

            gotoxy(11,8);
            printf("R E G I S T R O S  V A C %c O S",214);
            fflush(stdin);
            getch();
            system("cls");
            //menu();
    }

    //menu();

}

void buscar(){

   system("cls");
   if(n!=0){

       int band=0;
       char a[30];
       marco3();
       for(int i=12;i<38;i++){
            Sleep(10);
            gotoxy(i,3);printf("%c",220);}
       for(int i=1;i<4;i++){
            Sleep(10);
            gotoxy(12,i);printf("%c",219);}

       for(int i=1;i<4;i++){
            Sleep(10);
            gotoxy(38,i);printf("%c",219);}

        printf("\033[1;32m");
        gotoxy(20,2);printf(" C U C E I ");
        printf("\033[0;33m");

        gotoxy(6,8);
        printf("I N G R E S E  S U  C O D I G O  U D G:",165,181);
        fflush(stdin);
        gotoxy(25,10); scanf("%s",a);
        system("cls");
        for(int i=0; i<=n; i++){
            if(strcmp(a,bol[i].alu.codigo)==0){

                marco2();


                gotoxy(7,6);
                printf("FECHA DE REGISTRO: %s",bol[i].fecha);

                gotoxy(7,8);
                printf("Nombre: %s ",bol[i].nombre);

                gotoxy(7,10);
                printf("APELLIDOS: %s",bol[i].apellido);

                gotoxy(7,12);
                printf("FECHA DE NACIMIENTO: %s",bol[i].cumple);

                gotoxy(7,14);
                printf("GENERO: %s",bol[i].genero);

                gotoxy(7,16);
                printf("CIUDAD: %s",bol[i].city);

                gotoxy(7,18);
                printf("COLONIA: %s",bol[i].col);

                gotoxy(7,20);
                printf("CODIGO POSTAL: %s",bol[i].cp);

                gotoxy(7,22);
                printf("CALLE: %s",bol[i].calle);

                gotoxy(7,24);
                printf("CORREO: %s",bol[i].correo);

                gotoxy(7,26);
                printf("TEL%cFONO: %s",144,bol[i].phone);

                gotoxy(7,28);
                printf("ESTADO CIVIL: %s",bol[i].civil);


                //Datos Academicos

                marco2c();


                gotoxy(57,6);
                printf("CODIGO UDG: %s ",bol[i].alu.codigo);

                gotoxy(57,8);
                printf("CARRERA: %s",bol[i].alu.carrera);

                gotoxy(57,10);
                printf("PROMEDIO: %f ",bol[i].alu.promedio);

                gotoxy(57,12);
                printf("CREDITOS ADQUIRIDOS: %i ",bol[i].alu.creditos);

                gotoxy(57,14);
                printf("CREDITOS REQUERIDOS DEL PROGRAMA: %i",bol[i].alu.creditost);

                gotoxy(57,16);
                printf("TOTAL DE MATERIAS: %i",bol[i].alu.creditost);

                gotoxy(57,18);
                printf("CENTRO UNIVERSITARIO: %s",bol[i].alu.centro);

                gotoxy(57,20);
                printf("NIVEL EDUCATIVO: %s",bol[i].alu.nivel);

                gotoxy(57,22);
                printf("ESTADO ACTUALMENTE: %s",bol[i].alu.estado);

                gotoxy(57,24);
                printf("CICLO DE ADMISI%cN: %s",224,bol[i].alu.ingreso);

                gotoxy(66,28);
                printf("ENTER PARA CONTINUAR");
                band=1;

                fflush(stdin);
                getch();
                system("cls");
                //menu();


            }
        }

        if(band==0){


            system("cls");
             marco3();

             for(int i=12;i<38;i++){
                Sleep(10);
                gotoxy(i,3);printf("%c",220);}

             for(int i=1;i<4;i++){
                Sleep(10);
                gotoxy(12,i);printf("%c",219);}

             for(int i=1;i<4;i++){
                Sleep(10);
                gotoxy(38,i);printf("%c",219);}

            printf("\033[1;32m");
            gotoxy(20,2);printf(" E R R O R ");
            printf("\033[0m");


            gotoxy(10,8);
            printf("C O D I G O  U D G  I N V %c L I D O",181);
            fflush(stdin);
            getch();
            system("cls");
            //menu();


        }

       }

    else{

        system("cls");
        marco3();

             for(int i=12;i<38;i++){
                Sleep(10);
                gotoxy(i,3);printf("%c",220);}

             for(int i=1;i<4;i++){
                Sleep(10);
                gotoxy(12,i);printf("%c",219);}

             for(int i=1;i<4;i++){
                Sleep(10);
                gotoxy(38,i);printf("%c",219);}

            printf("\033[1;32m");
            gotoxy(20,2);printf(" E R R O R ");
            printf("\033[0m");


            gotoxy(11,8);
            printf("R E G I S T R O S  V A C %c O S",214);
            fflush(stdin);
            getch();
            system("cls");
            //menu();


    }

   }

void firma(){

    system("cls");
    marco();


    for(int i=19;i<65;i++){
        Sleep(10);
        printf("\033[7;44;32m");
        gotoxy(i,20);
        printf("%c",220);

            }

    for(int i=20;i<65;i++){
        Sleep(10);
        printf("\033[7;44;32m");
        gotoxy(i,4);
        printf("%c",220);

            }
    for(int i=4;i<20;i++){
        Sleep(30);
        printf("\033[7;44;32m");
        gotoxy(64,i);
        printf("%c",220);

            }

    for(int i=4;i<20;i++){
        Sleep(30);
        printf("\033[7;44;32m");
        gotoxy(19,i);
        printf("%c",220);

            }


    system("COLOR 0F");
    marco();
    setlocale(LC_ALL,"");

    gotoxy(25,7);
    printf("\033[4;32m");
    printf("//TODOS LOS DERECHOS RESERVADOS//");
    gotoxy(29,12);
    printf("Diego Enrique Cortés Aviña");

    Sleep(2000);
    gotoxy(26 ,16);
    printf("CUCEI   PROGRAMACIÓN ESTRUCTURADA.\a");

    gotoxy(24,26);
    printf("Presione Enter para regresar al menu");
    printf("\033[0m");

    fflush(stdin);
    getch();
    system("cls");
    //menu();
}

 void f0()
    {
    f1();
    }

    void f1()
    {
        f2();
        int x = 57;
        int y = 3;
        printf("\033[1;31m");
        gotoxy(x,y);printf("\a    %c",219 );
        gotoxy(x,y+1);printf("   %c %c",219,219);
        gotoxy(x,y+2);printf("  %c   %c",219,219);
        gotoxy(x,y+3);printf(" %c%c%c%c%c%c%c",219,220,220,220,220,220,219);
        gotoxy(x,y+4);printf("%c       %c",219,219);
    }

    void f2()
    {
        f3();
        int x = 50;
        int y = 3;
        printf("\033[0;35m");
        gotoxy(x,y);printf("\a%c%c%c%c%c",219,223,223,223,220);
        gotoxy(x,y+1);printf("%c    %c",219,219);
        gotoxy(x,y+2);printf("%c    %c",219,219);
        gotoxy(x,y+3);printf("%c    %c",219,219);
        gotoxy(x,y+4);printf("%c%c%c%c%c",219,220,220,220,223);
    }

     void f3()
    {
        f4();
        int x = 42;
        int y = 3;
        printf("\033[0;35m");
        gotoxy(x,y);printf("\a%c%c    %c",219,223,219);
        gotoxy(x,y+1);printf("%c %c   %c",219,219,219);
        gotoxy(x,y+2);printf("%c  %c  %c",219,219,219);
        gotoxy(x,y+3);printf("%c   %c %c",219,219,219);
        gotoxy(x,y+4);printf("%c     %c",219,219);
    }
     void f4()
    {
        f5();
        int x = 35;
        int y = 3;
        printf("\033[0;35m");
        gotoxy(x,y);printf("\a%c%c%c%c%c%c",219,223,223,223,223,223);
        gotoxy(x,y+1);printf("%c",219);
        gotoxy(x,y+2);printf("%c%c%c%c%c%c",219,223,223,223,223,223);
        gotoxy(x,y+3);printf("%c",219);
        gotoxy(x,y+4);printf("%c%c%c%c%c%c",219,220,220,220,220,220);

    }

     void f5()
    {
        f6();
        int x = 28;
        int y = 3;
        printf("\033[0;35m");
        gotoxy(x,y);printf("\a%c%c%c%c%c",219,223,223,223,223,223);
        gotoxy(x,y+1);printf("%c",219);
        gotoxy(x,y+2);printf("%c%c%c%c%c%c",219,220,220,220,220,220);
        gotoxy(x,y+3);printf("%c    %c",219,219);
        gotoxy(x,y+4);printf("%c%c%c%c%c%c",219,220,220,220,220,219);
    }

    void f6(){
        int x = 18;
        int y = 3;
        printf("\033[1;31m");
        gotoxy(x,y);printf("\a    %c",219 );
        gotoxy(x,y+1);printf("   %c %c",219,219);
        gotoxy(x,y+2);printf("  %c   %c",219,219);
        gotoxy(x,y+3);printf(" %c%c%c%c%c%c%c",219,220,220,220,220,220,219);
        gotoxy(x,y+4);printf("%c       %c",219,219);

    }


    void verdeblanco(){
        printf("\033[7;47;32m");

    }
     void verderojo(){
        printf("\033[7;47;31m");

    }
    void verdeazul(){
        printf("\033[7;47;35m");

    }
    void blanco(){
        printf("\033[0m");

    }