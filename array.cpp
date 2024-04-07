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




void missing(int a[],int g){
    
    for(int i=0;i<7;i++){
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
    int g,s=0;
    cout<<"set the limit of numbers ";
    cin>>g;
    int a[g];



    cout<< "enter the numbers for array smaller than 7"<<endl;
    
    for(int i=0;i<g;i++){
        
        cin>>a[i];

        if ((a[i]>=7))
        {
            while(s!=3){
                cout<<i<<" place number is wrong "<<endl;
                cout<<"plz enter number under 7 "<<endl;
                cin>>a[i];
                if(a[i]<7){s=3;}
            }
        }
        
        

    }   


dublicate(a,g);
missing(a,g);

return 0;
}


