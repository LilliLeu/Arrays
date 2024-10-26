#include <stdio.h>

int main(void) {
    int i = 0;
    int o = 0;
    float noten[10];
    float note;
    float summe =0;
    float durchschnitt = 0;



    while (i < 10) {
        printf("Bitte geben Sie die %d. Note ein.\n", i + 1);
        scanf("%f", &noten[i]);
        summe = summe + noten[i];
        i++;
    }
    while (o < 10) {
        printf("%d. Note: %f\n", o + 1, noten[o]);

        o++;
    }
    durchschnitt = summe / 10;

    printf("die Summe der Noten ist %f der durchschnitt ist %f", summe,durchschnitt);
    return 0;
}
