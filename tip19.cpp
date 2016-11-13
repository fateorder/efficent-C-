// 设计class犹如设计type
// Treat class design as type design.



// 宁以pass-by-reference-to-const替换pass-by-value
// Prefer pass-by-reference-to-const to pass-by-value


// 必须返回对象时，别妄想返回其reference
// Don't try to return a reference when you must return an object.

class Rational
{
public:
    Rational(int numberator = 0, int denominator = 1);
private:
    int n, d;
    friend const Rational operator* (const Rational& lhs, const Rational& rhs);
}

inline const Rational operator* (const Rational& lhs, const Rational& rhs)
{
    return Rational(lhs.n * rhs.n, lhs.h * rhs.d);
}

