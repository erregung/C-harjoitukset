#include <stdio.h>


int main(void) {
    char merkkijono[200];
    char syote;
    int valinta = 0;
    int pituus = 0;
    int flag = 1;
	
	printf("\n");
	
    while(flag) {

    printf("Valikko\n1) Lisää uusi merkki\n2) Tyhjennä merkkijono\n3) Tulosta merkkijono\n0) Lopeta\nValintasi: ");

    scanf("%d", &valinta);

    switch (valinta) {
        case 1:
            if (pituus == 200) {
                printf("Merkkijonoon ei mahdu enempää merkkejä.\n");
                break;
            }
            printf("\nAnna jokin merkki: ");
            getchar();
            syote = getchar();
            merkkijono[pituus] = syote;
            pituus++;
			printf("\n");
            break;
        case 2: 
            if (pituus == 0) {
                printf("\nMerkkijono on tyhjä.\n");
                break;
            }
			printf("\nMerkkijono on tyhjennetty.\n\n");
            pituus = 0;
            break;
        case 3: 
            if (pituus == 0) {
                printf("\nMerkkijono on tyhjä.\n\n");
                break;
            }
            printf("\nMerkkijono: ");
            for (int i = 0; i < pituus; i++) {
                printf("%c", merkkijono[i]);
            }
			
			printf("\n\n");
			
            break;
        case 0: 
            printf("\nOhjelman lopetus.\n");
            flag = 0;
            break;  
        default: 
            printf("\nTuntematon valinta.\n\n");
    	}
	}



    return 0;
}