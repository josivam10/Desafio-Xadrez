#include <stdio.h>
void movaDireita(int casa){
    if (casa > 0)
    {
        printf("Direita - \n");
        movaDireita(casa - 1);
    }
}
void movaEsquerda(int i){
    if (i > 0)
    {
        printf("Esquerda - \n");
        movaDireita(i - 1);
    }
}
void movaDiagonal(int i){
    if (i > 0)
    {
        printf("Cima - Direita \n");
        movaDiagonal(i - 1);
   
    }
}




int main(){
int opcaoMenu;
int cavalo, casas;
int movicavalo = 1;
  
do
{
    printf("--------------------- \n");    ///MENU INTERATIVO
    printf("|-- ESSE E O MENU --| \n");
    printf("| 1.    Torre       | \n");
    printf("| 2.    BISPO       | \n");
    printf("| 3.    RAINHA      | \n");
    printf("| 4.    Cavalo      | \n");
    printf("| 5.     Sair       | \n");
    printf("| Escolha qual peca | \n");
    printf("|  voce quer mover  | \n");
    printf("--------------------- \n");
    scanf("%d",&opcaoMenu);
    
    switch (opcaoMenu)     /// SELECAO DO CASE DE ACORDO COM O MENU
    {
    case 1:
        printf("Quantas casas voce quer andar? \n");
        scanf("%d", &casas);
        printf("Torre: Move-se! \n");
        movaDireita(casas);
        break;
    case 2:
        printf("Quantas casas voce quer andar? \n"); 
        scanf("%d", &casas);
        printf("Bispo: Move-se! \n");   /// MOVIMENTACAO DO BISPO
        movaDiagonal(casas);
        break;
    case 3:
        printf("Quantas casas voce quer andar? \n"); /// quantas casas voce quer andar
        scanf("%d", &casas);
        printf("Rainha: Move-se! \n");
        movaEsquerda(casas);  /// movimentacaso das casas 
        break; 
    case 4:
        printf("Cavalo: Move-se! \n");  /// MOVIMENTACAO DO CAVALO 
                do
             {
                 printf("1. Mova-se para a Direita! \n");
                 printf("2. Mova-se para a Esquerda! \n");  /// MENU PARA SABE PARA ONDE O CAVALO VAI DE ACORDO DO COMECO DO JOGO

                 
                 scanf("%d", &cavalo);
                        
                 switch (cavalo)
                 {
                 case 1:
                    while (movicavalo--)   // MOVIMENTACAO DO CARAVO PARA A DIREITA 
                    {
                        for (int i = 0; i < 2; i++)
                        {
                            printf("Cima \n");
                        }
                        printf("Direita \n");
                    }
                    break;
                case 2:
                    while (movicavalo--)  // MOVIMENTACAO DO CAVALO PRA A ESQUERDA
                    {
                        for (int i = 0; i < 2; i++)
                        {
                            printf("Cima \n");
                        }
                        printf("Esquerda \n");
                    }
                    break;

                default:
                    printf("Opcao Invalida! \n");  /// caso nao selecionar a opcao invalida do cavalo
                    break;
                }

                } while (cavalo >= 3);
                break; 
    
    case 5:
    printf("Obrigado por Participar! \n");   /// opcao sace 5 para saida do codigo 
    printf("Saindo ..... \n");
    break; 
    default:

    printf("Opcao Invalida \n");  /// opcao invalida do menu interativo
        break;
    }
} while (opcaoMenu != 5);



return 0;

}
