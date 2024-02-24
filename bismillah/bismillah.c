#include<stdio.h>
int main(){
    int n;
    char huruf [100];
printf("Masukkan jumlah huruf yang ingin diperiksa:");
scanf("%d",&n);

for(int i=0;i <n;i++){
    printf("masukkkan huruf ke%d:",i+1);
    scanf("%s",&huruf);

    if(huruf == 'a' || huruf == 'i' ||huruf == 'u' ||huruf == 'e' ||huruf == 'o' ||huruf == 'A' ||huruf == 'I' ||huruf == 'U' ||huruf == 'E' ||huruf == 'O');
    printf("Masukkan jumlah huruf yang ingin diperiksa:");
    
   }   else if{(huruf>= 'a' && huruf <= 'z') ||((huruf>= 'A' && huruf <= 'Z'));
   } else{
    printf("karakter yang anda masukkan bukan huruf.\n");

   }
}
