
// 声明式
extern int x;                       // 对象(object)声明式
std::size_t numDigits(int number);  // 函数(function)声明式
class Widget;                       // 类声(class)明式
template <class T>                  // 模版(template)声明式
class GraphNode;                    // typename的使用见条款42

// 定义式
int x;                              // 对象的定义式
std::size_t numDigits(int number)   // 函数的定义式
{
    std::size_t digitsSoFar = 1;
    while ((number /= 10) != 0) 
        ++digitsSoFar;
    return digitsSoFar;
}
class Weight                        // class的定义式 
{
public:
    Widget();
    ~Widget();
};
template <typename T>               // template的定义式
class GraphNode
{
public:
    GraphNode();
    ~GraphNode();
}

// copy构造函数
class Widget
{
public:
    Widget();                               // defalut 构造函数
    Widget(const Widget& ths);              // copy构造函数
    Widget& operator= (const Widget& rhs);  // copy assignment操作符
};
Widget w1;                                  // defalut
Widget w2(w1);                              // copy
w1 = w2;                                    // assignment
Widget w3 = w2;                             // copy

// Naming Conventions
// left-hand side ---- right-hand side

