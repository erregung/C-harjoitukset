#include <stdio.h>

void tulosta() {
	char muisti[50]; 
	FILE *tiedosto;     
	tiedosto = fopen("tiedosto.txt", "r");
	printf("Tiedostossa olevat nimet:\n"); 
	
	while (fgets(muisti, 49, tiedosto) != NULL) {         
		printf("%s\n", muisti);     
	}     
	
	fclose(tiedosto); 

}

void tallenna() {
	char muisti[50];
	FILE *tiedosto;
	
	tiedosto = fopen("tiedosto.txt", "a");
	printf("\nAnna tallennettava nimi: ");
	scanf("%s", &muisti);     
	fprintf(tiedosto, "%s", muisti+1);     
	fclose(tiedosto); 
}

int main(void) {
	printf("Ohjelma tallentaa nimiä tiedostoon.\n");
	
    int flag = 1;

    FILE *tiedosto;
	
	tiedosto = fopen("tiedosto.txt", "a");
    fclose(tiedosto);

    while (flag) {
        printf("\n1) Tallenna uusi nimi\n2) Tulosta nimet\n0) Lopeta\nValitse: ");
        int valinta;
	    scanf("%d", &valinta);

        switch(valinta) {
            case 1:
                tallenna();
                printf("\nNimi on tallennettu tiedostoon.\n");
                break;
            case 2: 
                tulosta();
                break;
            case 0:
                flag = 0;	
                break;
            default:
                printf("\nTuntematon komento\n");
                break;
        }
    }
	return 0;
	
}