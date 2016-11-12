// 别让异常逃离析构函数
// Prevent exceptions from leaving destructors
//
//


// 绝不在构造和析构过程中调用virtual函数
// Never call virtual functions during construction or destruction


// 令operator= 返回一个reference to *this
// Have assignment operators return a reference to * this



// 在operator= 中处理"自我赋值"
// Handle assignment to self in operator=.

class BitMap {};
class Widget 
{
private:
    BitMap* pb;
};

Widget& Widget::operator= (const Widget& rhs)
{
    delete pb;
    pb = new BitMap(*rhs.pb);
    return *this;
}
//===========================================//
//|||||||||||||||||||||||||||||||||||||||||||//
//===========================================//
Widget& Widget::operator= (const Widget& rhs)
{
    if (this == & rhs) return *this;
    delete pb;
    pb = new BitMap(*rhs.pb);
    return *this;
}
//===========================================//
//|||||||||||||||||||||||||||||||||||||||||||//
//===========================================//
Widget& Widget::operator= (const Widget& rhs)
{
    BitMap* pOrig = pb;
    pb = new BitMap(*rhs.pb);
    delete pOrig;
    return *this;
}
//===========================================//
//|||||||||||||||||||||||||||||||||||||||||||//
//===========================================//
Widget& Widget::operator= (const Widget& rhs)
{
    Widget temp(rhs);
    swap(temp);
    return *this;
}
Widget& Widget::operator= (Widget rhs)
{
    swap(rhs);
    return *this;
}
