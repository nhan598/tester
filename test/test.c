#include <stdio.h>

int main() {
    int n, i;
    int max = 0;
    scanf("%d", &n);
    int c[i];
    for (i = 0; i < n; i++) {
        printf("c[%d] = ", i);
        scanf("%d", &c[i]);
    }
    for (i = 0; i < n; i++) {
    	if(c[i]<c[i+1]){
    		max=c[i+1];
    		i++;
		}else{
			max=c[i];
		}
}

    printf("T?ng các ph?n t? c?a m?ng là: %d\n", max);

    return 0;
}
