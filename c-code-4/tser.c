#include <stdio.h>
int bs(int n,int a[],int tar){
    int low =0;int high =n-1;
    while(low<=high){
        int mid = low + (high -low)/2;
        if(a[mid] == tar){
            return mid;
        }
        else if(a[mid] <tar){
            low = mid + 1;
        }
        else{
            high = mid -1;
        }
    }
}
int main() {
    int n =5;
    int a[5] ={2,3,4,5,6};
    int tar = 6;
    int r = bs(n,a,tar); 
    if(r == tar){
        printf("Element found %d",r);

    }
    else{
        printf("Element not found");
    }
    return 0;
}
