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
	/// ������ ��� MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(User^ user)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ����������ToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^ ����������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ���������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ����������ToolStripMenuItem;
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
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::TextBox^ textBox5;

	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Label^ label7;

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
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->����ToolStripMenuItem,
					this->����������ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(8, 3, 0, 3);
			this->menuStrip1->Size = System::Drawing::Size(1311, 25);
			this->menuStrip1->TabIndex = 23;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->�����������ToolStripMenuItem,
					this->����������ToolStripMenuItem, this->�����ToolStripMenuItem
			});
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(53, 19);
			this->����ToolStripMenuItem->Text = L"����";
			// 
			// �����������ToolStripMenuItem
			// 
			this->�����������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->����������ToolStripMenuItem1,
					this->�������ToolStripMenuItem2, this->�������ToolStripMenuItem3
			});
			this->�����������ToolStripMenuItem->Name = L"�����������ToolStripMenuItem";
			this->�����������ToolStripMenuItem->Size = System::Drawing::Size(148, 22);
			this->�����������ToolStripMenuItem->Text = L"�����������";
			// 
			// ����������ToolStripMenuItem1
			// 
			this->����������ToolStripMenuItem1->Name = L"����������ToolStripMenuItem1";
			this->����������ToolStripMenuItem1->Size = System::Drawing::Size(146, 22);
			this->����������ToolStripMenuItem1->Text = L"����������";
			this->����������ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MainForm::����������ToolStripMenuItem1_Click);
			// 
			// �������ToolStripMenuItem2
			// 
			this->�������ToolStripMenuItem2->Name = L"�������ToolStripMenuItem2";
			this->�������ToolStripMenuItem2->Size = System::Drawing::Size(146, 22);
			this->�������ToolStripMenuItem2->Text = L"�������";
			this->�������ToolStripMenuItem2->Click += gcnew System::EventHandler(this, &MainForm::�������ToolStripMenuItem2_Click);
			// 
			// �������ToolStripMenuItem3
			// 
			this->�������ToolStripMenuItem3->Name = L"�������ToolStripMenuItem3";
			this->�������ToolStripMenuItem3->Size = System::Drawing::Size(146, 22);
			this->�������ToolStripMenuItem3->Text = L"�����������";
			this->�������ToolStripMenuItem3->Click += gcnew System::EventHandler(this, &MainForm::�������ToolStripMenuItem3_Click);
			// 
			// ����������ToolStripMenuItem
			// 
			this->����������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->���������������������ToolStripMenuItem,
					this->�����������ToolStripMenuItem, this->�������������ToolStripMenuItem, this->�����ToolStripMenuItem, this->������ToolStripMenuItem,
					this->�������ToolStripMenuItem
			});
			this->����������ToolStripMenuItem->Name = L"����������ToolStripMenuItem";
			this->����������ToolStripMenuItem->Size = System::Drawing::Size(148, 22);
			this->����������ToolStripMenuItem->Text = L"����������";
			// 
			// ���������������������ToolStripMenuItem
			// 
			this->���������������������ToolStripMenuItem->Name = L"���������������������ToolStripMenuItem";
			this->���������������������ToolStripMenuItem->Size = System::Drawing::Size(275, 22);
			this->���������������������ToolStripMenuItem->Text = L"������� �������������� (��������)";
			this->���������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::���������������������ToolStripMenuItem_Click);
			// 
			// �����������ToolStripMenuItem
			// 
			this->�����������ToolStripMenuItem->Name = L"�����������ToolStripMenuItem";
			this->�����������ToolStripMenuItem->Size = System::Drawing::Size(275, 22);
			this->�����������ToolStripMenuItem->Text = L"�����������";
			this->�����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::�����������ToolStripMenuItem_Click);
			// 
			// �������������ToolStripMenuItem
			// 
			this->�������������ToolStripMenuItem->Name = L"�������������ToolStripMenuItem";
			this->�������������ToolStripMenuItem->Size = System::Drawing::Size(275, 22);
			this->�������������ToolStripMenuItem->Text = L"��������� ����";
			this->�������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::�������������ToolStripMenuItem_Click);
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(275, 22);
			this->�����ToolStripMenuItem->Text = L"�����";
			this->�����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::�����ToolStripMenuItem_Click);
			// 
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->Size = System::Drawing::Size(275, 22);
			this->������ToolStripMenuItem->Text = L"׸����";
			this->������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::������ToolStripMenuItem_Click);
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(275, 22);
			this->�������ToolStripMenuItem->Text = L"�������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::�������ToolStripMenuItem_Click);
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(148, 22);
			this->�����ToolStripMenuItem->Text = L"�����";
			this->�����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::�����ToolStripMenuItem_Click);
			// 
			// ����������ToolStripMenuItem
			// 
			this->����������ToolStripMenuItem->Name = L"����������ToolStripMenuItem";
			this->����������ToolStripMenuItem->Size = System::Drawing::Size(94, 19);
			this->����������ToolStripMenuItem->Text = L"� ���������";
			this->����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::����������ToolStripMenuItem_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Montserrat", 18));
			this->label1->Location = System::Drawing::Point(275, 49);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(335, 33);
			this->label1->TabIndex = 24;
			this->label1->Text = L"������������� �������";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Montserrat", 12));
			this->label2->Location = System::Drawing::Point(64, 101);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(150, 22);
			this->label2->TabIndex = 25;
			this->label2->Text = L"������ �������:";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Window;
			this->textBox1->Location = System::Drawing::Point(220, 102);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(26, 24);
			this->textBox1->TabIndex = 26;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Montserrat", 12));
			this->label3->Location = System::Drawing::Point(149, 131);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(129, 22);
			this->label3->TabIndex = 27;
			this->label3->Text = L"���� �������:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(284, 135);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox2->Size = System::Drawing::Size(326, 211);
			this->textBox2->TabIndex = 28;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Montserrat", 9));
			this->button1->Location = System::Drawing::Point(450, 102);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(160, 24);
			this->button1->TabIndex = 30;
			this->button1->Text = L"������ ������";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::Control;
			this->button2->Font = (gcnew System::Drawing::Font(L"Montserrat", 9));
			this->button2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button2->Location = System::Drawing::Point(284, 102);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(160, 24);
			this->button2->TabIndex = 30;
			this->button2->Text = L"������ ������";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Montserrat", 18));
			this->label4->Location = System::Drawing::Point(661, 49);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(244, 33);
			this->label4->TabIndex = 31;
			this->label4->Text = L"���������� �����";
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Montserrat", 9));
			this->button3->Location = System::Drawing::Point(153, 257);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(125, 89);
			this->button3->TabIndex = 32;
			this->button3->Tag = L"";
			this->button3->Text = L"��������";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MainForm::button3_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(631, 135);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox3->Size = System::Drawing::Size(326, 211);
			this->textBox3->TabIndex = 33;
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Montserrat", 9));
			this->button4->Location = System::Drawing::Point(631, 102);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(326, 24);
			this->button4->TabIndex = 34;
			this->button4->Text = L"�����������";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MainForm::button4_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(252, 102);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(26, 24);
			this->textBox4->TabIndex = 35;
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(153, 161);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(125, 89);
			this->button5->TabIndex = 36;
			this->button5->Text = L"�������� �������";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MainForm::button5_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(22, 186);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(125, 24);
			this->textBox5->TabIndex = 37;
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(22, 216);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(125, 130);
			this->button6->TabIndex = 39;
			this->button6->Text = L"���������� ����� � ������";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MainForm::button6_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Montserrat", 12));
			this->label5->Location = System::Drawing::Point(51, 161);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(73, 22);
			this->label5->TabIndex = 40;
			this->label5->Text = L"������";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Montserrat", 18));
			this->label6->Location = System::Drawing::Point(968, 49);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(229, 33);
			this->label6->TabIndex = 41;
			this->label6->Text = L"�������� �����";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(1061, 101);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(27, 24);
			this->textBox6->TabIndex = 42;
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Montserrat", 9));
			this->button7->Location = System::Drawing::Point(1094, 102);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(118, 24);
			this->button7->TabIndex = 43;
			this->button7->Text = L"�����";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MainForm::button7_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Montserrat", 18));
			this->label7->Location = System::Drawing::Point(968, 93);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(87, 33);
			this->label7->TabIndex = 44;
			this->label7->Text = L"����:";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1311, 599);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->button5);
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
	private: System::Void ����������ToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
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
private: System::Void �������ToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
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
private: System::Void �������ToolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e) {
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

private: System::Void ���������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ openDlg = gcnew OpenFileDialog();
	openDlg->Filter = "Image Files(*.BMP;*.JPG;*.GIF;*.PNG)|*.BMP;*.JPG;*.GIF;*.PNG|All files (*.*)|*.*";
	if (System::Windows::Forms::DialogResult::OK == openDlg->ShowDialog())
	{
		this->BackgroundImage = Image::FromFile(openDlg->FileName);
	}
}
private: System::Void �����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->BackColor = SystemColors::ButtonFace;
}
private: System::Void �������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
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
private: System::Void �����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->BackColor = Color::White;
}
private: System::Void ������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->BackColor = Color::Black;
}
private: System::Void �������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->BackColor = Color::Red;
}
private: System::Void �����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void ����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("In developing", "Error!", MessageBoxButtons::OK);
}
	private:
		int rows = 0, cols = 0, r = 0;; // ������ ����������� �������������� ��������� ������ �������
		int** arr = nullptr; // ����-��������� �� ������������� ������������� ��������� ������
		int* arr2 = nullptr;
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) // random arr and conclusion
{
	try
	{
		this->textBox2->Clear();
		this->textBox3->Clear();
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
			MessageBox::Show("�� ������ ������� ������ �� " + "[" + rows.ToString() + "]" + "[" + cols.ToString() + "]" + " ���������.");
			return;
		}
		for (int i = 0; i < rows; i++)
		{
			arr[i] = new int[cols];
			if (!arr[i])
			{
				MessageBox::Show("�� ������ ������� ������ ��� ������ " + i);
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
		this->textBox5->Clear();
		delete[] arr;
		arr = nullptr;
		delete[] arr2;
		arr2 = nullptr;
		r = 0;
	}
	catch (System::Exception^ exception)
	{
		MessageBox::Show(exception->Message);
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) // shell sort
{
	try
	{
		this->textBox3->Clear();
		functions first;
		first.quickSort(this->arr2, 0, (rows * cols) - 1);
		for (int i = 0; i < (rows * cols); i++)
		{
			this->textBox3->Text += arr2[i].ToString() + "\t";
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
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) // create array
{
	try
	{
		this->textBox2->Clear();
		this->textBox3->Clear();
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
			MessageBox::Show("�� ������ ������� ������ �� " + "[" + rows.ToString() + "]" + "[" + cols.ToString() + "]" + " ���������.");
			return;
		}
		for (int i = 0; i < rows; i++)
		{
			arr[i] = new int[cols];
			if (!arr[i])
			{
				MessageBox::Show("�� ������ ������� ������ ��� ������ " + i);
				return;
			}
		}
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				arr[i][j] = NULL;
			}
		}
		arr2 = new int[rows * cols];
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				arr2[cols * i + j] = arr[i][j];
			}
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
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e)
{
	try
	{
		this->textBox2->Clear();
		this->textBox3->Clear();
		for (int i = 0; i < (rows * cols); i++)
		{
			this->textBox2->Text += arr2[i].ToString() + "\t";
		}
		if (r < rows*cols && rows*cols > 0)
		{
			arr2[r] = Convert::ToInt32(this->textBox5->Text);
			r++;
		}
		else
		{
			MessageBox::Show("������ ����������� [" + rows.ToString() + "]" + "[" + cols.ToString() + "] �������� ��� �� ������.");
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

	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			functions second;
			int key = 0;
			int index = 0; // ������ ������ � ������� ���������
			key = Convert::ToInt32(this->textBox6->Text);
			index = second.Search_Binary(arr2, 0, rows * cols, key);
			if (index >= 0)
			{
				MessageBox::Show("������ �������� " + key + " � ������� �����: " + index);
			}
			else
			{
				MessageBox::Show("��������, �� ������ �������� � ������� ���");
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
