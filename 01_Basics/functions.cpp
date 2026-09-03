#include<iostream>
using namespace std;

// function definition
void greet(){
    cout<<"Welcome to C++ Programming"<<endl;
}
int multiply(int x,int y){
    return x * y;
}
int main()
{
    int num=5,result;

    // Calling the function
    greet();
    result=multiply(num,10);

    cout<<"Multiplication result : "<<result<<endl;
    return 0;
    
}
