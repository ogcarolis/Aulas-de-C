#include <stdio.h>

int main(void) {
int s, rs, h, m;

printf("Digite o número de segundos: ");
scanf("%d", &s);

h = s / 3600;
m = (s % 3600) / 60;
rs = (s % 3600) % 60;

printf("Isso dá %d hora(s), %d minuto(s), %d segundo(s) ", h, m, rs);
  
}