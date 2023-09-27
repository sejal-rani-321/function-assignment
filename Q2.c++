/*Write a function that takes the radius of a circle as an argument and returns its area.
*/

#include<iostream>
using namespace std;

int area(int r){
    int area = 3.14 * r * r;
    return area;
}

int main(){
    int r ;
    cout << " r: " << endl;
    cin >>r;
   int area_of_circle = area(r);
   cout << area_of_circle << endl;
}