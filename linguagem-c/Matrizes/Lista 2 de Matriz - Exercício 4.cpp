#include <stdio.h>

int main() {
    int matriz[10][3];
    int i, j, maior_nota_final = 0, reprovados = 0;

    // Ler as informações dos alunos
    for (i = 0; i < 10; i=i+1) {
        printf("Informe a media das provas para o aluno %d: ", i + 1);
        scanf("%d", &matriz[i][0]);
        
        printf("Informe a media dos trabalhos para o aluno %d: ", i + 1);
        scanf("%d", &matriz[i][1]);
        
        // Calcular a nota final e armazenar na terceira coluna
        matriz[i][2] = matriz[i][0] + matriz[i][1];
        
        // Verificar se a nota final é a maior até agora
        if (matriz[i][2] > maior_nota_final) {
            maior_nota_final = matriz[i][2];
        }
        
        // Verificar se o aluno foi reprovado
        if (matriz[i][2] < 60) {
            reprovados=reprovados+1;
            printf("Aluno %d foi reprovado com nota final %d\n", i + 1, matriz[i][2]);
        }
    }

    // Imprimir o número do aluno com a maior nota final
    printf("Aluno(s) com a maior nota final: ");
    for (i = 0; i < 10; i=i+1) {
        if (matriz[i][2] == maior_nota_final) {
            printf("%d ", i + 1);
        }
    }
    printf("\n");

    // Verificar se não houve nenhum aluno reprovado
    if (reprovados == 0) {
        printf("Nenhum aluno foi reprovado.\n");
    }

    return 0;
}
