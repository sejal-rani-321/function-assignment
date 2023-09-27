/*Write a function to count the number of digits in a number and then print the square of this number.*/

#include<iostream>
using namespace std;

int countDigit(int n){

    int count = 0;
    while (n > 0){
        n = n/10;
        ++count;
    }
    return count;
    
}

int main(){

    int n;
    cout << "n: " << endl;
    cin >> n;

    cout << "number of digits: " << countDigit(n);
}
