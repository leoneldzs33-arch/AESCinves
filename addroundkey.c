#include <stdio.h>
int main(){
    unsigned char estado[4][4] = {
    {0x32, 0x88, 0x31, 0xE0},
    {0x43, 0x5A, 0x31, 0x37},
    {0xF6, 0x30, 0x98, 0x07},
    {0xA8, 0x8D, 0xA2, 0x34}
};
    unsigned char key_init[4][4]={
        {0xFA,0x30,0xCC,0x01},
        {0x3A,0xDC,0x6E,0xE5},
        {0xE8,0xBC,0x0A,0xDA},
        {0xBA,0x7F,0xEE,0x3B}
    };
    unsigned char resultado[4][4];
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            resultado[i][j] = estado[i][j] ^ key_init[i][j];
        }
    }
    printf("Resultado\n");
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            printf("%02X ", resultado[i][j]);
        }
        printf("\n");
    }
    return 0;
}