#pragma once
#include "User.h"
#include "HELP.h"
#include "BinaryTree.h"
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
	/// Сводка для MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(User^ user)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			panel1->BackColor = Color::AntiqueWhite;
			bTree = new BinaryTree<int>();
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
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
	private: System::Windows::Forms::ToolStripMenuItem^ менюToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ локализацияToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ английскийToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ русскийToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ русскийToolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^ оформлениеToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ выбратьСамостоятельноToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ стандартныйToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ рандомныйЦветToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ белыйToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ чёрныйToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ красныйToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ выходToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ оПрограммеToolStripMenuItem;
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
	private: System::Windows::Forms::ToolStripMenuItem^ чтениеИЗаписьФайловToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ чтениеToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ записьToolStripMenuItem;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Label^ label10;


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->менюToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->локализацияToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->английскийToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->русскийToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->русскийToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->оформлениеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выбратьСамостоятельноToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->стандартныйToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->рандомныйЦветToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->белыйToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->чёрныйToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->красныйToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->оПрограммеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->чтениеИЗаписьФайловToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->чтениеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->записьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->менюToolStripMenuItem,
					this->оПрограммеToolStripMenuItem, this->чтениеИЗаписьФайловToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(8, 3, 0, 3);
			this->menuStrip1->Size = System::Drawing::Size(1311, 25);
			this->menuStrip1->TabIndex = 23;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// менюToolStripMenuItem
			// 
			this->менюToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->локализацияToolStripMenuItem,
					this->оформлениеToolStripMenuItem, this->выходToolStripMenuItem
			});
			this->менюToolStripMenuItem->Name = L"менюToolStripMenuItem";
			this->менюToolStripMenuItem->Size = System::Drawing::Size(53, 19);
			this->менюToolStripMenuItem->Text = L"Меню";
			// 
			// локализацияToolStripMenuItem
			// 
			this->локализацияToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->английскийToolStripMenuItem1,
					this->русскийToolStripMenuItem2, this->русскийToolStripMenuItem3
			});
			this->локализацияToolStripMenuItem->Name = L"локализацияToolStripMenuItem";
			this->локализацияToolStripMenuItem->Size = System::Drawing::Size(148, 22);
			this->локализацияToolStripMenuItem->Text = L"Локализация";
			// 
			// английскийToolStripMenuItem1
			// 
			this->английскийToolStripMenuItem1->Name = L"английскийToolStripMenuItem1";
			this->английскийToolStripMenuItem1->Size = System::Drawing::Size(146, 22);
			this->английскийToolStripMenuItem1->Text = L"Английский";
			this->английскийToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MainForm::английскийToolStripMenuItem1_Click);
			// 
			// русскийToolStripMenuItem2
			// 
			this->русскийToolStripMenuItem2->Name = L"русскийToolStripMenuItem2";
			this->русскийToolStripMenuItem2->Size = System::Drawing::Size(146, 22);
			this->русскийToolStripMenuItem2->Text = L"Русский";
			this->русскийToolStripMenuItem2->Click += gcnew System::EventHandler(this, &MainForm::русскийToolStripMenuItem2_Click);
			// 
			// русскийToolStripMenuItem3
			// 
			this->русскийToolStripMenuItem3->Name = L"русскийToolStripMenuItem3";
			this->русскийToolStripMenuItem3->Size = System::Drawing::Size(146, 22);
			this->русскийToolStripMenuItem3->Text = L"Белорусский";
			this->русскийToolStripMenuItem3->Click += gcnew System::EventHandler(this, &MainForm::русскийToolStripMenuItem3_Click);
			// 
			// оформлениеToolStripMenuItem
			// 
			this->оформлениеToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->выбратьСамостоятельноToolStripMenuItem,
					this->стандартныйToolStripMenuItem, this->рандомныйЦветToolStripMenuItem, this->белыйToolStripMenuItem, this->чёрныйToolStripMenuItem,
					this->красныйToolStripMenuItem
			});
			this->оформлениеToolStripMenuItem->Name = L"оформлениеToolStripMenuItem";
			this->оформлениеToolStripMenuItem->Size = System::Drawing::Size(148, 22);
			this->оформлениеToolStripMenuItem->Text = L"Оформление";
			// 
			// выбратьСамостоятельноToolStripMenuItem
			// 
			this->выбратьСамостоятельноToolStripMenuItem->Name = L"выбратьСамостоятельноToolStripMenuItem";
			this->выбратьСамостоятельноToolStripMenuItem->Size = System::Drawing::Size(275, 22);
			this->выбратьСамостоятельноToolStripMenuItem->Text = L"Выбрать самостоятельно (картинка)";
			this->выбратьСамостоятельноToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::выбратьСамостоятельноToolStripMenuItem_Click);
			// 
			// стандартныйToolStripMenuItem
			// 
			this->стандартныйToolStripMenuItem->Name = L"стандартныйToolStripMenuItem";
			this->стандартныйToolStripMenuItem->Size = System::Drawing::Size(275, 22);
			this->стандартныйToolStripMenuItem->Text = L"Стандартный";
			this->стандартныйToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::стандартныйToolStripMenuItem_Click);
			// 
			// рандомныйЦветToolStripMenuItem
			// 
			this->рандомныйЦветToolStripMenuItem->Name = L"рандомныйЦветToolStripMenuItem";
			this->рандомныйЦветToolStripMenuItem->Size = System::Drawing::Size(275, 22);
			this->рандомныйЦветToolStripMenuItem->Text = L"Рандомный цвет";
			this->рандомныйЦветToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::рандомныйЦветToolStripMenuItem_Click);
			// 
			// белыйToolStripMenuItem
			// 
			this->белыйToolStripMenuItem->Name = L"белыйToolStripMenuItem";
			this->белыйToolStripMenuItem->Size = System::Drawing::Size(275, 22);
			this->белыйToolStripMenuItem->Text = L"Белый";
			this->белыйToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::белыйToolStripMenuItem_Click);
			// 
			// чёрныйToolStripMenuItem
			// 
			this->чёрныйToolStripMenuItem->Name = L"чёрныйToolStripMenuItem";
			this->чёрныйToolStripMenuItem->Size = System::Drawing::Size(275, 22);
			this->чёрныйToolStripMenuItem->Text = L"Чёрный";
			this->чёрныйToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::чёрныйToolStripMenuItem_Click);
			// 
			// красныйToolStripMenuItem
			// 
			this->красныйToolStripMenuItem->Name = L"красныйToolStripMenuItem";
			this->красныйToolStripMenuItem->Size = System::Drawing::Size(275, 22);
			this->красныйToolStripMenuItem->Text = L"Красный";
			this->красныйToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::красныйToolStripMenuItem_Click);
			// 
			// выходToolStripMenuItem
			// 
			this->выходToolStripMenuItem->Name = L"выходToolStripMenuItem";
			this->выходToolStripMenuItem->Size = System::Drawing::Size(148, 22);
			this->выходToolStripMenuItem->Text = L"Выход";
			this->выходToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::выходToolStripMenuItem_Click);
			// 
			// оПрограммеToolStripMenuItem
			// 
			this->оПрограммеToolStripMenuItem->Name = L"оПрограммеToolStripMenuItem";
			this->оПрограммеToolStripMenuItem->Size = System::Drawing::Size(94, 19);
			this->оПрограммеToolStripMenuItem->Text = L"О программе";
			this->оПрограммеToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::оПрограммеToolStripMenuItem_Click);
			// 
			// чтениеИЗаписьФайловToolStripMenuItem
			// 
			this->чтениеИЗаписьФайловToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->чтениеToolStripMenuItem,
					this->записьToolStripMenuItem
			});
			this->чтениеИЗаписьФайловToolStripMenuItem->Name = L"чтениеИЗаписьФайловToolStripMenuItem";
			this->чтениеИЗаписьФайловToolStripMenuItem->Size = System::Drawing::Size(153, 19);
			this->чтениеИЗаписьФайловToolStripMenuItem->Text = L"Чтение и запись файлов";
			// 
			// чтениеToolStripMenuItem
			// 
			this->чтениеToolStripMenuItem->Name = L"чтениеToolStripMenuItem";
			this->чтениеToolStripMenuItem->Size = System::Drawing::Size(113, 22);
			this->чтениеToolStripMenuItem->Text = L"Чтение";
			this->чтениеToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::чтениеToolStripMenuItem_Click);
			// 
			// записьToolStripMenuItem
			// 
			this->записьToolStripMenuItem->Name = L"записьToolStripMenuItem";
			this->записьToolStripMenuItem->Size = System::Drawing::Size(113, 22);
			this->записьToolStripMenuItem->Text = L"Запись";
			this->записьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::записьToolStripMenuItem_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Montserrat", 18));
			this->label1->Location = System::Drawing::Point(238, 56);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(335, 33);
			this->label1->TabIndex = 24;
			this->label1->Text = L"Инициализация массива";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Montserrat", 12));
			this->label2->Location = System::Drawing::Point(12, 101);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(150, 22);
			this->label2->TabIndex = 25;
			this->label2->Text = L"Размер массива:";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Window;
			this->textBox1->Location = System::Drawing::Point(174, 101);
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
			this->label3->Location = System::Drawing::Point(109, 126);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(129, 22);
			this->label3->TabIndex = 27;
			this->label3->Text = L"Ввод массива:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(244, 135);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->textBox2->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox2->Size = System::Drawing::Size(326, 211);
			this->textBox2->TabIndex = 28;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Montserrat", 9));
			this->button1->Location = System::Drawing::Point(410, 101);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(160, 24);
			this->button1->TabIndex = 30;
			this->button1->Text = L"Рандом массив";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::Control;
			this->button2->Font = (gcnew System::Drawing::Font(L"Montserrat", 9));
			this->button2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button2->Location = System::Drawing::Point(244, 101);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(160, 24);
			this->button2->TabIndex = 30;
			this->button2->Text = L"Рандом размер";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Montserrat", 16));
			this->label4->Location = System::Drawing::Point(9, 365);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(229, 30);
			this->label4->TabIndex = 31;
			this->label4->Text = L"Сортировка Хоара:";
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Montserrat", 9));
			this->button3->Location = System::Drawing::Point(113, 216);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(125, 60);
			this->button3->TabIndex = 32;
			this->button3->Tag = L"";
			this->button3->Text = L"Очистить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MainForm::button3_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(244, 352);
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
			this->button4->Location = System::Drawing::Point(14, 398);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(218, 33);
			this->button4->TabIndex = 34;
			this->button4->Text = L"Сортировать";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MainForm::button4_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(206, 101);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(26, 24);
			this->textBox4->TabIndex = 35;
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(113, 151);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(125, 59);
			this->button5->TabIndex = 36;
			this->button5->Text = L"Создание массива";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MainForm::button5_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(16, 186);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(91, 24);
			this->textBox5->TabIndex = 37;
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(16, 216);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(91, 60);
			this->button6->TabIndex = 39;
			this->button6->Text = L"Добавление числа в массив";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MainForm::button6_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Montserrat", 12));
			this->label5->Location = System::Drawing::Point(24, 161);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(73, 22);
			this->label5->TabIndex = 40;
			this->label5->Text = L"Массив";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Montserrat", 18));
			this->label6->Location = System::Drawing::Point(703, 434);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(229, 33);
			this->label6->TabIndex = 41;
			this->label6->Text = L"Бинарный поиск";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(796, 490);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(27, 24);
			this->textBox6->TabIndex = 42;
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Montserrat", 9));
			this->button7->Location = System::Drawing::Point(829, 490);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(103, 24);
			this->button7->TabIndex = 43;
			this->button7->Text = L"Поиск";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MainForm::button7_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Montserrat", 18));
			this->label7->Location = System::Drawing::Point(703, 481);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(87, 33);
			this->label7->TabIndex = 44;
			this->label7->Text = L"Ключ:";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// panel1
			// 
			this->panel1->Font = (gcnew System::Drawing::Font(L"Montserrat", 12));
			this->panel1->Location = System::Drawing::Point(586, 135);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(484, 296);
			this->panel1->TabIndex = 45;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Montserrat", 15));
			this->richTextBox1->Location = System::Drawing::Point(1076, 135);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(176, 296);
			this->richTextBox1->TabIndex = 46;
			this->richTextBox1->Text = L"";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Montserrat", 10));
			this->label8->Location = System::Drawing::Point(1076, 101);
			this->label8->Name = L"label8";
			this->label8->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label8->Size = System::Drawing::Size(73, 20);
			this->label8->TabIndex = 47;
			this->label8->Text = L"Элемент";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Montserrat", 10));
			this->label9->Location = System::Drawing::Point(1155, 101);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(97, 20);
			this->label9->TabIndex = 48;
			this->label9->Text = L"Количество";
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Montserrat", 9));
			this->button8->Location = System::Drawing::Point(586, 101);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(235, 24);
			this->button8->TabIndex = 49;
			this->button8->Text = L"Создать";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MainForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Montserrat", 9));
			this->button9->Location = System::Drawing::Point(835, 101);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(235, 24);
			this->button9->TabIndex = 50;
			this->button9->Text = L"Очистить";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MainForm::button9_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Montserrat", 18));
			this->label10->Location = System::Drawing::Point(703, 56);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(239, 33);
			this->label10->TabIndex = 51;
			this->label10->Text = L"Бинарное дерево";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1311, 647);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->button9);
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
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MainForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		// Локализация
	private: System::Void английскийToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) { // английский
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
private: System::Void русскийToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) { // русский
	try
	{
		this->Controls->Clear();
		CultureInfo::CurrentUICulture = gcnew CultureInfo("");
		CultureInfo::CurrentCulture = gcnew CultureInfo("");
		InitializeComponent();
	}
	catch (System::Exception^ exception)
	{
		MessageBox::Show(exception->Message); // вывод сообщения ошибки на экран
	}
}
private: System::Void русскийToolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e) { // белорусский
	try
	{
		this->Controls->Clear();
		CultureInfo::CurrentUICulture = gcnew CultureInfo("be");
		CultureInfo::CurrentCulture = gcnew CultureInfo("be");
		InitializeComponent();
	}
	catch (System::Exception^ exception)
	{
		MessageBox::Show(exception->Message); // вывод сообщения ошибки на экран
	}
}
	   // Оформление

private: System::Void выбратьСамостоятельноToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) { // Выбрать картинку
	OpenFileDialog^ openDlg = gcnew OpenFileDialog(); // открыть окно диалога выбора файлов
	openDlg->Filter = "Image Files(*.BMP;*.JPG;*.GIF;*.PNG)|*.BMP;*.JPG;*.GIF;*.PNG|All files (*.*)|*.*"; // фильтр формата выбираемых файлов
	if (System::Windows::Forms::DialogResult::OK == openDlg->ShowDialog())
	{
		this->BackgroundImage = Image::FromFile(openDlg->FileName); // задний фон = файл (картинка) выбранная пользователем
	}
}
private: System::Void стандартныйToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) { // стандартный цвет
	this->BackColor = SystemColors::ButtonFace; // стандартный цвет заднего цвета фона
}
private: System::Void рандомныйЦветToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) { // рандмный цвет
	try
	{
		Random rn; // объявляем переменную рандом
		// рандомим константы для цвета RGB
		const int r = rn.Next(0, 255); // (min value, max value)
		const int g = rn.Next(0, 255); // (min value, max value)
		const int b = rn.Next(0, 255); // (min value, max value)
		this->BackColor = Color::FromArgb(r, g, b); // задний цвет фона = рандомный цвет из переменных r, g, b
	}
	catch (System::Exception^ exception)
	{
		MessageBox::Show(exception->Message); // вывод сообщения ошибки на экран
	}
}
private: System::Void белыйToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->BackColor = Color::White; // белый цвет заднего цвета фона
}
private: System::Void чёрныйToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->BackColor = Color::Black; // чёрный цвет заднего цвета фона
}
private: System::Void красныйToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->BackColor = Color::Red; // красный цвет заднего цвета фона
}
private: System::Void выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void оПрограммеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	coursework::HELP helpform;
	helpform.ShowDialog();
}
	private:
		int rows = 0, cols = 0, r = 0;; // размер динамически неуправляемого Сборщиком мусора массива rows (строки), cols (столбцы)
		int** arr = nullptr; // поле-указатель на целочисленный неуправляемый двумерный массив
		int* arr2 = nullptr; // поле-указатель на целочисленный неуправляемый одномерный массив arr
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) // random arr and conclusion
{
	try
	{
		this->textBox2->Clear(); // очистка текстового окна
		this->textBox3->Clear(); // очистка текстового окна
		if (arr != nullptr) // если массив не равен нулевому указателю
		{
			delete[] arr; // уничтожение массива
			arr = nullptr; // объявление массива нулевым указателем
			rows = 0; // размер строки
			cols = 0; // размер столбца
		}
		this->rows = Convert::ToInt32(this->textBox1->Text); // конвертация введённым пользователем размера строки в целочисисленное значение
		this->cols = Convert::ToInt32(this->textBox4->Text); // конвертация введённым пользователем размера столбца в целочисисленное значение
		if (rows >= 21 || cols >= 21) // ограничение на размер строк и столбцов
		{
			MessageBox::Show("Размер массива должен быть не больше 20 элементов!"); // вывод сообщения на экран
			return; // возвращаем
		}
		int** arr = new int* [cols];
		if (!arr)
		{
			MessageBox::Show("Не удаётся создать массив на " + "[" + rows.ToString() + "]" + "[" + cols.ToString() + "]" + " элементов."); // вывод сообщения на экран
			return;
		}
		for (int i = 0; i < rows; i++)
		{
			arr[i] = new int[cols];
			if (!arr[i])
			{
				MessageBox::Show("Не удаётся создать массив для строки " + i); // вывод сообщения на экран
				return;
			}
		}
		std::srand(std::time(nullptr)); // функция инициализации рандома (возвращает количество секунд, прошедших
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				arr[i][j] = 1 + rand() % (20 - 1 + 1); // формула функции рандома - a + rand() % (b - a + 1)
			}
		}
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) {
				this->textBox2->Text += arr[i][j].ToString() + "\t"; // конвертация элементов массива в строку и перенос в текстовое поле
			}
			this->textBox2->Text += "\n"; // добавление табуляции в текстовое поле
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
		MessageBox::Show(exception->Message); // вывод сообщения ошибки формата данных на экран
	}
	catch (System::Exception^ exception)
	{
		MessageBox::Show(exception->Message); // вывод сообщения ошибки на экран
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) // рандом размер массива
{
	try
	{
		std::srand(std::time(nullptr)); // функция инициализации рандома (возвращает количество секунд, прошедших
		// с 00:00:00 часов по Гринвичу, число будет меняться при каждом запуске (требуется для постоянного рандома чисел)
		Random^ rn = gcnew Random(); // объявляем переменную функцией рандом
		int a = 1 + (rn->Next()) % (20 - 1 + 1);
		int b = 1 + rand() % (20 - 1 + 1); // формула функции рандома - a + rand() % (b - a + 1)
		textBox1->Text = a.ToString(); // конвертация целочисленной переменной в строку и перенос в текстовое поле
		textBox4->Text = b.ToString(); // конвертация целочисленной переменной в строку и перенос в текстовое поле
	}
	catch (System::Exception^ exception)
	{
		MessageBox::Show(exception->Message); // вывод сообщения ошибки на экран
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) // clear
{
	try
	{
		this->textBox1->Clear(); // очистка текстового окна
		this->textBox2->Clear(); // очистка текстового окна
		this->textBox3->Clear(); // очистка текстового окна
		this->textBox4->Clear(); // очистка текстового окна
		this->textBox5->Clear(); // очистка текстового окна
		delete[] arr; // уничтожение массива
		arr = nullptr; // объявление массива нулевым указателем
		delete[] arr2; // уничтожение массива
		arr2 = nullptr; // объявление массива нулевым указателем
		r = 0;
	}
	catch (System::Exception^ exception)
	{
		MessageBox::Show(exception->Message); // вывод сообщения ошибки на экран
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) // shell sort
{
	try
	{
		this->textBox3->Clear(); // очистка текстового окна
		functions first;
		first.quickSort(this->arr2, 0, (rows * cols) - 1);
		for (int i = 0; i < (rows * cols); i++)
		{
			this->textBox3->Text += arr2[i].ToString() + "\t";
		}
	}
	catch (System::FormatException^ exception)
	{
		MessageBox::Show(exception->Message); // вывод сообщения ошибки формата данных на экран
	}
	catch (System::Exception^ exception)
	{
		MessageBox::Show(exception->Message); // вывод сообщения ошибки на экран
	}
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) // создание массива
{
	try
	{
		this->textBox2->Clear(); // очистка текстового окна
		this->textBox3->Clear(); // очистка текстового окна
		if (arr != nullptr)
		{
			delete[] arr; // уничтожение массива
			arr = nullptr; // объявление массива нулевым указателем
			rows = 0; // размер строки
			cols = 0; // размер столбца
		}
		this->rows = Convert::ToInt32(this->textBox1->Text);
		this->cols = Convert::ToInt32(this->textBox4->Text);
		if (rows >= 21 || cols >= 21) // ограничение на размер строк и столбцов
		{
			MessageBox::Show("Размер массива должен быть не больше 20 элементов!"); // вывод сообщения на экран
			return; // возвращаем
		}
		int** arr = new int* [cols];
		if (!arr)
		{
			MessageBox::Show("Не удаётся создать массив на " + "[" + rows.ToString() + "]" + "[" + cols.ToString() + "]" + " элементов."); // вывод сообщения на экран
			return; // возвращаем
		}
		for (int i = 0; i < rows; i++)
		{
			arr[i] = new int[cols];
			if (!arr[i])
			{
				MessageBox::Show("Не удаётся создать массив для строки " + i); // вывод сообщения на экран
				return; // возвращаем
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
		MessageBox::Show(exception->Message); // вывод сообщения ошибки формата данных на экран
	}
	catch (System::Exception^ exception)
	{
		MessageBox::Show(exception->Message); // вывод сообщения ошибки на экран
	}
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e)
{
	try
	{
		this->textBox2->Clear(); // очистка текстового окна
		this->textBox3->Clear(); // очистка текстового окна
		for (int i = 0; i < (rows * cols); i++) // цикл будет выполняться до тех пор, пока он не пройдётся по всему массиву
		{
			this->textBox2->Text += arr2[i].ToString() + "\t";
		}
		if (r < rows * cols && rows * cols > 0)
		{
			arr2[r] = Convert::ToInt32(this->textBox5->Text); // конвертация введённым пользоваталем ключа ячейки в целочисленное значение
			r++; // r += 1
		}
		else
		{
			MessageBox::Show("Массив размерности [" + rows.ToString() + "]" + "[" + cols.ToString() + "] заполнен или не создан."); // вывод сообщения на экран
		}
	}
	catch (System::FormatException^ exception)
	{
		MessageBox::Show(exception->Message); // вывод сообщения ошибки формата данных на экран
	}
	catch (System::Exception^ exception)
	{
		MessageBox::Show(exception->Message); // вывод сообщения ошибки на экран
	}
}
private: System::Void чтениеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) { // чтение файла
	textBox2->Clear();
	textBox3->Clear();
	delete[] arr; // уничтожение массива
	arr = nullptr; // объявление массива нулевым указателем
	delete[] arr2; // уничтожение массива
	arr2 = nullptr; // объявление массива нулевым указателем
	r = 0;
	String^ FileName = ""; // переменная для хранения пути к файлу
	if (openFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK) // открываем диалоговое окно если
		// пользователь нажал "ОК"
	{
		FileName = openFileDialog1->FileName; // записываем путь к выбранному файлу
	}
	try
	{
		StreamReader^ file = File::OpenText(FileName); // открываем файл
		textBox2->Text = file->ReadToEnd(); // записываем содержимое файла в текстовое поле
	}
	catch (System::Exception^ exception)
	{
		MessageBox::Show(exception->Message); // вывод сообщения ошибки на экран
	}
}
private: System::Void записьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) { // запись файла
	StreamWriter^ f = gcnew StreamWriter("test.txt", true);
	f->Write(textBox2->Text);
	f->Close();
	MessageBox::Show(this, "Файл успешно сохранён", "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Information);
	textBox2->Text = "";
}

// Бинарное дерево и поиск

	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) { // бинарный поиск
		//try
		//{
		//	functions second; // объявление экземпляра структуры
		//	int key = 0; // целочисленный ключ ячейки, т.е. искомая переменная
		//	int index = 0; // целочисленный индекс ячейки с искомым значением
		//	key = Convert::ToInt32(this->textBox6->Text); // конвертация введённым пользоваталем ключа ячейки в целочисленное значение
		//	index = second.Search_Binary(arr2, 0, rows * cols, key); // функция бинарного поиска
		//	if (index >= 0) // если индекс больше или равен нулю
		//	{
		//		MessageBox::Show("Индекс элемента " + key + " в массиве равен: " + index); // вывод сообщения на экран
		//	}
		//	else // иначе
		//	{
		//		MessageBox::Show("Извините, но такого элемента в массиве нет"); // вывод сообщения на экран
		//	}
		//}
		//catch (System::FormatException^ exception)
		//{
		//	MessageBox::Show(exception->Message); // вывод сообщения ошибки формата данных на экран
		//}
		//catch (System::Exception^ exception)
		//{
		//	MessageBox::Show(exception->Message); // вывод сообщения ошибки на экран
		//}
		if (textBox6->Text->Length != 0)
		{
			int number = 0;
			if (!Int32::TryParse(textBox6->Text, number))
			{
				MessageBox::Show(L"Осторожно! Ошибка преобразования");
				return;
			}
			bTree->Search(number) ?
				MessageBox::Show(L"Элемент найден") : MessageBox::Show(L"Элемент не найден");
		}
		else
			MessageBox::Show(L"Введите элемент для поиска!");
	}
		   void ClearAll()
		   {
			   panel1->Controls->Clear();
			   panel1->Refresh();
			   richTextBox1->Clear();
			   bTree->Clear();
		   }

private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	Graphics^ panelGraphics = panel1->CreateGraphics();

	int startX = 0, startY = 0;
	int curX = 0, curY = 0;

	/*for (int i = 0; i < 15; i++)
	{
		bTree->AddItem((double)rand() / (RAND_MAX + 1) * (100 - (-100)) + (-100));
	}*/
	for (int i = 0; i < rows*cols; i++)
	{
		bTree->AddItem(arr2[i]);
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

		richTextBox1->AppendText(String::Format("  {0}          {1}\r\n", item->Data, item->Count));
	}
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	ClearAll();
}
};
}
