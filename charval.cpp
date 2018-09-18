#include <iostream>
using namespace std;

int charintval(){
    char c = 'a';
    cout<<"Enter a char:> "<<endl;
    cin>>c;
    return int{c};
}

int main(){
    
    int i = charintval();
    cout<<"Value of char "<<i<<endl;

    return 0;
}