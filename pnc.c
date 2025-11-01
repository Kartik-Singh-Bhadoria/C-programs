#include<stdio.h>
int fact(int l){
    int f =1;
    for(int i =l;i>=1;i--){
        f = f*i;
    }
    return f;
}

void comb(){
    int l;
    printf("Enter value of n: ");
    scanf("%d",&l);

    int o;
    printf("Enter value of r: ");
    scanf("%d",&o);

    int n = fact(l);
    int r =fact(o);
    int n_r = fact(l-o);

    int ncr = (n)/(r*n_r);
    
    printf("value of %dc%d is %d",l,o,ncr);
    
}

int main(){
    comb();
    return 0;
}