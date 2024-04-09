#include<iostream>
#include<cmath>


using namespace std;

int arraysize(int decimal){

    int size=((log(decimal))/(log(2)));
    size=size+1;
    
    return size;
}


int main(){
    int decimal;

    cout<<"Welcome to Program, it will convert number base 10 (Decimal) to base 2  binary"<<endl;
    cout<<"please enter your number and press enter"<<endl;

    cin>>decimal;

    int size=arraysize(decimal);



    int binary[size];
    int b; 
 
    while(decimal!=1){
        for(int i=0;i<=(size-2);i++){
            b=decimal%2;

            binary[i]=b;

            decimal=decimal/2;
        }
    }

    binary[size-1]=1;


    for(int k=(size-1);k>=0;k--)
    {cout<<binary[k];}



    return 0;

}