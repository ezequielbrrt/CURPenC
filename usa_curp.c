#include <stdio.h> 
#include "curp.h"
#include <stdlib.h>
#include <stdlib.h>  
#include <time.h>  
#include <conio.h>
#define MAX 255
#define MAXFECHA 1999999
#define ASMAMEN 65
#define ASMAMAY 90
#define ASCMINMENOS 97
#define ASCMINMAYOR 122
#define ESPACIO 32
#define UNO 49

int main (){

	//Nombres y apellidos
    char nom[MAX];
    char apat[MAX];
    char amat[MAX];
    char curp[17];
    char continuar;
while(1){
    printf ("Este es un programa que genera el curp:\n \n");
	printf ("Escirbe tu primer nombre: \n");
	scanf ("%s",nom);
 	fflush(stdin);
	printf ("\nEscirbe tu apellido paterno: \n");
	fflush(stdin);
	scanf ("%s",apat);
	printf ("\nEscirbe tu apellido materno: \n");
	fflush(stdin);
	scanf ("%s",amat);
	fflush(stdin);

	//Transformación de mayúsculas y vocales
	if (apat[0]>=ASMAMEN && apat[0]<=ASMAMAY)
		curp[0] = apat[0];
	else{
	curp[0] = 'A' + apat[0] - 'a';}


	if (amat[0]>=ASMAMEN && amat[0]<=ASMAMAY)
		curp[2] = amat[0];
	else{
	curp[2] = 'A' + amat[0] - 'a';}

	if (nom[0]>=ASMAMEN && nom[0]<=ASMAMAY)
		curp[3] = nom[0];
	else{
	curp[3] = 'A' + nom[0] - 'a';}
	//Transformación a mayúsculas y consonantes
	int i = 0;
	int j=0;
	int k=0;
	int l=0;
	while (i<MAX){
		i++;
		apat[i];
		if (apat[i] =='a' || apat[i] =='e' || apat[i] =='i' || apat[i] =='o' || apat[i] =='u'){
				curp[1] = 'A' + apat[i] - 'a';
				break;
		}	
		if (apat[i] =='A' || apat[i] =='E' || apat[i] =='I' || apat[i] =='O' || apat[i] =='U'){
			curp[1] = apat[i];
			break;
		}
	}
	while (j<MAX){
		j++;
		apat[j];
		if (apat[j]>=ASMAMEN && apat[j]<=ASMAMAY){
		 curp[13] = apat[j];
			if (apat[j] !='A' && apat[j] !='E' && apat[j] !='I' && apat[j] !='O' && apat[j] !='U'){
				curp[13] = apat[j];
				break;
			}
		}
		if (apat[j]>=ASCMINMENOS && apat[j]<=ASCMINMAYOR){
		 curp[13] =  apat[j];
			if (apat[j] !='a' && apat[j] !='e' && apat[j] !='i' && apat[j] !='o' && apat[j] !='u'){
				curp[13] = 'A' + apat[j] - 'a';
				break;	
			}
		}
	}
	while (k<MAX){
		k++;
		amat[k];
		if(amat[k]>=ASMAMEN && amat[k]<=ASMAMAY){
			curp[14] = amat[k];
				if (amat[k] !='A' && amat[k] !='E' && amat[k] !='I' && amat[k] !='O' && amat[k] !='U'){
					curp[14] = amat[k];
					break;
				}
		}
		if(amat[k]>=ASCMINMENOS && amat[k]<=ASCMINMAYOR){
		  curp[14] = amat[k];
			if (amat[k] !='a' && amat[k] !='e' && amat[k] !='i' && amat[k] !='o' && amat[k] !='u'){
				curp[14] = 'A' + amat[k] - 'a';
				break;
			}
		}

	}
	while (l<MAX){
		l++;
		nom[l];
		if(nom[l]>=ASMAMEN && nom[l]<=ASMAMAY){
		 curp[15] = nom[l];
			if (nom[l] !='A' && nom[l] !='E' && nom[l] !='I' && nom[l] !='O' && nom[l] !='U'){
				curp[15] = nom[l];
				break; 	
			}	
		}
		if(nom[l]>=ASCMINMENOS && nom[l]<=ASCMINMAYOR){
			curp[15] = nom[l];
			if (nom[l] !='a' && nom[l] !='e' && nom[l] !='i' && nom[l] !='o' && nom[l] !='u'){
		 		curp[15] = 'A' + nom[l] - 'a';
		 		break;
			}
		}
	}
	printf("Tu nombre quedo registrado asi\n %s,%s,%s presiona uno para continuar\n",nom,apat,amat);
	printf("\n o cualquier otra tecla para regresar\n");
	scanf("%c",&continuar);
	if (continuar == UNO)
		break;

}
	//***********************************

	//Fecha de nacimiento
	int mes,dia;
	int anio;

	while(1) {
		printf ("\nIngresa el anio en que naciste \n");
		scanf("%d",&anio);
		if (anio>2014 || anio<1800){
			printf ("Error, intentalo de nuevo \n");
		}
	
    	if (anio>=2000 && anio<=2014){
           	 anio = anio - 2000;
           	 break;
        }
        if (anio>=1900 && anio<=2000){
           	 anio = anio - 1900;
           	 break;     	 
        }
        if (anio>=1800 && anio<=1900){
           	 anio = anio - 1800;
           	 break; 	 
        }
    }
    while (1){
    	printf ("Ingresa el numero de mes en que naciste \n");
		scanf("%d",&mes);
		if (mes>12 || mes==0){
    	printf ("Error, intentalo de nuevo \n");
    	}
    	else 
    		break;
    }
    	switch (mes){
    		case 1:
    			while(1){
    			 printf("\nIngresa el dia en que naciste\n");
    			 scanf ("%d",&dia);
    			 if (dia>31 || dia==0)
    				printf("\nIntentaalo de nuevo \n");
    			 else 
    			 	break;
    			}
    		break;
    		case 2:
    			while(1){
    			 printf("\nIngresa el dia en que naciste\n");
    			 scanf ("%d",&dia);
    			 if (dia>28 || dia==0)
    				printf("\nIntentaalo de nuevo \n");
    			 else 
    			 	break;
    			}
    		break;
    		case 3:
    			while(1){
    			 printf("\nIngresa el dia en que naciste\n");
    			 scanf ("%d",&dia);
    			 if (dia>31 || dia==0)
    				printf("\nIntentaalo de nuevo \n");
    			 else 
    			 	break;
    			}
    		break;
    		case 4:
    			while(1){
    			 	printf("\nIngresa el dia en que naciste\n");
    			 	scanf ("%d",&dia);
    			 	if (dia>30 || dia==0)
    					printf("\nIntentaalo de nuevo \n");
    			 	else 
    			 		break;
    			}
    		break;
    		case 5:
    			while(1){
    			 printf("\nIngresa el dia en que naciste\n");
    			 scanf ("%d",&dia);
    			 if (dia>31 || dia==0)
    				printf("\nIntentaalo de nuevo \n");
    			 else 
    			 	break;
    			}
    		break;
    		case 6:
    			while(1){
    			 printf("\nIngresa el dia en que naciste\n");
    			 scanf ("%d",&dia);
    			 if (dia>30 || dia==0)
    				printf("\nIntentaalo de nuevo \n");
    			 else 
    			 	break;
    			}
    		break;
    		case 7:
    			while(1){
    			 	printf("\nIngresa el dia en que naciste\n");
    			 	scanf ("%d",&dia);
    			 	if (dia>31 || dia==0)
    					printf("\nIntentaalo de nuevo \n");
    			 	else 
    			 		break;
    			}
    		break;
    		case 8:
    			while(1){
    			 	printf("\nIngresa el dia en que naciste\n");
    			 	scanf ("%d",&dia);
    			 	if (dia>31 || dia==0)
    					printf("\nIntentaalo de nuevo \n");
    			 	else 
    			 		break;
    			}
    		break;
    		case 9:
    			while(1){
    			 	printf("\nIngresa el dia en que naciste\n");
    			 	scanf ("%d",&dia);
    			 	if (dia>30 || dia==0)
    					printf("\nIntentaalo de nuevo \n");
    			 	else 
    			 		break;
    			}
    		break;
    		case 10:
    			while(1){
    			 printf("\nIngresa el dia en que naciste\n");
    			 scanf ("%d",&dia);
    			 if (dia>31 || dia==0)
    				printf("\nIntentaalo de nuevo \n");
    			 else 
    			 	break;
    			}
    		break;
    		case 11:

    			while(1){
    			 printf("\nIngresa el dia en que naciste\n");
    			 scanf ("%d",&dia);
    			 if (dia>30 || dia==0)
    				printf("\nIntentaalo de nuevo \n");
    			 else 
    			 	break;
    			}
    		break;
    		case 12:
    			while(1){
    			 printf("\nIngresa el dia en que naciste\n");
    			 scanf ("%d",&dia);
    			 if (dia>31 || dia==0)
    				printf("\nIntentaalo de nuevo \n");
    			 else 
    			 	break;
    			}
    		break;
    	}
	
	//************************************

	//Sexo
    	char sexo[0];
    while(1){
		printf ("\nSexo: Escriba 'H' para hombre y 'M' para mujer \n");
		scanf ("%s",sexo);
		if (sexo[0]>=ASMAMEN && sexo[0]<=ASMAMAY){
				if (sexo[0] == 72 || sexo[0] == 77){
					curp[10] = sexo[0];
					break;
				}	
		}
			 			
		
		if (sexo[0]>=ASCMINMENOS && sexo[0]<=ASCMINMAYOR){
			curp[10] = 'A' + sexo[0] - 'a';
			if (curp[10] == 72 || curp[10] == 77){
					break;
				}		
			
		}
	 printf("\nIntentelo de nuevo: \n");
	}
  	
	
	//************************************

	//Entidad Federativa
	
	char entidad1,entidad2;
	
		printf("\n\n ENTIDAD CLAVE\n Seleccione el numero que corresponda:\n "); 

		printf("\nAGUASCALIENTES      1"); 
		printf("\nBAJA CALIFORNIA     2"); 
		printf("\nBAJA CALIFORNIA SUR 3"); 
		printf("\nCAMPECHE            4"); 
		printf("\nCOAHUILA            5"); 
		printf("\nCOLIMA              6"); 
		printf("\nCHIAPAS             7"); 
		printf("\nCHIHUHUA            8"); 
		printf("\nDISTRITO FEDERAL    9"); 
		printf("\nDURANGO             10"); 
		printf("\nGUANAJUATO          11"); 
		printf("\nGUERRERO            12"); 
		printf("\nHIDALGO             13"); 
		printf("\nJALISCO             14"); 
		printf("\nMEXICO              15"); 
		printf("\nMICHOACAN           16"); 
		printf("\nMORELOS             17"); 
		printf("\nNAYARIT             18"); 
		printf("\nNUEVO LEON          19"); 
		printf("\nOAXACA              20"); 
		printf("\nPUEBLA              21"); 
		printf("\nQUERETARO           22"); 
		printf("\nQUINTANA ROO        23"); 
		printf("\nSAN LUIS POTOSI     24"); 
		printf("\nSINALOA             25"); 
		printf("\nSONORA              26"); 
		printf("\nTABASCO             27"); 
		printf("\nTAMAULIPAS          28"); 
		printf("\nTLAXCALA            29"); 
		printf("\nVERACRUZ            30"); 
		printf("\nYUCATAN             31"); 
		printf("\nZACATECAS           32"); 
	    int entidad;

	while(1){
		printf("\n\nINGRESA LA CLAVE DE TU ENTIDAD SEGUN SEA EL CASO\n");
		scanf ("%d",&entidad);
		if (entidad>32 || entidad ==0)
			printf("Solo son 32, intentalo de nuevo\n");
		else 
			break;
	}
		switch (entidad){
			case 1:
				printf("AGUASCALIENTES\n\n");
				entidad1 = 'A';
				entidad2 = 'S';
				curp[11] = entidad1;
				curp[12] = entidad2;
			break;
			case 2:
				printf("BAJA CALIFORNIA\n\n");
				entidad1 = 'B';
				entidad2 = 'C';
				curp[11] = entidad1;
				curp[12] = entidad2;
			break;
			case 3:
				printf("BAJA CALIFORNIA SUR\n\n");
				entidad1 = 'B';
				entidad2 = 'S';
				curp[11] = entidad1;
				curp[12] = entidad2;
			break;
			case 4:
				printf("CAMPECHE\n\n");
				entidad1 = 'C';
				entidad2 = 'C';
				curp[11] = entidad1;
				curp[12] = entidad2;
			break;
			case 5:
				printf("COAHUILA\n\n");
				entidad1 = 'C';
				entidad2 = 'L';
				curp[11] = entidad1;
				curp[12] = entidad2;
			break;
			case 6:
				printf("COLIMA\n\n");
				entidad1 = 'C';
				entidad2 = 'M';
				curp[11] = entidad1;
				curp[12] = entidad2;
			break;
			case 7:
				printf("CHIAPAS\n\n");
				entidad1 = 'C';
				entidad2 = 'S';
				curp[11] = entidad1;
				curp[12] = entidad2;
			break;
			case 8:
				printf("CHIHUHUA\n\n");
				entidad1 = 'C';
				entidad2 = 'H';
				curp[11] = entidad1;
				curp[12] = entidad2;
			break;
			case 9:
				printf("DISTRITO FEDERAL\n\n");
				entidad1 = 'D';
				entidad2 = 'F';
				curp[11] = entidad1;
				curp[12] = entidad2;
			break;
			case 10:
				printf("DURANGO\n\n");
				entidad1 = 'D';
				entidad2 = 'G';
				curp[11] = entidad1;
				curp[12] = entidad2;
			break;
			case 11:
				printf("GUANAJUATO\n\n");
				entidad1 = 'G';
				entidad2 = 'T';
				curp[11] = entidad1;
				curp[12] = entidad2;
			break;
			case 12:
				printf("GUERRERO\n\n");
				entidad1 = 'G';
				entidad2 = 'R';
				curp[11] = entidad1;
				curp[12] = entidad2;
			break;
			case 13:
				printf("HIDALGO\n\n");
				entidad1 = 'H';
				entidad2 = 'G';
				curp[11] = entidad1;
				curp[12] = entidad2;
			break;
			case 14:
				printf("JALISCO\n\n");
				entidad1 = 'J';
				entidad2 = 'C';
				curp[11] = entidad1;
				curp[12] = entidad2;
			break;
			case 15:
				printf("MEXICO\n\n");
				entidad1 = 'M';
				entidad2 = 'C';
				curp[11] = entidad1;
				curp[12] = entidad2;
			break;
			case 16:
				printf("MICHOACAN\n\n");
				entidad1 = 'M';
				entidad2 = 'N';
				curp[11] = entidad1;
				curp[12] = entidad2;
			break;
			case 17:
				printf("MORELOS\n\n");
				entidad1 = 'M';
				entidad2 = 'S';
				curp[11] = entidad1;
				curp[12] = entidad2;
			break;
			case 18:
				printf("NAYARIT\n\n");
				entidad1 = 'N';
				entidad2 = 'Y';
				curp[11] = entidad1;
				curp[12] = entidad2;
			break;
			case 19:
				printf("NUEVO LEON\n\n");
				entidad1 = 'N';
				entidad2 = 'L';
				curp[11] = entidad1;
				curp[12] = entidad2;
			break;
			case 20:
				printf("OAXACA\n\n");
				entidad1 = 'O';
				entidad2 = 'C';
				curp[11] = entidad1;
				curp[12] = entidad2;
			break;
			case 21:
				printf("PUEBLA\n\n");
				entidad1 = 'P';
				entidad2 = 'L';
				curp[11] = entidad1;
				curp[12] = entidad2;
			break;
			case 22:
				printf("QUERETARO\n\n");
				entidad1 = 'Q';
				entidad2 = 'T';
				curp[11] = entidad1;
				curp[12] = entidad2;
			break;
			case 23:
				printf("QUINTANA ROO\n\n");
				entidad1 = 'Q';
				entidad2 = 'R';
				curp[11] = entidad1;
				curp[12] = entidad2;
			break;
			case 24:
				printf("SAN LUIS POTOSI\n\n");
				entidad1 = 'S';
				entidad2 = 'P';
				curp[11] = entidad1;
				curp[12] = entidad2;
			break;
			case 25:
				printf("SINALOA\n\n");
				entidad1 = 'S';
				entidad2 = 'L';
				curp[11] = entidad1;
				curp[12] = entidad2;
			break;
			case 26:
				printf("SONORA\n\n");
				entidad1 = 'S';
				entidad2 = 'R';
				curp[11] = entidad1;
				curp[12] = entidad2;
			break;
			case 27:
				printf("TABASCO\n\n");
				entidad1 = 'T';
				entidad2 = 'C';
				curp[11] = entidad1;
				curp[12] = entidad2;
			break;
			case 28:
				printf("TAMAULIPAS\n\n");
				entidad1 = 'T';
				entidad2 = 'S';
				curp[11] = entidad1;
				curp[12] = entidad2;
			break;
			case 29:
				printf("TLAXCALA\n\n");
				entidad1 = 'T';
				entidad2 = 'L';
				curp[11] = entidad1;
				curp[12] = entidad2;
			break;
			case 30:
				printf("VERACRUZ\n\n");
				entidad1 = 'V';
				entidad2 = 'Z';
				curp[11] = entidad1;
				curp[12] = entidad2;
			break;
			case 31:
				printf("YUCATAN\n\n");
				entidad1 = 'Y';
				entidad2 = 'N';
				curp[11] = entidad1;
				curp[12] = entidad2;
			break;
			case 32:
				printf("ZACATECAS\n\n");
				entidad1 = 'Z';
				entidad2 = 'S';
				curp[11] = entidad1;
				curp[12] = entidad2;
			break;
		}
	
	
	//***********************************

	printf ("\nSu curp es :\n");
	if (mes<10 && dia<10){
		printf ("\n %c%c%c%c%d",curp[0],curp[1],curp[2],curp[3],anio);
		printf("0%d", mes);
		printf("0%d",dia);
		printf ("%c%c%c",curp[10],curp[11],curp[12]);
		printf ("%c%c%c",curp[13],curp[14],curp[15]);
		printf ("%d",homo(0,0,0));
		printf ("%d",n_veri(0,0,0));
	}
	else{
		printf ("\n %c%c%c%c%d%d%d",curp[0],curp[1],curp[2],curp[3],anio,mes,dia);
		printf ("%c%c%c",curp[10],curp[11],curp[12]);
		printf ("%c%c%c",curp[13],curp[14],curp[15]);
		printf ("%d",homo(0,0,0));
		printf ("%d",n_veri(0,0,0));
    }

	return 0;
 
  }


