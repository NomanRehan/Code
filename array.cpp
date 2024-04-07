#include<iostream>
using namespace std;
   
  
void dublicate(int a[],int g){

for(int i=0;i<g;i++){ 
   int d=0;
   int w=0;
   
    for(int k=0;k<g;k++){
       if (a[i]==a[k]){
        d++;
         
        }
    }

  for(int t=0;t<i;t++){
    if(a[t]==a[i]){w++;}
  }

  if(w!=0){goto jump;}

    if(d>1){
    
    cout<<a[i]<<" is repeated "<<d<<" times"<<endl;
    

    }
    jump:
    int y;
}


}




void missing(int a[],int g,int x){
    
    for(int i=0;i<x;i++){
        int f=0;
        for(int k=0;k<g;k++){
           if(a[k]==i){f++;}

        }
      if(f==0){
      cout<<i<<" is missing!"<<endl; 

    }
    }
}


int main(){
    int g,s=0,x;
    cout<<"set the limit of numbers ";
    cin>>g;
    int a[g];


    cout<< "Select the upper limit of array entry"<<endl;
    cin>>x;
    x=x+1;
    cout<< "enter the numbers for array smaller than "<<x<<endl;
    

    for(int i=0;i<g;i++){
        
        cin>>a[i];

        if ((a[i]>=x))
        {
            while(s!=3){
                cout<<i<<" place number is wrong "<<endl;
                cout<<"plz enter number under "<<x<<endl;
                cin>>a[i];
                if(a[i]<x){s=3;}
            }
        }
        
        

    }   


dublicate(a,g);
missing(a,g,x);

return 0;
}


