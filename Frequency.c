#include <stdio.h>

int main(){
    int n;
    if(scanf("%d",&n)!=1 || n<1) return 0;
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    int x; scanf("%d",&x);
    int freq=0;
    for(int i=0;i<n;i++) if(a[i]==x) freq++;
    printf("%d\n", freq);
    return 0;
}
