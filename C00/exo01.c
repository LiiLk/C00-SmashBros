#include <unistd.h>

void ft_print_alphabet(void){
    for(char alphabet = 'a'; alphabet <= 'z'; alphabet++){
        write(1, &alphabet, 1);
    }
}


int main(){
    ft_print_alphabet();
    return 0;
}