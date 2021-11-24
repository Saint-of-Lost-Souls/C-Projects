#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <stdint.h>

#define MAX_DIMENSIONS 3

typedef struct GuyPoint
{
    char *name;
    char *job;
    bool active;
    int dimensions;
    double pos[MAX_DIMENSIONS]; 
    struct Guy *friend;
} GuyPoint;

typedef struct BleHeader // Bluetooth Low Energy Data Packet
{
    uint16_t pdu_type : 4;
    uint16_t rfu_1 : 2;
    uint16_t tx_add : 1;
    uint16_t rx_add : 1;
    uint16_t length : 6;
    uint16_t rfu_2 : 2;
} BleHeader;

int main()
{
    system("cls");


    printf("\n\n");
    return EXIT_SUCCESS;
}
