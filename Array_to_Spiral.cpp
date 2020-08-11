#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<bits/stdc++.h>
#include <unordered_map>
using namespace std;



int main()
{
    int arr[25]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};
    int mat[5][5];
    int n=5,count=0;


int k=0;
       for(int i=0;i<n;i++){
        if(count%2==0){
            for(int j=0;j<n;j++){
                mat[i][j]=arr[k++];
            }
        }
        else{
            for(int j=n-1;j>=0;j--){
                mat[i][j]=arr[k++];
            }

        }
        count++;
       }


    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<"\n";
    }




	return 0;
}
