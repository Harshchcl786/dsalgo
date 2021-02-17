//linear search
#include <iostream>
using namespace std;
int main() {
    int n,key,i;
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
    }
    cout<<"enter the key you wanna search";
    cin>>key;
    for(int i=0;i<n;i++)
  {
      if(a[i]==key){
      cout<<key<<"found at"<<i<<"index";
      break;
      }
  } 
   if(i==n)
   {
     cout<<"key is not present in the array";
   }

}