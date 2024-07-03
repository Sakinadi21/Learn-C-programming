#include<stdio.h>
int main(){
int a =5;
int *x=&a; //x er man a address e store kora
*x=7;//a is changed
printf("%d\n",a);//%p se address print hota hai

return 0;
}


