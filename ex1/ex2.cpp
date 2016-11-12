class TextBlock {
	public:
		const char& operator[] (std::size_t position) const
        { return text[position]; }
        char& operator[] (std::size_t position)
        { return text[position]; }
    private:
        std::string text;

};

TextBlock tb("Hello");
std::out << tb[0];

const TextBlock ctb("World");
std::out << ctb[0];

void print(const TextBlock& ctb)
{
    std::out << ctb[0];
}

class CTextBlock {
    public:
        char& operator[](std::size_t position) const
        { return pText[position];}
    private:
        char* pText;
};


