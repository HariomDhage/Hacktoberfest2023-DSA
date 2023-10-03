#include<iostream>
using namespace std;
int main(){

   int n=4;
   int mat[4][4];
  for(int i=0 ;i<n;i++){
      for(int j=0;j<n;j++){
           cin >>mat[i][j];
      }
  }  
  for(int i=0; i<n; i++){
      for(int j=0;j<n;j++){
          cout<< mat[i][j]<<" ";
          }
          cout<<endl;
  } 
   cout<<"Rotated Matrix :\n";
   for(int i=0; i<n; i++){
     for(int j=n-1; j>=0; j--){
       cout<<mat[j][i]<<" ";
     }
     cout<<endl;
   }
}
