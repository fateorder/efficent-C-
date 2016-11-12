// 尽量以const, enum, inline替换 #define
// Prefer const, enum, and inline to #define.
//

const double AspextRatio = 1.653;
// 在头文件中:将指针定义为常量char*-base字符串
const char* const authorName = "Scott Meyers";
// string 通常比char*-base合宜
const std::string authorName("Scott Meyers");

// class专属常量
class GamePlayer
{
private:
    static const int NumTurns = 5;
    int socres[NumTurns];
}

class CostEstimate
{
private:
    static const double FudgeFactor;            // static class常量声明
                                                // 位于头文件内
}

const double CostEstimate::FudgeFactor = 1.35   // static class常量定义
                                                // 位于实现文件内
class GamePlayer
{
private:
    enum { NumTurns = 5 };                      //"the enum hack"---令
    int socres[NumTurns];                       // 成为5的一个记号名称
}


// 对于单纯常量，最好以const对象或enums替换#defines.
// 对于形似函数的宏(macros),最好改用inline函数替换#defines.
