#include <stdio.h>
#include <stdlib.h>
int main(){
int mat[12][12] ,linha=0 ,coluna=0 ,n ,m ,c=0 ,saida=0;
    while(linha<12){
        if(coluna==11){
                      linha++;
                      coluna=0;
                      mat[linha][coluna]=0;
                      }else{
                           coluna++;
                           mat[linha][coluna]=0;
                            }
                    }
linha=2;
coluna=2;
while(linha<=9){
    if(coluna==10){
        linha++;
        coluna=3;
        mat[linha][coluna]=1;
        }else{
        coluna++;
        mat[linha][coluna]=1;
        }
mat[10][3]=0;
}
mat[4][5]=0;
mat[6][5]=0;
mat[5][8]=0;
mat[6][4]=0;
 linha=6;
 coluna=7;
 printf("digite o numero de movimentos\n");
 entrada:
     while((n<0)||(n>100)){
    scanf("%d",&n);
 }
 while(c<n){
        //printf("digite o movimento\n");
        scanf("%d",&m);
        switch(m){
                  case 1:{linha=linha-2;
                         coluna=coluna+1;
                         //printf("passou pelo case 1\n");
                         if(mat[linha][coluna]==0){
                            saida++;
                            goto caiu;
                         }else{
                         saida++;
                         c++;
                         }
                         }break;
                  case 2:{linha=linha-1;
                         coluna=coluna+2;
                         //printf("passou pelo case 2\n");
                         if(mat[linha][coluna]==0){
                            saida++;
                            goto caiu;
                         }else{
                         saida++;
                         c++;
                         }
                         }break;
                  case 3:{linha=linha+1;
                          coluna=coluna+2;
                          if(mat[linha][coluna]==0){
                            saida++;
                            goto caiu;
                         }else{
                         saida++;
                         c++;
                         }
                         }break;
                         case 4:{linha=linha+2;
                          coluna=coluna+1;
                          if(mat[linha][coluna]==0){
                            saida++;
                            goto caiu;
                         }else{
                         saida++;
                         c++;
                         }
                         }break;
                         case 5:{linha=linha+2;
                          coluna=coluna-1;
                          if(mat[linha][coluna]==0){
                            saida++;
                            goto caiu;
                         }else{
                         saida++;
                         c++;
                         }
                         }break;
                         case 6:{linha=linha+1;
                          coluna=coluna-2;
                          if(mat[linha][coluna]==0){
                            saida++;
                            goto caiu;
                         }else{
                         saida++;
                         c++;
                         }
                         }break;
                         case 7:{linha=linha-1;
                          coluna=coluna-2;
                          if(mat[linha][coluna]==0){
                            saida++;
                            goto caiu;
                         }else{
                         saida++;
                         c++;
                         }
                         }break;
                        case 8:{linha=linha-2;
                          coluna=coluna-1;
                          if(mat[linha][coluna]==0){
                            saida++;
                            goto caiu;
                         }else{
                         saida++;
                         c++;
                         }
                         }break;
                        default:{
                        printf("voce digitou um numero invalido\n");
                        }
                  }

        }
 caiu:
 printf("%d",saida);
return 0;
}
