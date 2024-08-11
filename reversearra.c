# include <stdio.h>


int main(){
    int  arr[] = {1,2,3,4,5};
    int n = 5 ; 
    int s = 0 ; 
    int e = n - 1 ; 
    while(s <= e ){
        swap(arr[s++] , arr[e--]);
    }
    return 0 ; 
}