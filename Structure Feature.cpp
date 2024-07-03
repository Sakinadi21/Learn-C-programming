#include<stdio.h>
#include<string.h>
int main(){
typedef struct pokemon{
   int hp;
   int speed;
   int attack;
   char tier;
   char name[15];
   }pokemon;
   pokemon a,b,c;
   a.attack=100;
   a.hp=87;
   a.tier='a';
   strcpy(a.name,"Blastosie");

  // b.attack=a.attack;
 //  b.hp=a.hp;
  // b.tier=a.tier;
   //strcpy(b.name,a.name);

   b=a;//b me bhi a agaya ,also deep copy
   b.attack=200;
   printf("%d\n",b.attack);
   printf("%s",b.name);
   return 0;
   }

