#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#define N 13
void fun1(float a[N][7]);
void fun2(char str1[][10]);
int main()
{   
    srand((unsigned int)time(NULL));
    int c=7,d=0,h=0;
    float sum=0.0,ave=0.0;
    char str1[100][10];
    float arr1[N][c];
    char *ptr[100];
    float *p[N];
    fun1(arr1);
    fun2(str1);
    for(int i=0;i<100;i++){
        ptr[i]=str1[i];
    }

    for(int i=0;i<N;i++){
        p[i]=arr1[i];
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<c;j++){
            
            sum=0;
            sum+=arr1[i][j];
            float ave=sum/7.0;
            
        }
        printf("第%d组数据的平均值为：%.2f\n",i+1,ave);
            printf("第%d组数据的he为：%.2f\n",i+1,sum);
    }
    while(1){
        for(int j=0;j<c;j++){
            float max=*p[0]; 
            if(*p[j]>max){
                max=*p[j];
            }
               
        }
        printf("第%d组数据的最大值为：%.2f\n",d+1,*p[d]);
        d++;
        p[d]++;
        h++;
        if(h==N){
            break;
        }     
    }
    
    for(int i=0;i<100;i++)
    {
        while(*ptr[i]!='\0'){
        printf("字符串为：%s\n",ptr[i]);

        break;
        }
    }
}

















void fun1(float a[N][7])
{
    srand((unsigned int)time(NULL));
    for(int i=0;i<N;i++){
        for(int j=0;j<7;j++){
            a[i][j]=(float)(rand()%1000)/10.0;
            
        }
        
    }
}
void fun2(char str1[][10])
{
    for(int i=0;i<100;i++){
        for(int j=0;j<10;j++){
            str1[i][j]='a'+rand()%26;
        }
        str1[i][9]='\0';
    }
}