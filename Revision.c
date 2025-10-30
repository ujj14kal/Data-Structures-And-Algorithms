                                           //CODE FOR SUM OF ROWS IN A 2D ARRAY


#include <stdio.h>
void main() {
    int a[2][2],i,j,suma=0,sumb=0;
    printf("Enter elements (4): ");

    for (i=0;i<2;i++) {
        for(j=0;j<2;j++) {
            scanf("%d", &a[i][j]);
        }                                 
    }
 
    for (i=0;i<2;i++) {
        for(j=0;j<2;j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    for(j=0;j<2;j++) {
        suma+= a[0][j]; 
    }
                                                            //SUM LOGIC (FOR ROWS OF A 2D ARRAY)
    for(j=0;j<2;j++) {
        sumb+= a[1][j];
    }
    printf("Sum of first row: %d\n", suma);
    printf("Sum of second row: %d\n", sumb);

}




                      //  PRINT SUM OF ALL ELEMENTS IN A COLUMN

#include <stdio.h>

int a[2][2],i,j,suma=0,sumb=0;
void main() {
    printf("Enter 4 elements: ");
    for (i=0;i<2;i++) {
        for(j=0;j<2;j++)
        scanf("%d", &a[i][j]);
    }

    for (i=0;i<2;i++) {
        suma+= a[i][0];
    }                                                //SUM LOGIC (FOR COLUMNS OF A 2D ARRAY)

    for (i=0;i<2;i++) {
        sumb+= a[i][1];
    }

    printf("Sum of first column: %d\n", suma);
    printf("Sum of second column: %d\n", sumb); 
}






                    // PRINT SUM OF ALL ELEMENTS IN A 1D ARRAY

#include <stdio.h>

void main() {
 int a[5],i,sum=0;
 
 printf("Enter 5 numbers: ");
 
 for(i=0;i<5;i++) {
     scanf("%d",&a[i]);
     printf("%d ",a[i]);
     sum+=a[i];
     
 }
 printf("\n");
 printf("The sum of all the elements is: %d",sum);
 
}



                           // LINEAR SEARCH CODE



#include <stdio.h>

void main() {
int a[5],i,ele,key;

printf("Enter 5 elements: ");

for(i=0;i<5;i++) {
    scanf("%d", &a[i]);
}

printf("Enter element: ");
scanf("%d", &ele);

for(i=0;i<5;i++) {
 if (a[i]==ele) {
     key=1;                                                  // SEARCH CONCEPT
     break;
      }
    
}

if (key==1) {
    printf ("Element found at %d position",i+1);
}

else {printf ("Element not found.");}
}




                                              // CODE FOR MERGING TWO ARRAYS

// To merge two arrays 

#include <stdio.h>

void main () {
    int a[2],b[2],i,j,m[10];
    
    printf("Enter 2 elements for array 1: ");
    
    
for (i=0;i<2;i++){
    scanf("%d", &a[i]);
}

printf("Enter 2 elements for array 2: ");


for (j=0;j<2;j++) {
    scanf("%d",&b[j]);
}
for (i=0;i<2;i++){
printf("%d ",a[i]);}

printf("\n");

for(j=0;j<2;j++){
 printf ("%d ",b[j]);}
 

 
 printf("\n");
 
 for (i=0;i<2;i++) {
     m[i] = a[i];
 }
 
 for (j=0;j<2;j++) {                                                //  MERGING CONCEPT
     m[i+j] = b[j];
 }
 
  for (i=0;i<4;i++) {
     printf("%d ", m[i]);
 }
}
                           



                                                    // INSERT ELEMENT AT PREFERRED POSITION IN AN ARRAY


// insert element from an array

#include <stdio.h>

void main () {
    int a[5],i,j,ele,pos;
    
    printf("Enter 4 elements: ");
    
for (i=0;i<4;i++) {
    scanf("%d", &a[i]);
}


printf("Enter position: ");
scanf("%d", &pos);

printf("Enter element: ");
scanf("%d", &ele);

for(i=3;i>=pos-1;i--){
    a[i+1]=a[i];
}

a[pos-1]=ele;

for(i=0;i<5;i++){
printf("The new array is %d ",a[i]);}

}
            





                                              // DELETE ELEMENT FROM AN ARRAY
        

#include <stdio.h>
void main() {
    int a[5],pos,i,j;
    
    printf("Enter 5 elements: ");
    
for (i=0;i<5;i++) {
    scanf ("%d", &a[i]);
}
                                                                          //DELETION LOGIC
printf("Enter position: ");
scanf("%d", &pos);

for (i=pos-1;i<4;i++) {
    a[i]=a[i+1];
}

for (i=0;i<4;i++) {
    printf("%d ", a[i]);
}
}







                                           //SORTING OF AN ARRAY




#include <stdio.h>

void main () {
    int a[4],i,j,temp;
    
    printf("Enter 4 numbers: ");
    
for (i=0;i<4;i++) {
    scanf("%d", &a[i]);
}

for (i=0;i<3;i++) {
    for(j=0;j<4-i-1;j++){
    if (a[j] > a[j+1]) {
        temp = a[j];                                                      // BUBBLE SORT LOGIC
        a[j]=a[j+1];
        a[j+1]=temp;
    }
    }
}                                   

for (i=0;i<4;i++) {
    printf("%d ", a[i]);
}
}





                                               // 2-D ARRAY TRANSPOSE




#include <stdio.h>

void main() {
    int a[2][2], i,j,b[2][2];
    
    printf("Enter 4 elements (2X2 matrix): ");
    
for (i=0;i<2;i++) {
    for(j=0;j<2;j++){
    scanf("%d", &a[i][j]);
    printf("%d ", a[i][j]);
    }
    printf("\n");
}

printf("\nThe transpose of above matrix is:\n");

for (i=0;i<2;i++) {
    for(j=0;j<2;j++){
    b[i][j] = a[j][i];                                    //TRANSPOSE LOGIC
    printf("%d ", b[i][j]);
    }
    printf("\n");
    
}

}






                                    // 2D ARRAY MULTIPLICATION

#include <stdio.h>

void main () {
    int a[2][2], b[2][2], c[2][2];
    int i, j, k;

    // Read first matrix
    printf("Enter elements of matrix A (2x2):\n");
    for(i=0; i<2; i++) {
        for(j=0; j<2; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Read second matrix
    printf("Enter elements of matrix B (2x2):\n");
    for(i=0; i<2; i++) {
        for(j=0; j<2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Multiply matrices
    for(i=0; i<2; i++) {
        for(j=0; j<2; j++) {
            c[i][j] = 0;  // Reset sum                                           
            for(k=0; k<2; k++) {
                c[i][j] += a[i][k] * b[k][j];                     //MULTIPLICATION LOGIC
            }
        }
    }

    // Print result
    printf("Result matrix C:\n");
    for(i=0; i<2; i++) {
        for(j=0; j<2; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}








                                            //2D ARRAY MERGING AND SORTING 


#include <stdio.h>


void sortArray (int m[], int size){
    int i,j,temp;
     for (i=0;i<size-1;i++){
      for(j=0;j<size-i-1;j++){                                 //FUNCITION FOR SORTING THE ARRAY
         if(m[j]>m[j+1]){
          temp = m[j];
          m[j]=m[j+1];
          m[j+1]=temp;}
      }
  }
}


void main() {
    int a[5],m[10],b[5],i,j,temp;
    printf("Enter 5 numbers for array 1: ");
   
  for (i=0;i<5;i++) {
      scanf("%d",&a[i]);
  }

printf("Enter 5 numbers for array 2: ");

for (j=0;j<5;j++) {
      scanf("%d",&b[j]);
  }
  
  
  for (i=0;i<5;i++) {
      m[i]=a[i];                                                 //MERGING LOGIC
  }
  
  for (j=0;j<5;j++) {
      m[i+j]=b[j];
  }
  
 sortArray(m,10);
  
 printf("Merged and sorted array is: \n");
  
  for (i=0;i<10;i++){
      printf("%d ", m[i]);
  }
}


 

                                        //BINARY SEARCH CODE


#include <stdio.h>

void sortArray (int a[], int size) {
    int i,j,temp;
    for(i=0;i<size-1;i++){
        for(j=0;j<size-i-1;j++) {
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}


void main() {
    int i,j,a[5],low=0,high=4,mid,key;
    int found=0;

printf("Enter 5 numbers for array: ");

for (i=0;i<5;i++) {
    scanf("%d", &a[i]);                                   //BINARY SEARCH LOGIC
}

sortArray(a,5);

for(i=0;i<5;i++) {
    printf("%d ", a[i]);
}
printf("\n");

printf("Enter element to be found: ");
scanf("%d", &key);

while (low<=high) {
    mid = (low+high)/2;

if(a[mid]==key){
    printf("Element %d found at index value %d", key , mid);
    found=1;
    break;
}

else if (key<a[mid]){
    high=mid-1;
}
else {
    low=mid+1;}
}
if(!found){printf("%d Not found.", key);}
}








                            //STRING MANIPULATION



#include <stdio.h>

void conCat(char str1[50], char str2[20]) {
    int i = 0, j = 0;

    while (str1[i] != '\0') {
        i++;
    }
    str1[i] = ' ';
    i++;                                       //Concatenation

    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0'; 
}

void toUpper (char str1[50]){

int i;

for (i=0;str1[i]!='\0';i++){
    if (str1[i]>='a' && str1[i]<='z'){
        str1[i]=str1[i]-32;                                         //UpperCase
    }
}
}


void len(char str1[50]) {
    int i,count=0;
    
for (i=0;str1[i]!='\0';i++){
    count++;                                                       //StringLength
}
    printf("The string length is %d (including spaces).",count);

}

void main() {
    char str1[50], str2[20];

    printf("Enter string 1: ");
    scanf("%s", str1);

    printf("Enter string 2: ");
    scanf("%s", str2);

    
    conCat(str1, str2);
    toUpper(str1);
    len(str1);
    
    
    printf("\n");
    printf("String: %s\n", str1);
}











                                                   //POINTERS 



#include <stdio.h>

void main (){
    int a,b;
    int *p,*q;
    
printf("Enter number 1: ");
scanf("%d", &a);

printf("Enter number 2: ");
scanf("%d", &b);

p=&a;
q=&b;                                                     //ADDRESS STORAGE

*p=*p+*q;
*q=*p-*q;
*p=*p-*q;

printf("%d %d", *p,*q);
}







                                                      //RECURSION



#include <stdio.h>

int fact (int number) {
    if (number==1 || number==0) {
        return 1;
    }
    
    else {
        return (number*fact(number-1));                       //factorial logic

void main () {
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    
    printf("Factorial of number %d is %d", num, fact(num));
}