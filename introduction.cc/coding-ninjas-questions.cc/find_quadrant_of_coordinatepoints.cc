#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main() {
int x,y;
cin>>x;
cin>>y;

if(x>=0&&y>=0){
    
    cout<<"1st quadrant ";
}
else if(x>=0&&y<=0){
cout<<"4th quadrant";
}
else if(x<=0&&y<=0){
    cout<<"3rd quadrant";
}
else{
    cout<<"4th quadrant";
}

    return 0;
}