#include <stdio.h>

int main(void) {
	char c;
	char merkkijono[];
	
	printf("Anna merkki: ");
	scanf("%c", &c);
	
	printf("Annoit merkin '%c'.\n", c);
	
	printf("Anna korkeintaan 20 merkkiä pitkä merkkijono: ");
	scanf("%20s", &merkkijono);
	
	printf("\nAnnoit merkkijonon '%s'.\n", merkkijono);
	
	return 0;
}