#pragma once
#include "User.h"
#include "HELP.h"
#include "BinaryTree.h"
#include "functions.h"
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
		MainForm(User^ user) // ����������� � ����������, ��������� ��� User
		{
			InitializeComponent();
			bTree = new BinaryTree<int>();
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
		BinaryTree<int>* bTree;
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
	private: System::Windows::Forms::ToolStripMenuItem^ �������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ������ToolStripMenuItem;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ button8;

	private: System::Windows::Forms::Label^ label10;






	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
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
			this->�������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->����ToolStripMenuItem,
					this->�������������������ToolStripMenuItem, this->����������ToolStripMenuItem
			});
			resources->ApplyResources(this->menuStrip1, L"menuStrip1");
			this->menuStrip1->Name = L"menuStrip1";
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->�����������ToolStripMenuItem,
					this->����������ToolStripMenuItem, this->�����ToolStripMenuItem
			});
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			resources->ApplyResources(this->����ToolStripMenuItem, L"����ToolStripMenuItem");
			// 
			// �����������ToolStripMenuItem
			// 
			this->�����������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->����������ToolStripMenuItem1,
					this->�������ToolStripMenuItem2, this->�������ToolStripMenuItem3
			});
			this->�����������ToolStripMenuItem->Name = L"�����������ToolStripMenuItem";
			resources->ApplyResources(this->�����������ToolStripMenuItem, L"�����������ToolStripMenuItem");
			// 
			// ����������ToolStripMenuItem1
			// 
			this->����������ToolStripMenuItem1->Name = L"����������ToolStripMenuItem1";
			resources->ApplyResources(this->����������ToolStripMenuItem1, L"����������ToolStripMenuItem1");
			this->����������ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MainForm::����������ToolStripMenuItem1_Click);
			// 
			// �������ToolStripMenuItem2
			// 
			this->�������ToolStripMenuItem2->Name = L"�������ToolStripMenuItem2";
			resources->ApplyResources(this->�������ToolStripMenuItem2, L"�������ToolStripMenuItem2");
			this->�������ToolStripMenuItem2->Click += gcnew System::EventHandler(this, &MainForm::�������ToolStripMenuItem2_Click);
			// 
			// �������ToolStripMenuItem3
			// 
			this->�������ToolStripMenuItem3->Name = L"�������ToolStripMenuItem3";
			resources->ApplyResources(this->�������ToolStripMenuItem3, L"�������ToolStripMenuItem3");
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
			resources->ApplyResources(this->����������ToolStripMenuItem, L"����������ToolStripMenuItem");
			// 
			// ���������������������ToolStripMenuItem
			// 
			this->���������������������ToolStripMenuItem->Name = L"���������������������ToolStripMenuItem";
			resources->ApplyResources(this->���������������������ToolStripMenuItem, L"���������������������ToolStripMenuItem");
			this->���������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::���������������������ToolStripMenuItem_Click);
			// 
			// �����������ToolStripMenuItem
			// 
			this->�����������ToolStripMenuItem->Name = L"�����������ToolStripMenuItem";
			resources->ApplyResources(this->�����������ToolStripMenuItem, L"�����������ToolStripMenuItem");
			this->�����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::�����������ToolStripMenuItem_Click);
			// 
			// �������������ToolStripMenuItem
			// 
			this->�������������ToolStripMenuItem->Name = L"�������������ToolStripMenuItem";
			resources->ApplyResources(this->�������������ToolStripMenuItem, L"�������������ToolStripMenuItem");
			this->�������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::�������������ToolStripMenuItem_Click);
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			resources->ApplyResources(this->�����ToolStripMenuItem, L"�����ToolStripMenuItem");
			this->�����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::�����ToolStripMenuItem_Click);
			// 
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			resources->ApplyResources(this->������ToolStripMenuItem, L"������ToolStripMenuItem");
			this->������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::������ToolStripMenuItem_Click);
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			resources->ApplyResources(this->�������ToolStripMenuItem, L"�������ToolStripMenuItem");
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::�������ToolStripMenuItem_Click);
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			resources->ApplyResources(this->�����ToolStripMenuItem, L"�����ToolStripMenuItem");
			this->�����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::�����ToolStripMenuItem_Click);
			// 
			// �������������������ToolStripMenuItem
			// 
			this->�������������������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->������ToolStripMenuItem,
					this->������ToolStripMenuItem
			});
			this->�������������������ToolStripMenuItem->Name = L"�������������������ToolStripMenuItem";
			resources->ApplyResources(this->�������������������ToolStripMenuItem, L"�������������������ToolStripMenuItem");
			// 
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			resources->ApplyResources(this->������ToolStripMenuItem, L"������ToolStripMenuItem");
			this->������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::������ToolStripMenuItem_Click);
			// 
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			resources->ApplyResources(this->������ToolStripMenuItem, L"������ToolStripMenuItem");
			this->������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::������ToolStripMenuItem_Click);
			// 
			// ����������ToolStripMenuItem
			// 
			this->����������ToolStripMenuItem->Name = L"����������ToolStripMenuItem";
			resources->ApplyResources(this->����������ToolStripMenuItem, L"����������ToolStripMenuItem");
			this->����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::����������ToolStripMenuItem_Click);
			// 
			// label1
			// 
			resources->ApplyResources(this->label1, L"label1");
			this->label1->Name = L"label1";
			// 
			// label2
			// 
			resources->ApplyResources(this->label2, L"label2");
			this->label2->Name = L"label2";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Window;
			resources->ApplyResources(this->textBox1, L"textBox1");
			this->textBox1->Name = L"textBox1";
			// 
			// label3
			// 
			resources->ApplyResources(this->label3, L"label3");
			this->label3->Name = L"label3";
			// 
			// textBox2
			// 
			resources->ApplyResources(this->textBox2, L"textBox2");
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			// 
			// button1
			// 
			resources->ApplyResources(this->button1, L"button1");
			this->button1->Name = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::Control;
			resources->ApplyResources(this->button2, L"button2");
			this->button2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button2->Name = L"button2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// label4
			// 
			resources->ApplyResources(this->label4, L"label4");
			this->label4->Name = L"label4";
			// 
			// button3
			// 
			resources->ApplyResources(this->button3, L"button3");
			this->button3->Name = L"button3";
			this->button3->Tag = L"";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MainForm::button3_Click);
			// 
			// textBox3
			// 
			resources->ApplyResources(this->textBox3, L"textBox3");
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			// 
			// button4
			// 
			resources->ApplyResources(this->button4, L"button4");
			this->button4->Name = L"button4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MainForm::button4_Click);
			// 
			// textBox4
			// 
			resources->ApplyResources(this->textBox4, L"textBox4");
			this->textBox4->Name = L"textBox4";
			// 
			// button5
			// 
			resources->ApplyResources(this->button5, L"button5");
			this->button5->Name = L"button5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MainForm::button5_Click);
			// 
			// textBox5
			// 
			resources->ApplyResources(this->textBox5, L"textBox5");
			this->textBox5->Name = L"textBox5";
			// 
			// button6
			// 
			resources->ApplyResources(this->button6, L"button6");
			this->button6->Name = L"button6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MainForm::button6_Click);
			// 
			// label5
			// 
			resources->ApplyResources(this->label5, L"label5");
			this->label5->Name = L"label5";
			// 
			// label6
			// 
			resources->ApplyResources(this->label6, L"label6");
			this->label6->Name = L"label6";
			// 
			// textBox6
			// 
			resources->ApplyResources(this->textBox6, L"textBox6");
			this->textBox6->Name = L"textBox6";
			// 
			// button7
			// 
			resources->ApplyResources(this->button7, L"button7");
			this->button7->Name = L"button7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MainForm::button7_Click);
			// 
			// label7
			// 
			resources->ApplyResources(this->label7, L"label7");
			this->label7->Name = L"label7";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			resources->ApplyResources(this->panel1, L"panel1");
			this->panel1->Name = L"panel1";
			// 
			// richTextBox1
			// 
			resources->ApplyResources(this->richTextBox1, L"richTextBox1");
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			// 
			// label8
			// 
			resources->ApplyResources(this->label8, L"label8");
			this->label8->Name = L"label8";
			// 
			// label9
			// 
			resources->ApplyResources(this->label9, L"label9");
			this->label9->Name = L"label9";
			// 
			// button8
			// 
			resources->ApplyResources(this->button8, L"button8");
			this->button8->Name = L"button8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MainForm::button8_Click);
			// 
			// label10
			// 
			resources->ApplyResources(this->label10, L"label10");
			this->label10->Name = L"label10";
			// 
			// MainForm
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->label10);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->panel1);
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
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		// �����������
	private: System::Void ����������ToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) { // ����������
		try
		{
			this->Controls->Clear();
			CultureInfo::CurrentUICulture = gcnew CultureInfo("en-US");
			CultureInfo::CurrentCulture = gcnew CultureInfo("en-US");
			InitializeComponent(); // �������������� ������� ����������������� ����������
		}
		catch (System::Exception^ exception)
		{
			MessageBox::Show(exception->Message); // ����� ��������� ������ �� �����
		}
	}
	private: System::Void �������ToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) { // �������
		try
		{
			this->Controls->Clear();
			CultureInfo::CurrentUICulture = gcnew CultureInfo("");
			CultureInfo::CurrentCulture = gcnew CultureInfo("");
			InitializeComponent(); // �������������� ������� ����������������� ����������
		}
		catch (System::Exception^ exception)
		{
			MessageBox::Show(exception->Message); // ����� ��������� ������ �� �����
		}
	}
	private: System::Void �������ToolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e) { // �����������
		try
		{
			this->Controls->Clear();
			CultureInfo::CurrentUICulture = gcnew CultureInfo("be");
			CultureInfo::CurrentCulture = gcnew CultureInfo("be");
			InitializeComponent(); // �������������� ������� ����������������� ����������
		}
		catch (System::Exception^ exception)
		{
			MessageBox::Show(exception->Message); // ����� ��������� ������ �� �����
		}
	}

		   // ����������
	private: System::Void ���������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) { // ������� ��������
		try
		{
			OpenFileDialog^ openDlg = gcnew OpenFileDialog(); // ������� ���� ������� ������ ������
			openDlg->Filter = "Image Files(*.BMP;*.JPG;*.GIF;*.PNG)|*.BMP;*.JPG;*.GIF;*.PNG|All files (*.*)|*.*"; // ������ ������� ���������� ��������
			if (System::Windows::Forms::DialogResult::OK == openDlg->ShowDialog())
			{
				this->BackgroundImage = Image::FromFile(openDlg->FileName); // ������ ��� = ���� (��������) ��������� �������������
			}
		}
		catch (System::Exception^ exception)
		{
			MessageBox::Show(exception->Message); // ����� ��������� ������ �� �����
		}
	}
	private: System::Void �����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) { // ����������� ����
		this->BackColor = SystemColors::ButtonFace; // ����������� ���� ������� ����� ����
		this->BackgroundImage = nullptr; // �������������� ������� ��������� �� �������� ������� ����
	}
	private: System::Void �������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) { // ��������� ����
		try
		{
			Random rn; // ��������� ���������� ������
			// �������� ��������� ��� ����� RGB
			const int r = rn.Next(0, 255); // (����������� ��������, ������������ ��������)
			const int g = rn.Next(0, 255); // (����������� ��������, ������������ ��������)
			const int b = rn.Next(0, 255); // (����������� ��������, ������������ ��������)
			this->BackColor = Color::FromArgb(r, g, b); // ������ ���� ���� = ��������� ���� �� ���������� r, g, b
		}
		catch (System::Exception^ exception)
		{
			MessageBox::Show(exception->Message); // ����� ��������� ������ �� �����
		}
	}
	private: System::Void �����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) { // ����� ����
		this->BackColor = Color::White; // ����� ���� ������� ����� ����
	}
	private: System::Void ������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) { // ������ ����
		this->BackColor = Color::Black; // ������ ���� ������� ����� ����
	}
	private: System::Void �������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) { // ������� ����
		this->BackColor = Color::Red; // ������� ���� ������� ����� ����
	}
		   // �������� ������ ������ � ������� ���������
	private: System::Void �����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) { // ����� �� ���������
		this->Close(); // �������� �����
	}
	private: System::Void ����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) { // ����� ���� ������� ���������
		coursework::HELP helpform; // ������ ���������� ��� ������ � ������
		helpform.ShowDialog(); // ���������� � ����� � ��������� �
	}

		   // �������� ������ ��������� ��������� ��� ���������� � ��������� ������ � �������
	private: int rows = 0, cols = 0, r = 0;  // ������ ����������� �������������� ��������� ������ ������� rows (������), cols (�������)
	private: int** arr = nullptr; // ������� ��������� �� ������������� ������������� ��������� ������
	private: int* arr2 = nullptr; // ������� ��������� �� ������������� ������������� ���������� ������

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) { // ������ ������� � ��� �����
		try
		{
			this->textBox2->Clear(); // ������� ���������� ����
			this->textBox3->Clear(); // ������� ���������� ����
			this->rows = Convert::ToInt32(this->textBox1->Text); // ����������� �������� ������������� ������� ������ � ��������������� ��������
			this->cols = Convert::ToInt32(this->textBox4->Text); // ����������� �������� ������������� ������� ������� � ��������������� ��������
			if (rows >= 31 || cols >= 31) // ����������� �� ������ ����� � ��������
			{
				MessageBox::Show("������ ������� ������ ���� �� ������ 30 ���������!"); // ����� ��������� �� �����
				return; // ����������
			}
			int** arr = new int* [cols]; // ������ ��������� ������� ������ �� ��������� ������������ ������, � ��� �������� - ��������� �� ������
			if (arr == nullptr) // ���� �������� ������� � ���� ��� ������ �� �������
				// ���� (������������ ������� ����������� ������)
			{
				MessageBox::Show("�� ������ ������� ������ �� " + "[" + rows.ToString() + "]" + "[" + cols.ToString() + "]" + " ���������."); // ����� ��������� �� �����
				return; // ����������
			}
			for (int i = 0; i < cols; i++) // �������� ������ ��� ������� �������
			{
				arr[i] = new int[rows]; // �������� ������ ��� ������ �������, ������� ������� �� "�������" ��������� ���� int
				if (arr[i] == nullptr) // ���� ��� ��������� ������� �� ������� �������� ����� � ����
				{
					MessageBox::Show("�� ������ ������� ������ ��� ������ �" + i); // ����� ��������� �� �����
					for (int j = 0; j < i; j++) // ��������� ������� ����, ������� ������ ����� �������� ��� ���������� ������� �������
					{
						delete[] arr[j]; // ������� ���������� ������-�������
					}
					delete[] arr; // ������� ��������� � ��������� ������
					arr = nullptr; // �������� ���������, ��� �� �� ��������� �� �������� ����� ������� ����
					return; // ����������
				}
			}
			Random rn; // ��������� ���������� �������� ������
			for (int i = 0; i < cols; i++) // ������ ���������� �� �������� �������
			{
				for (int j = 0; j < rows; j++) // ��������� ������ ���������� �� ������� �������
				{
					arr[i][j] = rn.Next(0, 101); // �������������� ��������� ��������� � ���������� �� 0 �� 100 ������������
				}
			}
			for (int i = 0; i < cols; i++) // ������ ���������� �� �������� �������
			{
				for (int j = 0; j < rows; j++) // ��������� ������ ���������� �� ������� �������
				{
					this->textBox2->Text += arr[i][j].ToString() + "\t"; // ����������� ��������� ������� � ������ � ������� � ��������� ���� � ����������� ������������ ������� ���������
				}
				this->textBox2->Text += "\n"; // ���������� ������������ ������� �������� �� ����� ������ � ��������� ����
			}
			arr2 = new int[rows * cols]; // �������� ����������� ������������ ������
			for (int i = 0; i < cols; i++) // ������ ���������� �� �������� �������
			{
				for (int j = 0; j < rows; j++) // ��������� ������ ���������� �� ������� �������
				{
					arr2[rows * i + j] = arr[i][j];
				}
			}
		}
		catch (System::FormatException^ exception)
		{
			MessageBox::Show("�������� ������ �����", "������", MessageBoxButtons::OK); // ����� ��������� ������ ������� ������ �� �����
		}
		catch (System::Exception^ exception)
		{
			MessageBox::Show(exception->Message); // ����� ��������� ������ �� �����
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) { // ������ ������ �������
		try
		{
			Random^ rn = gcnew Random(); // ��������� ���������� �������� ������
			int a = (rn->Next(1, 31)); // �������������� ���������� ��������� ��������� � ���������� �� 1 �� 30 ������������
			int b = (rn->Next(1, 31)); // �������������� ���������� ��������� ��������� � ���������� �� 1 �� 30 ������������
			textBox1->Text = a.ToString(); // ����������� ������������� ���������� � ������ � ������� � ��������� ����
			textBox4->Text = b.ToString(); // ����������� ������������� ���������� � ������ � ������� � ��������� ����
		}
		catch (System::Exception^ exception)
		{
			MessageBox::Show(exception->Message); // ����� ��������� ������ �� �����
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) { // ������� ��������� ���� � ��������
		try
		{
			this->textBox1->Clear(); // ������� ���������� ����
			this->textBox2->Clear(); // ������� ���������� ����
			this->textBox3->Clear(); // ������� ���������� ����
			this->textBox4->Clear(); // ������� ���������� ����
			this->textBox5->Clear(); // ������� ���������� ����
			ClearAll(); // �������� ������� ������� ��������� ������
			delete[] arr; // ����������� �������
			arr = nullptr; // ���������� ������� ������� ����������
			delete[] arr2; // ����������� �������
			arr2 = nullptr; // ���������� ������� ������� ����������
			r = 0; // �������� ����������
		}
		catch (System::Exception^ exception)
		{
			MessageBox::Show(exception->Message); // ����� ��������� ������ �� �����
		}
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) { // ���������� �����
		try
		{
			this->textBox3->Clear(); // ������� ���������� ����
			functions first; // �������������� ���������� ����������� ����� �� ������� ("functions.h")
			first.quickSort(this->arr2, 0, (rows * cols) - 1); // ���������� � ���������� � �������� ������ �������, �.�. ������� ���������� �����
			for (int i = 0; i < (rows * cols); i++) // ������ ���������� �� ����� �������
			{
				this->textBox3->Text += arr2[i].ToString() + "\t"; // ����������� ��������� ������� � ������ � ������� � ��������� ���� � ����������� ������������ ������� ���������
			}
		}
		catch (System::FormatException^ exception)
		{
			MessageBox::Show("�������� ������ �����", "������", MessageBoxButtons::OK); // ����� ��������� ������ ������� ������ �� �����
		}
		catch (System::NullReferenceException^ exception)
		{
			MessageBox::Show("��� ������ �������� ������", "������", MessageBoxButtons::OK);
		}
		catch (System::Exception^ exception)
		{
			MessageBox::Show(exception->Message); // ����� ��������� ������ �� �����
		}
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) { // �������� �������
		try
		{
			this->textBox2->Clear(); // ������� ���������� ����
			this->textBox3->Clear(); // ������� ���������� ����
			if (arr != nullptr) // ���� ������� � ���� ��� �������
			{
				delete[] arr; // ����������� �������
				arr = nullptr; // ���������� ������� ������� ����������
				rows = 0; // �������� ������ ������
				cols = 0; // �������� ������ �������
			}
			r = 0;
			this->rows = Convert::ToInt32(this->textBox1->Text); // ����������� �������� ������������� ������� ������ � ��������������� ��������
			this->cols = Convert::ToInt32(this->textBox4->Text); // ����������� �������� ������������� ������� ������� � ��������������� ��������
			if (rows >= 31 || cols >= 31) // ����������� �� ������ ����� � ��������
			{
				MessageBox::Show("������ ������� ������ ���� �� ������ 30 ���������!"); // ����� ��������� �� �����
				return; // ����������
			}
			int** arr = new int* [cols]; // ������ ��������� ������� ������ �� ��������� ������������ ������, � ��� �������� - ��������� �� ������
			if (arr == nullptr) // ���� �������� ������� � ���� ��� ������ �� �������
				// ���� (������������ ������� ����������� ������)
			{
				MessageBox::Show("�� ������ ������� ������ �� " + "[" + rows.ToString() + "]" + "[" + cols.ToString() + "]" + " ���������."); // ����� ��������� �� �����
				return; // ����������
			}
			for (int i = 0; i < cols; i++) // �������� ������ ��� ������� �������
			{
				arr[i] = new int[rows]; // �������� ������ ��� ������ �������, ������� ������� �� "�������" ��������� ���� int
				if (arr[i] == nullptr) // ���� ��� ��������� ������� �� ������� �������� ����� � ����
				{
					MessageBox::Show("�� ������ ������� ������ ��� ������ �" + i); // ����� ��������� �� �����
					for (int j = 0; j < i; j++) // ��������� ������� ����, ������� ������ ����� �������� ��� ���������� ������� �������
					{
						delete[] arr[j]; // ������� ���������� ������-�������
					}
					delete[] arr; // ������� ��������� � ��������� ������
					arr = nullptr; // �������� ���������, ��� �� �� ��������� �� �������� ����� ������� ����
					return; // ����������
				}
			}
			for (int i = 0; i < cols; i++)
			{
				for (int j = 0; j < rows; j++)
				{
					arr[i][j] = NULL;
				}
			}
			arr2 = new int[rows * cols]; // �������� ����������� ������������ ������
			for (int i = 0; i < cols; i++) // ������ ���������� �� �������� �������
			{
				for (int j = 0; j < rows; j++) // ��������� ������ ���������� �� ������� �������
				{
					arr2[rows * i + j] = arr[i][j];
				}
			}
			for (int i = 0; i < (rows * cols); i++) // ���� ����� ����������� �� ��� ���, ���� �� �� �������� �� ����� �������
			{
				this->textBox2->Text += arr2[i].ToString() + "\t"; // ����������� ��������� ������� � ������ � ������� � ��������� ���� � ����������� ������������ ������� ���������
			}
		}
		catch (System::FormatException^ exception)
		{
			MessageBox::Show("�������� ������ �����", "������", MessageBoxButtons::OK); // ����� ��������� ������ ������� ������ �� �����
		}
		catch (System::Exception^ exception)
		{
			MessageBox::Show(exception->Message); // ����� ��������� ������ �� �����
		}
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) { // ������ "���������� �������� � ������"
		try
		{
			this->textBox2->Clear(); // ������� ���������� ����
			this->textBox3->Clear(); // ������� ���������� ����
			if ((r < rows * cols) && (rows * cols > 0)) // �������� ��� ������ ������� ������ ����
			{
				arr2[r] = Convert::ToInt32(this->textBox5->Text); // ����������� �������� ������������� ����� � ������������� ��������
				r++; // r += 1
			}
			else
			{
				MessageBox::Show("������ ����������� [" + rows.ToString() + "]" + "[" + cols.ToString() + "] �������� ��� �� ������."); // ����� ��������� �� �����
			}
			for (int i = 0; i < (rows * cols); i++) // ���� ����� ����������� �� ��� ���, ���� �� �� �������� �� ����� �������
			{
				this->textBox2->Text += arr2[i].ToString() + "\t"; // ����������� ��������� ������� � ������ � ������� � ��������� ���� � ����������� ������������ ������� ���������
			}

		}
		catch (System::FormatException^ exception)
		{
			MessageBox::Show("�������� ������ �����", "������", MessageBoxButtons::OK); // ����� ��������� ������ ������� ������ �� �����
		}
		catch (System::Exception^ exception)
		{
			MessageBox::Show(exception->Message); // ����� ��������� ������ �� �����
		}
	}

		   // �������� ������ � ������ ������
	private: System::Void ������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) { // ������ �����
		textBox2->Clear(); // ������� ���������� ����
		textBox3->Clear(); // ������� ���������� ����
		delete[] arr; // ����������� �������
		arr = nullptr; // ���������� ������� ������� ����������
		delete[] arr2; // ����������� �������
		arr2 = nullptr; // ���������� ������� ������� ����������
		r = 0; // �������� ����������
		String^ FileName = ""; // ���������� ���������� ������ ��� �������� ���� � �����
		if (openFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK) // ��������� ���������� ���� ���� ������������ ����� "��"
		{
			FileName = openFileDialog1->FileName; // ���������� ���� � ���������� �����
		}
		try
		{
			StreamReader^ file = File::OpenText(FileName); // ��������� ����
			textBox2->Text = file->ReadToEnd(); // ���������� ���������� ����� � ��������� ����
		}
		catch (System::Exception^ exception)
		{
			MessageBox::Show(exception->Message); // ����� ��������� ������ �� �����
		}
	}
	private: System::Void ������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) { // ������ �����
		StreamWriter^ f = gcnew StreamWriter("test.txt", true); // ������ ���������� ��� ������ � ������� � ����� �� ������ ���� ��� ������
		f->Write(textBox2->Text); // ���������� � ���� ����� �� ���������� ����
		f->Close(); // ��������� ����
		MessageBox::Show(this, "���� ������� �������", "���������", MessageBoxButtons::OK, MessageBoxIcon::Information); // ����� ��������� �� �����
		textBox2->Clear(); // ������� ���������� ����
	}

		   // �������� ��������� ������ � ������
		   void ClearAll() // ������� ������� ��������� ������
		   {
			   panel1->Controls->Clear(); // ������� ������
			   panel1->Refresh(); // ���������� ������
			   richTextBox1->Clear(); // ������� ���������� ����
			   bTree->Clear(); // ������� ��������� ������
		   }
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) { // �������� �����
		//try
		//{
		//	functions second; // ���������� ���������� ���������
		//	int key = 0; // ������������� ���� ������, �.�. ������� ����������
		//	int index = 0; // ������������� ������ ������ � ������� ���������
		//	key = Convert::ToInt32(this->textBox6->Text); // ����������� �������� ������������� ����� ������ � ������������� ��������
		//	index = second.Search_Binary(arr2, 0, rows * cols, key); // ������� ��������� ������
		//	if (index >= 0) // ���� ������ ������ ��� ����� ����
		//	{
		//		MessageBox::Show("������ �������� " + key + " � ������� �����: " + index); // ����� ��������� �� �����
		//	}
		//	else // �����
		//	{
		//		MessageBox::Show("��������, �� ������ �������� � ������� ���"); // ����� ��������� �� �����
		//	}
		//}
		//catch (System::FormatException^ exception)
		//{
		//	MessageBox::Show(exception->Message); // ����� ��������� ������ ������� ������ �� �����
		//}
		//catch (System::Exception^ exception)
		//{
		//	MessageBox::Show(exception->Message); // ����� ��������� ������ �� �����
		//}
		if (textBox6->Text->Length != 0) // �������� �� �� ��� ����� ���������� ���� �� ����� ����
		{
			int number = 0; // �������������� ���������� �������������� ����
			if (!Int32::TryParse(textBox6->Text, number)) // ������
			{
				MessageBox::Show(L"���������! ������ ��������������"); // ����� ��������� �� �����
				return; // ����������
			}
			bTree->Search(number) ? MessageBox::Show("������� ������") : MessageBox::Show("������� �� ������"); // ��������� ��������, ���� ������� ������� ������ - ������� �����, ���� �� ������ - ������� �������
		}
		else
		{
			MessageBox::Show("������� ������� ��� ������!", "������", MessageBoxButtons::OK); // ����� ��������� �� �����
		}
	}

	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) { // ������������ ��������� ������
			try
			{
				Graphics^ panelGraphics = panel1->CreateGraphics();

				int startX = 0, startY = 0;
				int curX = 0, curY = 0;
				if (arr2 != nullptr)
				{
					for (int i = 0; i < rows * cols; i++)
					{
						bTree->AddItem(arr2[i]);
					}
				}
				else
				{
					MessageBox::Show("��� ������ �������� ������", "��������");
				}
				

				for (auto& item : bTree->PrintTree())
				{
					curX = item->theX;
					curY = item->theY;


					Label^ label = gcnew Label();
					label->Font = gcnew System::Drawing::Font("verdana", 12);
					label->Width = 40;
					label->BackColor = Color::YellowGreen;

					if (curX > panel1->Width - label->Width)
						curX = panel1->Width - label->Width - 5;
					if (curY < 0)
						curY = 5;

					label->Location = Point(curX, curY);
					label->Text = Convert::ToString((int)item->Data);

					if (startX != startY != 0)
					{
						panelGraphics->DrawLine(gcnew Pen(Color::Brown, 4), Point(startX, startY), Point(curX, curY));
					}
					panelGraphics->FillRectangle(Brushes::Black, curX - 2, curY - 2, 40, label->Height);
					panel1->Controls->Add(label);

					if (item->testRoot)
					{
						startX = curX;
						startY = curY;
					}

					richTextBox1->AppendText(String::Format("  {0}                    {1}\r\n", item->Data, item->Count));
				}
			}
			catch (System::Exception^ exception)
			{
				MessageBox::Show(exception->Message); // ����� ��������� ������ �� �����
			}
	}
	};
}