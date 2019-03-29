#include <iostream>
using namespace std;


int main(){
    int n,index;
    cout << "Enter the value of n: ";
    cin >> n;
    int A[n-2];

    for(int i=0;i<(n-1);i++){
        A[i] = i+2;
    }

    int p = A[0];
    int s = 2;
    int maxv = A[n-2];

    for(int i=0;i< maxv;i++){
        for(int i=0;i<n-1;i++){
            int value = s*p;
            if(value > maxv){
                break;
            }
            for(int j=0;j<n-1;j++){
                if(A[j] == value){
                    A[j] = 0;
                    break;
                }
            }
            s++;
        }

        for(int i=0;i<n-1;i++){
            if(A[i] != 0 && A[i] > p){
                p = A[i];
                break;
            }
        }

        maxv = A[0];
        for(int i=0;i<n-1;i++){
            if(A[i] != 0 && A[i] > maxv){
                maxv = A[i];
            }
        }
        s=2;
    }

    cout << endl << "The Prime numbers less than " << n << " are : \n" << endl;
    for(int i=0;i<(n-1);i++){
        if(A[i] != 0){
            cout <<" A[" <<i <<"] = " << A[i] << endl ;
        }
    }

}
