//create a structure type 'Person ' with name,salary and age as its attribute. Declare and initialize 2 variable for this
//print the name of first person and age of the other

#include<stdio.h>
int main(){
struct Person{
char name[50];
double salary;
int age;
}person1;


strcpy(person1.name,"Mashu");

person1.age=21;
person1.salary=1000000;

printf("%s\n",person1.name);
printf("%d\n",person1.age);
printf("%2f\n",person1.salary);
return 0;
}


