// int de -2147483648 à +2147483647
// positif ou negatif
// Si n < 0 => N est afficher
// n >= 0 => P est afficher



// JAI UTILISE GOOGLE + MISTRAL AI POUR REUSSIR LEXO C TROP DUR MAIS CA VA JAI BIEN COMPRIS LA LOGIQUE
#include <unistd.h>
#define INT_MIN  (-2147483647 - 1)

void ft_putchar(char digit) {
    write(1, &digit, 1);
}

void ft_putNOMBRE(int nb){
    int n;
    int chiffre;
    n = nb; // la du coup jenvoie mon nombre que jai donne a la fonction putnombre


    // LA JE VERIFIE SI n < 0 alors c un chiffre negatif
    if (n < 0 && n >= INT_MIN){
        ft_putchar('-'); // elle affiche avec un signe moins a laide putchar
        n = -n; // puis on prends la valeur absolue du nombre en utilisant - car ex : --1 = +1
    }
    while(n > 0){ // jutilise while pour separer les chiffres du nombre choisi dans n 
        // ça permet davoir le dernier chiffre a chaque fois puis on va diviser par 10 pour avoir le chiffre suivant
        chiffre = n % 10 + '0'; 
        ft_putchar(chiffre);
        chiffre = chiffre / 10; 
    }  
}


int main(){
    int nb = -2147483648; // en soit jai pas besoin de parler de depassement ça sera depassera jamais si ?
    ft_putNOMBRE(nb);
    return 0;
}