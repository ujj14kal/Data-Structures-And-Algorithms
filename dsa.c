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




// INSERTION SORT

#include <stdio.h>

void PrintArray (int *A, int n) {
    int i;
    
    for(i=0;i<5;i++){
        printf("%d ",A[i]);
    }
}

void InsertSort(int *A, int n) {               // based on insertion of existing element in the array
                                               // and then comparing and sorting it
    
    int i,j, key;
    
    for (i=1; i<n ;i++){
        
        key = A[i];
        j=i-1;
        
        
        while(j>=0 && A[j]>key ){
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=key;
        
    }

}

void main () {
    int A[5],i;
    
    printf("Enter 5 numbers: ");
    
    for(i=0;i<5;i++){
        scanf("%d",&A[i]);
    }
    
    InsertSort(A,5);
    PrintArray(A,5);
    
}



//SELECTION SORT

#include <stdio.h>

void PrintArray (int *A, int n) {
    int i;
    
    for(i=0;i<5;i++){
        printf("%d ",A[i]);
    }
}

void SelectSort(int *A, int n) {
    
    int i,j,temp,indexofmin;
    
    for(i=0;i<n-1;i++){
    indexofmin = i;
    for (j=i+1; j<n;j++){
        
       if(A[j]<A[indexofmin]){
           indexofmin = j;
       }
    }
        temp = A[i];
        A[i] = A[indexofmin];
        A[indexofmin]= temp;
    
    } 
}


void main () {
    int A[5],i;
    
    printf("Enter 5 numbers: ");
    
    for(i=0;i<5;i++){
        scanf("%d",&A[i]);
    }
    
    SelectSort(A,5);
    PrintArray(A,5);
    
}



//Bubble Sort Linked List

#include <stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node * next;
};

void Sort(struct Node *head) {
    int swapped;
    struct Node *ptr;
    struct Node *last = NULL;  
    
    if (head == NULL)
        return;
    
    do {
        swapped = 0;
        ptr = head;

        while (ptr->next != last) {
            if (ptr->data > ptr->next->data) {
                int temp = ptr->data;
                ptr->data = ptr->next->data;
                ptr->next->data = temp;
                swapped = 1;
            }
            ptr = ptr->next;
        }
        last = ptr; // The last node is already in place
    } while (swapped);
}


void LinkedList(struct Node*ptr){
    
    while(ptr!=NULL) {
        printf("Element = %d\n",ptr->data);
        ptr=ptr->next;
    }
    
}

void main () {
    struct Node*head;
    struct Node*second;
    struct Node*third;
    struct Node*fourth;
    
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    fourth = (struct Node*)malloc(sizeof(struct Node));
    
    
    
    head->data = 5;
    head->next = second;
    
    second->data = 21;
    second->next = third;
    
    third->data = 25;
    third->next = fourth;
    
    fourth->data = 20;
    fourth->next = NULL;
    
    printf("Before:\n");
    LinkedList(head);
    Sort(head);
    printf("\nAfter:\n");
    LinkedList(head);
}



//DOUBLY CIRCULAR LINKED LIST

// Linked List 


#include <stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node*next;
    struct Node*prev;
};


void LinkedList(struct Node*head) {
    
    struct Node*ptr=head;
    if(ptr==NULL){return;}
    
    printf("Forward Linked List: \n");
    do{
        printf("Element: %d\n",ptr->data);
        ptr=ptr->next;
    }while(ptr!=head);
    
    printf("Backward Linked List: \n");
    ptr=ptr->prev;
    do{
        printf("Element: %d\n",ptr->data);
        ptr=ptr->prev;
    }while(ptr!=head->prev);
    
    
}

void main () {
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node*  fourth;
    
head=(struct Node*)malloc(sizeof(struct Node));
second=(struct Node*)malloc(sizeof(struct Node));
third=(struct Node*)malloc(sizeof(struct Node));
fourth=(struct Node*)malloc(sizeof(struct Node));


head->data = 23;
second->data = 45;
third->data = 30;
fourth->data = 56;

head->next=second;
second->next=third;
third->next=fourth;
fourth->next=head;

head->prev=fourth;
second->prev=head;
third->prev=second;
fourth->prev=third;


LinkedList(head);
}




//STACK USING ARRAYS


#include <stdio.h>
#include <stdlib.h>

struct stack 
{
    int size;
    int top;
    int * arr;
};

int isFull(struct stack * ptr) {
    if(ptr->top==ptr->size-1){
        return 1;
    }
    else{return 0;}
}

int isEmpty(struct stack * ptr){
    if(ptr->top==-1){
        return 1;
    }
    else{return 0;}
}

int push (struct stack * ptr,int x)
{
    if(isFull(ptr)){
        printf("Stack Overflow.");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=x;
        printf("%d added to stack.\n",x);
    }
}

int pop (struct stack * ptr){
    if(isEmpty(ptr)){
        printf("Stack Underflow.");
    }
    else{
        int x = ptr->arr[ptr->top];
        ptr->top--;
        printf("%d popped from stack.\n",x);
        return x;
        
    }
    
}

void display(struct stack *ptr) {
    if (isEmpty(ptr)) {
        printf("Stack is empty.\n");
    } else {
        printf("\nStack elements (top to bottom): \n");
        for (int i = ptr->top; i >= 0; i--) {
            printf("%d \n", ptr->arr[i]);
        }
        printf("\n");
    }
}

void main () {
    struct stack * sp = (struct stack*)malloc(sizeof(struct stack));
    
    sp->size = 10;
    sp->top=-1;
    sp->arr = (int*)malloc(sp->size*sizeof(int));
    
    push(sp,47);
    push(sp,67);
    push(sp,7);
    pop(sp);
    pop(sp);
    pop(sp);
    pop(sp);
    display(sp);
    
    
}





//STACK USING LINKED LIST


#include<stdio.h>
#include<stdlib.h>
 
struct Node{
    int data;
    struct Node * next;
};
 
void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next; 
    }
}
 
int isEmpty(struct Node* top){
    if (top==NULL){
        return 1;
    }
    else{
        return 0;
    }
}
 
int isFull(struct Node* top){
    struct Node* p = (struct Node*)malloc(sizeof(struct Node));
    if(p==NULL){
        return 1;
    }
    else{
        return 0;
    }
}
 
struct Node* push(struct Node* top, int x){
    if(isFull(top)){
        printf("Stack Overflow\n");
    }
    else{
        struct Node* n = (struct Node*) malloc(sizeof(struct Node));
        n->data = x;
        n->next = top;
        top = n;
        printf("%d added to stack.\n",x);
    }
    return top;
}
 
struct Node* pop(struct Node* tp){
    if(isEmpty(tp)){
        printf("Stack Underflow.\n");
    }
    else{
        struct Node* n = tp;
        tp = (tp)->next;
        int x = n->data;
        free(n);
        printf("%d popped from stack.\n",x);
        
    }
    return tp;
}

 
int main(){
    struct Node* top = NULL;
    
    
    top = push(top,67);
    top = push(top,87);
    top = push(top,97);
    linkedListTraversal(top);
    top = pop(top);
    linkedListTraversal(top);
    top = pop(top);
    linkedListTraversal(top);
    top = push(top,87);
    linkedListTraversal(top);
    top = push(top,90);
    linkedListTraversal(top);
    top = pop(top);
    linkedListTraversal(top);
    
    return 0;
}