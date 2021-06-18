/* Enter your solutions in this file */
#include <stdio.h>
#include <assert.h>
int max(int a[],int n){
  int max= a[0];
  for(int i=0; i<n; i++){
    if(max < a[i]);
    if(max < a[i]){
    max=a[i];
  }
}
return max;
}
int min(int b[], int n){
  int min = b[0];
  for(int i=0; i<n; i++){
    if(min > b[i]){
       min = b[i];
       }
       }
       return min;
       }
       
  
       float average(int c[], int n){
         float average =0;
         for(int i=0; i<n; i++){
           average+= c[i];
         }
         average = average/n;
         return average;
       }
       
       
       int mode(int d[], int n){
         int count = 0;
         int mode = 0;
         for(int i=0; i<n; i++){
           int counts =0;
           for(int j=0; j<n; j++){
             if(d[j]==d[i]){
               counts++;
             }
           }
           if(counts > count)
             count=counts;
           mode = d[i];
         }
          return mode;
             }
             
             
      int factors(int n,int e[]){
        int i=0;
        while(n%2==0){
          e[i]=2;
          i++;
          n=n/2;
        }
        for(int j=3; j<=n;j++){
          while(n%j==0){
            e[i]=j;
            i++;
            n=n/j;
          }
        }
        if(n>2)
          e[i]=n;
        return i;
      }   
             
