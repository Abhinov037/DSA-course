#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main() {
    //Write your code here
int a,b,c;
cin>>a;
cin>>b;
cin>>c;
if(a>b&&a>c){
cout<<a;
}
else if(b>a&&b>c){
    cout<<b;
}
else{
    cout<<c;
}
    return 0;
}