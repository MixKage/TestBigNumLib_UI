#pragma once
#include <string>
/* ��������� ������� ��������������� */
std::string& Convert_String_to_string(System::String^ s, std::string& os); //������������ System::string^ � std::string
System::String^ Convert_string_to_String(std::string& os, System::String^ s); //������������ std::string � System::string^
std::string& Convert_String_to_string(System::String^ s); //������������ System::string^ � std::string
System::String^ Convert_string_to_String(std::string& os); //������������ std::string � System::string^
System::String^ Convert_char_to_String(char* ch); //������������ char* � System::string^
char* Convert_String_to_char(System::String^ string); //������������ System::string^ � char*