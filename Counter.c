#include <stdio.h>

int main(){
    int n;
    if(scanf("%d",&n)!=1 || n<1) return 0;
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    int pos=0, neg=0, odd=0, even=0;
    for(int i=0;i<n;i++){
        if(a[i]>0) pos++;
        else if(a[i]<0) neg++;
        if(a[i]%2==0) even++;
        else odd++;
    }
    printf("Positive: %d\nNegative: %d\nOdd: %d\nEven: %d\n", pos, neg, odd, even);
    return 0;
}
