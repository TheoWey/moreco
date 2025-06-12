#include "main.h"

int main(void){
   init();
   loop();
}

void init(void){
   printf("init ok");
}
void loop(void){
   while(1){
       printf("loop ok");
   }
}
