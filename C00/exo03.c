#include <unistd.h>

void ft_print_numbers(void){
    for(char chiffre = '1'; chiffre <= '9'; chiffre++){
        write(1, &chiffre, 1);
    }
}


int main(){
    ft_print_numbers();
    return 0;
}