// Progamado: Erick Martínez Flores
// Descripción: Progama que realiza operaciones aritméticas basicas:
//Fecha: 10/08/2021

//Blibliotecas
#include <stdlib.h>
#include <stdio.h>


int main()
{
    float num1=0, num2=0; //Declaración de variables tipo flotantes
    int opcion=0;  //Declaración de variables tipo enteras
    
    //Despliegue de menu
    do{
        printf("--------------------------- Bienvenido a easy calculator --------------------------------- \n\n");
        printf(" Para realizar operaciones, ingrese los valores, posteriormente indique el cálculo que desea hacer \n");
        printf("  los números ingresados se guardaran y puede realizar diferentes operaciones con ellos \n");
        printf("                    y si requiere nuevas cifras, regrese a la opción uno \n\n ");
        printf("----------------------------------- ¿Qué deseas hacer? -----------------------------------\n");
        printf("1. Ingresar valores \n");
        printf("2. Suma  \n");
        printf("3. Resta  \n");
        printf("4. Multiplicacion  \n");
        printf("5. Division  \n");
        printf("0. Salir \n \n");
        printf("▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄\n");
        scanf("%d", &opcion);
        
        switch(opcion){
            case 1:
            printf("Ingresa el valor del primer numero: \n");
            scanf(" %f", &num1);
            printf("Ingresa el valor del segundo  numero: \n");
            scanf(" %f", &num2);
            break;
            
            case 2: 
           
            
            printf("││││││││││││││││││││││││││││ RESULTADO ││││││││││││││││││││││││││││ \n");
            printf("                    La Suma de %.2f  + %.2f  es: %.2f \n", num1, num2, num1 + num2 );
            break;
            
            case 3:
           
            
            printf("││││││││││││││││││││││││││││ RESULTADO ││││││││││││││││││││││││││││ \n");
            printf("                    La Resta de %.2f  - %.2f  es: %.2f \n", num1, num2, num1 - num2);
            break;
            
            case 4: 
            
            
            printf("││││││││││││││││││││││││││││ RESULTADO ││││││││││││││││││││││││││││ \n");
            printf("                    El producto de %.2f  * %.2f  es: %.2f \n", num1, num2, num1 * num2);
            break;
            
            case 5: 
          
            
            printf("││││││││││││││││││││││││││││ RESULTADO ││││││││││││││││││││││││││││ \n");
            printf("                    La division  de %.2f  / %.2f  es: %.2f \n", num1, num2, num1 / num2);
            break;
        }
        

    }while(opcion !=0);
    
return 0;
}
