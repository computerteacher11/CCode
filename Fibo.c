/*Write C Code to find fibonacci Series upto 5th term*/
#include <stdio.h>
int fibo(int n) {
    if (n <= 1)
        return n;
    return fibo(n - 1) + fibo(n - 2);
}
int main() {
    int n, i;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    for (i = 0; i < n; i++) {
        printf("%d ", fibo(i));
    }

    return 0;
}
