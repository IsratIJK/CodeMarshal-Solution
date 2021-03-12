#include<iostream>
using namespace std;
int main() {
  long long t,a,b,r,i;
  char c;
   cin>>t;
   for(i=1;i<=t;i++){
       cin>>a>>b>>c;

       
       if(c=='+'){
           r=a+b;
           
       }
       else if(c=='-'){
           r=a-b;
       }
        else if(c=='%'){
           r=a%b;
       }
        else if(c=='/'){
           r=a/b;
       }
        else if(c=='*'){
           r=a*b;
       }
        else if(c=='-'){
           r=a-b;
       }
       cout<<"Case"<<" "<<i<<":"<<" "<<r<<endl;
      
   }
   
}












