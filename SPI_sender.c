#include "MKL27Z644.h"
#include "SPI_Driver.h"

#define ENABLE 0b01010000

#define TURN_ON 0b00010000

#define ERASE 0b01100000
#define DISABLE 0b01000000

#define GREEN 0b00000001


int main(void) {
    volatile static int i = 0 ;
    //uint_8 data[50]={0xFE,ENABLE|GREEN,TURN_ON|GREEN,DISABLE|GREEN,TURN_ON|GREEN,ERASE|GREEN};
    uint_8 data[]={5,6,7};

    Init_SPI_Master();
    while(1) {
    	SPI_Write(&data[0], sizeof(data)/sizeof(uint_8));

        i++ ;
    }
    return 0 ;
}
