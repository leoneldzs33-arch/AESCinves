#include <stdio.h>
#include <string.h>
// unsigned char reduc(unsigned char mensaje [15]);

int matriz [15][15];
char mensaje [15]= {0,1,1,0,0,1,1,0,1,1,0,1,1,0,1};  
int main (){
int x0 = mensaje[0] ^ mensaje[8] ^ mensaje[15] ^ mensaje[13] ^ mensaje[12];
 char x1 = mensaje[1] ^ mensaje[9] ^ mensaje[8] ^ mensaje[15] ^ mensaje[14]^ mensaje[13]^ mensaje[13]^ mensaje[12];
 char x2 = mensaje[2] ^ mensaje[10]^ mensaje[9]^ mensaje[15]^ mensaje[14]^ mensaje[14]^ mensaje[14]^ mensaje[12];
 char x3 = mensaje[3]^ mensaje[11]^ mensaje[10]^ mensaje[8]^ mensaje[15]^ mensaje[15]^ mensaje[13]^ mensaje[15]^ mensaje[14]^ mensaje[12];
 char x4 = mensaje[5] ^ mensaje[5]^ mensaje[13]^ mensaje[12]^ mensaje[10]^ mensaje[9]^ mensaje[15]^ mensaje[14]^ mensaje[14]^ mensaje[13];
 char x5 = mensaje[6]^ mensaje[14]^ mensaje[13]^ mensaje[11]^ mensaje[10]^ mensaje[15]^ mensaje[15]^ mensaje[14];
 char x6 = mensaje[7]^ mensaje[15]^ mensaje[14]^ mensaje[12]^ mensaje[11]^ mensaje[15];
 char x7 = mensaje[7]^ mensaje[15]^ mensaje[14]^ mensaje[12]^ mensaje[11]^ mensaje[15];

unsigned char reduc [8] = {x0,x1,x2,x3,x4,x5,x6,x7}; 
printf("Reduccion:%d %d %d %d %d %d %d \n", reduc[0], reduc[1], reduc[2], reduc[3], reduc[4], reduc[5], reduc[6]);
  return 0;
 }


















// unsigned char reduc(unsigned char mensaje [15]){
//  char mensaje = {0,1,1,0,0,1,1,0,1,1,0,1,1,0,1,0};  
//  char x0 = mensaje[0] ^ mensaje[8] ^ mensaje[15] ^ mensaje[13] ^ mensaje[12];
//  char x1 = mensaje[1] ^ mensaje[9] ^ mensaje[8] ^ mensaje[15] ^ mensaje[14]^ mensaje[13]^ mensaje[13]^ mensaje[12];
//  char x2 = mensaje[2] ^ mensaje[10]^ mensaje[9]^ mensaje[15]^ mensaje[14]^ mensaje[14]^ mensaje[14]^ mensaje[12];
//  char x4 = mensaje[3]^ mensaje[11]^ mensaje[10]^ mensaje[8]^ mensaje[15]^ mensaje[15]^ mensaje[13]^ mensaje[15]^ mensaje[14]^ mensaje[12];
//  char x5 = mensaje[5] ^ mensaje[5]^ mensaje[13]^ mensaje[12]^ mensaje[10]^ mensaje[9]^ mensaje[15]^ mensaje[14]^ mensaje[14]^ mensaje[13];
//  char x6 = mensaje[6]^ mensaje[14]^ mensaje[13]^ mensaje[11]^ mensaje[10]^ mensaje[15]^ mensaje[15]^ mensaje[14];
//  char x7 = mensaje[7]^ mensaje[15]^ mensaje[14]^ mensaje[12]^ mensaje[11]^ mensaje[15];

// // char a -> a[01010101010010101]
// // char redcut = resutlado
// //  return reduct;


