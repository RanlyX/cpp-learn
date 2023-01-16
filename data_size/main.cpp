#include <iostream>
using namespace std; 

void printBoolSize() {
    cout << "\nBoolean";
    cout << "\nType\t\tSize(bytes)";
    cout << "\nbool\t\t"        << sizeof(bool); 
    cout << "\ntrue\t\t"        << sizeof(true); 
    cout << "\nfalse\t\t"       << sizeof(false);
    cout << "\n";
}

void printCharSize() {
    cout << "\nCharacter";
    cout << "\nType\t\tSize(bytes)";
    cout << "\nchar\t\t"        << sizeof(char); 
    cout << "\nchar16_t\t"      << sizeof(char16_t); 
    cout << "\nchar32_t\t"      << sizeof(char32_t); 
    cout << "\nwchar_t\t\t"     << sizeof(wchar_t); 
    cout << "\n\'1\'\t\t"       << sizeof('1'); 
    cout << "\n";
}

void printIntSize() {
    cout << "\nInteger";
    cout << "\nType\t\tSize(bytes)";
    cout << "\nshort\t\t"       << sizeof(short); 
    cout << "\nint\t\t"         << sizeof(int); 
    cout << "\nlong\t\t"        << sizeof(long); 
    cout << "\nlong int\t"      << sizeof(long int); 
    cout << "\nlong long\t"     << sizeof(long long); 
    cout << "\n1\t\t"           << sizeof(1); 
    cout << "\nint8_t\t\t"      << sizeof(int8_t); 
    cout << "\nint16_t\t\t"     << sizeof(int16_t); 
    cout << "\nint32_t\t\t"     << sizeof(int32_t); 
    cout << "\nint64_t\t\t"     << sizeof(int64_t); 
    cout << "\nuint8_t\t\t"     << sizeof(uint8_t); 
    cout << "\nuint16_t\t"      << sizeof(uint16_t); 
    cout << "\nuint32_t\t"      << sizeof(uint32_t); 
    cout << "\nuint64_t\t"      << sizeof(uint64_t); 
    cout << "\n";
}

void printFloatSize() {
    cout << "\nFloat";
    cout << "\nType\t\tSize(bytes)";
    cout << "\n0.1\t\t"         << sizeof(0.1); 
    cout << "\nfloat\t\t"       << sizeof(float); 
    cout << "\ndouble\t\t"      << sizeof(double); 
    cout << "\nlong double\t"   << sizeof(long double); 
    cout << "\n";
}

int main() { 
    printBoolSize();
    printCharSize();
    printIntSize();
    printFloatSize();
    return 0; 
} 