#include <iostream>
using namespace std;

int main() {
    int English,Maths,Hindi,Physics,Chemistry ;
    cout<<"Enter your marks in Enlish:";
    cin>>English;
    
    cout<<"Enter your marks in Maths:";
    cin>>Maths;
    
    cout<<"Enter your marks in Hindi:";
    cin>>Hindi;
    
    cout<<"Enter your marks in Physics:";
    cin>>Physics;
    
    cout<<"Enter your marks in Chemistry:";
    cin>>Chemistry;
    
    int Total = (English + Maths + Hindi + Physics + Chemistry);
    float Percentage = (Total/500.0)*100;
    
    cout<<"Percentage:"<<Percentage<<"%"<<endl;
    
    return 0;
}