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
	/// Сводка для MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(User^ user) // конструктор с параметром, принимает тип User
		{
			InitializeComponent();
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

	private: System::Windows::Forms::Label^ label10;






	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
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
			this->чтениеИЗаписьФайловToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->чтениеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->записьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->оПрограммеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
				this->менюToolStripMenuItem,
					this->чтениеИЗаписьФайловToolStripMenuItem, this->оПрограммеToolStripMenuItem
			});
			resources->ApplyResources(this->menuStrip1, L"menuStrip1");
			this->menuStrip1->Name = L"menuStrip1";
			// 
			// менюToolStripMenuItem
			// 
			this->менюToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->локализацияToolStripMenuItem,
					this->оформлениеToolStripMenuItem, this->выходToolStripMenuItem
			});
			this->менюToolStripMenuItem->Name = L"менюToolStripMenuItem";
			resources->ApplyResources(this->менюToolStripMenuItem, L"менюToolStripMenuItem");
			// 
			// локализацияToolStripMenuItem
			// 
			this->локализацияToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->английскийToolStripMenuItem1,
					this->русскийToolStripMenuItem2, this->русскийToolStripMenuItem3
			});
			this->локализацияToolStripMenuItem->Name = L"локализацияToolStripMenuItem";
			resources->ApplyResources(this->локализацияToolStripMenuItem, L"локализацияToolStripMenuItem");
			// 
			// английскийToolStripMenuItem1
			// 
			this->английскийToolStripMenuItem1->Name = L"английскийToolStripMenuItem1";
			resources->ApplyResources(this->английскийToolStripMenuItem1, L"английскийToolStripMenuItem1");
			this->английскийToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MainForm::английскийToolStripMenuItem1_Click);
			// 
			// русскийToolStripMenuItem2
			// 
			this->русскийToolStripMenuItem2->Name = L"русскийToolStripMenuItem2";
			resources->ApplyResources(this->русскийToolStripMenuItem2, L"русскийToolStripMenuItem2");
			this->русскийToolStripMenuItem2->Click += gcnew System::EventHandler(this, &MainForm::русскийToolStripMenuItem2_Click);
			// 
			// русскийToolStripMenuItem3
			// 
			this->русскийToolStripMenuItem3->Name = L"русскийToolStripMenuItem3";
			resources->ApplyResources(this->русскийToolStripMenuItem3, L"русскийToolStripMenuItem3");
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
			resources->ApplyResources(this->оформлениеToolStripMenuItem, L"оформлениеToolStripMenuItem");
			// 
			// выбратьСамостоятельноToolStripMenuItem
			// 
			this->выбратьСамостоятельноToolStripMenuItem->Name = L"выбратьСамостоятельноToolStripMenuItem";
			resources->ApplyResources(this->выбратьСамостоятельноToolStripMenuItem, L"выбратьСамостоятельноToolStripMenuItem");
			this->выбратьСамостоятельноToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::выбратьСамостоятельноToolStripMenuItem_Click);
			// 
			// стандартныйToolStripMenuItem
			// 
			this->стандартныйToolStripMenuItem->Name = L"стандартныйToolStripMenuItem";
			resources->ApplyResources(this->стандартныйToolStripMenuItem, L"стандартныйToolStripMenuItem");
			this->стандартныйToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::стандартныйToolStripMenuItem_Click);
			// 
			// рандомныйЦветToolStripMenuItem
			// 
			this->рандомныйЦветToolStripMenuItem->Name = L"рандомныйЦветToolStripMenuItem";
			resources->ApplyResources(this->рандомныйЦветToolStripMenuItem, L"рандомныйЦветToolStripMenuItem");
			this->рандомныйЦветToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::рандомныйЦветToolStripMenuItem_Click);
			// 
			// белыйToolStripMenuItem
			// 
			this->белыйToolStripMenuItem->Name = L"белыйToolStripMenuItem";
			resources->ApplyResources(this->белыйToolStripMenuItem, L"белыйToolStripMenuItem");
			this->белыйToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::белыйToolStripMenuItem_Click);
			// 
			// чёрныйToolStripMenuItem
			// 
			this->чёрныйToolStripMenuItem->Name = L"чёрныйToolStripMenuItem";
			resources->ApplyResources(this->чёрныйToolStripMenuItem, L"чёрныйToolStripMenuItem");
			this->чёрныйToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::чёрныйToolStripMenuItem_Click);
			// 
			// красныйToolStripMenuItem
			// 
			this->красныйToolStripMenuItem->Name = L"красныйToolStripMenuItem";
			resources->ApplyResources(this->красныйToolStripMenuItem, L"красныйToolStripMenuItem");
			this->красныйToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::красныйToolStripMenuItem_Click);
			// 
			// выходToolStripMenuItem
			// 
			this->выходToolStripMenuItem->Name = L"выходToolStripMenuItem";
			resources->ApplyResources(this->выходToolStripMenuItem, L"выходToolStripMenuItem");
			this->выходToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::выходToolStripMenuItem_Click);
			// 
			// чтениеИЗаписьФайловToolStripMenuItem
			// 
			this->чтениеИЗаписьФайловToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->чтениеToolStripMenuItem,
					this->записьToolStripMenuItem
			});
			this->чтениеИЗаписьФайловToolStripMenuItem->Name = L"чтениеИЗаписьФайловToolStripMenuItem";
			resources->ApplyResources(this->чтениеИЗаписьФайловToolStripMenuItem, L"чтениеИЗаписьФайловToolStripMenuItem");
			// 
			// чтениеToolStripMenuItem
			// 
			this->чтениеToolStripMenuItem->Name = L"чтениеToolStripMenuItem";
			resources->ApplyResources(this->чтениеToolStripMenuItem, L"чтениеToolStripMenuItem");
			this->чтениеToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::чтениеToolStripMenuItem_Click);
			// 
			// записьToolStripMenuItem
			// 
			this->записьToolStripMenuItem->Name = L"записьToolStripMenuItem";
			resources->ApplyResources(this->записьToolStripMenuItem, L"записьToolStripMenuItem");
			this->записьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::записьToolStripMenuItem_Click);
			// 
			// оПрограммеToolStripMenuItem
			// 
			this->оПрограммеToolStripMenuItem->Name = L"оПрограммеToolStripMenuItem";
			resources->ApplyResources(this->оПрограммеToolStripMenuItem, L"оПрограммеToolStripMenuItem");
			this->оПрограммеToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::оПрограммеToolStripMenuItem_Click);
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
		// Локализация
	private: System::Void английскийToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) { // английский
		try
		{
			this->Controls->Clear();
			CultureInfo::CurrentUICulture = gcnew CultureInfo("en-US");
			CultureInfo::CurrentCulture = gcnew CultureInfo("en-US");
			InitializeComponent(); // инициализирует объекты пользовательского интерфейса
		}
		catch (System::Exception^ exception)
		{
			MessageBox::Show(exception->Message); // вывод сообщения ошибки на экран
		}
	}
	private: System::Void русскийToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) { // русский
		try
		{
			this->Controls->Clear();
			CultureInfo::CurrentUICulture = gcnew CultureInfo("");
			CultureInfo::CurrentCulture = gcnew CultureInfo("");
			InitializeComponent(); // инициализирует объекты пользовательского интерфейса
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
			InitializeComponent(); // инициализирует объекты пользовательского интерфейса
		}
		catch (System::Exception^ exception)
		{
			MessageBox::Show(exception->Message); // вывод сообщения ошибки на экран
		}
	}

		   // Оформление
	private: System::Void выбратьСамостоятельноToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) { // выбрать картинку
		try
		{
			OpenFileDialog^ openDlg = gcnew OpenFileDialog(); // открыть окно диалога выбора файлов
			openDlg->Filter = "Image Files(*.BMP;*.JPG;*.GIF;*.PNG)|*.BMP;*.JPG;*.GIF;*.PNG|All files (*.*)|*.*"; // фильтр формата выбираемых картинок
			if (System::Windows::Forms::DialogResult::OK == openDlg->ShowDialog())
			{
				this->BackgroundImage = Image::FromFile(openDlg->FileName); // задний фон = файл (картинка) выбранная пользователем
			}
		}
		catch (System::Exception^ exception)
		{
			MessageBox::Show(exception->Message); // вывод сообщения ошибки на экран
		}
	}
	private: System::Void стандартныйToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) { // стандартный цвет
		this->BackColor = SystemColors::ButtonFace; // стандартный цвет заднего цвета фона
		this->BackgroundImage = nullptr; // инициализируем нулевой указатель на картинку заднего фона
	}
	private: System::Void рандомныйЦветToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) { // рандомный цвет
		try
		{
			Random rn; // объявляем переменную рандом
			// рандомим константы для цвета RGB
			const int r = rn.Next(0, 255); // (минимальное значение, максимальное значение)
			const int g = rn.Next(0, 255); // (минимальное значение, максимальное значение)
			const int b = rn.Next(0, 255); // (минимальное значение, максимальное значение)
			this->BackColor = Color::FromArgb(r, g, b); // задний цвет фона = рандомный цвет из переменных r, g, b
		}
		catch (System::Exception^ exception)
		{
			MessageBox::Show(exception->Message); // вывод сообщения ошибки на экран
		}
	}
	private: System::Void белыйToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) { // белый цвет
		this->BackColor = Color::White; // белый цвет заднего цвета фона
	}
	private: System::Void чёрныйToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) { // чёрный цвет
		this->BackColor = Color::Black; // чёрный цвет заднего цвета фона
	}
	private: System::Void красныйToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) { // красный цвет
		this->BackColor = Color::Red; // красный цвет заднего цвета фона
	}
		   // Описание кнопки выхода и справки программы
	private: System::Void выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) { // выход из программы
		this->Close(); // закрытие формы
	}
	private: System::Void оПрограммеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) { // вывод окна справки программы
		coursework::HELP helpform; // создаём переменную для работы с формой
		helpform.ShowDialog(); // обращаемся к форме и открываем её
	}

		   // Описание работы алгоритма программы для сортировки и бинарного поиска в массиве
	private: int rows = 0, cols = 0, r = 0;  // размер динамически неуправляемого Сборщиком мусора массива rows (строки), cols (столбцы)
	private: int** arr = nullptr; // нулевой указатель на целочисленный неуправляемый двумерный массив
	private: int* arr2 = nullptr; // нулевой указатель на целочисленный неуправляемый одномерный массив

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) { // рандом массива и его вывод
		try
		{
			this->textBox2->Clear(); // очистка текстового окна
			this->textBox3->Clear(); // очистка текстового окна
			this->rows = Convert::ToInt32(this->textBox1->Text); // конвертация введённым пользователем размера строки в целочисисленное значение
			this->cols = Convert::ToInt32(this->textBox4->Text); // конвертация введённым пользователем размера столбца в целочисисленное значение
			if (rows >= 31 || cols >= 31) // ограничение на размер строк и столбцов
			{
				MessageBox::Show("Размер массива должен быть не больше 30 элементов!"); // вывод сообщения на экран
				return; // возвращаем
			}
			int** arr = new int* [cols]; // создаём указатель второго уровня на двумерный динамический массив, а его элементы - указатели на строки
			if (arr == nullptr) // если выделить участок в ДООП под массив не удалось
				// ДООП (Динамической Области Оперативной Памяти)
			{
				MessageBox::Show("Не удаётся создать массив на " + "[" + rows.ToString() + "]" + "[" + cols.ToString() + "]" + " элементов."); // вывод сообщения на экран
				return; // возвращаем
			}
			for (int i = 0; i < cols; i++) // выделяем память под столбцы массива
			{
				arr[i] = new int[rows]; // выделяем память под стобцы массива, которые состоят из "обычных" элементов типа int
				if (arr[i] == nullptr) // если под очередной столбец не удалось выделить место в ДООП
				{
					MessageBox::Show("Не удаётся создать массив для строки №" + i); // вывод сообщения на экран
					for (int j = 0; j < i; j++) // освободим участки ДООП, которые успели ранее выделить под предыдущие столбцы массива
					{
						delete[] arr[j]; // удаляем одномерный массив-столбец
					}
					delete[] arr; // удаляем указатель и двумерный массив
					arr = nullptr; // зануляем указатель, что бы он наверняка не содержал адрес области ДООП
					return; // возвращаем
				}
			}
			Random rn; // объявляем переменную функцией рандом
			for (int i = 0; i < cols; i++) // циклом проходимся по столбцам массива
			{
				for (int j = 0; j < rows; j++) // вложенным циклом проходимся по строкам массива
				{
					arr[i][j] = rn.Next(0, 101); // инициализируем рандомным значением в промежутке от 0 до 100 включительно
				}
			}
			for (int i = 0; i < cols; i++) // циклом проходимся по столбцам массива
			{
				for (int j = 0; j < rows; j++) // вложенным циклом проходимся по строкам массива
				{
					this->textBox2->Text += arr[i][j].ToString() + "\t"; // конвертация элементов массива в строку и перенос в текстовое поле с добавлением управляющего символа табуляции
				}
				this->textBox2->Text += "\n"; // добавление управляющего символа переноса на новую строку в текстовое окно
			}
			arr2 = new int[rows * cols]; // создание одномерного динамический массив
			for (int i = 0; i < cols; i++) // циклом проходимся по столбцам массива
			{
				for (int j = 0; j < rows; j++) // вложенным циклом проходимся по строкам массива
				{
					arr2[rows * i + j] = arr[i][j];
				}
			}
		}
		catch (System::FormatException^ exception)
		{
			MessageBox::Show("Неверный формат числа", "Ошибка", MessageBoxButtons::OK); // вывод сообщения ошибки формата данных на экран
		}
		catch (System::Exception^ exception)
		{
			MessageBox::Show(exception->Message); // вывод сообщения ошибки на экран
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) { // рандом размер массива
		try
		{
			Random^ rn = gcnew Random(); // объявляем переменную функцией рандом
			int a = (rn->Next(1, 31)); // инициализируем переменную рандомным значением в промежутке от 1 до 30 включительно
			int b = (rn->Next(1, 31)); // инициализируем переменную рандомным значением в промежутке от 1 до 30 включительно
			textBox1->Text = a.ToString(); // конвертация целочисленной переменной в строку и перенос в текстовое окно
			textBox4->Text = b.ToString(); // конвертация целочисленной переменной в строку и перенос в текстовое окно
		}
		catch (System::Exception^ exception)
		{
			MessageBox::Show(exception->Message); // вывод сообщения ошибки на экран
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) { // очистка текстовых окон и массивов
		try
		{
			this->textBox1->Clear(); // очистка текстового окна
			this->textBox2->Clear(); // очистка текстового окна
			this->textBox3->Clear(); // очистка текстового окна
			this->textBox4->Clear(); // очистка текстового окна
			this->textBox5->Clear(); // очистка текстового окна
			ClearAll(); // вызываем функцию очистки бинарного дерева
			delete[] arr; // уничтожение массива
			arr = nullptr; // объявление массива нулевым указателем
			delete[] arr2; // уничтожение массива
			arr2 = nullptr; // объявление массива нулевым указателем
			r = 0; // зануляем переменную
		}
		catch (System::Exception^ exception)
		{
			MessageBox::Show(exception->Message); // вывод сообщения ошибки на экран
		}
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) { // сортировка Хоара
		try
		{
			this->textBox3->Clear(); // очистка текстового окна
			functions first; // инициализируем переменную структурным типом из функций ("functions.h")
			first.quickSort(this->arr2, 0, (rows * cols) - 1); // обращаемся к переменной и вызываем нужную функцию, т.е. функцию сортировки Хоара
			for (int i = 0; i < (rows * cols); i++) // циклом проходимся по всему массиву
			{
				this->textBox3->Text += arr2[i].ToString() + "\t"; // конвертация элементов массива в строку и перенос в текстовое поле с добавлением управляющего символа табуляции
			}
		}
		catch (System::FormatException^ exception)
		{
			MessageBox::Show("Неверный формат числа", "Ошибка", MessageBoxButtons::OK); // вывод сообщения ошибки формата данных на экран
		}
		catch (System::NullReferenceException^ exception)
		{
			MessageBox::Show("Для начало создайте массив", "Ошибка", MessageBoxButtons::OK);
		}
		catch (System::Exception^ exception)
		{
			MessageBox::Show(exception->Message); // вывод сообщения ошибки на экран
		}
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) { // создание массива
		try
		{
			this->textBox2->Clear(); // очистка текстового окна
			this->textBox3->Clear(); // очистка текстового окна
			if (arr != nullptr) // если участок в ДООП уже выделен
			{
				delete[] arr; // уничтожение массива
				arr = nullptr; // объявление массива нулевым указателем
				rows = 0; // зануляем размер строки
				cols = 0; // зануляем размер столбца
			}
			r = 0;
			this->rows = Convert::ToInt32(this->textBox1->Text); // конвертация введённым пользователем размера строки в целочисисленное значение
			this->cols = Convert::ToInt32(this->textBox4->Text); // конвертация введённым пользователем размера столбца в целочисисленное значение
			if (rows >= 31 || cols >= 31) // ограничение на размер строк и столбцов
			{
				MessageBox::Show("Размер массива должен быть не больше 30 элементов!"); // вывод сообщения на экран
				return; // возвращаем
			}
			int** arr = new int* [cols]; // создаём указатель второго уровня на двумерный динамический массив, а его элементы - указатели на строки
			if (arr == nullptr) // если выделить участок в ДООП под массив не удалось
				// ДООП (Динамической Области Оперативной Памяти)
			{
				MessageBox::Show("Не удаётся создать массив на " + "[" + rows.ToString() + "]" + "[" + cols.ToString() + "]" + " элементов."); // вывод сообщения на экран
				return; // возвращаем
			}
			for (int i = 0; i < cols; i++) // выделяем память под столбцы массива
			{
				arr[i] = new int[rows]; // выделяем память под стобцы массива, которые состоят из "обычных" элементов типа int
				if (arr[i] == nullptr) // если под очередной столбец не удалось выделить место в ДООП
				{
					MessageBox::Show("Не удаётся создать массив для строки №" + i); // вывод сообщения на экран
					for (int j = 0; j < i; j++) // освободим участки ДООП, которые успели ранее выделить под предыдущие столбцы массива
					{
						delete[] arr[j]; // удаляем одномерный массив-столбец
					}
					delete[] arr; // удаляем указатель и двумерный массив
					arr = nullptr; // зануляем указатель, что бы он наверняка не содержал адрес области ДООП
					return; // возвращаем
				}
			}
			for (int i = 0; i < cols; i++)
			{
				for (int j = 0; j < rows; j++)
				{
					arr[i][j] = NULL;
				}
			}
			arr2 = new int[rows * cols]; // создание одномерного динамический массив
			for (int i = 0; i < cols; i++) // циклом проходимся по столбцам массива
			{
				for (int j = 0; j < rows; j++) // вложенным циклом проходимся по строкам массива
				{
					arr2[rows * i + j] = arr[i][j];
				}
			}
			for (int i = 0; i < (rows * cols); i++) // цикл будет выполняться до тех пор, пока он не пройдётся по всему массиву
			{
				this->textBox2->Text += arr2[i].ToString() + "\t"; // конвертация элементов массива в строку и перенос в текстовое поле с добавлением управляющего символа табуляции
			}
		}
		catch (System::FormatException^ exception)
		{
			MessageBox::Show("Неверный формат числа", "Ошибка", MessageBoxButtons::OK); // вывод сообщения ошибки формата данных на экран
		}
		catch (System::Exception^ exception)
		{
			MessageBox::Show(exception->Message); // вывод сообщения ошибки на экран
		}
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) { // кнопка "Добавления элемента в массив"
		try
		{
			this->textBox2->Clear(); // очистка текстового окна
			this->textBox3->Clear(); // очистка текстового окна
			if ((r < rows * cols) && (rows * cols > 0)) // проверка что размер массива больше нуля
			{
				arr2[r] = Convert::ToInt32(this->textBox5->Text); // конвертация введённым пользоваталем числа в целочисленное значение
				r++; // r += 1
			}
			else
			{
				MessageBox::Show("Массив размерности [" + rows.ToString() + "]" + "[" + cols.ToString() + "] заполнен или не создан."); // вывод сообщения на экран
			}
			for (int i = 0; i < (rows * cols); i++) // цикл будет выполняться до тех пор, пока он не пройдётся по всему массиву
			{
				this->textBox2->Text += arr2[i].ToString() + "\t"; // конвертация элементов массива в строку и перенос в текстовое поле с добавлением управляющего символа табуляции
			}

		}
		catch (System::FormatException^ exception)
		{
			MessageBox::Show("Неверный формат числа", "Ошибка", MessageBoxButtons::OK); // вывод сообщения ошибки формата данных на экран
		}
		catch (System::Exception^ exception)
		{
			MessageBox::Show(exception->Message); // вывод сообщения ошибки на экран
		}
	}

		   // Алгоритм чтения и записи файлов
	private: System::Void чтениеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) { // чтение файла
		textBox2->Clear(); // очистка текстового окна
		textBox3->Clear(); // очистка текстового окна
		delete[] arr; // уничтожение массива
		arr = nullptr; // объявление массива нулевым указателем
		delete[] arr2; // уничтожение массива
		arr2 = nullptr; // объявление массива нулевым указателем
		r = 0; // зануляем переменную
		String^ FileName = ""; // переменная строкового класса для хранения пути к файлу
		if (openFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK) // открываем диалоговое окно если пользователь нажал "ОК"
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
		StreamWriter^ f = gcnew StreamWriter("test.txt", true); // создаём переменную для работы с файлами и сразу же создаём файл для работы
		f->Write(textBox2->Text); // записываем в файл текст из текстового поля
		f->Close(); // закрываем файл
		MessageBox::Show(this, "Файл успешно сохранён", "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Information); // вывод сообщения на экран
		textBox2->Clear(); // очистка текстового окна
	}

		   // Алгоритм бинарного дерева и поиска
		   void ClearAll() // функция очистки бинарного дерева
		   {
			   panel1->Controls->Clear(); // очистка панели
			   panel1->Refresh(); // обновление панели
			   richTextBox1->Clear(); // очистка текстового окна
			   bTree->Clear(); // очистка бинарного дерева
		   }
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
		if (textBox6->Text->Length != 0) // проверка на то что длина текстового окна не равна нулю
		{
			int number = 0; // инициализируем переменную целочисленного типа
			if (!Int32::TryParse(textBox6->Text, number)) // парсим
			{
				MessageBox::Show(L"Осторожно! Ошибка преобразования"); // вывод сообщения на экран
				return; // возвращаем
			}
			bTree->Search(number) ? MessageBox::Show("Элемент найден") : MessageBox::Show("Элемент не найден"); // тернарный оператор, если искомый элемент найден - выводим успех, если не найден - выводим неудачу
		}
		else
		{
			MessageBox::Show("Введите элемент для поиска!", "Ошибка", MessageBoxButtons::OK); // вывод сообщения на экран
		}
	}

	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) { // визуализация бинарного дерева
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
					MessageBox::Show("Для начала создайте массив", "Внимание");
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
				MessageBox::Show(exception->Message); // вывод сообщения ошибки на экран
			}
	}
	};
}