/*************************************************************************
    > File Name: 38_1.cpp
    > Author: ---
    > Mail: ---
    > Created Time: 2021年12月28日 星期二 21时50分21秒
 ************************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <iterator>

using namespace std;

const int DefaultSize = 10;

//动态数组
class Array
{
public:
    Array(int itsSize = DefaultSize);
    ~Array(){ delete [] pType; }

    //运算符重载
    int &operator[] (int offSet);
    const int &operator[] (int offSet) const;

    //访问器，accessors
    int GetitsSize() const { return itsSize; }

    //异常类
    class xBoundary{};
    class xSize
    {
        public:
            xSize(){}
            xSize(int size): itsSize(size){}
            ~xSize(){}
            int GetSize() {return itsSize;}
            virtual void PrintError()
            {
                cout << "下标发生错误: " << itsSize << endl;
            }
        private:
            int itsSize;
    };

    class xZero: public xSize
    {
        public:
            xZero(int size): xSize(size){}
            virtual void PrintError()
            {
                cout << "下标不能为0！" << GetSize() << endl;
            }
    };
    class xNegative: public xSize
    {
        public:
            xNegative(int size): xSize(size){}
            virtual void PrintError()
            {
                cout << "下标不能为负！" << GetSize() << endl;
            }
    };
    class xTooSmall: public xSize
    {
        public:
            xTooSmall(int size): xSize(size){}
            virtual void PrintError()
            {
                cout << "下标不能小于10！" << GetSize() << endl;
            }
    };
    class xTooBig: public xSize
    {
        public:
            xTooBig(int size): xSize(size){}
            virtual void PrintError()
            {
                cout << "下标不能大于30000！" << GetSize() << endl;
            }
    };

private:
    int *pType;
    int itsSize;

};

int &Array::operator [](int offSet)
{
    int size = this->GetitsSize();
    if(offSet >= 0 && offSet < size)
    {
        return pType[offSet];
    }
    throw xBoundary();

}

const int &Array::operator [](int offSet) const
{
    int size = this->GetitsSize();
    if(offSet >= 0 && offSet < size)
    {
        return pType[offSet];
    }
    throw xBoundary();

}



Array::Array(int size): itsSize(size)
{
    if(size == 0)
    {
        throw xZero(size);
    }
    else if(size < 10)
    {
        throw xNegative(size);
    }
    else if(size > 30000)
    {
        throw xTooBig(size);
    }
    else if(size < 10)
    {
        throw xTooSmall(size);
    }

    pType = new int[size];
    for(int i = 0; i < size; i++)
    {
        pType[i] = 0;
    }

}

int main(int argc, char **argv)
{

    try{
//        b[6] = 88;
//        b[22] = 99;
//
//        cout << b[6] << endl;
//        cout << "test1" << endl;
        Array a;

        Array intArray(20);
        Array b(-6);
        for(int j = 0; j < 100; j++)
        {
            intArray[j] = j;
            cout << "intArray[" << j << "] okay..." << endl;
        }
    }
    catch(Array::xBoundary)
    {
        cout << "下标越界了!" << endl;
    }
#if 0
    catch(Array::xZero theException)
    {
        cout << "下标不能是0!" << endl;
    }
    catch(Array::xNegative theException)
    {
        cout << "下标不能是负数!" << theException.GetSize() << endl;
    }
    catch(Array::xTooBig theException)
    {
        cout << "下标不能大于30000!" << theException.GetSize() << endl;
    }
    catch(Array::xTooSmall theException)
    {
        cout << "下标不能小于10!" << theException.GetSize() << endl;
    }
#endif
    catch(Array::xSize &exp)
    {
        exp.PrintError();
    }
    catch(...)
    {
        cout << "发生未知异常!" << endl;
    }

    cout << "Done." << endl;

    return 0;
}

