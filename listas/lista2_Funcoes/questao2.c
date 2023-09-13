#include <stdio.h>

int acordar(int H1, int M1, int H2, int M2);

int main()
{
    int H1, M1, H2, M2;

    while (1) //(while true); infinite loop
    {
        scanf("%d %d %d %d", &H1, &M1, &H2, &M2); //read sleep schedule (bed time and wake-up time)

        if (H1 == 0 && M1 == 0 && H2 == 0 && M2 == 0)
        {
            break; //breaks the loop when all the values are zero
        }

        if ((H1 >= 0 && H1 <= 24) && (H2 >= 0 && H2 <= 24) && (M1 >= 0 && M1 <= 59) && (M2 >= 0 && M2 <= 59)) //if all the variables are on the expected range
        {
            int tempoDormindo = acordar(H1, M1, H2, M2);
            printf("%d\n", tempoDormindo); //print out the how many minutes you will sleep
        }
        else
        {
            scanf("%d %d %d %d", &H1, &M1, &H2, &M2); //ask again for the variables because at least one of them were not on the right range
        }
        
    }

    return 0;
}

int acordar(int H1, int M1, int H2, int M2)
{
    int horaDormir, horaAcordar, tempoDormindo;

    horaDormir = H1 * 60 + M1; //total minutes of bed time time
    horaAcordar = H2 * 60 + M2; //total minutes of wake-up time

    if (horaAcordar < horaDormir) //checking if the wake-up time is earlier than the bed time, indicating it's on the next day
    {
        horaAcordar += (24 * 60); //add 24h (1440min) to the wake-up time to account for the next day
    }

    tempoDormindo = horaAcordar - horaDormir; //calculate the total time sleeping

    return tempoDormindo; //return the time sleeping
}

//beecrowd1103

