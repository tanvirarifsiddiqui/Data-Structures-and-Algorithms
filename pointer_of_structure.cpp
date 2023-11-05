#include<stdio.h>
#include<iostream>
using namespace std;
struct rectangle{
int length;
int breadth;
};

int main()
{
    struct rectangle R[5]={(10,5),(6,3),(24,10),(12,7),(15,7),(16,6)};

    // here I am using pointer
    struct rectangle *p = R;
    for(int i=0;i<5;i++)
    {
        cout<<"Rectangle Size: "<<(p[i].length)*(p[i].breadth)<<endl;
    }

    return 0;
}

