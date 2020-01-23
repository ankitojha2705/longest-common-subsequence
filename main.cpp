//
//  main.cpp
//  lcs
//
//  Created by Ankit on 23/01/20.
//  Copyright © 2020 Ankit. All rights reserved.
//

#include <iostream>
#include <string.h>
using namespace std;
int lcs(char* s1,char*s2,int m,int n){
    if(m==0||n==0)
        return 0;
    if(s1[m-1]==s2[n-1])
        return 1+lcs(s1,s2,m-1,n-1);
    else
        return max(lcs(s1,s2,m-1,n),lcs(s1,s2,m,n-1));
        
}
int max(int a,int b){
    return (a>b)?a:b;
}
int main(){
    char s1[10];
    char s2[10];
    cin>>s1>>s2;
    int m =strlen(s1);
    int n =strlen(s2);
    int r=lcs(s1,s2,m,n);
    cout<<r;
}

