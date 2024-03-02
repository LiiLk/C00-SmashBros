// fonction affiche N ou P 
// selon signe entier passer (donc parametre jimagine)
// Si n < 0 => N est afficher
// n >= 0 => P est afficher

#include <unistd.h>

void ft_print_comb(void){
    char a;
    char b;
    char c;
    a = '0';
    while(a <= '7'){
        b = a + 1;
        while(b <= '8'){
            c = b + 1;
            while(c <= '9'){
                write(1, &a, 1);
                write(1, &b, 1);
                write(1, &c, 1);
                
                if(!(a == '7' && b == '8' && c == '9')){
                    write(1, ", ", 1);
                }
                c++;
                

            }
            b++;
        }
        a++;
    }   
    
}


int main(){
    ft_print_comb();
    return 0;
}