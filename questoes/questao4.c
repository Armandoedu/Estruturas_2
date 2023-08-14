#include <stdio.h> 
 
int isPerfect(int num) { 
    int sum = 1;  
     
    for (int i = 2; i * i <= num; i++) { 
        if (num % i == 0) { 
            sum += i; 
            if (i * i != num) { 
                sum += num / i; 
            } 
        } 
    } 
 
    return sum == num; 
} 
 
int main() { 
    printf("Números perfeitos entre 1 e 1000:\n"); 
 
    for (int i = 2; i <= 1000; i++) { 
        if (isPerfect(i)) { 
            printf("%d: 1", i); 
 
            for (int j = 2; j < i; j++) { 
                if (i % j == 0) { 
                    printf(" + %d", j); 
                } 
            } 
 
            printf("\n"); 
        } 
    } 
 
    return 0; 
}
