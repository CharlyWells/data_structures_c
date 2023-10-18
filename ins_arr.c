#include <stdio.h>

int main(){
int c[3]={};
int i;

printf("Before insertion\n");
for(i=0; i<3; i++)
printf("c[%d]= %d\n",i,c[i]);

printf("After insertion: \n");
for(i=0; i<3; i++){
c[i]=i+2;
printf("c[%d]= %d\n",i,c[i]);
}
return(0);

}
