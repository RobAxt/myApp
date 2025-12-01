#include <stdio.h>
#include <stdlib.h>
#include "myComponent.h"

void app_main(void)
{
    printf("\n=== Iniciando programa principal ===\n\n");
    uint8_t input = 5;
    printf( "input: %d - increment: %d\n", input, myComponentFunction(input));
    input = 10;
    printf( "input: %d - increment: %d\n", input, myComponentFunction(input));
}
