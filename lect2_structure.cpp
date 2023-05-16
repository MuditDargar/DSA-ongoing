#include<iostream>
using namespace std ;
struct rectangle{
    int length ;
    int breadth ;
} ;
int main(){
struct rectangle r ;
r={10,5} ;
cout<<r.length <<endl;
cout<<r.breadth <<endl;
cout<<"the area of rectangle is "<<r.breadth*r.length<<endl;
r.length=15 ;
r.breadth=10 ;
cout<<r.length <<endl;
cout<<r.breadth <<endl;
cout<<"the area of  rectangle  after changing the perimeter is "<<r.breadth*r.length<<endl;
return 0;
} 