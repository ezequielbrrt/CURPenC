#include <stdio.h> 
#include "curp.h"
#include <stdlib.h>  
#include <time.h>  
#include <conio.h>



//números de verificacion y homoclave
int  n_veri(int cantidad2,int numero2, int contador2){  
    int hora2 = time(NULL);
    cantidad2 = 0;
    srand(hora2);
    for(contador2 = 0; contador2<=cantidad2; contador2++)  
  			numero2 = rand()%10;

  return numero2; 
}

int homo(int cantidad,int numero, int contador){ 
    int hora = time(NULL);
    cantidad = 0;
    srand(hora);
    int curp16;
    for(contador = 0; contador<=cantidad; contador++) { 
  			numero = rand()%100;
  		if (numero<91 && numero>63){
  			curp16 = numero/10;
  		}
  		else{ 
  			curp16 = 0;
  		}

 return curp16;
}
}
//**************************************************



