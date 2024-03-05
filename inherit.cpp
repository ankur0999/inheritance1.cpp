#include<iostream>
using namespace std;

class Shape{
    public:
    int diamension;
    string color;
    
      
    Shape(){
    diamension = 2;
    color = "blue";
    }
   };
class Rectangle:public Shape{
    public:
    int length;
    int breadth;
    string color;
    Rectangle(int len, int brd){
    length = len;
    breadth = brd;
    color = "Red";
    }
    int Area(){
    return length*breadth;
    }
    int perimeter(){
    return 2*(length+breadth);
    }
    };
class Square:public Shape{
    public:
    int lenght;
    Square(int len){
    lenght = len;
    }
    int Area(){
    return lenght*lenght;
    }
    int perimeter(){
    return 4*lenght;
    }
    };
 
 int main(){
     Rectangle *R = new Rectangle(4,5);
     cout << R->Area()<<endl;
     cout << R->color<<endl;
     cout<<sizeof(*R)<<endl;
     }
