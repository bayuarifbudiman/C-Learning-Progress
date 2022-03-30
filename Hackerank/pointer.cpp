#include <stdio.h>
#include <iostream>
using namespace std;

/* Hackerank link https://www.hackerrank.com/challenges/c-tutorial-pointer */
void update(int *a,int *b) {
    // check if *b greater than *a
    if (*b > *a){
        // if *b greater than *a run this algorithm below
        int val_a = *a + *b;
        int val_b = (*a - *b) * (-1);
        *a = val_a;
        *b = val_b;
    } else {
        // if *b is not greater than *a run this algorithm below
        int val_a = *a + *b;
        int val_b = *a - *b;
        *a = val_a;
        *b = val_b;
    }
}
int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
