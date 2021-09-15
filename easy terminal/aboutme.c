
#include <stdio.h>
#define PIN RPI_GPIO_P1_11

void aboutme()
{
    if(!bcm2835_init())
        return 1;

    bcm2835_gpio_fsel(PIN, BCM2835_GPIO_FSEL_INPT);

    while(1)
    {
        if(bcm2835_gpio_lev(PIN))
        {
            printf("The button has been pressed\n");
        }

       while(bcm2835_gpio_lev(PIN)){}
    }

    bcm2835_close();
    return 0;
}
