/* Escribe un programa que simule un cajero automatico, en el cual tendras un saldo inucial
de 3000 pesos.
necesitas tener una opicon para depositar dinero y otra opcion para sacar dinero
y por ultimo una opcion de salir*/

#include<stdio.h>
#include<math.h>
   
    main(){
    	
    	float saldo_inicial=3000, deposito, retiro, saldo_final=0;
    	int opcion;
    	
    	printf("\t Cajero automatico");
    	printf("\n\n1. depositar");
    	printf("\n2. retirar");
    	printf("\n3. salir");
    	
    	printf("\n elige una opcion: ");
    	scanf("%d", &opcion);
    	
    	switch(opcion){
    		
    		case 1:
    			printf("ingresa la cantidad a que quieres depositar: ");
    			scanf("%f", &deposito);
    			
    			saldo_final = saldo_inicial + deposito;
    			printf("\n tu saldo ahora es de:%.2f", saldo_final);
    		
    			break;
    		case 2:
    			printf("\n ingresa la cantidad que quieres retirar: ");
    			scanf("%f", &retiro);
    			
    			if(retiro>saldo_inicial)
				{
			    printf("saldo insifuciente");
				}
				else
				{
					printf("saldo exitoso");
					saldo_final = saldo_inicial - retiro;
					printf("su saldo ahora es de:%.2f", saldo_final);
				}
    			break;
    		case 3:  
   	
		    default: 
		        printf("opcion invalida");	
		}  	
    	
	}
