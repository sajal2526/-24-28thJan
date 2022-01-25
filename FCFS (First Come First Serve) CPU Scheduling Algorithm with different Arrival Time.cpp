#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int process[4];
    int at[4];
    int bt[4];
    for(int i=0;i<4;i++){
        cin>>process[i]>>at[i]>>bt[i];
    }
      for(int i=0;i<3;i++){
        for(int j=i+1;j<4;j++){
            if(at[j]<at[i]){
                int temp=at[j];
                at[j]=at[i];
                at[i]=temp;
                
                temp=process[j];
                process[j]=process[i];
                process[i]=temp;
                
                temp=bt[j];
                bt[j]=bt[i];
                bt[i]=temp;
            }
        }
    }
    int x=0;
    int wt[4];
    for(int i=0;i<4;i++){
        if(i==0){
            wt[process[i]-1]=0;
        }
        else{
            wt[process[i]-1]=x-at[i];
        }
        x+=bt[i];
}
      for(int i=0;i<3;i++)
    {
        cout<<"P"<<i+1<<" "<<"(WT="<<wt[i]<<"), ";
    }
    cout<<"P"<<4<<" "<<"(WT="<<wt[3]<<")";
    
    
    return 0;
}
