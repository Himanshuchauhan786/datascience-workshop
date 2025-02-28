#include<iostream>
using namespace std;
int main(){
    float x,y;
    cout<<"Enter  first number :";
    cin>>x;
    cout<<"Enter second number :";
    cin>>y;
    char ch;
    cout<<"Enter character :";
    cin>>ch;
    switch(ch){
        case '+':
        cout<<"Addition is  "<<x+y;
        break;

                case '-':
        cout<<"Subtraction is  "<<x-y;
        break;


                case '*':
        cout<<"Multiplication is  "<<x*y;
        break;


                case '/':
        cout<<"Division is  "<<x/y;
        break;


            default :
            cout<<"Invalid number ";




    }
}
    
    

    
    
    
    
    
    

