#pragma once
/*
HELP.h содержит панель справки программы
*/
namespace coursework {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace System::IO; // —одержит типы, позвол€ющие читать и записывать файлы и потоки данных,
	// а также типы, обеспечивающие базовую поддержку файлов и каталогов.

	/// <summary>
	/// —водка дл€ HELP
	/// </summary>
	public ref class HELP : public System::Windows::Forms::Form
	{
	public:
		HELP(void)
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
		~HELP()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	protected:

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
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->SuspendLayout();
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(12, 12);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(928, 549);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			// 
			// HELP
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(952, 573);
			this->Controls->Add(this->richTextBox1);
			this->Name = L"HELP";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"—правка";
			this->Load += gcnew System::EventHandler(this, &HELP::HELP_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void HELP_Load(System::Object^ sender, System::EventArgs^ e) {
		richTextBox1->Text = File::ReadAllText("HelpRU.txt"); // чтение справки из файла
	}
	};
}
