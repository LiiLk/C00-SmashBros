// fonction affiche N ou P 
// selon signe entier passer (donc parametre jimagine)
// Si n < 0 => N est afficher
// n >= 0 => P est afficher

#include <unistd.h>

void ft_print_comb(void){
    char digits[3];
    int x = 0;
    int y = 0;
    for(x = 0; x <= 98; x++){
        for(y= x+1; y <= 99; y++){
            digits[0] = x / 10 + '0'; // pour avoir les dizaines ça sera 0 si x < 10 et sinon un chiffre si > 10 
            digits[1] = x % 10   + '0'; // chiffre des unites avec le mdoulo pour extraire le chiffre des unités
            digits[2]= ' ';
            write(1, digits, 3);

            digits[0] = y / 10 + '0';
            digits[1] = y % 10 + '0';
            if(!(x == 98)){
                digits[2]= ',';
            }
            
            
            write(1, digits, 3);
        }
    }
    
}


int main(){
    ft_print_comb();
    return 0;
}