#include <stdio.h>
#include <string>
using namespace std;

/*void srev( char s[] , int lenght ) {

  int p1=0 , p2=lenght ;
  
  while (p1<p2) {

   char a =s[p1];
   s[p2]=s[p1];
   s[p2]=a;

   p1++;
   p2--;
   
  }

 return s; 
} */

int main () {

 int size;
 char str[size];
 for(int i=0; i<=size; i++) {

  scanf("%c", &str[i]);

 }

   int p1=0 , p2=size ;
  
   while (p1<p2) {

   char a =str[p1];
   str[p2]=str[p1];
   str[p2]=a;

   p1++;
   p2--;
   
  } 
 
 for(int i=0; i<=size; i++) {

  printf("%c, ", str[i]);

 } 
 
}