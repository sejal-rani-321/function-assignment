/*Given two numbers a and b, write a function to print all odd numbers between them.*/

#include<iostream>
using namespace std;

int oddNo(int a, int b){
    for (int i = a; i <= b; i++){
        if(i%2==0)
        cout << i << " ";
    }  
}

int main(){
    int a, b;
    cout << " enter start no. : " << endl;
    cin >>a;
    cout << " enter last no. : " << endl;
    cin >>b;
    oddNo(a, b);
}