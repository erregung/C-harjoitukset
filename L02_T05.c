#include <stdio.h>


int main(void) {
    char merkkijono[200];
    char syote;
    int valinta = 0;
    int pituus = 0;
    int flag = 1;

    //while(flag) {

    printf("Valikko\n1) Lisää uusi merkki\n2) Tyhjennä merkkijono\n3) Tulosta merkkijono\n0) Lopeta\nValintasi: \n");

    scanf("%d", &valinta);
    printf("valinta: %d", valinta);
    
    switch (valinta) {
        case 1:
            printf("Anna jokin merkki: ");
            getchar();
            syote = getchar();
            merkkijono[pituus] = syote;
            pituus++;
            break;
        case 2: 
            if (pituus == 0) {
                printf("\nMerkkijono on tyhjä.\n");
                break;
            }   
            pituus = 0;
            break;
        case 3: 
            if (pituus == 0) {
                printf("\nMerkkijono on tyhjä.\n");
                break;
            }
            printf("\nMerkkijono: ");
            for (int i = 0; i <= pituus; i++) {
                printf("%c", merkkijono[i]);
            }
            printf("\n");
            break;
        case 0: 
            printf("\nOhjelman lopetus.\n");
            flag = 0;
            break;  
        default: 
            printf("\nTuntematon valinta.\n");
    }//}



    return 0;
}