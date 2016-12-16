// This program is copied from the book Thinking in C++. 
// ２０１６年１２月１６日

    //: C03:Specify.cpp
    // Demonstrates the use of specifiers
    #include <iostream>
    #include <string>
    using namespace std;

    int main() {
      char c;
      unsigned char cu;
      int i;
      unsigned int iu;
      short int is;
      short iis; // Same as short int
      unsigned short int isu;
      unsigned short iisu;
      long int il;
      long iil;  // Same as long int
      unsigned long int ilu;
      unsigned long iilu;
      float f;
      double d;
      long double ld;
      string allah;
      string veneraEN = "venera";
      string veneraRU = "венера";
      string xiaoshuo = "世界的最好小说家住在印度里。他叫毛。谁是毛？他是中国还是印度的小说家。";
      string namaste = "ਰੋਮਨ, ਚੀਨੀ ਅਤੇ ਅਰਬੀ ਤੋਂ ਬਾਅਦ ਕਿਰਿਲਿਕ ਲਿਪੀ ਦੁਨਿਆ ਦੀ ਸਬ ਤੋਂ ਜ਼ਿਆਦਾ ਵਰਤੀ ਜਾਣ ਵਾਲੀ ਲਿਪੀ ਹੈ। ਇਸ ਨੂੰ ਮੁੱਖ ਤੌਰ ਉੱਤੇ ਰੂਸੀ ਭਾਸ਼ਾ ਲਿੱਖਣ ਲਈ ਇਸਤੇਮਾਲ ਕੀਤਾ ਜਾਂਦਾ ਹੈ। ਰੂਸੀ ਤੋਂ ਇਲਾਵਾ ਯੂਕਰੇਨੀ, ਬੇਲਾਰੂਸੀ, ਸਰਬੀ, ਕਜ਼ਾਖ, ਮੰਗੋਲੀ, ਤਾਜਿਕ, ਉਜ਼ਬੇਕ ਅਤੇ ਹੋਰਨਾਂ ਕਈ ਭਾਸ਼ਾਵਾਂ ਨੂੰ ਕਿਰਿਲਿਕ ਲਿਪੀ ਰਾਹੀ ਲਿਖਿਆ ਜਾਂਦਾ ਹੈ। ਜੇ ਸਾਨੂੰ ਕਿਰਿਲਿਕ ਲਿਪੀ ਆਉਂਦੀ ਹੋਵੇ ਤਾਂ ਇਨ੍ਹਾਂ ਭਾਸ਼ਾਵਾਂ ਵਿਚ ਲਿਖੀਆਂ ਕਿਤਾਬਾਂ, ਅਖ਼ਬਾਰਾਂ ਅਤੇ ਵੈੱਬਸਾਈਟਾਂ ਉੱਤੇ ਲਿੱਖੇ ਕੁਝ ਅਲਫ਼ਾਜ਼ ਤਾਂ ਸਮਝ ਆਉਣਗੇ ਅਤੇ ਸਾਡੇ ਉੱਤੇ ਕਾਲਾ ਅੱਖਰ ਭੈਂਸ ਬਰਾਬਰ ਵਾਲੀ ਕਹਾਵਤ ਲਾਗੂ ਨਹੀ ਹੋਵੇਗੀ। ਇਸ ਦਾ ਇੱਕ ਹੋਰ ਫ਼ਾਇਦਾ ਹੋਵੇਗਾ ਕਿ ਅਸੀ ਆਪਣੇ ਪੰਸਦੀਦਾ ਰੂਸੀ ਲੇਖਕਾ ਜਿਵੇਂ ਕਿ ਟਾਲਸਟਾਏ, ਦਾਨਤੋਵੇਸਕੀ, ਚੇਖੋਵ ਵਗੈਰਾ ਦੇ ਨਾਂ ਉਨ੍ਹਾਂ ਦੀ ਜ਼ੁਬਾਨ ਵਿਚ ਹੀ ਲਿਖ ਸਕਾਗੇਂ।";
      string salam = "سلام";
      cout 
        << "\n char= " << sizeof(c)
        << "\n unsigned char = " << sizeof(cu)
        << "\n int = " << sizeof(i)
        << "\n unsigned int = " << sizeof(iu)
        << "\n short = " << sizeof(is)
        << "\n unsigned short = " << sizeof(isu)
        << "\n long = " << sizeof(il) 
        << "\n unsigned long = " << sizeof(ilu)
        << "\n float = " << sizeof(f)
        << "\n double = " << sizeof(d)
        << "\n long double = " << sizeof(ld) 
        << "\n string = " << sizeof(allah)
        << "\n venera (EN) = " << sizeof (veneraEN)
        << "\n venera (RU) = " << sizeof (veneraRU)
        << "\n xiaoshuo = " << sizeof (xiaoshuo)
        << "\n namaste = " << sizeof (namaste)
        << "\n salam = " << sizeof (namaste)
        << endl;
    } ///:~
