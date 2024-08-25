#include<iostream>
using namespace std;

int main() {
    int a1[4], i, j;
    float sum=0, avg;
    for(i=0;i<4;i++) {
        cout<<"Enter element-"<<i+1<<": ";
        cin>>a1[i];
    }
    for(j=0;j<4;j++) {
        sum = sum + a1[j];
    }
    cout<<"Sum of elements = "<<sum<<endl;
    avg = sum/4;
    cout<<"Average = "<<avg;
}
