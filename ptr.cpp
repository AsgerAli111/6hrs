#include <iostream>

int main()
{

    int number = 10;

    int *ptr = nullptr;
    ptr = &number;

    int **ptr2 = &ptr;

    std::cout << "number = " << number << std::endl;
    std::cout << "&number = " << &number << std::endl;
    std::cout << "*ptr = " << *ptr << std::endl;
    std::cout << "&ptr = " << &ptr << std::endl;
    std::cout << "&ptr2 = " << &ptr2 << std::endl;
    std::cout << "**ptr2 = " << **ptr2 << std::endl;
    std::cout << "ptr2 = " << ptr2 << std::endl;
    std::cout << "*ptr3 = " << *ptr2 << std::endl;
    std::cout << "ptr = " << ptr << std::endl;
    std::cout << "ptr++ = " << ptr++ << std::endl;
    std::cout << "ptr+2 = " << ptr + 2 << std::endl;
    std::cout << "ptr+3 = " << ptr + 3 << std::endl;
    std::cout << "ptr+4 = " << ptr + 4 << std::endl;
    std::cout << "ptr+5 = " << ptr + 5 << std::endl;
    std::cout << "ptr+8 = " << ptr + 8 << std::endl;

    char *ptrchar = nullptr;
    char character = 'a';
    ptrchar = &character;
    std::cout << *ptrchar << std::endl;

    std::string arr[]{"asger ali,asger shaikh", "asger2shaikh"};

    std::string *ptrstr = &arr[0];

    std::cout << *(++ptrstr); // accessing the second string

    return 0;
}