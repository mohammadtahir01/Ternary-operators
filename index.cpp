#include<iostream>
using namespace std;
int main(){
    int times;
    
    cout<<"enter the time:";
    cin>>times;
    (times > 0 && times <= 12)?cout<<"AM"<<endl:(times > 12 && times <= 24)?cout<<"PM":cout<<"try again";
    
}