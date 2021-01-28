#pragma once

namespace TestBigNumLib {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ CodeLib
	/// </summary>
	public ref class CodeLib : public System::Windows::Forms::Form
	{
	public:
		CodeLib(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
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
	private: System::Windows::Forms::ToolStripMenuItem^ вернутьс€Ќа√лавную—траницуToolStripMenuItem;
	private: System::Windows::Forms::RichTextBox^ richTextBoxCodeLib;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->вернутьс€Ќа√лавную—траницуToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->richTextBoxCodeLib = (gcnew System::Windows::Forms::RichTextBox());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->вернутьс€Ќа√лавную—траницуToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(822, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// вернутьс€Ќа√лавную—траницуToolStripMenuItem
			// 
			this->вернутьс€Ќа√лавную—траницуToolStripMenuItem->Name = L"вернутьс€Ќа√лавную—траницуToolStripMenuItem";
			this->вернутьс€Ќа√лавную—траницуToolStripMenuItem->Size = System::Drawing::Size(245, 24);
			this->вернутьс€Ќа√лавную—траницуToolStripMenuItem->Text = L"¬ернутьс€ на главную страницу";
			this->вернутьс€Ќа√лавную—траницуToolStripMenuItem->Click += gcnew System::EventHandler(this, &CodeLib::вернутьс€Ќа√лавную—траницуToolStripMenuItem_Click);
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
	private: System::Void вернутьс€Ќа√лавную—траницуToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void CodeLib_Load(System::Object^ sender, System::EventArgs^ e);
	};
}
