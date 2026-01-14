#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
typedef struct loog{
    int age;
    
    struct loog *next;
}loog;

typedef  void (*ffp)(loog *head);
typedef  void (*chagef)(loog **,int);
void printList(loog *head){ 
    while(head!=NULL){
        printf("%d\n",head->age);
        head=head->next;
    }
}

    
int main(){
    loog n1,n2,n3,*head;
    head=&n1;
    n1.age=10;
    n2.age=20;
    n3.age=30;
    n1.next=&n2;
    n2.next=&n3;
    n3.next=NULL;
    ffp z1=printList;
    
    int n=12;
    
    z1(head);
    return 0;

    




}