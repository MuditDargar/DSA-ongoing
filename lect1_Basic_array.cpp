#include<iostream>
using namespace std ;
int main(){
int d[5] ;
// for (int i = 0; i < 5; i++)
// {
//     cin>>d[i];
// }
// for (int  j = 0 ; j <5; j++)
// {
//     cout<<d[j]<<endl ;
// }

int a[5] ;

a[0]= 25 ;
a[1]= 85 ;
a[2]= 45 ;

cout<<"the size of the array a is "<<endl;
cout<<sizeof(a)<<endl ;
// integer have 4 byte and block is 5
// size is 4*5 = 20
cout<<a[0]<<endl;
cout<<a[1]<<endl;
cout<<a[2]<<endl;
printf("%d\n",a[2]) ;


int  b[] ={2,3,4,33,4,6,8,10};
cout<<"the size of the array b is" <<endl;
cout<<sizeof(b)<<endl;


int  c[10] ={2,3,4,33,4,6,8,10};
cout<<"the size of the array b is" <<endl;
cout<<sizeof(c)<<endl;

cout<<"the 9th element in array is   "<<c[8]<<endl;
cout<<"the 10th element in array is   "<<c[9]<<endl;


int e[10] ={0} ;

// simple loop in cpp is
// for (int i = 0; i < 10 ; i++)
// {
//     cout<<e[i]<<endl;
// }

// for each loop in cpp
for(int x:e){
    // x print the  value of e according to index number
cout<<x<<endl;
}

for(int y:c){
    // y print the  value of c according to index number
    cout<<y<<endl;
}


//first  to take the size of array from user
int n ;
cin>>n ;
// then initialize the array according to the n 
int z[n] ;
// then take the input from the user .. array value
for(int i=0 ;i<n ;i++){
    cin>>z[i];
}
// then print the array by the use of the for each  loop
for(int s:z){
    cout<<s<<endl;
}
return 0;
}