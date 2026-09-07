#include <stdio.h>
#include <string.h>

int main()
{
    char mensaje[8];

    printf("Mensaje: ");

    fgets(mensaje, sizeof(mensaje), stdin);

    mensaje[strcspn(mensaje, "\n")] = '\0';

    printf("Hexadecimal:");

    for (int i = 0; mensaje[i] != '\0'; i++)
    {
        printf("%02X ", (unsigned char)mensaje[i]);
    }

    printf("\nSubBytes:");

    SubBytes(mensaje);

    return 0;
}