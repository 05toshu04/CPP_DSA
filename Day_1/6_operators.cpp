#include<iostream>
using namespace std;

int main(){
    // artithmetic operators: +, -, *, /, %

    int a=10, b=3;
    cout<<"a + b: "<<a+b<<endl;
    cout<<"a - b: "<<a-b<<endl;
    cout<<"a * b: "<<a*b<<endl;
    cout<<"a / b: "<<a/b<<endl;  // integer division
    cout<<"a % b: "<<a%b<<endl;


    float x=4;
    cout<<"x / b: "<<x/b<<endl;  // float division



    // relational operators: ==, !=, >, <, >=, <=

    cout<<"a == b: "<<(a==b)<<endl;
    cout<<"a != b: "<<(a!=b)<<endl;
    cout<<"a > b: "<<(a>b)<<endl;
    cout<<"a < b: "<<(a<b)<<endl;
    cout<<"a >= b: "<<(a>=b)<<endl;
    cout<<"a <= b: "<<(a<=b)<<endl;

    //assignment operators: =, +=, -=, *=, /=, %=
    int c=5; 
    
    
    // logical operators: &&, ||, !

    bool p=true, q=false;
    cout<<"p && q: "<<(p&&q)<<endl;
    cout<<"p || q: "<<(p||q)<<endl;
    cout<<"!p: "<<(!p)<<endl;
    cout<<"!q: "<<(!q)<<endl;
    

     //bitwise operators (later)
}