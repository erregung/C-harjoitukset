#include <stdio.h>
#include <stdlib.h>

void kirjoita() {
}

void lue() {
}

int main(void) {
	srand(1);
	int x;
	FILE *tiedosto;
	tiedosto = fopen("luvut.bin", "wb");
	
	for (int i = 0; i < 20; i++) {
		/* arvo x, laita listaan */
		x = rand() % 1000;
        /*printf("%d ", x);*/
		fwrite(&x, sizeof(x), 1, tiedosto);
	}
	printf("Lukujen tallennus onnistui.\n");
    fclose(tiedosto);

    tiedosto = fopen("luvut.bin", "rb");
	
	printf("Tiedostossa on seuraavat luvut: \n");
	for (int i = 0; i < 20; i++) {
        fread(&x, sizeof(int), 1, tiedosto);
        printf("%d ", x);
    }

    fclose(tiedosto);
	
	printf("\n");
	
	return 0;
	
}