#include <iostream>
#include <stdio.h>
#include <stdlib.h>

const int nro=7;
tablero(int matriz[nro][nro],int i,int j){

for(i=0;i<nro;i++){
   for(j=0;j<nro;j++){
   matriz[i][j]=(rand()%9);


}
}
for(i=0;i<nro;i++){
    printf("\n");
   for(j=0;j<nro;j++){(rand()%9);
   printf("[%i]",matriz[i][j]);



}
}
}
tablero2(int matriz[nro][nro],int i,int j){

for(i=0;i<nro;i++){
   for(j=0;j<nro;j++){
   matriz[i][j]=(rand()%9);


}
}

}
int main()
{ const char nombre[25]="Tomas Plassy";
  int matriz[nro][nro],i,j,opcion,acum=0,pos1=0,pos2=0,acum2=0,pos3=0,pos4=0,ver=0;
  char r;

  do{ printf("\n\nMenu\n1)Crear Nueva Partida\n2)Jugar\n3)Mostrar Tablero\n4)Creditos\n5)Salir\n");scanf("%i",&opcion);

  switch(opcion){

  case 1:
  printf("Se Ha Creado El Tablero\n");
  tablero(matriz,i,j);
  printf("\n\n");
  system("pause");
  system("cls");
  break;

  case 2:
  tablero2(matriz,i,j);
  pos1=(rand()%7);
  pos2=(rand()%7);
  pos3=(rand()%7);
  pos4=(rand()%7);

  do{
    tablero2(matriz,i,j);
   printf("\nDesea Pedir Carta S/N? ");scanf("%s",&r);

  if(r=='S'||r=='s'){acum=acum+matriz[pos1][pos2];}
  else if(r=='N'&&acum2<=21&&acum2>acum){printf("\nPerdiste");ver=1;}

  acum2=acum2+matriz[pos3][pos4];

  if(ver==0){printf("\nUsted Tiene %i\n",acum);
  printf("\nEl Krupier Tiene %i\n",acum2);}

  if(acum>21||acum2==21){printf("\nPerdiste");ver=1;  acum = 0; acum2 = 0;}
  else if(acum==21||acum2>21){printf("\nGanaste");ver=1;  acum = 0; acum2 = 0;}



  }while(ver==0);




  printf("\n\n");
  system("pause");
  system("cls");
  break;

  case 3:
  tablero2(matriz,i,j);


  for(i=0;i<nro;i++){
    printf("\n");
   for(j=0;j<nro;j++){
   switch(matriz[i][j]){

   case 0:
   printf("[AS]");
   break;
   case 1:
   printf("[2]");
   break;
   case 2:
   printf("[3]");;
   break;
   case 3:
  printf("[4]");
   break;
   case 4:
   printf("[5]");
   break;
   case 5:
   printf("[6]");
   break;
   case 6:
 printf("[7]");
   break;
   case 7:
  printf("[SO]");
   break;
   case 8:
printf("[CA]");
   break;
   case 9:
 printf("[RY]");
   break;

}
}
}






  printf("\n\n");
  system("pause");
  system("cls");
  break;

  case 4:
  printf("El Creador Del Juego Es: %s",nombre);
  printf("\n\n");
  system("pause");
  system("cls");
  break;

  case 5: printf("Se Cerrara El Programa"); return 0;
  break;

  default:printf("Por Favor Ingrese Una Opcion Correcta");
  printf("\n\n");
  system("pause");
  system("cls");
  break;
  }
  }while(opcion!=5);

    return 0;


}




