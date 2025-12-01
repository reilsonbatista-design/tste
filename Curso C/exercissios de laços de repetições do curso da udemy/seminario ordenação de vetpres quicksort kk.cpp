#include <stdio.h>

void trocar(int *a, int *b) {
int temp = *a;

*a = *b;

*b = temp;
}



int particionar(int vetor[], int inicio, int fim) {
int pivo = vetor[fim];
int i = inicio - 1;



for (int j = inicio; j < fim; j++) {

if (vetor[j] < pivo) {

i++;
trocar(&vetor[i], &vetor[j]); }


}

trocar(&vetor[i + 1], &vetor[fim]);
return i + 1;


}

void quickSort(int vetor[], int inicio, int fim) {

if (inicio < fim) {

int indicePivo = particionar(vetor, inicio, fim);
quickSort(vetor, inicio, indicePivo - 1);
quickSort(vetor, indicePivo + 1, fim);


}

}
void imprimirVetor(int vetor[], int tamanho) {

for (int i = 0; i < tamanho; i++) {

printf("%d ", vetor[i]);


}
printf("\n");
}


int main() {

int vetor[] = {10, 7, 8, 9, 1, 5};
int tamanho = sizeof(vetor) / sizeof(vetor[0]); printf("Array original: ");
imprimirVetor(vetor, tamanho);
quickSort(vetor, 0, tamanho - 1); printf("Array ordenado: ");
imprimirVetor(vetor, tamanho);

return 0;



}

