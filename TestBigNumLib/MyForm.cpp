#include "MyForm.h"
#include "CodeLib.h"
#include "bignum.h"
#include "Func.h"
#include <iostream>
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	TestBigNumLib::MyForm form;
	Application::Run(% form);
}

System::Void TestBigNumLib::MyForm::codeLiberaryToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	CodeLib^ form = gcnew CodeLib();
	this->Hide();
	form->Show();
}

System::Void TestBigNumLib::MyForm::выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
}

System::Void TestBigNumLib::MyForm::оПрограммеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("Это программа для тестирования собственной библиотеки больших чисел на С++.\nVersion app: 0.1\nVersion BigNumLib: 0.1.3", "Описание");
}

System::Void TestBigNumLib::MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	std::string snum1;
	std::string snum2;
	bool _operator_plus = radioButtonPlus->Checked;
	bool _operator_minus = radioButtonMinus->Checked;
	bool _operator_less = radioButtonLess->Checked;
	bool _operator_more = radioButtonMore->Checked;
	bool _operator_evenly = radioButtonEvenly->Checked;
	Convert_String_to_string(textBoxInput1->Text->ToString(), snum1);
	Convert_String_to_string(textBoxInput2->Text->ToString(), snum2);
	bignum num1 = snum1;
	bignum num2 = snum2;
	bignum num3;
	bool Answer = false;
	try {
		if (_operator_plus)
			num3 = num1 + num2;
		else if (_operator_minus)
			num3 = num1 - num2;
		else if (_operator_less) 
		{
			if (num1 < num3)
				Answer = true;
		}
		else if (_operator_more) 
		{
			if (num1 > num2)
				Answer = true;
		}
		else if (_operator_evenly) 
		{
			if (num1 == num2)
				Answer = true;
		}
		else
			MessageBox::Show("Выберите операцию!", "Внимание!");
	}
	catch (const std::exception& e)
	{
		std::string err = e.what();
		System::String^ error_message = Convert_string_to_String(err, error_message);

		MessageBox::Show(error_message, "Ошибка!");
	}
	textBoxAnswer->Clear();
	System::String^ answer;
	if (!(_operator_plus) && !(_operator_minus))
	{
		std::string temp;
		if (Answer)
			temp = "True";
		else
			temp = "False";
		answer = Convert_string_to_String(temp, answer);
	}
	else
	{
		answer = Convert_string_to_String(num3.getValue(), answer);
	}
	textBoxAnswer->Paste(answer);
	return System::Void();
}
