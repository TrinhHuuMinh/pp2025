#include <stdio.h>

int isSphenic(int n) {
    int count = 0; 
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            count++;    
            n /= i;     
            
            
            
            if (n % i == 0) {
                return 0;
            }
        }
    }

    if (n > 1) {
        count++;
    }

    if (count == 3) {
        return 1;
    } else {
        return 0;
    }
}

void findSphenicRecursive(int current, int limit) {
    if (current > limit) {
        return;
    }

    if (isSphenic(current)) {
        printf("%d ", current);
    }

    findSphenicRecursive(current + 1, limit);
}

int main() {
    int n;
    
    printf("Enter a natural number n: ");
    if (scanf("%d", &n) != 1 || n < 1) {
        printf("Please enter a valid positive integer.\n");
        return 1;
    }

    printf("Sphenic numbers from 1 to %d are:\n", n);
    
   
    findSphenicRecursive(1, n);
    
    printf("\n");
    return 0;
}
