#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

int main()
{

   int abc[3][3] ={
            {1,2,3},
            {4,5,6},
            {7,8,9}
            };


    int count=0;

    for(int i=0;i<3;i++){
        if(count%2==0){
            for(int j=0;j<3;j++){
                cout<<i<<" "<<j<<" ";
                cout<<abc[i][j]<<"\n";
            }
        }
        else{
             for(int j=2;j>=0;j--){
                cout<<i<<" "<<j<<" ";
                cout<<abc[i][j]<<"\n";
            }
        }
        count++;
    }
	return 0;
}
