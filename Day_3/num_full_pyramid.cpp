#include<iostream>
using namespace std;
int main(){



int n=4;
int k=1;
int z=0;
int h=0;


for(int row=1;row<=5;row++){


    for(int i=0;i<n;i++){

        cout<<"  ";
    }

    for(int j=row;j<=k;j++){

        cout<<j;
        cout<<" ";
    }

    for(int f=z;f>h;f--){
        cout<<f;
        cout<<" ";

    }

    z=z+2;
    h=h+1;



    
    k=k+2;


n=n-1;
cout<<endl;












}











}