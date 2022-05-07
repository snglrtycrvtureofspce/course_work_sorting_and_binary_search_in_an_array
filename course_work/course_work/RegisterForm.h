#pragma once
#include "User.h"	

namespace coursework {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient; // namespace to connect SQL database

	/// <summary>
	/// Ñâîäêà äëÿ RegisterForm
	/// </summary>
	public ref class RegisterForm : public System::Windows::Forms::Form
	{
	public:
		RegisterForm(void)
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
		~RegisterForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ tbEmail;
	private: System::Windows::Forms::TextBox^ tbPhone;
	private: System::Windows::Forms::TextBox^ tbPassword;



	private: System::Windows::Forms::TextBox^ tbName;
	private: System::Windows::Forms::TextBox^ tbAddress;
	private: System::Windows::Forms::TextBox^ tbConfirmPassword;
	private: System::Windows::Forms::Button^ btnReg;
	private: System::Windows::Forms::Button^ llogin;
	private: System::Windows::Forms::Label^ label7;



	private: System::Windows::Forms::ToolStripMenuItem^ àíãëèéñêèéToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ğóññêèéToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ğóññêèéToolStripMenuItem1;









	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
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






	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(RegisterForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tbEmail = (gcnew System::Windows::Forms::TextBox());
			this->tbPhone = (gcnew System::Windows::Forms::TextBox());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->tbName = (gcnew System::Windows::Forms::TextBox());
			this->tbAddress = (gcnew System::Windows::Forms::TextBox());
			this->tbConfirmPassword = (gcnew System::Windows::Forms::TextBox());
			this->btnReg = (gcnew System::Windows::Forms::Button());
			this->llogin = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->àíãëèéñêèéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ğóññêèéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ğóññêèéToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->label1->Location = System::Drawing::Point(137, 115);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(63, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Èìÿ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->label2->Location = System::Drawing::Point(136, 148);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(83, 29);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Ïî÷òà";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->label3->Location = System::Drawing::Point(137, 185);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(211, 29);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Íîìåğ òåëåôîíà";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->label4->Location = System::Drawing::Point(137, 216);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(82, 29);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Àäğåñ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->label5->Location = System::Drawing::Point(137, 247);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(99, 29);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Ïàğîëü";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->label6->Location = System::Drawing::Point(137, 278);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(292, 29);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Ïîäòâåğæäåíèå ïàğîëÿ";
			// 
			// tbEmail
			// 
			this->tbEmail->Location = System::Drawing::Point(435, 157);
			this->tbEmail->Multiline = true;
			this->tbEmail->Name = L"tbEmail";
			this->tbEmail->Size = System::Drawing::Size(308, 20);
			this->tbEmail->TabIndex = 6;
			// 
			// tbPhone
			// 
			this->tbPhone->Location = System::Drawing::Point(435, 190);
			this->tbPhone->Multiline = true;
			this->tbPhone->Name = L"tbPhone";
			this->tbPhone->Size = System::Drawing::Size(308, 20);
			this->tbPhone->TabIndex = 7;
			// 
			// tbPassword
			// 
			this->tbPassword->Location = System::Drawing::Point(435, 252);
			this->tbPassword->Multiline = true;
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->PasswordChar = '*';
			this->tbPassword->Size = System::Drawing::Size(308, 20);
			this->tbPassword->TabIndex = 8;
			// 
			// tbName
			// 
			this->tbName->Location = System::Drawing::Point(435, 124);
			this->tbName->Multiline = true;
			this->tbName->Name = L"tbName";
			this->tbName->Size = System::Drawing::Size(308, 20);
			this->tbName->TabIndex = 9;
			this->tbName->TextChanged += gcnew System::EventHandler(this, &RegisterForm::tbName_TextChanged);
			// 
			// tbAddress
			// 
			this->tbAddress->Location = System::Drawing::Point(435, 221);
			this->tbAddress->Multiline = true;
			this->tbAddress->Name = L"tbAddress";
			this->tbAddress->Size = System::Drawing::Size(308, 20);
			this->tbAddress->TabIndex = 10;
			// 
			// tbConfirmPassword
			// 
			this->tbConfirmPassword->Location = System::Drawing::Point(435, 283);
			this->tbConfirmPassword->Multiline = true;
			this->tbConfirmPassword->Name = L"tbConfirmPassword";
			this->tbConfirmPassword->PasswordChar = '*';
			this->tbConfirmPassword->Size = System::Drawing::Size(308, 20);
			this->tbConfirmPassword->TabIndex = 11;
			// 
			// btnReg
			// 
			this->btnReg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F));
			this->btnReg->Location = System::Drawing::Point(501, 330);
			this->btnReg->Name = L"btnReg";
			this->btnReg->Size = System::Drawing::Size(242, 48);
			this->btnReg->TabIndex = 12;
			this->btnReg->Text = L"Çàğåãèñòğèğîâàòüñÿ";
			this->btnReg->UseVisualStyleBackColor = true;
			this->btnReg->Click += gcnew System::EventHandler(this, &RegisterForm::btnReg_Click);
			// 
			// llogin
			// 
			this->llogin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F));
			this->llogin->Location = System::Drawing::Point(142, 330);
			this->llogin->Name = L"llogin";
			this->llogin->Size = System::Drawing::Size(242, 48);
			this->llogin->TabIndex = 13;
			this->llogin->Text = L"Âåğíóòüñÿ ê ëîãèíó";
			this->llogin->UseVisualStyleBackColor = true;
			this->llogin->Click += gcnew System::EventHandler(this, &RegisterForm::llogin_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 38, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(228, 36);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(327, 59);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Ğåãèñòğàöèÿ";
			// 
			// àíãëèéñêèéToolStripMenuItem
			// 
			this->àíãëèéñêèéToolStripMenuItem->Name = L"àíãëèéñêèéToolStripMenuItem";
			this->àíãëèéñêèéToolStripMenuItem->Size = System::Drawing::Size(146, 22);
			this->àíãëèéñêèéToolStripMenuItem->Text = L"Àíãëèéñêèé";
			// 
			// ğóññêèéToolStripMenuItem
			// 
			this->ğóññêèéToolStripMenuItem->Name = L"ğóññêèéToolStripMenuItem";
			this->ğóññêèéToolStripMenuItem->Size = System::Drawing::Size(146, 22);
			this->ğóññêèéToolStripMenuItem->Text = L"Áåëîğóññêèé";
			// 
			// ğóññêèéToolStripMenuItem1
			// 
			this->ğóññêèéToolStripMenuItem1->Name = L"ğóññêèéToolStripMenuItem1";
			this->ğóññêèéToolStripMenuItem1->Size = System::Drawing::Size(146, 22);
			this->ğóññêèéToolStripMenuItem1->Text = L"Ğóññêèé";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(100, 119);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(31, 25);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 16;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(100, 152);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(31, 25);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 17;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(100, 185);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(31, 25);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 18;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(100, 216);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(31, 25);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 19;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(100, 247);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(31, 25);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 20;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(100, 278);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(31, 25);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 21;
			this->pictureBox6->TabStop = false;
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
			this->menuStrip1->TabIndex = 22;
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
			this->àíãëèéñêèéToolStripMenuItem1->Click += gcnew System::EventHandler(this, &RegisterForm::àíãëèéñêèéToolStripMenuItem1_Click);
			// 
			// ğóññêèéToolStripMenuItem2
			// 
			this->ğóññêèéToolStripMenuItem2->Name = L"ğóññêèéToolStripMenuItem2";
			this->ğóññêèéToolStripMenuItem2->Size = System::Drawing::Size(146, 22);
			this->ğóññêèéToolStripMenuItem2->Text = L"Áåëîğóññêèé";
			this->ğóññêèéToolStripMenuItem2->Click += gcnew System::EventHandler(this, &RegisterForm::ğóññêèéToolStripMenuItem2_Click);
			// 
			// ğóññêèéToolStripMenuItem3
			// 
			this->ğóññêèéToolStripMenuItem3->Name = L"ğóññêèéToolStripMenuItem3";
			this->ğóññêèéToolStripMenuItem3->Size = System::Drawing::Size(146, 22);
			this->ğóññêèéToolStripMenuItem3->Text = L"Ğóññêèé";
			this->ğóññêèéToolStripMenuItem3->Click += gcnew System::EventHandler(this, &RegisterForm::ğóññêèéToolStripMenuItem3_Click);
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
			this->âûáğàòüÑàìîñòîÿòåëüíîToolStripMenuItem->Click += gcnew System::EventHandler(this, &RegisterForm::âûáğàòüÑàìîñòîÿòåëüíîToolStripMenuItem_Click);
			// 
			// ñòàíäàğòíûéToolStripMenuItem
			// 
			this->ñòàíäàğòíûéToolStripMenuItem->Name = L"ñòàíäàğòíûéToolStripMenuItem";
			this->ñòàíäàğòíûéToolStripMenuItem->Size = System::Drawing::Size(275, 22);
			this->ñòàíäàğòíûéToolStripMenuItem->Text = L"Ñòàíäàğòíûé";
			this->ñòàíäàğòíûéToolStripMenuItem->Click += gcnew System::EventHandler(this, &RegisterForm::ñòàíäàğòíûéToolStripMenuItem_Click);
			// 
			// ğàíäîìíûéÖâåòToolStripMenuItem
			// 
			this->ğàíäîìíûéÖâåòToolStripMenuItem->Name = L"ğàíäîìíûéÖâåòToolStripMenuItem";
			this->ğàíäîìíûéÖâåòToolStripMenuItem->Size = System::Drawing::Size(275, 22);
			this->ğàíäîìíûéÖâåòToolStripMenuItem->Text = L"Ğàíäîìíûé öâåò";
			this->ğàíäîìíûéÖâåòToolStripMenuItem->Click += gcnew System::EventHandler(this, &RegisterForm::ğàíäîìíûéÖâåòToolStripMenuItem_Click);
			// 
			// áåëûéToolStripMenuItem
			// 
			this->áåëûéToolStripMenuItem->Name = L"áåëûéToolStripMenuItem";
			this->áåëûéToolStripMenuItem->Size = System::Drawing::Size(275, 22);
			this->áåëûéToolStripMenuItem->Text = L"Áåëûé";
			this->áåëûéToolStripMenuItem->Click += gcnew System::EventHandler(this, &RegisterForm::áåëûéToolStripMenuItem_Click);
			// 
			// ÷¸ğíûéToolStripMenuItem
			// 
			this->÷¸ğíûéToolStripMenuItem->Name = L"÷¸ğíûéToolStripMenuItem";
			this->÷¸ğíûéToolStripMenuItem->Size = System::Drawing::Size(275, 22);
			this->÷¸ğíûéToolStripMenuItem->Text = L"×¸ğíûé";
			this->÷¸ğíûéToolStripMenuItem->Click += gcnew System::EventHandler(this, &RegisterForm::÷¸ğíûéToolStripMenuItem_Click);
			// 
			// êğàñíûéToolStripMenuItem
			// 
			this->êğàñíûéToolStripMenuItem->Name = L"êğàñíûéToolStripMenuItem";
			this->êğàñíûéToolStripMenuItem->Size = System::Drawing::Size(275, 22);
			this->êğàñíûéToolStripMenuItem->Text = L"Êğàñíûé";
			this->êğàñíûéToolStripMenuItem->Click += gcnew System::EventHandler(this, &RegisterForm::êğàñíûéToolStripMenuItem_Click);
			// 
			// âûõîäToolStripMenuItem
			// 
			this->âûõîäToolStripMenuItem->Name = L"âûõîäToolStripMenuItem";
			this->âûõîäToolStripMenuItem->Size = System::Drawing::Size(148, 22);
			this->âûõîäToolStripMenuItem->Text = L"Âûõîä";
			// 
			// îÏğîãğàììåToolStripMenuItem
			// 
			this->îÏğîãğàììåToolStripMenuItem->Name = L"îÏğîãğàììåToolStripMenuItem";
			this->îÏğîãğàììåToolStripMenuItem->Size = System::Drawing::Size(94, 19);
			this->îÏğîãğàììåToolStripMenuItem->Text = L"Î ïğîãğàììå";
			// 
			// RegisterForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(784, 461);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->llogin);
			this->Controls->Add(this->btnReg);
			this->Controls->Add(this->tbConfirmPassword);
			this->Controls->Add(this->tbAddress);
			this->Controls->Add(this->tbName);
			this->Controls->Add(this->tbPassword);
			this->Controls->Add(this->tbPhone);
			this->Controls->Add(this->tbEmail);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"RegisterForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Ğåãèñòğàöèÿ";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		// Register
	public: User^ user = nullptr;
	private: System::Void btnReg_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ name = tbName->Text;
		String^ email = tbEmail->Text;
		String^ phone = tbPhone->Text;
		String^ address = tbAddress->Text;
		String^ password = tbPassword->Text;
		String^ confirmPassword = tbConfirmPassword->Text;

		if (name->Length == 0 || email->Length == 0 || phone->Length == 0 || address->Length == 0 || password->Length == 0)
		{
			MessageBox::Show("Please enter all the fields", "On or more empty fields", MessageBoxButtons::OK);
			return;
		}
		if (String::Compare(password, confirmPassword) != 0)
		{
			MessageBox::Show("Password and Confirm Password do not match", "Password Error", MessageBoxButtons::OK);
			return;
		}
		try
		{
			String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=courseWORK;Integrated Security=True";
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			String^ sqlQuery = "INSERT INTO users " + "(name, email, phone, address, password) VALUES " + "(@name, @email, @phone, @address, @password);";
			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@name", name);
			command.Parameters->AddWithValue("@email", email);
			command.Parameters->AddWithValue("@phone", phone);
			command.Parameters->AddWithValue("@address", address);
			command.Parameters->AddWithValue("@password", password);

			command.ExecuteNonQuery();
			user = gcnew User;
			user->name = name;
			user->email = email;
			user->phone = phone;
			user->address = address;
			user->password = password;
			this->Close();
		}
		catch (Exception^ exception)
		{
			MessageBox::Show("Failed to register new user", "Register Failure", MessageBoxButtons::OK);
		}
	}
		   // SwitchToLogin button
	public: bool switchToLogin = false;
	private: System::Void llogin_Click(System::Object^ sender, System::EventArgs^ e) {
		this->switchToLogin = true;
		this->Close();
	}
		   // Localization
	private: System::Void àíãëèéñêèéToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) // English
	{
		try
		{
			// General
			this->Text = "Authorization and authentication";
			this->ìåíşToolStripMenuItem->Text = "Menu";
			this->ëîêàëèçàöèÿToolStripMenuItem->Text = "Localization";
			this->îôîğìëåíèåToolStripMenuItem->Text = "Design";
			this->âûõîäToolStripMenuItem->Text = "Exit";
			this->îÏğîãğàììåToolStripMenuItem->Text = "About the program";
			// Localization subgroup
			this->àíãëèéñêèéToolStripMenuItem->Text = "English";
			this->ğóññêèéToolStripMenuItem->Text = "Belorussian";
			this->ğóññêèéToolStripMenuItem1->Text = "Russian";
			// Design subgroup
			this->âûáğàòüÑàìîñòîÿòåëüíîToolStripMenuItem->Text = "Choose by yourself";
			this->ñòàíäàğòíûéToolStripMenuItem->Text = "Standard";
			this->ğàíäîìíûéÖâåòToolStripMenuItem->Text = "Random color";
			this->áåëûéToolStripMenuItem->Text = "White";
			this->÷¸ğíûéToolStripMenuItem->Text = "Black";
			this->êğàñíûéToolStripMenuItem->Text = "Red";
			// Other
			this->llogin->Text = "Login";
			this->btnReg->Text = "Register";
		}
		catch (System::Exception^ exception)
		{
			MessageBox::Show(exception->Message);
		}
	}
	private: System::Void ğóññêèéToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) // Belarussian
	{
		try
		{
			// General
			this->Text = "À¢òàğûçàöûÿ ³ à¢òıíòûô³êàöûÿ";
			this->ìåíşToolStripMenuItem->Text = "Ìåíş";
			this->ëîêàëèçàöèÿToolStripMenuItem->Text = "Ëàêàë³çàöûÿ";
			this->îôîğìëåíèåToolStripMenuItem->Text = "Àôàğìëåííå";
			this->âûõîäToolStripMenuItem->Text = "Âûõàä";
			this->îÏğîãğàììåToolStripMenuItem->Text = "Àá ïğàãğàìå";
			// Localization subgroup
			this->àíãëèéñêèéToolStripMenuItem->Text = "Àíãë³éñêàÿ";
			this->ğóññêèéToolStripMenuItem->Text = "Áåëàğóñê³";
			this->ğóññêèéToolStripMenuItem1->Text = "Ğóñê³";
			// Design subgroup
			this->âûáğàòüÑàìîñòîÿòåëüíîToolStripMenuItem->Text = "Âûáğàöü ñàìàñòîéíà (ìàëşíà÷àê)";
			this->ñòàíäàğòíûéToolStripMenuItem->Text = "Ñòàíäàğòíû";
			this->ğàíäîìíûéÖâåòToolStripMenuItem->Text = "Ğàíäîìíû êîëåğ";
			this->áåëûéToolStripMenuItem->Text = "Áåëû";
			this->÷¸ğíûéToolStripMenuItem->Text = "×îğíû";
			this->êğàñíûéToolStripMenuItem->Text = "×ûğâîíû";
			// Other
			this->llogin->Text = "Ëàã³í";
			this->btnReg->Text = "Ğıã³ñòğàöûÿ";
		}
		catch (System::Exception^ exception)
		{
			MessageBox::Show(exception->Message);
		}
	}
	private: System::Void ğóññêèéToolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e) // Russian
	{
		try
		{
			// General
			this->Text = "Àâòîğèçàöèÿ è àóòåíòèôèêàöèÿ";
			this->ìåíşToolStripMenuItem->Text = "Ìåíş";
			this->ëîêàëèçàöèÿToolStripMenuItem->Text = "Ëîêàëèçàöèÿ";
			this->îôîğìëåíèåToolStripMenuItem->Text = "Îôîğìëåíèå";
			this->âûõîäToolStripMenuItem->Text = "Âûõîä";
			this->îÏğîãğàììåToolStripMenuItem->Text = "Î ïğîãğàììå";
			// Localization subgroup
			this->àíãëèéñêèéToolStripMenuItem->Text = "Àíãëèéñêèé";
			this->ğóññêèéToolStripMenuItem->Text = "Áåëîğóññêèé";
			this->ğóññêèéToolStripMenuItem1->Text = "Ğóññêèé";
			// Design subgroup
			this->âûáğàòüÑàìîñòîÿòåëüíîToolStripMenuItem->Text = "Âûáğàòü ñàìîñòîÿòåëüíî (êàğòèíêà)";
			this->ñòàíäàğòíûéToolStripMenuItem->Text = "Ñòàíäàğòíûé";
			this->ğàíäîìíûéÖâåòToolStripMenuItem->Text = "Ğàíäîìíûé öâåò";
			this->áåëûéToolStripMenuItem->Text = "Áåëûé";
			this->÷¸ğíûéToolStripMenuItem->Text = "×¸ğíûé";
			this->êğàñíûéToolStripMenuItem->Text = "Êğàñíûé";
			// Other
			this->llogin->Text = "Ëîãèí";
			this->btnReg->Text = "Ğåãèñòğàöèÿ";
		}
		catch (System::Exception^ exception)
		{
			MessageBox::Show(exception->Message);
		}
	}
		   // Design

	private: System::Void âûáğàòüÑàìîñòîÿòåëüíîToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
		{

	}
private: System::Void ñòàíäàğòíûéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
		{

}
private: System::Void ğàíäîìíûéÖâåòToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
		{

}
private: System::Void áåëûéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
		{

}
private: System::Void ÷¸ğíûéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
		{

}
private: System::Void êğàñíûéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tbName_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
