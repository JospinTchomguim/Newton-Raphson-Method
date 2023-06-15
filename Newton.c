#include<stdio.h>
#include<math.h>
#include<stdlib.h>

float f(float x){
return x*x-1;
}

float f_prime(float x){
return 2*x;
}

int main(){
    float x0=1;
    float erreur=0.000001;
    while(fabs(f(x0))>erreur){
        printf("Iteration :\n");
        x0=x0-(f(x0)/f_prime(x0));
        printf("%f \n\n",x0);
    }
    printf("on obtient: %f \n\n",x0);

return 0;
}









