#include <stdio.h>
/*
//Exercice 1
int main() {
    int a=0;
    int b = 0;
    printf("Saissisez une premiere valeur:");
    scanf("%d",&a);
    printf("Saissisez une deuxieme valeur:");
    scanf("%d",&b);
    if(a<b){
        printf("la plus grande valeur est:%d\n",b);
    }
        else{
            printf("la plus grande valeur est:%d\n",a);
        }

    return 0;
}
*//*
//Exercice 2
int main(){
    int longeur =0;
    int largeur =0;
    int per =0;
    int aire =0;
    printf("Saissisez la largeur:");
    scanf("%d",&largeur);
    printf("Saissisez la longeur:");
    scanf("%d",&longeur);

    per= longeur*2 + largeur*2;
    aire=longeur*largeur;
    printf("le perimetre du rectangle est :%d\n",per);
    printf("l'aire du rectangle est :%d",aire);
    return 0;
}
 *//*
//exercice 3
int main(){
    const c=3;
    int n=0;
    printf("Saissisez un entier naturel:");
    scanf("%d",&n);
    if(n>10 && n%c==0){
        printf("Cette entier est un multiple de: %d et est superieur a 10", c);
    }
    else{
        printf("Cette entier ne remplie pas les conditions");
    }
    return 0;
}
*//*
//Exercice 4
int main(){
    int age= 0;
    int etudiant = 0;
    printf("Saissisez votre age:");
    scanf("%d",&age);
    printf("Carte etudiant (0 pour non et 1 pour oui) ?");
    scanf("%d",&etudiant);
    if (age<12){
        printf("Tarif enfant");
    }
    else if (12<=age && age<=17)
    {
        printf("Tarif jeune");
    }
    else if (age<=27 && etudiant==1){
        printf("Tarif jeune");
    }
    else if (age>65){
        printf("Tarif senior");
    }
    else{
        printf("pas de reduction");
    }
    return 0;
}
*//*
//Exercice 5
int main(){
    int n=0;
    int b=0;
    printf("Froid[0] ou chaud[1] ?");
    scanf("%d",&b);
    printf("Saissisez un numero:");
    scanf("%d",&n);
    if (b==1 && n>10){
        printf("Boisson 11 attention a la temperature !");
    }
    else if(b==1 && n==10){
        printf("Boisson 10 attention a le temperature !");
    }
    else if(n==1){
        printf("Boisson 1 ");
    }
    else if(n==2){
        printf("Boisson 2");
    }
    else if(n==3){
        printf("Boisson 3");
    }
    else if(n>3 && b==0){
        printf(" EROR EROR EROR EROR EROR EROR ");
    }
    else if (n<10 && b==1){
        printf(" EROR EROR EROR EROR EROR EROR ");
    }
    return 0;

}
*//*
//Exercice 6
int main(){
    float moy1=0;
    float moy2=0;
    float moy3=0;
    float moytot=0;
    printf("Saissisez une premiere moyenne:");
    scanf("%f",&moy1);
    printf("Saissisez une deuxieme moyenne:");
    scanf("%f",&moy2);
    printf("Saissisez une troisieme moyenne:");
    scanf("%f",&moy3);
    if (moy1<0 && moy1>20) {
        printf("Saissisez une premiere moyenne:");
        scanf("%f", &moy1);
    }
    else if (moy2<0 && moy2>20) {
        printf("Saissisez une deuxieme moyenne:");
        scanf("%f",&moy2);
    }
    else if (moy3<0 && moy3>20) {
        printf("Saissisez une deuxieme moyenne:");
        scanf("%f",&moy3);
    }
    moytot= (moy1+moy2+moy3)/3;
    printf("La moyenne est :%f",moytot);
    return 0;

}
*//*
//Exercice 7

int main(){
    int classe =0;
    int eleve = 0;
    int eltot = 0;
    printf("Saissisez le nombre de classe:");
    scanf("%d",&classe);
    while (classe!= 0) {
        printf("Saissisez le nombre d'eleve dans la classe %d:",classe);
        scanf("%d",&eleve);
        eltot= eltot + eleve;
        classe--;
    }
    printf("Le nombre d'eleve est :%d", eltot);
    return 0;
}
*//*
//Exercice 8
int main(){
    int n=0;
    printf("Saisissez un entier:");
    scanf("%d",&n);
    while (n%7!=0 || n%2!=0){
        printf("Saisissez un autre entier:");
        scanf("%d",&n);
    }
    printf("Le %d est un multiple de 7 et de 2",n);
    return 0;
}
*//*
//Exercice 9
int main(){
    int p=0;
    int etage =0;
    printf("Saissisez le nombre de pierre:");
    scanf("%d",&p);
    while (p>etage*etage){
        etage++;
        p=p-(etage*etage);
    }
    printf("Le nombre d'etage est :%d",etage);
    return 0;
}
*/
//Exercice 10:

int main(){
    float n=0;
    float somme=0;
    float compte=0;
    float moyenne=0;
    printf("Saisissez un nombre positif :");
    scanf("%f",&n);
    if (n<0) {
        moyenne = 0;
        printf("la moyenne est :%f", moyenne);
    }
    else if(n>0) {
        while (n > 0) {
            somme = somme + n;
            compte++;
            printf("saisissez un autre nombre positif:");
            scanf("%f", &n);
        }
        moyenne = (somme / compte);
        printf("La moyenne des nombres est: %f",moyenne);
    }
    return 0;
}
