#include <bits/stdc++.h> 

#include <iostream>

using namespace std;

 

int main() {

    int s,e,w,z=32;

    cin>>s>>e>>w;

    if(0 <= s <= 80 && s <= e <=  900 && 0 <= w <= 40 ){

        while(s<=e){

        int C = (s - z)* 5/9 ;

        cout<<s<<" "<< C <<endl;

        s=s+w;

 

    }

    }

    

    

    return 0;

}