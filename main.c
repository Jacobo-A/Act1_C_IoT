/*

Autor: Alejandro Flores Jacobo 
Creditos: github @gabrielhuav

Fecha: 22/08/2021

Funcionamiento:
Imprime la secuencia 0000 0001 0010 0100 1000 0001 
Con un pausa entre cada envio de mensaje de 0.2s 
sin utilizar la función sleep()
*/

#include <stdio.h>

// definimos un variable sin signo del tipo char para ahorra espacio
typedef unsigned char binario;

binario b0=0x0; // le damos el valor 0 en hexadecimal
binario b1=0x1; // le damos el valor 1 en hexadecimal

int main(){

    binario secuencia[] ={b0,b0,b0,b0};
    
    // variable necesaria recorrer el arreglo
    int contador = 0;

    
    // iniciamos un ciclo infinito 
    while(1){

        // comenzamos a asiganarle 1 en el arreglo[3]
        secuencia[3-contador] = b1;
        

        // forzamos a la maquina a realizar este calculo para tratar de esperar lo 0.2s
        for(int j=0; j<100000000;j++); // *Se treatara de mejorar esta parte
        
        
        // imprimimos el arreglo
        printf("%x%x%x%x\n", secuencia[0],secuencia[1],secuencia[2],secuencia[3]);
        
        // al valor adignado en un principio le devolvemos su valor 0 
        secuencia[3-contador] = b0;
        
        // aumentamos el contador en cada ciclo
        contador++;
        
        // una  vez obtenido el valor del arreglo 3-3=0 secuencia[0]=0 , reiniciamos el contador
        if(contador==4)contador=0;

    }// terminar el ciclo * Ctrl+C para terminar el programa en terminal.
    return 0;

}// cierre main 
asfjaslfjasfl
