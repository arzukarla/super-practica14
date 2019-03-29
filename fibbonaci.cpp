#include <iostream>
using namespace std;

int fib(int n){
    if(n == 0){
        return 0;
    }
    if(1 == n || 2 == n)
    {
        return 1;
    }
    else
    {
        return fib(n-1) + fib(n-2);
    }
}

int main(){
    int arr[20];

    for(int i=0;i<12;i++){
        arr[i] = fib(i);
    }

    for(int i=0;i<12;i++){
        cout << arr[i] << " ";
    }
}
