/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int linearSearch(int arr[],int size,int element){
    for(int i=0;i<size;i++){
        
        if(arr[i]==element){
            return i;
        }
    }
    return -1;
}
void main(){
    int arr[]={1,3,5,8,10,56,7,58,24,22};
    int size=sizeof(arr)/sizeof(int);
    int element=10;
    int SearchIndex=linearSearch(arr,size,element);
    printf("The element %d was found at index %d \n",element,SearchIndex);
    
}


