#include<iostream>
using namespace std;
int main(){
  int a[100],size,tmp=0,count=0,tmp2=0,sum=0,testcase;
    cout <<"enter testcase:";
    cin >> testcase;  
  while(testcase>0)
  {
    cout <<"enter size";
    cin >> size;
    for(int i=0;i<size;++i){
      cin >> a[i];
    }  
    tmp=0,count=0,tmp2=0,sum=0;
     for(int i=0;i<size;++i){
        for(int j=0;j<size;j++){
      if(a[i]==a[j]){
        count++;
      }
    }
    if(count>tmp){
      tmp=count;
      tmp2=a[i];
    }

     }
   
  

  for (int i=tmp*2;;i=i*2)
  {
     if(i==size)
     {
       sum=sum+i/2+1;
       break;
     }
     if(i>size)
     {
       sum=sum+size-i/2+1;
       break;
     }
     sum=sum+i/2+1;

  }
  cout <<"most frequent elemnt is"<<tmp2; 
    cout <<"most frequent elemnt count"<<tmp; 
    cout <<"sum is"<<sum;
   testcase--;
  }
 
  return 0;
}