#include <iostream>

int main()
{
    // for (int i = 0; i <= 100; i++) {
        // if (i % 3 == 0 && i % 5 == 0) {
        //     printf("%d ", i);
        // }

    // }

    for (int cislo = 2; cislo <= 1000; cislo++) {
        int  i = 2, nula = 0;

        while (i <= sqrt(cislo)) {
            if (cislo % i == 0) {
                printf("Cislo %d je delitelne %d\n", cislo, i);
                nula = 1;
            }
            i++;
        }
        if (nula == 1) {
            printf("Cislo %d neni prvocislo\n", cislo);
        }
        else {
            printf("Cislo %d je prvocislo\n", cislo);
        }
    }
}