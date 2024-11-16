#include "pch.h"
using namespace System;
int main(array<System::String^>^ args)
{
    Console::WriteLine(L"Write a line of three
    phrases three phrases separated by a period:");
    String^ input = Console::ReadLine();
    array<String^>^ phrases = input->Split(L'.');
    for each (String ^ phrase in phrases)
    {
        String^ splittedPhrase = phrase->Trim();
        if (splittedPhrase->Length > 0)
        {
            Console::WriteLine(splittedPhrase);
        }
    }
    return 0;
}