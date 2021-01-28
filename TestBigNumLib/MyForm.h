#pragma once

namespace TestBigNumLib {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ выходToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ оПрограммеToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ codeLiberaryToolStripMenuItem;
	private: System::Windows::Forms::TextBox^ textBoxInput1;

	private: System::Windows::Forms::RadioButton^ radioButtonPlus;
	private: System::Windows::Forms::RadioButton^ radioButtonMinus;






	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::TextBox^ textBoxInput2;


	private: System::Windows::Forms::GroupBox^ groupBox3;

	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBoxAnswer;
	private: System::Windows::Forms::RadioButton^ radioButtonLess;
	private: System::Windows::Forms::RadioButton^ radioButtonEvenly;


	private: System::Windows::Forms::RadioButton^ radioButtonMore;




	protected:
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->codeLiberaryToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->оПрограммеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textBoxInput1 = (gcnew System::Windows::Forms::TextBox());
			this->radioButtonPlus = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonMinus = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxInput2 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButtonLess = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxAnswer = (gcnew System::Windows::Forms::TextBox());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->radioButtonMore = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonEvenly = (gcnew System::Windows::Forms::RadioButton());
			this->menuStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->codeLiberaryToolStripMenuItem,
					this->оПрограммеToolStripMenuItem, this->выходToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(622, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// codeLiberaryToolStripMenuItem
			// 
			this->codeLiberaryToolStripMenuItem->Name = L"codeLiberaryToolStripMenuItem";
			this->codeLiberaryToolStripMenuItem->Size = System::Drawing::Size(105, 24);
			this->codeLiberaryToolStripMenuItem->Text = L"Library code";
			this->codeLiberaryToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::codeLiberaryToolStripMenuItem_Click);
			// 
			// оПрограммеToolStripMenuItem
			// 
			this->оПрограммеToolStripMenuItem->Name = L"оПрограммеToolStripMenuItem";
			this->оПрограммеToolStripMenuItem->Size = System::Drawing::Size(118, 24);
			this->оПрограммеToolStripMenuItem->Text = L"О программе";
			this->оПрограммеToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::оПрограммеToolStripMenuItem_Click);
			// 
			// выходToolStripMenuItem
			// 
			this->выходToolStripMenuItem->Name = L"выходToolStripMenuItem";
			this->выходToolStripMenuItem->Size = System::Drawing::Size(67, 24);
			this->выходToolStripMenuItem->Text = L"Выход";
			this->выходToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::выходToolStripMenuItem_Click);
			// 
			// textBoxInput1
			// 
			this->textBoxInput1->Location = System::Drawing::Point(6, 21);
			this->textBoxInput1->Name = L"textBoxInput1";
			this->textBoxInput1->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->textBoxInput1->Size = System::Drawing::Size(582, 22);
			this->textBoxInput1->TabIndex = 1;
			this->textBoxInput1->Text = L"34";
			this->textBoxInput1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// radioButtonPlus
			// 
			this->radioButtonPlus->AutoSize = true;
			this->radioButtonPlus->Location = System::Drawing::Point(30, 21);
			this->radioButtonPlus->Name = L"radioButtonPlus";
			this->radioButtonPlus->Size = System::Drawing::Size(37, 21);
			this->radioButtonPlus->TabIndex = 5;
			this->radioButtonPlus->TabStop = true;
			this->radioButtonPlus->Text = L"+";
			this->radioButtonPlus->UseVisualStyleBackColor = true;
			this->radioButtonPlus->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// radioButtonMinus
			// 
			this->radioButtonMinus->AutoSize = true;
			this->radioButtonMinus->Location = System::Drawing::Point(73, 21);
			this->radioButtonMinus->Name = L"radioButtonMinus";
			this->radioButtonMinus->Size = System::Drawing::Size(34, 21);
			this->radioButtonMinus->TabIndex = 6;
			this->radioButtonMinus->TabStop = true;
			this->radioButtonMinus->Text = L"-";
			this->radioButtonMinus->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBoxInput1);
			this->groupBox1->Location = System::Drawing::Point(12, 31);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(598, 54);
			this->groupBox1->TabIndex = 8;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Ввод первого числа";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->textBoxInput2);
			this->groupBox2->Location = System::Drawing::Point(12, 91);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(598, 54);
			this->groupBox2->TabIndex = 9;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Ввод второго числа";
			// 
			// textBoxInput2
			// 
			this->textBoxInput2->Location = System::Drawing::Point(6, 21);
			this->textBoxInput2->Name = L"textBoxInput2";
			this->textBoxInput2->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->textBoxInput2->Size = System::Drawing::Size(582, 22);
			this->textBoxInput2->TabIndex = 1;
			this->textBoxInput2->Text = L"-43";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->radioButtonEvenly);
			this->groupBox3->Controls->Add(this->radioButtonMore);
			this->groupBox3->Controls->Add(this->radioButtonLess);
			this->groupBox3->Controls->Add(this->radioButtonMinus);
			this->groupBox3->Controls->Add(this->radioButtonPlus);
			this->groupBox3->Location = System::Drawing::Point(12, 151);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(268, 50);
			this->groupBox3->TabIndex = 10;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Выбор операции";
			// 
			// radioButtonLess
			// 
			this->radioButtonLess->AutoSize = true;
			this->radioButtonLess->Location = System::Drawing::Point(113, 21);
			this->radioButtonLess->Name = L"radioButtonLess";
			this->radioButtonLess->Size = System::Drawing::Size(37, 21);
			this->radioButtonLess->TabIndex = 7;
			this->radioButtonLess->TabStop = true;
			this->radioButtonLess->Text = L"<";
			this->radioButtonLess->UseVisualStyleBackColor = true;
			this->radioButtonLess->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton3_CheckedChanged);
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->textBoxAnswer);
			this->groupBox4->Location = System::Drawing::Point(12, 288);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(598, 53);
			this->groupBox4->TabIndex = 12;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Вывод";
			// 
			// textBoxAnswer
			// 
			this->textBoxAnswer->Location = System::Drawing::Point(6, 21);
			this->textBoxAnswer->Name = L"textBoxAnswer";
			this->textBoxAnswer->ReadOnly = true;
			this->textBoxAnswer->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->textBoxAnswer->Size = System::Drawing::Size(582, 22);
			this->textBoxAnswer->TabIndex = 2;
			this->textBoxAnswer->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->button1);
			this->groupBox5->Location = System::Drawing::Point(481, 151);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(129, 50);
			this->groupBox5->TabIndex = 13;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Подсчёт";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(6, 21);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(117, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Вычисление";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// radioButtonMore
			// 
			this->radioButtonMore->AutoSize = true;
			this->radioButtonMore->Location = System::Drawing::Point(156, 21);
			this->radioButtonMore->Name = L"radioButtonMore";
			this->radioButtonMore->Size = System::Drawing::Size(37, 21);
			this->radioButtonMore->TabIndex = 8;
			this->radioButtonMore->TabStop = true;
			this->radioButtonMore->Text = L">";
			this->radioButtonMore->UseVisualStyleBackColor = true;
			// 
			// radioButtonEvenly
			// 
			this->radioButtonEvenly->AutoSize = true;
			this->radioButtonEvenly->Location = System::Drawing::Point(199, 21);
			this->radioButtonEvenly->Name = L"radioButtonEvenly";
			this->radioButtonEvenly->Size = System::Drawing::Size(45, 21);
			this->radioButtonEvenly->TabIndex = 9;
			this->radioButtonEvenly->TabStop = true;
			this->radioButtonEvenly->Text = L"==";
			this->radioButtonEvenly->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(622, 353);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(640, 400);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(640, 400);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"TestMyBigNumLib";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void codeLiberaryToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {};
private: System::Void выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void оПрограммеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e){}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
