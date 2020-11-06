volatile union dato{
    unsigned char byte;
    struct {
        int b0:1;
        int b1:1;
        int b2:1;
        int b3:1;
        int b4:1;
        int b5:1;
        int b6:1;
        int b7:1;
    };
}*leoB=(union dato*)(0x23),*dirB=(union dato*)(0x24),*escriboB=(union dato*)(0x25),
*leoC=(union dato*)(0x26),*dirC=(union dato*)(0x27),*escriboC=(union dato*)(0x28),
*leoD=(union dato*)(0x29),*dirD=(union dato*)(0x2A),*escriboD=(union dato*)(0x2B);
/*
Definiciones del Puerto B
PTB byte completo para escribir
PINB byte completo para leer
DDRB byte completo para establecer entrada o salida

luego todos son accesibles a nivel de bitt con el numero de bit correspondiente
*/
#define PTB escriboB->byte
#define PTB0 escriboB->b0
#define PTB1 escriboB->b1
#define PTB2 escriboB->b2
#define PTB3 escriboB->b3
#define PTB4 escriboB->b4
#define PTB5 escriboB->b5
#define PTB6 escriboB->b6
#define PTB7 escriboB->b7

#define PNB leoB->byte
#define PNB0 leoB->b0
#define PNB1 leoB->b1
#define PNB2 leoB->b2
#define PNB3 leoB->b3
#define PNB4 leoB->b4
#define PNB5 leoB->b5
#define PNB6 leoB->b6
#define PNB7 leoB->b7

#define DDB dirB->byte
#define DDB0 dirB->b0
#define DDB1 dirB->b1
#define DDB2 dirB->b2
#define DDB3 dirB->b3
#define DDB4 dirB->b4
#define DDB5 dirB->b5
#define DDB6 dirB->b6
#define DDB7 dirB->b7

/*
Definiciones del Puerto C
PTC byte completo para escribir
PINC byte completo para leer
DDRC byte completo para establecer entrada o salida

luego todos son accesibles a nivel de bitt con el numero de bit correspondiente
*/

#define PTC escriboC->byte
#define PTC0 escriboC->b0
#define PTC1 escriboC->b1
#define PTC2 escriboC->b2
#define PTC3 escriboC->b3
#define PTC4 escriboC->b4
#define PTC5 escriboC->b5
#define PTC6 escriboC->b6

#define PNC leoC->byte
#define PNC0 leoC->b0
#define PNC1 leoC->b1
#define PNC2 leoC->b2
#define PNC3 leoC->b3
#define PNC4 leoC->b4
#define PNC5 leoC->b5
#define PNC6 leoC->b6


#define DDC dirC->byte
#define DDC0 dirC->b0
#define DDC1 dirC->b1
#define DDC2 dirC->b2
#define DDC3 dirC->b3
#define DDC4 dirC->b4
#define DDC5 dirC->b5

/*
Definiciones del Puerto D
PTD byte completo para escribir
PIND byte completo para leer
DDRD byte completo para establecer entrada o salida

luego todos son accesibles a nivel de bitt con el numero de bit correspondiente
*/

#define PTD escriboD->byte
#define PTD0 escriboD->b0
#define PTD1 escriboD->b1
#define PTD2 escriboD->b2
#define PTD3 escriboD->b3
#define PTD4 escriboD->b4
#define PTD5 escriboD->b5
#define PTD6 escriboD->b6
#define PTD7 escriboD->b7

#define PND leoD->byte
#define PND0 leoD->b0
#define PND1 leoD->b1
#define PND2 leoD->b2
#define PND3 leoD->b3
#define PND4 leoD->b4
#define PND5 leoD->b5
#define PND6 leoD->b6
#define PND7 leoD->b7

#define DDD dirD->byte
#define DDD0 dirD->b0
#define DDD1 dirD->b1
#define DDD2 dirD->b2
#define DDD3 dirD->b3
#define DDD4 dirD->b4
#define DDD5 dirD->b5
#define DDD6 dirD->b6
#define DDD7 dirD->b7


