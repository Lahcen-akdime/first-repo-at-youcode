#include <stdio.h>
#include <stdlib.h>

void copie(int arr1[],int n){
    int arr2[5];
for(int i = 0;i<n;i++){
    arr2[i]=arr1[i];
}
printf("tableau 1 : ");
for(int i = 0;i<n;i++){
printf("%d",arr1[i]);
}
printf("\n____________________\n tableau 2 : ");
for(int i = 0;i<n;i++){
printf("%d",arr2[i]);
}
printf("\n____________________\n la somme : ");
for(int i = 0;i<n;i++){
printf("%d",arr1[i]+arr2[i]);
}
}
int main() {
int arr1[5]={1,2,3,4,5} ;
int n = 5 ;
copie(arr1,n);
return 0;
}
