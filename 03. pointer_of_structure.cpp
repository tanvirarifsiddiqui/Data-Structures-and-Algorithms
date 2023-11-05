#include<stdio.h>
#include<iostream>
using namespace std;
struct rectangle{
int length;
int breadth;
};

int main()
{
    struct rectangle R[6]={{10,5},{6,3},{24,10},{12,7},{15,7},{16,6}};


    // here I am using pointer
    struct rectangle *p = R;
    for(int i=0;i<6;i++)
    {
        cout<<"Rectangle Size: "<<(p->length)*(p->breadth)<<endl;
        p++;
    }

    return 0;
}

