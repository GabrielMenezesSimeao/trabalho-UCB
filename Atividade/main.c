#include <stdio.h>

int main() {
    int tempoBom, dinheiroSuficiente, compromisso, viajando;

    printf("O tempo esta bom? (1 para sim, 0 para nao): ");
    scanf("%d", &tempoBom);

    printf("Voce tem dinheiro suficiente? (1 para sim, 0 para nao): ");
    scanf("%d", &dinheiroSuficiente);

    printf("Vou esta disponivel no dia? (1 para sim, 0 para nao): ");
    scanf("%d", &compromisso);

    printf("Vou estar na cidade? (1 para sim, 0 para nao): ");
    scanf("%d", &viajando);

    if (tempoBom && dinheiroSuficiente && compromisso && viajando) {
        printf("EU VOU!\n");
    } else if (!tempoBom || !dinheiroSuficiente || !compromisso || !viajando) {
        printf("NÃO VOU!\n");
    }

    return 0;
}