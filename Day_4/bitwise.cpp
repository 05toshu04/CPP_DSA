#include<iostream>
using namespace std;
int main(){
    bool is_Pass=true;
    bool is_Present=false;
    int a=12;
    int b=25;
    a=a<<2;     //left shift bitwise operator
    b=b>>3;      // //right shift bitwise operator





    // BITWISE AND OPERATOR
    cout<< (is_Pass & is_Present)<<endl;  
    // BITWISE OR OPERATOR    
     cout<< (is_Pass | is_Present)<<endl;  
    //  BITWISE XOR OPERATOR       
      cout<< (is_Pass ^ is_Present)<<endl;  
    //   BITWISE NOT OPERATOR      
       cout<< !(is_Pass & is_Present)<<endl;   
       //left shift bitwise operator
       cout<< a <<endl;
       //  right shift bitwise operator
       cout<<b<<endl;
}