#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main(){
   int salto;
   int size = 4;
    bool condicion = false;
    int i=0;
    unsigned char caso [4]={2,1,2,6}; 
    do
    {
       salto = caso [i];
       i = salto + i ;
       if (i >= size){
        condicion = true;
        printf("Si se puede");
       }else if (caso[i] == 0){
        condicion=true;
        printf("no se puede");
        printf("%i\n", i);
       }

    } while (condicion==false);
    
    
    














    // for (int i=0; i < 4; i++){
       
    // for (salto = caso [i]; salto > caso [i] ; salto++){
    //      unsigned char posactual = caso[i] + salto ;
    //      if (posactual > caso [4]){
    //         printf("Si tiene solucion\n\n");
    //      } 
    //      else{
    //          printf("No tiene solucion\n\n");

    //      }

    //     }

        // if (salto = caso[i]){
        //     printf("No tiene solucion\n\n");
        // }
        // else{
        //     printf("Si tiene solucion\n\n");
        // }
    // }
   return 0;
}