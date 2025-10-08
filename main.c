#include <stdio.h>
#include <stdlib.h>

void func2(void){
     int x;
     printf("func x is at %p\n", &x);
}

void func(void){
     int x;
     printf("func x is at %p\n", &x);
     func2();
}


int main(void){
    int x;
    printf("main is at %p\n",&x);
    func();
  
  system("PAUSE");	
  return 0;
}
