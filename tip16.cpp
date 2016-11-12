// 成对使用new和delete时要采取相同形式
// Use the same form in corresponding uses of new and delete.

std::string* stringPtr1 = new std::string;
std::string* stringPtr2 = new std::string[100];

delete stringPtr1;
delete [] stringPtr2;

