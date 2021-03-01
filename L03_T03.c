#include <stdio.h>
#include <string.h>

void vertaaInt(int x, int y) {
	if (x==y) { 
		printf("Luvut %d ja %d ovat yhtä suuria.", x, y);
	}
	else if (x > y) { 
		printf("Luku %d on suurempi ja luku %d pienempi.", x, y); 
	}
	else { 
		printf("Luku %d on suurempi ja luku %d pienempi.", y, x); 
		}
}
	
void vertaaFloat(float x, float y) {
	if (x==y) { printf("Luvut %5.2f ja %5.2f ovat yhtä suuria.", x, y);}
	else if (x > y) { printf("Luku %5.2f on suurempi ja luku %5.2f pienempi.", x, y); 
					}
	else { printf("Luku %5.2f on suurempi ja luku %5.2f pienempi.", y, x); 
		  }
}
	
void vertaaNimi(char *x, char *y) {
	int vertaus = strcmp(x, y);
	if (vertaus == 0) { printf("Nimet '%s' ja '%s' ovat yhtä suuria.", x, y);}
	else if (vertaus > 0) { printf("Nimi '%s' on suurempi ja nimi '%s' pienempi.", x, y); }
	else { printf("Nimi '%s' on suurempi ja nimi '%s' pienempi.", y, x); }
}
	
int main() {
	int x, y;
	printf("Anna kaksi kokonaislukua: ");
	printf("\nLuku 1: ");
	scanf("%d", &x);
	printf("Luku 2: ");
	scanf("%d", &y);
	vertaaInt(x, y);
	
	float a, b;
	printf("\nAnna kaksi desimaalilukua: ");
	printf("\nLuku 1: ");
	scanf("%f", &a);
	printf("Luku 2: ");
	scanf("%f", &b);
	vertaaFloat(a,b);
	
	char c[50], d[50];
	printf("\nAnna kaksi nimeä: ");
	printf("\nNimi 1: ");
	fgets(c, sizeof(c), stdin);
	printf("Nimi 2: ");
	fgets(d, sizeof(d), stdin);
	vertaaNimi(c, d);	
	
	
	return 0;
	
}