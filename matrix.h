#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define N 10
#define M 7
void transpose(int a[N][N]){
    int i,j,t;
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            if(i!=j){
                t=a[i][j];
                a[i][j]=a[j][i];
                a[j][i]=t;

            }
        }
    }

}
void transpose(int a[M][N]){
    int i,j,b[N][M],**p;
    for(i=0;i<M;i++){
        for(j=0;j<N;j++){
            b[j][i]=a[i][j];
        }
    }
    

}
void cheng(float A[3][3],float B[3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            B[i]+=A[i][j]*B[i];

        }
        
    }
}
int max(float A[3]){
    int max=0;
    for(int i=0;i<2;i++){
        if(A[i]<A[i+1]){
            max=i+1;
        }
    }
    return A[max];
}
void power_method(float A[3][3],float r_v[3]){
    float v[20];
    for(int i;i<20;i++){
    cheng(A,r_v);
    for(int j=0;j<3;j++){
        printf("%.6f\n",r_v[j]);
    }
     v[i]=max(r_v);
     printf("%.4f\n",v[i]);

}

    
}
