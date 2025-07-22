#include <iostream>
using namespace std;

int main() {
    float a;
    int b;
    string c;
    char d;
    bool e;
    cout<<"Enter any floating point number: ";
    cin>> a;
    cout<<"The Number "<<a<<" and its size is "<<sizeof(a)<<" bytes"<<endl;
    
    
    cout<<"Enter any integer: ";
    cin>>b;
    cout<< "The Integer "<<b<<" and its size is "<<sizeof(b)<<" bytes"<<endl;
    

    cout<<"Enter any string: ";
    cin>> c;
    cout<<"The string "<<c<<" and its size is "<<sizeof(c)<<" bytes"<<endl;
    
    cout<<"Enter any charecter: ";
    cin>>d;
    cout<< "The Charecter "<<d<<" and its size is "<<sizeof(d)<<" bytes"<<endl;
    
    cout<<"Enter any value: ";
    cin>>e;
    cout<< "The  "<<e<<" and its size is "<<sizeof(e)<<" bytes"<<endl;

    return 0;

}
