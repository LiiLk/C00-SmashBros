// BIENSUR C MOI QUI A FAIT CA BIENSURRRRR :D 
// By GPT.....*tousse* LiLk4

#include <unistd.h>

void print_digit(char digit) {
    write(1, &digit, 1);
}

void print_combination(int *comb, int n) {
    for (int i = 0; i < n; i++) {
        print_digit(comb[i] + '0');
    }
}

void ft_print_combn(int n) {
    int comb[10];  // Maximum size of combination is 10

    // Initialize the combination with the smallest possible combination
    for (int i = 0; i < n; i++) {
        comb[i] = i;
    }

    while (comb[0] <= 10 - n) {  // Continue until the leftmost digit is too high
        print_combination(comb, n);

        // Find the rightmost digit that can be incremented
        int i = n - 1;
        while (i >= 0 && comb[i] == 9 - (n - 1 - i)) {
            i--;
        }

        if (i >= 0) {  // If we found a digit to increment
            comb[i]++;  // Increment this digit

            // Reset all digits to the right of it
            for (int j = i + 1; j < n; j++) {
                comb[j] = comb[j - 1] + 1;
            }
        } else {
            break;  // No more combinations are possible
        }

        if (comb[0] < 10 - n) {  // If this is not the last combination
            write(1, ", ", 2);
        }
    }
    write(1, "\n", 1); // New line at the end of the output
}

int main() {
    ft_print_combn(3);  // Example call, change n as needed
    return 0;
}
