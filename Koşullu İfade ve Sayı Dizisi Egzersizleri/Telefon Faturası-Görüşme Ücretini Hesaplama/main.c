#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sure,ucret;
    printf("Telefon konusma suresi: \n");
    scanf("%f",&sure);

    if(sure<=3)
    {
        ucret=0.25;
    }
    else
    {
        ucret=0.25+(sure-3)*0.8;
    }
    printf("Ucret: %.2f",ucret);
    return 0;
}
