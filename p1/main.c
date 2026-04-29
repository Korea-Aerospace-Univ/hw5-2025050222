#include <stdio.h>

int main() {

    int n;
    int count=0;
    scanf("%d",&n);
    
    
    for (int i=1; i*900 < n; i++){
        for(int j=2; j*750<n; j+=2){
            for(int k=1;k*200<n;k++){
                if(n==i*900 + j*750 + k*200){
                    if (k < i || k < j) {
                        printf("%d %d %d\n", i, j, k);
                        count++;
                    }
                }
            }    
        }
    }
    if (count == 0) {
        printf("none\n");
    }
    return 0;
}
