/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void printarr(int *a,int n){
    for(int i=0;i<n;i++){
        printf(" %d",a[i]);
    }
}
void Selecsort(int *a,int n){
    int min,temp;
    printf("\nRunning Selecsort..............\n");
    for(int i=0;i<n-1;i++){
        min=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[min]){
                min=j;
                
            }
        }
        //swapping
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }
}
void main(){
    int a[]={2,5,8,52,10,15};
    int n=6;
    printarr(a,n);
    Selecsort(a,n);
    printarr(a,n);
    
}

