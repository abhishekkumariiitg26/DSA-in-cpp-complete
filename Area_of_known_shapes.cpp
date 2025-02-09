#include<iostream>
using namespace std;

int area_of_sq(int size){
    return size*size;
}

int area_of_rect(int length, int width){
    return length*width;
}

double area_of_triangle(int base, int height){
    return 0.5*base*height;
}

double area_of_circle(int radius){
    return 3.14*radius*radius;
}

int main(){
    int size,length,width,base,height,radius;
    int button;
    cout<<"Welcome to area calculator"<<endl;
    cout<<"Enter : 1 for Square"<<endl;
    cout<<"Enter : 2 for Rectangle"<<endl;
    cout<<"Enter : 3 for triangle"<<endl;
    cout<<"Enter : 4 for circle"<<endl;
    cin>>button;
    switch (button)
    {
    case 1:
        cout<<"enter length of one side of square: ";
        cin>>size;
        cout<<area_of_sq(size);
        break;
    
    case 2:
        cout<<"enter length and width of rectangle: ";
        cin>>length>>width;
        cout<<area_of_rect(length,width);
        break;
    
    case 3:
        cout<<"enter the base and height of triangle: ";
        cin>>base>>height;
        cout<<area_of_triangle(base,height);
        break;
    
    case 4:
        cout<<"enter radius of circle: ";
        cin>>radius;
        cout<<area_of_circle(radius);
        break;
    
    default:
        break;
    }
    return 0;
}