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

	using namespace System::Globalization; // UICulture
	using namespace System::Threading; // UICulture
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
			resources->ApplyResources(this->label1, L"label1");
			this->label1->Name = L"label1";
			// 
			// label2
			// 
			resources->ApplyResources(this->label2, L"label2");
			this->label2->Name = L"label2";
			// 
			// label3
			// 
			resources->ApplyResources(this->label3, L"label3");
			this->label3->Name = L"label3";
			// 
			// label4
			// 
			resources->ApplyResources(this->label4, L"label4");
			this->label4->Name = L"label4";
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
			// tbEmail
			// 
			resources->ApplyResources(this->tbEmail, L"tbEmail");
			this->tbEmail->Name = L"tbEmail";
			// 
			// tbPhone
			// 
			resources->ApplyResources(this->tbPhone, L"tbPhone");
			this->tbPhone->Name = L"tbPhone";
			// 
			// tbPassword
			// 
			resources->ApplyResources(this->tbPassword, L"tbPassword");
			this->tbPassword->Name = L"tbPassword";
			// 
			// tbName
			// 
			resources->ApplyResources(this->tbName, L"tbName");
			this->tbName->Name = L"tbName";
			this->tbName->TextChanged += gcnew System::EventHandler(this, &RegisterForm::tbName_TextChanged);
			// 
			// tbAddress
			// 
			resources->ApplyResources(this->tbAddress, L"tbAddress");
			this->tbAddress->Name = L"tbAddress";
			// 
			// tbConfirmPassword
			// 
			resources->ApplyResources(this->tbConfirmPassword, L"tbConfirmPassword");
			this->tbConfirmPassword->Name = L"tbConfirmPassword";
			// 
			// btnReg
			// 
			resources->ApplyResources(this->btnReg, L"btnReg");
			this->btnReg->Name = L"btnReg";
			this->btnReg->UseVisualStyleBackColor = true;
			this->btnReg->Click += gcnew System::EventHandler(this, &RegisterForm::btnReg_Click);
			// 
			// llogin
			// 
			resources->ApplyResources(this->llogin, L"llogin");
			this->llogin->Name = L"llogin";
			this->llogin->UseVisualStyleBackColor = true;
			this->llogin->Click += gcnew System::EventHandler(this, &RegisterForm::llogin_Click);
			// 
			// label7
			// 
			resources->ApplyResources(this->label7, L"label7");
			this->label7->Name = L"label7";
			// 
			// àíãëèéñêèéToolStripMenuItem
			// 
			resources->ApplyResources(this->àíãëèéñêèéToolStripMenuItem, L"àíãëèéñêèéToolStripMenuItem");
			this->àíãëèéñêèéToolStripMenuItem->Name = L"àíãëèéñêèéToolStripMenuItem";
			// 
			// ğóññêèéToolStripMenuItem
			// 
			resources->ApplyResources(this->ğóññêèéToolStripMenuItem, L"ğóññêèéToolStripMenuItem");
			this->ğóññêèéToolStripMenuItem->Name = L"ğóññêèéToolStripMenuItem";
			// 
			// ğóññêèéToolStripMenuItem1
			// 
			resources->ApplyResources(this->ğóññêèéToolStripMenuItem1, L"ğóññêèéToolStripMenuItem1");
			this->ğóññêèéToolStripMenuItem1->Name = L"ğóññêèéToolStripMenuItem1";
			// 
			// pictureBox1
			// 
			resources->ApplyResources(this->pictureBox1, L"pictureBox1");
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			resources->ApplyResources(this->pictureBox2, L"pictureBox2");
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			resources->ApplyResources(this->pictureBox3, L"pictureBox3");
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			resources->ApplyResources(this->pictureBox4, L"pictureBox4");
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			resources->ApplyResources(this->pictureBox5, L"pictureBox5");
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			resources->ApplyResources(this->pictureBox6, L"pictureBox6");
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->TabStop = false;
			// 
			// menuStrip1
			// 
			resources->ApplyResources(this->menuStrip1, L"menuStrip1");
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ìåíşToolStripMenuItem,
					this->îÏğîãğàììåToolStripMenuItem
			});
			this->menuStrip1->Name = L"menuStrip1";
			// 
			// ìåíşToolStripMenuItem
			// 
			resources->ApplyResources(this->ìåíşToolStripMenuItem, L"ìåíşToolStripMenuItem");
			this->ìåíşToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->ëîêàëèçàöèÿToolStripMenuItem,
					this->îôîğìëåíèåToolStripMenuItem, this->âûõîäToolStripMenuItem
			});
			this->ìåíşToolStripMenuItem->Name = L"ìåíşToolStripMenuItem";
			// 
			// ëîêàëèçàöèÿToolStripMenuItem
			// 
			resources->ApplyResources(this->ëîêàëèçàöèÿToolStripMenuItem, L"ëîêàëèçàöèÿToolStripMenuItem");
			this->ëîêàëèçàöèÿToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->àíãëèéñêèéToolStripMenuItem1,
					this->ğóññêèéToolStripMenuItem2, this->ğóññêèéToolStripMenuItem3
			});
			this->ëîêàëèçàöèÿToolStripMenuItem->Name = L"ëîêàëèçàöèÿToolStripMenuItem";
			// 
			// àíãëèéñêèéToolStripMenuItem1
			// 
			resources->ApplyResources(this->àíãëèéñêèéToolStripMenuItem1, L"àíãëèéñêèéToolStripMenuItem1");
			this->àíãëèéñêèéToolStripMenuItem1->Name = L"àíãëèéñêèéToolStripMenuItem1";
			this->àíãëèéñêèéToolStripMenuItem1->Click += gcnew System::EventHandler(this, &RegisterForm::àíãëèéñêèéToolStripMenuItem1_Click);
			// 
			// ğóññêèéToolStripMenuItem2
			// 
			resources->ApplyResources(this->ğóññêèéToolStripMenuItem2, L"ğóññêèéToolStripMenuItem2");
			this->ğóññêèéToolStripMenuItem2->Name = L"ğóññêèéToolStripMenuItem2";
			this->ğóññêèéToolStripMenuItem2->Click += gcnew System::EventHandler(this, &RegisterForm::ğóññêèéToolStripMenuItem2_Click);
			// 
			// ğóññêèéToolStripMenuItem3
			// 
			resources->ApplyResources(this->ğóññêèéToolStripMenuItem3, L"ğóññêèéToolStripMenuItem3");
			this->ğóññêèéToolStripMenuItem3->Name = L"ğóññêèéToolStripMenuItem3";
			this->ğóññêèéToolStripMenuItem3->Click += gcnew System::EventHandler(this, &RegisterForm::ğóññêèéToolStripMenuItem3_Click);
			// 
			// îôîğìëåíèåToolStripMenuItem
			// 
			resources->ApplyResources(this->îôîğìëåíèåToolStripMenuItem, L"îôîğìëåíèåToolStripMenuItem");
			this->îôîğìëåíèåToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->âûáğàòüÑàìîñòîÿòåëüíîToolStripMenuItem,
					this->ñòàíäàğòíûéToolStripMenuItem, this->ğàíäîìíûéÖâåòToolStripMenuItem, this->áåëûéToolStripMenuItem, this->÷¸ğíûéToolStripMenuItem,
					this->êğàñíûéToolStripMenuItem
			});
			this->îôîğìëåíèåToolStripMenuItem->Name = L"îôîğìëåíèåToolStripMenuItem";
			// 
			// âûáğàòüÑàìîñòîÿòåëüíîToolStripMenuItem
			// 
			resources->ApplyResources(this->âûáğàòüÑàìîñòîÿòåëüíîToolStripMenuItem, L"âûáğàòüÑàìîñòîÿòåëüíîToolStripMenuItem");
			this->âûáğàòüÑàìîñòîÿòåëüíîToolStripMenuItem->Name = L"âûáğàòüÑàìîñòîÿòåëüíîToolStripMenuItem";
			this->âûáğàòüÑàìîñòîÿòåëüíîToolStripMenuItem->Click += gcnew System::EventHandler(this, &RegisterForm::âûáğàòüÑàìîñòîÿòåëüíîToolStripMenuItem_Click);
			// 
			// ñòàíäàğòíûéToolStripMenuItem
			// 
			resources->ApplyResources(this->ñòàíäàğòíûéToolStripMenuItem, L"ñòàíäàğòíûéToolStripMenuItem");
			this->ñòàíäàğòíûéToolStripMenuItem->Name = L"ñòàíäàğòíûéToolStripMenuItem";
			this->ñòàíäàğòíûéToolStripMenuItem->Click += gcnew System::EventHandler(this, &RegisterForm::ñòàíäàğòíûéToolStripMenuItem_Click);
			// 
			// ğàíäîìíûéÖâåòToolStripMenuItem
			// 
			resources->ApplyResources(this->ğàíäîìíûéÖâåòToolStripMenuItem, L"ğàíäîìíûéÖâåòToolStripMenuItem");
			this->ğàíäîìíûéÖâåòToolStripMenuItem->Name = L"ğàíäîìíûéÖâåòToolStripMenuItem";
			this->ğàíäîìíûéÖâåòToolStripMenuItem->Click += gcnew System::EventHandler(this, &RegisterForm::ğàíäîìíûéÖâåòToolStripMenuItem_Click);
			// 
			// áåëûéToolStripMenuItem
			// 
			resources->ApplyResources(this->áåëûéToolStripMenuItem, L"áåëûéToolStripMenuItem");
			this->áåëûéToolStripMenuItem->Name = L"áåëûéToolStripMenuItem";
			this->áåëûéToolStripMenuItem->Click += gcnew System::EventHandler(this, &RegisterForm::áåëûéToolStripMenuItem_Click);
			// 
			// ÷¸ğíûéToolStripMenuItem
			// 
			resources->ApplyResources(this->÷¸ğíûéToolStripMenuItem, L"÷¸ğíûéToolStripMenuItem");
			this->÷¸ğíûéToolStripMenuItem->Name = L"÷¸ğíûéToolStripMenuItem";
			this->÷¸ğíûéToolStripMenuItem->Click += gcnew System::EventHandler(this, &RegisterForm::÷¸ğíûéToolStripMenuItem_Click);
			// 
			// êğàñíûéToolStripMenuItem
			// 
			resources->ApplyResources(this->êğàñíûéToolStripMenuItem, L"êğàñíûéToolStripMenuItem");
			this->êğàñíûéToolStripMenuItem->Name = L"êğàñíûéToolStripMenuItem";
			this->êğàñíûéToolStripMenuItem->Click += gcnew System::EventHandler(this, &RegisterForm::êğàñíûéToolStripMenuItem_Click);
			// 
			// âûõîäToolStripMenuItem
			// 
			resources->ApplyResources(this->âûõîäToolStripMenuItem, L"âûõîäToolStripMenuItem");
			this->âûõîäToolStripMenuItem->Name = L"âûõîäToolStripMenuItem";
			this->âûõîäToolStripMenuItem->Click += gcnew System::EventHandler(this, &RegisterForm::âûõîäToolStripMenuItem_Click);
			// 
			// îÏğîãğàììåToolStripMenuItem
			// 
			resources->ApplyResources(this->îÏğîãğàììåToolStripMenuItem, L"îÏğîãğàììåToolStripMenuItem");
			this->îÏğîãğàììåToolStripMenuItem->Name = L"îÏğîãğàììåToolStripMenuItem";
			this->îÏğîãğàììåToolStripMenuItem->Click += gcnew System::EventHandler(this, &RegisterForm::îÏğîãğàììåToolStripMenuItem_Click);
			// 
			// RegisterForm
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
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
	private: System::Void ğóññêèéToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) // Belarussian
	{
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
	private: System::Void ğóññêèéToolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e) // Russian
	{
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

	private: System::Void âûáğàòüÑàìîñòîÿòåëüíîToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e){
		OpenFileDialog^ openDlg = gcnew OpenFileDialog();
		openDlg->Filter = "Image Files(*.BMP;*.JPG;*.GIF;*.PNG)|*.BMP;*.JPG;*.GIF;*.PNG|All files (*.*)|*.*";
		if (System::Windows::Forms::DialogResult::OK == openDlg->ShowDialog())
		{
			this->BackgroundImage = Image::FromFile(openDlg->FileName);
		}
	}
private: System::Void ñòàíäàğòíûéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e){
	this->BackColor = SystemColors::ButtonFace;
}
private: System::Void ğàíäîìíûéÖâåòToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e){
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
private: System::Void áåëûéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e){
	this->BackColor = Color::White;
}
private: System::Void ÷¸ğíûéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e){
	this->BackColor = Color::Black;
}
private: System::Void êğàñíûéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->BackColor = Color::Red;
}
private: System::Void tbName_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void îÏğîãğàììåToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("In developing", "Error!", MessageBoxButtons::OK);
}
private: System::Void âûõîäToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}