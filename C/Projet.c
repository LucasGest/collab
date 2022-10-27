#include<stdio.h>
#include<stdlib.h>
#include<math.h>


void hypotenus(){

}

void rectangle(){
    int AB, AC, BC;
    printf("\033[0;32m Entrez la taille des cotes du triangle\033[0m\n");
    printf("Valeur de AB = ");
    scanf("%d",&AB);
    printf("Valeur de AC = ");
    scanf("%d",&AC);
    printf("Valeur de BC = ");
    scanf("%d",&BC);
    if((AB>=AC)&&(AB>=BC)){
        printf("AB");
    }else{
        if((AC>=AB)&&(AC>=BC)){
            printf("AC");
        }else{
            if((BC>=AB)&&(BC>=AC)){
                printf("BC");
            }
        }
    }
}




int main(){
    int rep=0;
    do{
        printf("\033[0;34m Que voulais vous faire ?\033[0m \n");
        printf("    1- Je veux savoir si mon triangle est rectangle\n");
        printf("    2- Je veux connaitre la taille de l'hypotenus\n");
        scanf("%d",&rep);
        if((rep!=1)&&(rep!=2)){
            printf("\033[0;31m ERREUR : Veuillez entrer un nombre entre 1 et 2\033[0m\n");
        }
    }while((rep!=1)&&(rep!=2));
    if(rep==1){
        rectangle();
    }else{
        if(rep==2){
            hypotenus();
        }
    }
}