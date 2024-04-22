//insertion sort
#include <iostream>
#include <cstdlib>

using namespace std;
void insertionSort(int arry[],int size){
    int i,j,key;
    for(i=1;i<size;i++){
        key=arry[i];
        j=i-1;
        while(j>=0 && arry[j]>key){
            arry[j+1]=arry[j];
            j--;
        }
        arry[j+1]=key;
    }
}//end of insertion sort
//asdjkfhjdf
//printing array
void display(int a[],int n){
  
    for(int i=0;i<n;i++){
        cout<<a[i]<<"  ";
    }
}
//drivers code 
int main(){
    int a[10];
    for(int i=0;i<10;i++){
        a[i]=rand()%20;
    }
    //printing before sorting
    display(a,10);
    
    //applying sorting
    insertionSort(a,10);
    cout<<endl<<"after sorting:"<<endl;
    display(a,10);
}