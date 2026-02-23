#ifndef STRUCT_H
#define STRUCT_H

#include <stdio.h>//struct
#include <string.h>
#include <stdlib.h>
#include <math.h>
#define MAX 100
#define MIN 1
#define LOOG 4
#define PI 3.1415926535897932384626433832795
#define E 2.718281828459045235360287471352
#include "key.h"
typedef struct game{
    char name[20];
    int score;
    int age;
    char sex;
    char country[20];
    char city[20];
    char team[20];
    char position[20];
    char year[20];
    char month[20];
    char day[20];
    char time[20];
    char date[20];
    
    struct game *next;
    
}game;

game *head;

// 全局声明节点
game n3={
    "Neymar", 8, 30, 'M', "Brazil", "Sao Paulo", "Paris Saint-Germain", "Forward", "2010", "01", "01", "00:00:00", "2010-01-01", NULL
};

game n2={
    "Ronaldo", 9, 30, 'M', "Portugal", "Lisbon", "Real Madrid", "Forward", "2010", "01", "01", "00:00:00", "2010-01-01", NULL      
};

game n1={
    "Messi", 10, 30, 'M', "Argentina", "Buenos Aires", "Barcelona", "Forward", "2010", "01", "01", "00:00:00", "2010-01-01", NULL      
};

void fun(void)
{
    n3.next = NULL;
    n2.next = &n3;
    n1.next = &n2;
    head = &n1;
}
void printList();
int  li( int n,int m){
    return (m*n)/(n+m);
}
int ki(int n,int m){
    ;
    return (n*m)/fabs(n-m);
}

#endif
