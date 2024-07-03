
#include<stdio.h>
#include<string.h>
int main(){
char str[40];
puts("Enter a string");
scanf("%[^\n]s",str);
puts("The size of id:");
int size=0;
int i=0;
while(str[i]!='\0'){
    size++;
    i++;
}
printf("%d",size);

}
