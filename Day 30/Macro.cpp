// Keywords that make our code more optimal and make our performence better


#include<iostream>
using namespace std;

#define pie 3.14
#define AREA(l,b)(l*b)

int main(){
// Macro
int r =5;

// double pie= 3.14;
// we cannot do;
// pie = pie + 1;
 int area = pie * r * r;
 cout<<"area is "<<area<<endl;
  // Given lengths l1 and l2
    int l1 = 10, l2 = 5, area2;
 
    // Find the area using macros
    area2 = AREA(l1, l2);
 
    // Print the area
    cout << "Area of rectangle"
         << " is: "<<
        area2;
 return 0;
}

