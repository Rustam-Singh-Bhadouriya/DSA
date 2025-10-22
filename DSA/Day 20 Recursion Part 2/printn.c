#include <stdio.h>

int printn(int n){
    if (n == 0){
        printf("\n All Done!\n");
        return 0;
    }
    printf("%d ", n);
    return printn(n-1);
}

int main(){
    int n = 10;
    // printn(n);
    for (int i = 0; i < n; ++i){
        printf("%d ", printn(i));
    }

}