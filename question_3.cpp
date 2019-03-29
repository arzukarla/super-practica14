#include<iostream>
using namespace std;

int main(){
    int arr[100];

    cout << " My Array Elements : \n" << endl;

    for(int i=0;i<100;i++){
        arr[i] = i;
        cout << arr[i] << "  ";

        if(i == 20 || i == 40 || i == 60 || i == 80){
            cout << endl;
        }
    }

    cout <<endl << "\n Array without even numbers and numbers not divisible by 3: \n " << endl;

    for(int i=0;i<100;i++){

        if(arr[i]%2 == 0 && arr[i]%3 == 0){
            arr[i] = 101;
        }

        if(arr[i] < 101){
            cout << arr[i] << "  ";
        }
    }
}
