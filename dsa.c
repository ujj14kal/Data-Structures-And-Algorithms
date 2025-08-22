                                                 //RECURSIONS



#include <stdio.h>

int fact (int number) {
    if (number==1 || number==0) {
        return 1;
    }
    
    else {
        return (number*fact(number-1));
    }
    
}

void main () {
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    
    printf("Factorial of number %d is %d", num, fact(num));
}




// FIBONACCI SERIES USING RECURSION

#include <stdio.h>

int fibo (int number) {
    int f;
    
    if (number==1) {                //1! = 1
        return 1;                    
    }
    else if (number==0) {           //0! = 0
        return 0;
    }
    else {
        f = (fibo(number-1)+fibo(number-2));
    }
    
    
}

void main () {
    int num,i;
    printf("Enter length of series: ");
    scanf("%d", &num);
    
    for (i=0;i<num;i++){
    printf("%d ",fibo(i));}
}







//DYNAMIC MEMORY ALLOCATION

#include <stdio.h>
#include<stdlib.h>

void main() {
    int *ptr,n,i;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    ptr=(int*)malloc(n*sizeof(int));
    
    for(i=0;i<n;i++){
        printf("Enter number at %d index of the array: ",i);
        scanf("%d",&ptr[i]);
    }
    
    for(i=0;i<n;i++){
        printf("Element at %d index of the array is %d\n",i, ptr[i]);
    }
}




// LINKED LIST


#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node * next;
};

void LinkedListTraversal(struct Node *ptr){
    while (ptr!= NULL){
        printf("Element: %d\n",ptr->data);
        ptr = ptr->next;
        
    }
}

void main () {
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;
    
head = (struct Node *)malloc(sizeof(struct Node));
second = (struct Node *)malloc(sizeof(struct Node));
third = (struct Node *)malloc(sizeof(struct Node));
fourth = (struct Node *)malloc(sizeof(struct Node));


head->data = 5;
head->next = second;

second->data = 9;
second->next = third;


third->data = 12;
third->next = fourth;

fourth->data = 17;
fourth->next = NULL;


LinkedListTraversal(head);


}





// INSERTING ELEMENT IN LINKED LIST

#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node * next;
};

struct Node * InsertAtIndex (struct Node *head, int data, int index){
    int i=0;
    
    struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
    struct Node *p = head;
    
    while (i!=index-1){
        
        p=p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    
    return head;
}

void LinkedListTraversal(struct Node *ptr){
    while (ptr!= NULL){
        printf("Element: %d\n",ptr->data);
        ptr = ptr->next;
        
    }
}

void main () {
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;
    
head = (struct Node *)malloc(sizeof(struct Node));
second = (struct Node *)malloc(sizeof(struct Node));
third = (struct Node *)malloc(sizeof(struct Node));
fourth = (struct Node *)malloc(sizeof(struct Node));


head->data = 5;
head->next = second;

second->data = 9;
second->next = third;


third->data = 12;
third->next = fourth;

fourth->data = 17;
fourth->next = NULL;


head = InsertAtIndex(head,34,4);
LinkedListTraversal(head);


}



// DELETING ELEMENT IN LINKED LIST


#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};


struct Node * DelAtIndex(struct Node * head,int index) {
int i=0;   
    
    struct Node *p=head;
    struct Node *q = p->next;
    
    while(i!=index-1){
        p=p->next;
        q=q->next;
        i++;
    }
    
    p->next=q->next;
    free(q);
    
    
    return head;
}

void ListTraversal(struct Node * head){
    
    
    struct Node *ptr= head;
    while (ptr!=0) {
    printf("Element: %d\n",ptr->data);
     ptr=ptr->next;
    }
    
    
}


int main () {
    
    struct Node*head;
    struct Node*second;
    struct Node*third;
    struct Node*fourth;
    
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    fourth = (struct Node*)malloc(sizeof(struct Node));
    
    head->data = 3;
    head->next=second;
    
    second->data = 5;
    second->next = third;
    
    third->data = 10;
    third->next = fourth;
    
    fourth->data = 70;
    fourth->next=NULL;
    
    printf("Before:\n");
    ListTraversal(head);
    
    printf("After: \n");
    head = DelAtIndex(head,2);
    ListTraversal(head);
    
}