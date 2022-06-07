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
	/// ������ ��� RegisterForm
	/// </summary>
	public ref class RegisterForm : public System::Windows::Forms::Form
	{
	public:
		RegisterForm(void)
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



	private: System::Windows::Forms::ToolStripMenuItem^ ����������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem1;









	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
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
			this->����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
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
			// ����������ToolStripMenuItem
			// 
			resources->ApplyResources(this->����������ToolStripMenuItem, L"����������ToolStripMenuItem");
			this->����������ToolStripMenuItem->Name = L"����������ToolStripMenuItem";
			// 
			// �������ToolStripMenuItem
			// 
			resources->ApplyResources(this->�������ToolStripMenuItem, L"�������ToolStripMenuItem");
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			// 
			// �������ToolStripMenuItem1
			// 
			resources->ApplyResources(this->�������ToolStripMenuItem1, L"�������ToolStripMenuItem1");
			this->�������ToolStripMenuItem1->Name = L"�������ToolStripMenuItem1";
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
				this->����ToolStripMenuItem,
					this->����������ToolStripMenuItem
			});
			this->menuStrip1->Name = L"menuStrip1";
			// 
			// ����ToolStripMenuItem
			// 
			resources->ApplyResources(this->����ToolStripMenuItem, L"����ToolStripMenuItem");
			this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->�����������ToolStripMenuItem,
					this->����������ToolStripMenuItem, this->�����ToolStripMenuItem
			});
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			// 
			// �����������ToolStripMenuItem
			// 
			resources->ApplyResources(this->�����������ToolStripMenuItem, L"�����������ToolStripMenuItem");
			this->�����������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->����������ToolStripMenuItem1,
					this->�������ToolStripMenuItem2, this->�������ToolStripMenuItem3
			});
			this->�����������ToolStripMenuItem->Name = L"�����������ToolStripMenuItem";
			// 
			// ����������ToolStripMenuItem1
			// 
			resources->ApplyResources(this->����������ToolStripMenuItem1, L"����������ToolStripMenuItem1");
			this->����������ToolStripMenuItem1->Name = L"����������ToolStripMenuItem1";
			this->����������ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &RegisterForm::����������ToolStripMenuItem1_Click);
			// 
			// �������ToolStripMenuItem2
			// 
			resources->ApplyResources(this->�������ToolStripMenuItem2, L"�������ToolStripMenuItem2");
			this->�������ToolStripMenuItem2->Name = L"�������ToolStripMenuItem2";
			this->�������ToolStripMenuItem2->Click += gcnew System::EventHandler(this, &RegisterForm::�������ToolStripMenuItem2_Click);
			// 
			// �������ToolStripMenuItem3
			// 
			resources->ApplyResources(this->�������ToolStripMenuItem3, L"�������ToolStripMenuItem3");
			this->�������ToolStripMenuItem3->Name = L"�������ToolStripMenuItem3";
			this->�������ToolStripMenuItem3->Click += gcnew System::EventHandler(this, &RegisterForm::�������ToolStripMenuItem3_Click);
			// 
			// ����������ToolStripMenuItem
			// 
			resources->ApplyResources(this->����������ToolStripMenuItem, L"����������ToolStripMenuItem");
			this->����������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->���������������������ToolStripMenuItem,
					this->�����������ToolStripMenuItem, this->�������������ToolStripMenuItem, this->�����ToolStripMenuItem, this->������ToolStripMenuItem,
					this->�������ToolStripMenuItem
			});
			this->����������ToolStripMenuItem->Name = L"����������ToolStripMenuItem";
			// 
			// ���������������������ToolStripMenuItem
			// 
			resources->ApplyResources(this->���������������������ToolStripMenuItem, L"���������������������ToolStripMenuItem");
			this->���������������������ToolStripMenuItem->Name = L"���������������������ToolStripMenuItem";
			this->���������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &RegisterForm::���������������������ToolStripMenuItem_Click);
			// 
			// �����������ToolStripMenuItem
			// 
			resources->ApplyResources(this->�����������ToolStripMenuItem, L"�����������ToolStripMenuItem");
			this->�����������ToolStripMenuItem->Name = L"�����������ToolStripMenuItem";
			this->�����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &RegisterForm::�����������ToolStripMenuItem_Click);
			// 
			// �������������ToolStripMenuItem
			// 
			resources->ApplyResources(this->�������������ToolStripMenuItem, L"�������������ToolStripMenuItem");
			this->�������������ToolStripMenuItem->Name = L"�������������ToolStripMenuItem";
			this->�������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &RegisterForm::�������������ToolStripMenuItem_Click);
			// 
			// �����ToolStripMenuItem
			// 
			resources->ApplyResources(this->�����ToolStripMenuItem, L"�����ToolStripMenuItem");
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &RegisterForm::�����ToolStripMenuItem_Click);
			// 
			// ������ToolStripMenuItem
			// 
			resources->ApplyResources(this->������ToolStripMenuItem, L"������ToolStripMenuItem");
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &RegisterForm::������ToolStripMenuItem_Click);
			// 
			// �������ToolStripMenuItem
			// 
			resources->ApplyResources(this->�������ToolStripMenuItem, L"�������ToolStripMenuItem");
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &RegisterForm::�������ToolStripMenuItem_Click);
			// 
			// �����ToolStripMenuItem
			// 
			resources->ApplyResources(this->�����ToolStripMenuItem, L"�����ToolStripMenuItem");
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &RegisterForm::�����ToolStripMenuItem_Click);
			// 
			// ����������ToolStripMenuItem
			// 
			resources->ApplyResources(this->����������ToolStripMenuItem, L"����������ToolStripMenuItem");
			this->����������ToolStripMenuItem->Name = L"����������ToolStripMenuItem";
			this->����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &RegisterForm::����������ToolStripMenuItem_Click);
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
	private: System::Void ����������ToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) // English
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
	private: System::Void �������ToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) // Belarussian
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
	private: System::Void �������ToolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e) // Russian
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

	private: System::Void ���������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e){
		OpenFileDialog^ openDlg = gcnew OpenFileDialog();
		openDlg->Filter = "Image Files(*.BMP;*.JPG;*.GIF;*.PNG)|*.BMP;*.JPG;*.GIF;*.PNG|All files (*.*)|*.*";
		if (System::Windows::Forms::DialogResult::OK == openDlg->ShowDialog())
		{
			this->BackgroundImage = Image::FromFile(openDlg->FileName);
		}
	}
private: System::Void �����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e){
	this->BackColor = SystemColors::ButtonFace;
}
private: System::Void �������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e){
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
private: System::Void �����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e){
	this->BackColor = Color::White;
}
private: System::Void ������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e){
	this->BackColor = Color::Black;
}
private: System::Void �������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->BackColor = Color::Red;
}
private: System::Void tbName_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void ����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("In developing", "Error!", MessageBoxButtons::OK);
}
private: System::Void �����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}