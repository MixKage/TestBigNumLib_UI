#pragma once

namespace TestBigNumLib {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� CodeLib
	/// </summary>
	public ref class CodeLib : public System::Windows::Forms::Form
	{
	public:
		CodeLib(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~CodeLib()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ ��������������������������ToolStripMenuItem;
	private: System::Windows::Forms::RichTextBox^ richTextBoxCodeLib;

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->��������������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->richTextBoxCodeLib = (gcnew System::Windows::Forms::RichTextBox());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->��������������������������ToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(822, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ��������������������������ToolStripMenuItem
			// 
			this->��������������������������ToolStripMenuItem->Name = L"��������������������������ToolStripMenuItem";
			this->��������������������������ToolStripMenuItem->Size = System::Drawing::Size(245, 24);
			this->��������������������������ToolStripMenuItem->Text = L"��������� �� ������� ��������";
			this->��������������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &CodeLib::��������������������������ToolStripMenuItem_Click);
			// 
			// richTextBoxCodeLib
			// 
			this->richTextBoxCodeLib->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->richTextBoxCodeLib->Font = (gcnew System::Drawing::Font(L"Consolas", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richTextBoxCodeLib->Location = System::Drawing::Point(0, 31);
			this->richTextBoxCodeLib->Name = L"richTextBoxCodeLib";
			this->richTextBoxCodeLib->ReadOnly = true;
			this->richTextBoxCodeLib->Size = System::Drawing::Size(822, 510);
			this->richTextBoxCodeLib->TabIndex = 1;
			this->richTextBoxCodeLib->Text = L"";
			// 
			// CodeLib
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(822, 553);
			this->Controls->Add(this->richTextBoxCodeLib);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(840, 600);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(840, 600);
			this->Name = L"CodeLib";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"CodeLib";
			this->Load += gcnew System::EventHandler(this, &CodeLib::CodeLib_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ��������������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void CodeLib_Load(System::Object^ sender, System::EventArgs^ e);
	};
}
