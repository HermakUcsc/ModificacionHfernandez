/*
francisco uribe
pablo peña
herman fernandez
*/
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <mysql/mysql.h>
#include "funcion.h"

int main(int argc,char *argv[])
{	
	setlocale(LC_ALL,"spanish");

//int dia,mes,anio;
    int respt;
    int respt1;
    int d,m,a;
 
    printf("--Servicios--\n");
	printf("1.- Calculadora de signo del zodiaco\n");
	printf("2.- Horóscopo de la semana\n");
	printf("3.- Compatibilidad entre Signos\n");
	printf("4.- Conoce tu Horóscopo chinoy tu galleta\n");
	printf("5.- Salir\n");
	printf("Respuesta: ");
	scanf("%i",&respt);fflush(stdin);

/*funciones modulares implementadas en funciones.h*/
    switch(respt){
				
			case 1:
    system("clear");		  

    printf( "\n   Introduzca d%ca: ", 161 );
    scanf( "%d", &d );
    printf( "\n   Introduzca mes: " );
    scanf( "%d", &m );
    //printf( "\n   Introduzca a%co: ", 164 );
    //scanf( "%d", &a );

    
            
            /**/
            calculadora_horoscopo(d,m);
            /**/

    		break;
 /****************************************************************************************/   		
    		case 2:
    				
                    system("clear");
                 	printf("--Escoja su signo--\n");
                	printf("1.- Piscis\n");
	                printf("2.- Tauro\n");
                 	printf("3.- Geminis\n");
	                printf("4.- Cancer\n");
	                printf("5.- Leo\n");
	                printf("6.- Virgo\n");
	                printf("7.- Librar\n");	
	                printf("8.- Escorpion\n");
	                printf("9.- Sagitario\n");
	                printf("10.- Capricornio\n");
	                printf("11.- Acuario\n");
	                printf("12.- Aries\n");
	                printf("0.- Salir\n");
                    scanf("%i",&respt);fflush(stdin);
                    
                    /*****/	
                	horoscopo_semana(respt);
                	/****/
    		break;

    		     /****************************************************************************************/   		
    		case 3:
    				
                    system("clear");
                 	printf("--Escoja su signo--\n");
                	printf("1.- Piscis\n");
	                printf("2.- Tauro\n");
                 	printf("3.- Geminis\n");
	                printf("4.- Cancer\n");
	                printf("5.- Leo\n");
	                printf("6.- Virgo\n");
	                printf("7.- Librar\n");	
	                printf("8.- Escorpion\n");
	                printf("9.- Sagitario\n");
	                printf("10.- Capricornio\n");
	                printf("11.- Acuario\n");
	                printf("12.- Aries\n");
	                printf("0.- Salir\n");
                    scanf("%i",&respt1);fflush(stdin);
                    	
                   compatibilidad_horoscopo(respt1);
    		break;  	
    		
/****************************************************************************************/    		
		
    }
    
    
getchar();
}
