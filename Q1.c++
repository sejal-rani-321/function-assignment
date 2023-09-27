/*Write a function to print squares of first n natural numbers, taking n as argument to the function*/

#include<iostream>
using namespace std;

int square(int n){
    for (int i = 1; i <= n; i++){
        cout << " square of: "<< i << " = " << i * i << endl; 
    }
}

int main(){
    int n ;
    cout << " n: " << endl;
    cin >>n;
    square(n);
}