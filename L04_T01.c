#include <stdio.h>
#include <string.h>
#define MAX 50

struct Kirja {
    char nimi[MAX];
    int julkaisuvuosi;
    int hyllypaikka;
};

int main(void) {
    struct Kirja kirja;
    char syote[MAX];
    int vuosi, paikka, pituus;

    printf("Anna kirjan nimi: ");
    fgets(syote, MAX, stdin);
    pituus = strlen(syote)-1;
    strncpy(kirja.nimi, syote, pituus);
    printf("Anna kirjan painovuosi: ");
    scanf("%d", &vuosi);
    printf("Anna kirjan hyllypaikka: ");
    scanf("%d", &paikka);


    kirja.julkaisuvuosi = vuosi;
    kirja.hyllypaikka = paikka;

    printf("Kirjan nimi on '%s', painovuosi %d ja hyllypaikka %d.\n", kirja.nimi, kirja.julkaisuvuosi, kirja.hyllypaikka);

    return 0;
}