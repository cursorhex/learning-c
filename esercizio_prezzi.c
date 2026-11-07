#include <stdio.h>

float calcola(float s, float p_i)
{   
    float x = 0.0;
    x = p_i * s;
    return p_i - x;
}

int main(void)
{
    float prezzo_finale = 0.0;
    float prezzo_iniziale;
    float sconto = 0.0;
    float applicato = 0.0;

    prezzo_iniziale = 85.00;

    if (prezzo_iniziale < 50.00) {
        sconto = 0.05;
        prezzo_finale = calcola(sconto, prezzo_iniziale);
    } else if (prezzo_iniziale > 50 && prezzo_iniziale <= 100) {
        sconto = 0.1;
        prezzo_finale = calcola(sconto, prezzo_iniziale);
    } else if (prezzo_iniziale > 100) {
        sconto = 0.2;
        prezzo_finale = calcola(sconto, prezzo_iniziale);
    }

    applicato = prezzo_iniziale - prezzo_finale;

    printf("prezzo originale: %f, percentuale applicata: %f, ammontare dello sconto: %f, prezzo finale: %f\n", prezzo_iniziale, sconto, applicato, prezzo_finale);
    return 0;
}
