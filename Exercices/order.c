#include <stdio.h>
#include <stdlib.h>

void order(int a[] ,int size){

for(int i = 0;i<size-1;i++){
for(int j = 0;j<size-i-1;j++){ 
    if(a[j]<a[j+1]){
    int temp = a[j];
    a[j] =a[j+1];
    a[j+1] = temp ;
    
    }
}
}
for(int i=0;i<size;i++){
    printf(" %d \n",a[i]);
}
}

int main(){
int n ;
printf("entrer combien de nombre : ");
scanf("%d",&n);
int t1[n];
for(int i=0;i<n;i++){
    printf("entrer le nombre %d : ",i+1);
    scanf("%d",&t1[i]);
}
order(t1,n);
return 0;
}
