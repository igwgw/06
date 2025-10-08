#include <stdio.h>
#include <stdlib.h>
int factorial(int N){
    int i;
    int res=1;
    for (i=1; i<=N; i++)
    res=res*i;
    return res;
}
    
int combination(int n, int r){
    return factorial(n)/(factorial(n-r)*factorial(r));
}    

int main(void){
    //variable declare
    int n,r;
    int res;

    //input data
    printf("Input n and r: ");
    scanf("%d %d",&n,&r);
    
    //compute combination
    res=combination(n,r);
    
    //print result
    printf("Combinaiton result is %i\n",res);
    
   system("PAUSE");	
   return 0;
}
