#include <stdio.h>
#include <stdlib.h>

int sumTwo(int a,int b){
    int result;
    result=a+b;
    return result;
}

int square (int n){
    int result;
    result=n*n;
    return result;
}

int get_max (int x,int y){
    int max;
    if (x>y)
    max=x;
    else  
    max=y;
    
    return max;
}
    

int main(void){
    int sum;
    sum=sumTwo(2,3);
    printf("sumTwo result is %i.\n",sum);
    
    int square_result;
    square_result=square(3);
    printf("square result is %i.\n",square_result);
    
    int max_min;
    max_min=get_max(3,5);
    printf("get_max result is %i.\n",max_min);
    
    

  
  system("PAUSE");	
  return 0;
}
