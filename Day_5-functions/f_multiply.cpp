#include<iostream>
using namespace std;

int multiply(int a, int b){
    return a*b;
}
int main(){
    int a;
    cout<<"enter the value of a"<<endl;
    cin>>a;
    int b;
    cout<<"enter the value of b "<<endl;
    cin>>b;

    cout<<multiply(a, b);
}