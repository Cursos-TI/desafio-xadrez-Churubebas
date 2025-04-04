#include<stdio.h>
//recursividade da torre.
void recurtorre(int n){
    if (n>0)
    {
       printf("DIREITA\n");
       recurtorre(n-1);
    }}
//recursividade do bispo
void recurbispo(int n){
   if (n>0)
   {
      printf("CIMA\nDIREITA\n");
      recurbispo(n-1);
   }}
//recursividade da Rainha.
   void recurqueen(int n){
    if (n>0)
    {
       printf("ESQUERDA\n");
       recurqueen(n-1);
    }}

int main(){
    int menu, torre=5, bispo=5, repeticao=1, rainha=8, cavalo1, cavalo2, bispo1, bispo2;
    while (repeticao==1)//repeticao para facilitar a reproducao do jogo.
    {
       
    
    
        printf(">>>BEM VINDO AO JODO DE XADREZ<<<\n");//menu para navegar entre as pecas.
        printf("\t>>>MENU<<<\n");
        printf("\t1. Torre Recursividade\n");
        printf("\t2. Bispo Recursividade\n");
        printf("\t3. Rainha Recursividade\n");
        printf("\t4. Cavalo LOOP Complexo\n");
        printf("\t5. Bispo LOOP Aninhado\n");
        printf("\t6. SAIR\n");
        scanf("%d", &menu);
        fflush(stdin);
        
        switch (menu)
        {
        case 1://invocacao da recursividade torre.
            printf("Torre andou:\n");
            recurtorre(torre);

            break;
        
        case 2://invocacao da recursividade bispo.
            printf("Bispo andou:\n");
            recurbispo(bispo);
            break;

        case 3://invocacao da recursividade rainha.
            printf("Rainha andou:\n");
            recurqueen(rainha);
            break;

        case 4://movimento do cavalo com loop complexo.
            printf("Cavalo andou:\n");
            for (cavalo1 = 0, cavalo2 = 0; cavalo1 < 1; cavalo1++)
            {
                do
                {   printf("CIMA\n");
                    cavalo2++;

                } while (cavalo2<2);
                
                printf("DIREITA\n");
                
            }
            cavalo2=0;
            break;

        case 5://bispo com loops aninhados.
            printf("Bispo andou:\n");
            for (bispo1 = 0; bispo1 < 5; bispo1++)
            {
                for (bispo2 = 0; bispo2 < 1; bispo2++)
                {
                    printf("DIREITA\n");
                }
                printf("CIMA\n");
            }
            break;


        case 6:// finalizacao do loop e fim do jogo.
            repeticao++;
            printf("FINALIZANDO JOGO");
    
        default:
            
            break;}

    }

return 0;}