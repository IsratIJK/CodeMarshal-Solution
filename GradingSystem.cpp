#include<iostream>
using namespace std;
int main() {
   int n,t,i;
   cin>>t;
   for(i=1;i<=t;i++){
       cin>>n;
       if(n>=90 && n<=100){
           cout<<"Student "<<i<<":"<<" A+"<<endl;
       }
       else if(n>=80 && n<=89){
           cout<<"Student "<<i<<":"<<" A"<<endl;
       }
       else if(n>=70 && n<=79){
           cout<<"Student "<<i<<":"<<" A-"<<endl;
       }
       else if(n>=60 && n<=69){
           cout<<"Student "<<i<<":"<<" B+"<<endl;
       }
       else if(n>=50 && n<=59){
           cout<<"Student "<<i<<":"<<" B-"<<endl;
       }
       else if(n>=40 && n<=49){
           cout<<"Student "<<i<<":"<<" C"<<endl;
       }
       else if(n>=35 && n<=39){
           cout<<"Student "<<i<<":"<<" D"<<endl;
       }
       else if(n>=0 && n<=34){
           cout<<"Student "<<i<<":"<<" F"<<endl;
       }
   
   }
   
}



















