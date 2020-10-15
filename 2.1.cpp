#include<iostream>
#include<math.h>
using namespace std;
class fn
{
    public:
        int choice;
        cout<<"Enter 1 to calculate area of a Circle.\n";
        cout<<"Enter 2 to calculate area of a Recatngle.\n";
        cout<<"Enter 3 to calculate the area of a Triangle.\n\n";
        cout<<"Enter the choice : ";
        cin>>choice;
        switch (choice)
        {
        case 1:
            int radius;
            cout<<"Enter the radius of Circle(in cm) : ";
            cin>>radius;
            area(radius);
            break;
        case 2:
            int length,breadth;
            cout<<"Enter the length and breadth of the Rectangle(in cm) : ";
            cin>>length>>breadth;
            area(length,breadth);
            break;
        case 3:
            int a,b,c;
            cout<<"Enter the 3 sides of the Triangle(in cm) : ";
            cin>>a>>b>>c;
            area(a,b,c);
            break;
        case 4:
            cout<<"EXIT";
            break;
        default:
            cout<<"Enter the correct choice.";
            break;
        }
        void area(int radius)
        {
            cout<<"Area of the Circle : "<<3.14*radius*radius<<endl;
        }
        void area(int a,int b,int c)
        {
            float s;
            s=(a+b+c)/2;
            s=s*(s-a)(s-b)(s-c);
            if(s<0)
                cout<<"Sides od Triangle are invalid.";
            else
                cout<<"Area of the Triangle : "<<pow(s,0.5)<<"sq.cm"<<endl;
        }
        void area(int length,int breadth)
        {
            cout<<"Area of the Rectangle : "<<length*breadth<<"sq.cm"<<endl;
        }
};