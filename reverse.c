#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    printf("enter the string");
    fgets(str,50,stdin);
    // int temp, l=strlen(str);
    //  for(int i=0,j=l-1;i<j;i++,j--){
    //      temp = str[i];
    //      str[i] = str[j];
    //      str[j] = temp;
    //         }

    puts(strrev(str));
    return 0;
}