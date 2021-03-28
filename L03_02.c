#include <stdio.h>
#include <stdlib.h>

void tulosta() {
	char muisti[50]; 
	FILE *tiedosto;     
	tiedosto = fopen("nimet.txt", "r");
	printf("\nTiedostossa olevat nimet:\n"); 
	
	while (fgets(muisti, 50, tiedosto) != NULL) {         
		printf("%s", muisti);     
	}     
	
	fclose(tiedosto); 

}

void tallenna() {
	FILE *tiedosto;
	char muisti[50];
	if (tiedosto == NULL) { tiedosto = fopen("nimet.txt", "w");}
	tiedosto = fopen("nimet.txt", "a");
	printf("\nAnna tallennettava nimi: ");
	scanf("%s", muisti);
	fprintf(tiedosto, "%s\n", muisti);  

	fclose(tiedosto); 
}

int main(void) {
	printf("Ohjelma tallentaa nimiä tiedostoon.\n");
	
    int flag = 1;

    while (flag) {

        printf("\n1) Tallenna uusi nimi\n2) Tulosta nimet\n0) Lopeta\nValitse: ");
        int valinta;
	    scanf("%d", &valinta);

         
        if (valinta== 1) {
                tallenna();
                printf("Nimi on tallennettu tiedostoon.\n");
        }
  
        else if (valinta == 2) {
                tulosta();
        }
        else if (valinta == 0) {
				printf("\n");
                return 0;}
            else {
                printf("\nTuntematon komento\n");
        }
    }
	return 0;
	
}