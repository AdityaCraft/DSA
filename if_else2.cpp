#include<iostream>
using namespace std;

int main()
{
    int age;
    cin >> age;
    if(age<18){
        cout<<"not eligible for job";
    }
    else if(age<55){
        cout<<"eligible for job";
    }
    else if( age<57){
        cout<<"eligible for job,but retirement soon";
    }
    else if(age>57){
        cout<<"retirement time";
    }
    else{
        cout<<"please enter valid age";
    }
    return 0;
}
