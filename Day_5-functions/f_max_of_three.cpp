#include<iostream>
using namespace std;
int max_of_three(int a,int b,int c){
    if(a>=b && a>=c){
        
        return a;
    }
    else if(b>=a && b>=c){
       
        return b;
    }
    else {
        
        return c;
    }
    
    
    
}


int main(){
    int a;
    cout<<"enter first number"<<endl;
    cin>>a;

    int b;
    cout<<"enter second number"<<endl;
    cin>>b;

    int c;
    cout<<"enter third number"<<endl;
    cin>>c;

    int result= max_of_three(a,b,c);
    


    
    if(a==b && b==c){
        cout<< "all numbers are same";
    }
    else{
        cout<<"greatest number is "<<result<<" and belongs to ";
    if(result==a){
         cout<< "a ";
    }
    if(result==b){
         cout<< "b ";
    }
    if(result==c){
        cout<<"c ";
    }

    }

}