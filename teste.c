#include <stdio.h>
#include <stdlib.h>
#include <complex.h>

int main(){
int i=0,l=0;
double complex M1[2][2];
double complex M2[2][2];

M1[0][0]=1*I;
M1[0][1]=2*I;
M1[1][0]=3*I;
M1[1][1]=4*I;
M2[0][0]=1*I;
M2[0][1]=2*I;
M2[1][0]=3*I;
M2[1][1]=4*I;

for(i=0; i++;i<2){
for(l=0; l++;l<2){
printf("M[%d][%d]\n",i,l);
}
}
return 0;
}
