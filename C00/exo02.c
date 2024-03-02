#include <unistd.h>

void ft_print_reverse_alphabet(void){
    for(char alphabet = 'z'; alphabet >= 'a'; alphabet--){
        write(1, &alphabet, 1);
    }
}


int main(){
    ft_print_reverse_alphabet();
    return 0;
}