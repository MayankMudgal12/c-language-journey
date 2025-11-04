#include <stdio.h>
#include <limits.h>

int main(){
    int n;
    if(scanf("%d",&n)!=1 || n<1) return 0;
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    if(n<2){ printf("No second largest\n"); return 0; }
    int first=INT_MIN, second=INT_MIN;
    for(int i=0;i<n;i++){
        if(a[i]>first){ second=first; first=a[i]; }
        else if(a[i]>second && a[i]<first) second=a[i];
    }
    if(second==INT_MIN) printf("No second largest\n");
    else printf("%d\n", second);
    return 0;
}
