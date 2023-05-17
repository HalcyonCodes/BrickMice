
#include <iostream>
#include "findPic.h"
int main()
{
   // printf("test:%p", p);
    std::cout << "Hello World!\n";
    void* p = findWindow("Notepad", "新建文本文档 (7) - 记事本");
    printf("HWND:%p", p);
}


