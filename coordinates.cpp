//Maitreyee Gohad
//24070123509
#include<iostream>
using namespace  std;

int main()
{
    int x,y;
    cout<<"Enter X and Y coordinates (non zero):"<<endl;
    cin>>x>>y;
    if (x>0 && y>0)
    {
        cout<<"Coordinates are in first quadrant!"<<endl;
    }
    else if (x<0 && y>0)
    {
        cout<<"Coordiates are in second quadrant!"<<endl;
    }
    else if(x>0 && y<0)
    {
        cout<<"Coordinates are in fourth quadrant!"<<endl;
    }
    else
    {
        cout<<"Coordinates are in third quadrant!"<<endl;
    }
}


/*OUTPUT:

Enter a number: 5
Enter a number: -5
It is in 4th quadrant

Enter a number: -8
Enter a number: -9
It is in 3rd quadrant.*/
