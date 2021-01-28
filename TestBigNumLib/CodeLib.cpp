#include "CodeLib.h"
#include "MyForm.h"
System::Void TestBigNumLib::CodeLib::âåðíóòüñÿÍàÃëàâíóþÑòðàíèöóToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    MyForm^ form = gcnew MyForm();
	this->Hide();
	form->Show();
}

System::Void TestBigNumLib::CodeLib::CodeLib_Load(System::Object^ sender, System::EventArgs^ e)
{
	richTextBoxCodeLib->LoadFile("Code.rtf");
}
