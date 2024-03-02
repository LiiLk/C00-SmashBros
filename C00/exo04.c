// fonction affiche N ou P 
// selon signe entier passer (donc parametre jimagine)
// Si n < 0 => N est afficher
// n >= 0 => P est afficher

#include <unistd.h>

void ft_is_negative(int n){
    if (n < 0){
        write(1, "N", 1);
    }
    else {
        write(1, "P", 1);
    }
}


int main(){
    int n = 0;  
    ft_is_negative(n);
    return 0;
}