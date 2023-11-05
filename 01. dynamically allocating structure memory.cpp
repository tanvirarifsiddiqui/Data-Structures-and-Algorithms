#include<iostream>
//#include<stdlib.h>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

int main(){
//     Rectangle r1={10,5};
     Rectangle *ptrS;
    ptrS = new Rectangle;

    ptrS->breadth = 10;
    ptrS->length = 3;

    cout<<sizeof(*ptrS)<<endl;

    cout<<"bredth: "<<(* ptrS).breadth<<endl;
    cout<<"length: "<<ptrS->length<<endl;
delete [] ptrS;
}
