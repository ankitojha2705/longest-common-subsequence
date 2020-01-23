//
//  main.cpp
//  lcs_dynamic
//
//  Created by Ankit on 23/01/20.
//  Copyright © 2020 Ankit. All rights reserved.
//

#include <iostream>
using namespace std;
#include <string>
int max(int a,int b){
    return (a>b)?a:b;
}
int lcs(char* s1,char *s2,int m,int n){
    int l[m+1][n+1];
    int i,j;
    for(i=0;i<=m;i++){
        for(j=0;j<=n;j++){
            if(i==0||j==0)
                l[i][j]=0;
            else if(s1[i-1]==s2[j-1])
                l[i][j]=1+l[i-1][j-1];
            else
                l[i][j]=max(l[i-1][j],l[i][j-1]);
        }
            
    }
    return l[m][n];
}
int main(){
    int 
    char s1[1000];
    char s2[1000];
    cin>>s1>>s2;
    int m=strlen(s1);
    int n=strlen(s2);
    int r=lcs(s1,s2,m,n);
    cout<<r;
}
