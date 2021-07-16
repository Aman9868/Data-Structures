/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void Printarray(int c[],int n3,int a[],int n1,int b[],int n2){
    printf("New Array = ");
    for(int i=0;i<n3;i++){
        printf("%d ",c[i]);
}
    printf("First Array = ");
    for(int i=0;i<n1;i++){
        printf("%d",a[i]);
    }
    printf("Second Array = ");
    for(int i=0;i<n2;i++){
        printf("%d",b[i]);
}
printf("\n\n");
}




void MergeSort(int a[],int b[],int c[],int n1, int n2,int n3){
    int index=0;
    //copy array 1 to new array
    for(int i=0;i<n1;i++){
        c[index++]=a[i];
    }
    //copy array 2 to new array
    for(int i=0;i<n2;i++){
        c[index++]=b[i];
    }
}


void DescSort(int c[],int n3){
    int temp;
    for(int i=0;i<n3-1;i++){             //used for number of passes
       printf("Working on pass Number %d\n",i+1);
        for(int j=0;j<n3-1-i;j++){          //used for comaprisoan in each pass
          if(c[j]<c[j+1]){
              temp=c[j];
              c[j]=c[j+1];
              c[j+1]=temp;
          }
        }}}




void main(){
    int a[]={2,65,5,10,7,5,8};
    int b[]={45,46,39,27,3,4};
    int n1=sizeof(a)/sizeof(a[0]);
    int n2=sizeof(b)/sizeof(b[0]);
    int n3=n1+n2;
    int c[n3];  //create new array
    MergeSort(a,b,c,n1,n2,n3);
    DescSort(c,n3);
    Printarray(c,n3,a,n1,b,n2);
   
    
}
