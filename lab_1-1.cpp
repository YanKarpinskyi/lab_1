#include "pch.h"
using namespace System;
int main(array<System::String^>^ args)
{
    Console::WriteLine(L"Write a line:");
    String^ input = Console::ReadLine();
    String^ pattern = "abcd";
    String^ result = input->Replace(pattern, L"");
    Console::WriteLine(L"Result: {0}", result);
    return 0;
}