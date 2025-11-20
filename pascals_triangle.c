#include <stdio.h>

int fact(int l){
    int f =1;
    for(int i =l;i>=1;i--){
        f = f*i;
    }
    return f;
}

int comb(int n,int r){

    int n_fact = fact(n);
    int r_fact =fact(r);
    int n_r_fact = fact(n-r);

    int ncr = (n_fact)/(r_fact*n_r_fact);
    
    return ncr;
    
}

int main(){
    int y;
    printf("Enter number of row n: ");
    scanf("%d",&y);

    for(int i = 0; i<y;i++){
        for(int k=y-i;k>0;k--){
            printf(" ");
        }
        for(int j = 0; j< i+1;j++){
            int t = comb(i,j);
            printf("%d ",t);
        }
        printf("\n");
    }
    return 0;
}