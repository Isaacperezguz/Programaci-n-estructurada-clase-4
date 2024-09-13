#include <stdio.h>
#include <stdlib.h>


int PatitoFor(int X, int R){


  for(X = -8; X < 9; X++){

    if ( X == 2 ){

    printf("No se puede dividir entre 0 \n");


    }else{

    printf("El valor de x es %d \n",X);
    printf("F(x) = (X + 2)/(X - 2) \n");

    R = (X + 2)/(X - 2);

    printf("La funcion es %d \n",R);
    printf("\n");


    }

    }


}

int PatitoDo(int X, int R) {
    X = -8;
    do {
        if (X == 2) {
            printf("No se puede dividir entre 0 \n");
        } else {
            printf("El valor de x es %d \n", X);
            printf("F(x) = (X + 2)/(X - 2) \n");
            R = (X + 2)/(X - 2);
            printf("La funcion es %d \n", R);
            printf("\n");
        }
        X++;
    } while (X < 9);
    return 0;
}

int PatitoWhile(int X, int R) {
    X = -8;
    while (X < 9) {
        if (X == 2) {
            printf("No se puede dividir entre 0 \n");
        } else {
            printf("El valor de x es %d \n", X);
            printf("F(x) = (X + 2)/(X - 2) \n");
            R = (X + 2)/(X - 2);
            printf("La funcion es %d \n", R);
            printf("\n");
        }
        X++;
    }
    return 0;
}
int main()
{

    int X, R, Opcion;


    do {

        printf("1.PatitoFor\n");
        printf("2.PatitoDo\n");
        printf("3.PatitoWhile\n");
        printf("8. Salir\n");
        printf("Que operacion quieres hacer? ");
        scanf("%d", &Opcion);


 switch (Opcion) {

  case 1:


    PatitoFor(X,R);



  break;

  case 2:

    PatitoDo(X,R);


  break;

  case 3:

    PatitoWhile(X,R);

  break;

  default:


  break;
        }

  }while(Opcion != 4);





    return 0;
}
