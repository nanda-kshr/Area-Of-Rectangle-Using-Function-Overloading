#include<iostream>
#include<string>
using namespace std;

class rectangle{
    private:
        int length,breadth;
    public:
        rectangle(){
            length,breadth = 0;
        }
        rectangle(int x, int y){
            length = x;
            breadth = y;
        }
        rectangle(int x){
            breadth=x;
            length = x;
        }
        
        int areaR(){
            return length*breadth;
        }
};


int main(){
    rectangle r1,r2(1),r3(1,2);
    cout<<"\nRectangle 1 area = "<<r1.areaR();
    cout<<"\nRectangle 2 area = "<<r2.areaR();
    cout<<"\nRectangle 3 area = "<<r3.areaR();

    return 0;
}