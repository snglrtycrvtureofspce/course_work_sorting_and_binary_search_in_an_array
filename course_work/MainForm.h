#pragma once
#include "User.h"
#include "functions.h"
#include <iostream>
#include <ctime>
namespace coursework {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace System::Globalization; // UICulture
	using namespace System::Threading; // UICulture

	/// <summary>
	/// Ñâîäêà äëÿ MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(User^ user)
		{
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòğóêòîğà
			//
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ ìåíşToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ëîêàëèçàöèÿToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ àíãëèéñêèéToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ ğóññêèéToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ ğóññêèéToolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^ îôîğìëåíèåToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âûáğàòüÑàìîñòîÿòåëüíîToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñòàíäàğòíûéToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ğàíäîìíûéÖâåòToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ áåëûéToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ÷¸ğíûéToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ êğàñíûéToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âûõîäToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ îÏğîãğàììåToolStripMenuItem;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox4;

	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ìåíşToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ëîêàëèçàöèÿToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->àíãëèéñêèéToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ğóññêèéToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ğóññêèéToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->îôîğìëåíèåToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âûáğàòüÑàìîñòîÿòåëüíîToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñòàíäàğòíûéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ğàíäîìíûéÖâåòToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->áåëûéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->÷¸ğíûéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->êğàñíûéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âûõîäToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->îÏğîãğàììåToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ìåíşToolStripMenuItem,
					this->îÏğîãğàììåToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(8, 3, 0, 3);
			this->menuStrip1->Size = System::Drawing::Size(784, 25);
			this->menuStrip1->TabIndex = 23;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ìåíşToolStripMenuItem
			// 
			this->ìåíşToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->ëîêàëèçàöèÿToolStripMenuItem,
					this->îôîğìëåíèåToolStripMenuItem, this->âûõîäToolStripMenuItem
			});
			this->ìåíşToolStripMenuItem->Name = L"ìåíşToolStripMenuItem";
			this->ìåíşToolStripMenuItem->Size = System::Drawing::Size(53, 19);
			this->ìåíşToolStripMenuItem->Text = L"Ìåíş";
			// 
			// ëîêàëèçàöèÿToolStripMenuItem
			// 
			this->ëîêàëèçàöèÿToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->àíãëèéñêèéToolStripMenuItem1,
					this->ğóññêèéToolStripMenuItem2, this->ğóññêèéToolStripMenuItem3
			});
			this->ëîêàëèçàöèÿToolStripMenuItem->Name = L"ëîêàëèçàöèÿToolStripMenuItem";
			this->ëîêàëèçàöèÿToolStripMenuItem->Size = System::Drawing::Size(148, 22);
			this->ëîêàëèçàöèÿToolStripMenuItem->Text = L"Ëîêàëèçàöèÿ";
			// 
			// àíãëèéñêèéToolStripMenuItem1
			// 
			this->àíãëèéñêèéToolStripMenuItem1->Name = L"àíãëèéñêèéToolStripMenuItem1";
			this->àíãëèéñêèéToolStripMenuItem1->Size = System::Drawing::Size(146, 22);
			this->àíãëèéñêèéToolStripMenuItem1->Text = L"Àíãëèéñêèé";
			this->àíãëèéñêèéToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MainForm::àíãëèéñêèéToolStripMenuItem1_Click);
			// 
			// ğóññêèéToolStripMenuItem2
			// 
			this->ğóññêèéToolStripMenuItem2->Name = L"ğóññêèéToolStripMenuItem2";
			this->ğóññêèéToolStripMenuItem2->Size = System::Drawing::Size(146, 22);
			this->ğóññêèéToolStripMenuItem2->Text = L"Ğóññêèé";
			this->ğóññêèéToolStripMenuItem2->Click += gcnew System::EventHandler(this, &MainForm::ğóññêèéToolStripMenuItem2_Click);
			// 
			// ğóññêèéToolStripMenuItem3
			// 
			this->ğóññêèéToolStripMenuItem3->Name = L"ğóññêèéToolStripMenuItem3";
			this->ğóññêèéToolStripMenuItem3->Size = System::Drawing::Size(146, 22);
			this->ğóññêèéToolStripMenuItem3->Text = L"Áåëîğóññêèé";
			this->ğóññêèéToolStripMenuItem3->Click += gcnew System::EventHandler(this, &MainForm::ğóññêèéToolStripMenuItem3_Click);
			// 
			// îôîğìëåíèåToolStripMenuItem
			// 
			this->îôîğìëåíèåToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->âûáğàòüÑàìîñòîÿòåëüíîToolStripMenuItem,
					this->ñòàíäàğòíûéToolStripMenuItem, this->ğàíäîìíûéÖâåòToolStripMenuItem, this->áåëûéToolStripMenuItem, this->÷¸ğíûéToolStripMenuItem,
					this->êğàñíûéToolStripMenuItem
			});
			this->îôîğìëåíèåToolStripMenuItem->Name = L"îôîğìëåíèåToolStripMenuItem";
			this->îôîğìëåíèåToolStripMenuItem->Size = System::Drawing::Size(148, 22);
			this->îôîğìëåíèåToolStripMenuItem->Text = L"Îôîğìëåíèå";
			// 
			// âûáğàòüÑàìîñòîÿòåëüíîToolStripMenuItem
			// 
			this->âûáğàòüÑàìîñòîÿòåëüíîToolStripMenuItem->Name = L"âûáğàòüÑàìîñòîÿòåëüíîToolStripMenuItem";
			this->âûáğàòüÑàìîñòîÿòåëüíîToolStripMenuItem->Size = System::Drawing::Size(275, 22);
			this->âûáğàòüÑàìîñòîÿòåëüíîToolStripMenuItem->Text = L"Âûáğàòü ñàìîñòîÿòåëüíî (êàğòèíêà)";
			this->âûáğàòüÑàìîñòîÿòåëüíîToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::âûáğàòüÑàìîñòîÿòåëüíîToolStripMenuItem_Click);
			// 
			// ñòàíäàğòíûéToolStripMenuItem
			// 
			this->ñòàíäàğòíûéToolStripMenuItem->Name = L"ñòàíäàğòíûéToolStripMenuItem";
			this->ñòàíäàğòíûéToolStripMenuItem->Size = System::Drawing::Size(275, 22);
			this->ñòàíäàğòíûéToolStripMenuItem->Text = L"Ñòàíäàğòíûé";
			this->ñòàíäàğòíûéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::ñòàíäàğòíûéToolStripMenuItem_Click);
			// 
			// ğàíäîìíûéÖâåòToolStripMenuItem
			// 
			this->ğàíäîìíûéÖâåòToolStripMenuItem->Name = L"ğàíäîìíûéÖâåòToolStripMenuItem";
			this->ğàíäîìíûéÖâåòToolStripMenuItem->Size = System::Drawing::Size(275, 22);
			this->ğàíäîìíûéÖâåòToolStripMenuItem->Text = L"Ğàíäîìíûé öâåò";
			this->ğàíäîìíûéÖâåòToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::ğàíäîìíûéÖâåòToolStripMenuItem_Click);
			// 
			// áåëûéToolStripMenuItem
			// 
			this->áåëûéToolStripMenuItem->Name = L"áåëûéToolStripMenuItem";
			this->áåëûéToolStripMenuItem->Size = System::Drawing::Size(275, 22);
			this->áåëûéToolStripMenuItem->Text = L"Áåëûé";
			this->áåëûéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::áåëûéToolStripMenuItem_Click);
			// 
			// ÷¸ğíûéToolStripMenuItem
			// 
			this->÷¸ğíûéToolStripMenuItem->Name = L"÷¸ğíûéToolStripMenuItem";
			this->÷¸ğíûéToolStripMenuItem->Size = System::Drawing::Size(275, 22);
			this->÷¸ğíûéToolStripMenuItem->Text = L"×¸ğíûé";
			this->÷¸ğíûéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::÷¸ğíûéToolStripMenuItem_Click);
			// 
			// êğàñíûéToolStripMenuItem
			// 
			this->êğàñíûéToolStripMenuItem->Name = L"êğàñíûéToolStripMenuItem";
			this->êğàñíûéToolStripMenuItem->Size = System::Drawing::Size(275, 22);
			this->êğàñíûéToolStripMenuItem->Text = L"Êğàñíûé";
			this->êğàñíûéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::êğàñíûéToolStripMenuItem_Click);
			// 
			// âûõîäToolStripMenuItem
			// 
			this->âûõîäToolStripMenuItem->Name = L"âûõîäToolStripMenuItem";
			this->âûõîäToolStripMenuItem->Size = System::Drawing::Size(148, 22);
			this->âûõîäToolStripMenuItem->Text = L"Âûõîä";
			this->âûõîäToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::âûõîäToolStripMenuItem_Click);
			// 
			// îÏğîãğàììåToolStripMenuItem
			// 
			this->îÏğîãğàììåToolStripMenuItem->Name = L"îÏğîãğàììåToolStripMenuItem";
			this->îÏğîãğàììåToolStripMenuItem->Size = System::Drawing::Size(94, 19);
			this->îÏğîãğàììåToolStripMenuItem->Text = L"Î ïğîãğàììå";
			this->îÏğîãğàììåToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::îÏğîãğàììåToolStripMenuItem_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Montserrat", 18));
			this->label1->Location = System::Drawing::Point(12, 49);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(335, 33);
			this->label1->TabIndex = 24;
			this->label1->Text = L"Èíèöèàëèçàöèÿ ìàññèâà";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Montserrat", 12));
			this->label2->Location = System::Drawing::Point(14, 106);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(150, 22);
			this->label2->TabIndex = 25;
			this->label2->Text = L"Ğàçìåğ ìàññèâà:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(168, 104);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(26, 24);
			this->textBox1->TabIndex = 26;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Montserrat", 12));
			this->label3->Location = System::Drawing::Point(97, 134);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(129, 22);
			this->label3->TabIndex = 27;
			this->label3->Text = L"Ââîä ìàññèâà:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(232, 134);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(145, 211);
			this->textBox2->TabIndex = 28;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Montserrat", 9));
			this->button1->Location = System::Drawing::Point(101, 159);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(125, 91);
			this->button1->TabIndex = 29;
			this->button1->Text = L"Ğàíäîì ìàññèâà";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Montserrat", 9));
			this->button2->Location = System::Drawing::Point(232, 104);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(145, 24);
			this->button2->TabIndex = 30;
			this->button2->Text = L"Ğàíäîì ğàçìåğ";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Montserrat", 18));
			this->label4->Location = System::Drawing::Point(405, 49);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(244, 33);
			this->label4->TabIndex = 31;
			this->label4->Text = L"Ñîğòèğîâêà Õîàğà";
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Montserrat", 9));
			this->button3->Location = System::Drawing::Point(103, 256);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(123, 89);
			this->button3->TabIndex = 32;
			this->button3->Tag = L"";
			this->button3->Text = L"Î÷èñòèòü";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MainForm::button3_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(411, 134);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(145, 211);
			this->textBox3->TabIndex = 33;
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Montserrat", 9));
			this->button4->Location = System::Drawing::Point(411, 101);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(145, 24);
			this->button4->TabIndex = 34;
			this->button4->Text = L"Ñîğòèğîâàòü";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MainForm::button4_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(200, 104);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(26, 24);
			this->textBox4->TabIndex = 35;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(784, 561);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MainForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		// Localization
	private: System::Void àíãëèéñêèéToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			this->Controls->Clear();
			CultureInfo::CurrentUICulture = gcnew CultureInfo("en-US");
			CultureInfo::CurrentCulture = gcnew CultureInfo("en-US");
			InitializeComponent();
		}
		catch (System::Exception^ exception)
		{
			MessageBox::Show(exception->Message);
		}
	}
private: System::Void ğóññêèéToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		this->Controls->Clear();
		CultureInfo::CurrentUICulture = gcnew CultureInfo("");
		CultureInfo::CurrentCulture = gcnew CultureInfo("");
		InitializeComponent();
	}
	catch (System::Exception^ exception)
	{
		MessageBox::Show(exception->Message);
	}
}
private: System::Void ğóññêèéToolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		this->Controls->Clear();
		CultureInfo::CurrentUICulture = gcnew CultureInfo("be");
		CultureInfo::CurrentCulture = gcnew CultureInfo("be");
		InitializeComponent();
	}
	catch (System::Exception^ exception)
	{
		MessageBox::Show(exception->Message);
	}
}
	   // Design

private: System::Void âûáğàòüÑàìîñòîÿòåëüíîToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ openDlg = gcnew OpenFileDialog();
	openDlg->Filter = "Image Files(*.BMP;*.JPG;*.GIF;*.PNG)|*.BMP;*.JPG;*.GIF;*.PNG|All files (*.*)|*.*";
	if (System::Windows::Forms::DialogResult::OK == openDlg->ShowDialog())
	{
		this->BackgroundImage = Image::FromFile(openDlg->FileName);
	}
}
private: System::Void ñòàíäàğòíûéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->BackColor = SystemColors::ButtonFace;
}
private: System::Void ğàíäîìíûéÖâåòToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		Random rn;
		const int r = rn.Next(0, 255);
		const int g = rn.Next(0, 255);
		const int b = rn.Next(0, 255);
		this->BackColor = Color::FromArgb(r, g, b);
	}
	catch (System::Exception^ exception)
	{
		MessageBox::Show(exception->Message);
	}
}
private: System::Void áåëûéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->BackColor = Color::White;
}
private: System::Void ÷¸ğíûéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->BackColor = Color::Black;
}
private: System::Void êğàñíûéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->BackColor = Color::Red;
}
private: System::Void âûõîäToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void îÏğîãğàììåToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("In developing", "Error!", MessageBoxButtons::OK);
}
	private:
		int rows = 0, cols = 0; // ğàçìåğ äèíàìè÷åñêè íåóïğàâëÿåìîãî Ñáîğùèêîì ìóñîğà ìàññèâà
		int** arr = nullptr; // ïîëå-óêàçàòåëü íà öåëî÷èñëåííûé íåóïğàâëÿåìûé äâóìåğíûé ìàññèâ
		int* arr2 = nullptr;
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) // random arr and conclusion
{
	try
	{
		this->textBox2->Clear();
		if (arr != nullptr)
		{
			delete[] arr;
			arr = nullptr;
			rows = 0;
			cols = 0;
		}
		this->rows = Convert::ToInt32(this->textBox1->Text);
		this->cols = Convert::ToInt32(this->textBox4->Text);
		int** arr = new int* [cols];
		if (!arr)
		{
			MessageBox::Show("Íå óäà¸òñÿ ñîçäàòü ìàññèâ íà " + "[" + rows.ToString() + "]" + "[" + cols.ToString() + "]" + " ıëåìåíòîâ.");
			return;
		}
		for (int i = 0; i < rows; i++)
		{
			arr[i] = new int[cols];
			if (!arr[i])
			{
				MessageBox::Show("Íå óäà¸òñÿ ñîçäàòü ìàññèâ äëÿ ñòğîêè " + i);
				return;
			}
		}
		Random^ rn = gcnew Random();
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				arr[i][j] = rn->Next(0, 100);
			}
		}
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) {
				this->textBox2->Text += arr[i][j].ToString() + "\t";
			}
			this->textBox2->Text += "\n";
		}
		arr2 = new int[rows * cols];
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				arr2[cols * i + j] = arr[i][j];
			}
		}
		/*for (int i = 0; i < rows; i++)
		{
			delete[] arr[i];
			arr[i] = nullptr;
		}
		delete[] arr;
		arr = nullptr;*/
	}
	catch (System::FormatException^ exception)
	{
		MessageBox::Show(exception->Message);
	}
	catch (System::Exception^ exception)
	{
		MessageBox::Show(exception->Message);
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) // random arr size
{
	try
	{
		std::srand(std::time(nullptr));
		Random^ rn = gcnew Random();
		int a = 1 + (rn->Next()) % (20 - 1 + 1);
		int b = 1 + rand() % (20 - 1 + 1);
		textBox1->Text = a.ToString();
		textBox4->Text = b.ToString();
	}
	catch (System::Exception^ exception)
	{
		MessageBox::Show(exception->Message);
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) // clear
{
	try
	{
		this->textBox1->Clear();
		this->textBox2->Clear();
		this->textBox3->Clear();
		this->textBox4->Clear();
	}
	catch (System::Exception^ exception)
	{
		MessageBox::Show(exception->Message);
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e)
{
	try
	{
		this->textBox3->Clear();
		functions first;
		first.quickSort(this->arr2, 0, (rows * cols) - 1);
		for (int i = 0; i < (rows * cols); i++)
		{
			this->textBox3->Text += arr2[i].ToString() + " ";
		}
	}
	catch (System::FormatException^ exception)
	{
		MessageBox::Show(exception->Message);
	}
	catch (System::Exception^ exception)
	{
		MessageBox::Show(exception->Message);
	}
}
};
}
