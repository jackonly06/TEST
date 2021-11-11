/*************************************************************************
    > file name: virtual.cpp
    > author: ---
    > mail: ---
    > created time: 2021年11月10日 星期三 20时53分32秒
 ************************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <iterator>

using namespace std;

//这个类是一个抽象类-抽象数据类型
class Shape
{
public:
    Shape(){};
    virtual ~Shape(){}
    virtual double getArea() = 0;
    virtual double getPerim() = 0;//纯虚函数
    virtual void Draw() = 0;
};

void Shape::Draw()
{
    //因为这是一个纯虚函数，可以不写，一般也不写；
    //也可以写，如下：
    cout << "Abstract drawing 方法!\n";
}

class Circle: public Shape
{
public:
    Circle(int radius):itsradius(radius){}
    virtual ~Circle(){}
    double getArea() { return 3.14 * itsradius * itsradius; }
    double getPerim() { return 2 * 3.14 * itsradius; }
    void Draw();
private:
    int itsradius;
};

void Circle::Draw()
{
    cout << "Circle drawing routine here!\n";
    Shape::Draw();
}

class Rectangle: public Shape
{
public:
    Rectangle(int len, int width):itswidth(width),itslength(len){}
    virtual ~Rectangle(){}
    double getArea(){ return itslength * itswidth; }
    double getPerim(){ return 2 * itslength + 2 * itslength; }
    virtual int getlenth(){ return itslength; }
    virtual int getwidth(){ return itswidth; }
    void Draw();
private:
    int itswidth;
    int itslength;
};

void Rectangle::Draw()
{
    for(int i = 0; i < itslength; i++)
    {
        for(int j = 0; j < itswidth; j++){
            cout << "x";
        }
        cout << "\n";
    }
    Shape::Draw();
}

class Square: public Rectangle
{
public:
    Square(int len);
    Square(int len, int width);
    virtual ~Square(){}
    double getPerim(){ return 4 * getlenth(); }
};

Square::Square(int len):Rectangle(len, len){}
Square::Square(int len, int width):Rectangle(len, width)
{
    if(getlenth() != getwidth())
    {
        cout << "error, not a square... a Rectangle??\n";
    }
}

int main(int argc, char **argv)
{
//    shape a; // 不能创建抽象类的对象,只能承

//    circle a(8);
//    a.draw();
//
//    rectangle b(10,5);
//    b.draw();
//
//    square c(8);
//    c.draw();

    int choice;
    bool fQuit = false;
    Shape *sp;

    while(fQuit == false)
    {
        cout << "(1)circle (2)Rectangle (3)Square (0)Quit: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                sp = new Circle(5);
                break;
            case 2:
                sp = new Rectangle(4, 6);
                break;
            case 3:
                sp = new Square(5);
                break;
            default:
                fQuit = true;
                break;
        }
        if(fQuit == false)
        {
            sp->Draw();
            delete sp;
            cout << endl;
        }
    }

    return 0;
}

