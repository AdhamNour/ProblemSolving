#include <iostream>
using namespace std;
void insertionSort(int*& A , int n);
int main(){
    int* A =new int [10];
    for (int i = 0; i < 10; ++i) {
        A[i]=10-i;
    }
    insertionSort(A,5);
    for (int i = 0; i < 10; ++i) {
        cout<<A[i]<<endl;
    }
    return 0;
}
void insertionSort(int*& A, int n){
    for(int i =0; i<n; i++){
        int cur = A[i];
        int j = i-1;
        while((j>=0) &&(A[j] > cur)){
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=cur;
    }
}
