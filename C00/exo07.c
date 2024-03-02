// int de -2147483648 à +2147483647
// positif ou negatif
// Si n < 0 => N est afficher
// n >= 0 => P est afficher



// JAI UTILISE GOOGLE + MISTRAL AI POUR REUSSIR LEXO C TROP DUR MAIS CA VA JAI BIEN COMPRIS LA LOGIQUE
#include <unistd.h>

void ft_putchar(char digit) {
    write(1, &digit, 1);
}

void ft_putNOMBRE(int nb){
    //long int pour éviter les débordements dans les valeurs ultra extreme
    long int n;

    n = nb; // la du coup jenvoie mon nombre que jai donne a la fonction putnombre


    // LA JE VERIFIE SI n < 0 alors c un chiffre negatif
    if (n < 0){
        ft_putchar('-'); // elle affiche avec un signe moins a laide putchart
        n = -n; // puis on prends la valeur absolue du nombre en utilisant - car ex : --1 = +1
    }
    // n supérieur ou égale à 10 alors on le divse par 10 a chaque etape pour separer le chiffres pour les afficher un par un
    if (n >= 10)
    {
        ft_putNOMBRE(n / 10);
        ft_putNOMBRE(n % 10); // c le restant de la division n par 10 et le chiffre suivant sera le reste de cette division
    }
    else{//là c 100% jai clairmeent besoin de mistral
        ft_putchar(n+'0'); //utilisez 0 fais qu'on a la valeur ASCII de la valeur n. Exemple : n=5 en code ascii c 53 donc on rajoute 0 
    }   
}


int main(){
    int nb = 5;
    ft_putNOMBRE(nb);
    return 0;
}