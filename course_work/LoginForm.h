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
	/// Ñâîäêà äëÿ LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
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
		~LoginForm()
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
	private: System::Windows::Forms::ToolStripMenuItem^ àíãëèéñêèéToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ğóññêèéToolStripMenuItem;


	private: System::Windows::Forms::ToolStripMenuItem^ ğóññêèéToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ îôîğìëåíèåToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âûáğàòüÑàìîñòîÿòåëüíîToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ğàíäîìíûéÖâåòToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ áåëûéToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ÷¸ğíûéToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ êğàñíûéToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âûõîäToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ îÏğîãğàììåToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñòàíäàğòíûéToolStripMenuItem;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tbEmail;

	private: System::Windows::Forms::TextBox^ tbPassword;
	private: System::Windows::Forms::Button^ button1;


	private: System::Windows::Forms::Button^ llRegister;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox5;






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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ìåíşToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ëîêàëèçàöèÿToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->àíãëèéñêèéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ğóññêèéToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ğóññêèéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->tbEmail = (gcnew System::Windows::Forms::TextBox());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->llRegister = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ìåíşToolStripMenuItem,
					this->îÏğîãğàììåToolStripMenuItem
			});
			resources->ApplyResources(this->menuStrip1, L"menuStrip1");
			this->menuStrip1->Name = L"menuStrip1";
			// 
			// ìåíşToolStripMenuItem
			// 
			this->ìåíşToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->ëîêàëèçàöèÿToolStripMenuItem,
					this->îôîğìëåíèåToolStripMenuItem, this->âûõîäToolStripMenuItem
			});
			this->ìåíşToolStripMenuItem->Name = L"ìåíşToolStripMenuItem";
			resources->ApplyResources(this->ìåíşToolStripMenuItem, L"ìåíşToolStripMenuItem");
			// 
			// ëîêàëèçàöèÿToolStripMenuItem
			// 
			this->ëîêàëèçàöèÿToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->àíãëèéñêèéToolStripMenuItem,
					this->ğóññêèéToolStripMenuItem1, this->ğóññêèéToolStripMenuItem
			});
			this->ëîêàëèçàöèÿToolStripMenuItem->Name = L"ëîêàëèçàöèÿToolStripMenuItem";
			resources->ApplyResources(this->ëîêàëèçàöèÿToolStripMenuItem, L"ëîêàëèçàöèÿToolStripMenuItem");
			// 
			// àíãëèéñêèéToolStripMenuItem
			// 
			this->àíãëèéñêèéToolStripMenuItem->Name = L"àíãëèéñêèéToolStripMenuItem";
			resources->ApplyResources(this->àíãëèéñêèéToolStripMenuItem, L"àíãëèéñêèéToolStripMenuItem");
			this->àíãëèéñêèéToolStripMenuItem->Click += gcnew System::EventHandler(this, &LoginForm::àíãëèéñêèéToolStripMenuItem_Click);
			// 
			// ğóññêèéToolStripMenuItem1
			// 
			this->ğóññêèéToolStripMenuItem1->Name = L"ğóññêèéToolStripMenuItem1";
			resources->ApplyResources(this->ğóññêèéToolStripMenuItem1, L"ğóññêèéToolStripMenuItem1");
			this->ğóññêèéToolStripMenuItem1->Click += gcnew System::EventHandler(this, &LoginForm::ğóññêèéToolStripMenuItem1_Click);
			// 
			// ğóññêèéToolStripMenuItem
			// 
			this->ğóññêèéToolStripMenuItem->Name = L"ğóññêèéToolStripMenuItem";
			resources->ApplyResources(this->ğóññêèéToolStripMenuItem, L"ğóññêèéToolStripMenuItem");
			this->ğóññêèéToolStripMenuItem->Click += gcnew System::EventHandler(this, &LoginForm::ğóññêèéToolStripMenuItem_Click);
			// 
			// îôîğìëåíèåToolStripMenuItem
			// 
			this->îôîğìëåíèåToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->âûáğàòüÑàìîñòîÿòåëüíîToolStripMenuItem,
					this->ñòàíäàğòíûéToolStripMenuItem, this->ğàíäîìíûéÖâåòToolStripMenuItem, this->áåëûéToolStripMenuItem, this->÷¸ğíûéToolStripMenuItem,
					this->êğàñíûéToolStripMenuItem
			});
			this->îôîğìëåíèåToolStripMenuItem->Name = L"îôîğìëåíèåToolStripMenuItem";
			resources->ApplyResources(this->îôîğìëåíèåToolStripMenuItem, L"îôîğìëåíèåToolStripMenuItem");
			// 
			// âûáğàòüÑàìîñòîÿòåëüíîToolStripMenuItem
			// 
			this->âûáğàòüÑàìîñòîÿòåëüíîToolStripMenuItem->Name = L"âûáğàòüÑàìîñòîÿòåëüíîToolStripMenuItem";
			resources->ApplyResources(this->âûáğàòüÑàìîñòîÿòåëüíîToolStripMenuItem, L"âûáğàòüÑàìîñòîÿòåëüíîToolStripMenuItem");
			this->âûáğàòüÑàìîñòîÿòåëüíîToolStripMenuItem->Click += gcnew System::EventHandler(this, &LoginForm::âûáğàòüÑàìîñòîÿòåëüíîToolStripMenuItem_Click);
			// 
			// ñòàíäàğòíûéToolStripMenuItem
			// 
			this->ñòàíäàğòíûéToolStripMenuItem->Name = L"ñòàíäàğòíûéToolStripMenuItem";
			resources->ApplyResources(this->ñòàíäàğòíûéToolStripMenuItem, L"ñòàíäàğòíûéToolStripMenuItem");
			this->ñòàíäàğòíûéToolStripMenuItem->Click += gcnew System::EventHandler(this, &LoginForm::ñòàíäàğòíûéToolStripMenuItem_Click);
			// 
			// ğàíäîìíûéÖâåòToolStripMenuItem
			// 
			this->ğàíäîìíûéÖâåòToolStripMenuItem->Name = L"ğàíäîìíûéÖâåòToolStripMenuItem";
			resources->ApplyResources(this->ğàíäîìíûéÖâåòToolStripMenuItem, L"ğàíäîìíûéÖâåòToolStripMenuItem");
			this->ğàíäîìíûéÖâåòToolStripMenuItem->Click += gcnew System::EventHandler(this, &LoginForm::ğàíäîìíûéÖâåòToolStripMenuItem_Click);
			// 
			// áåëûéToolStripMenuItem
			// 
			this->áåëûéToolStripMenuItem->Name = L"áåëûéToolStripMenuItem";
			resources->ApplyResources(this->áåëûéToolStripMenuItem, L"áåëûéToolStripMenuItem");
			this->áåëûéToolStripMenuItem->Click += gcnew System::EventHandler(this, &LoginForm::áåëûéToolStripMenuItem_Click);
			// 
			// ÷¸ğíûéToolStripMenuItem
			// 
			this->÷¸ğíûéToolStripMenuItem->Name = L"÷¸ğíûéToolStripMenuItem";
			resources->ApplyResources(this->÷¸ğíûéToolStripMenuItem, L"÷¸ğíûéToolStripMenuItem");
			this->÷¸ğíûéToolStripMenuItem->Click += gcnew System::EventHandler(this, &LoginForm::÷¸ğíûéToolStripMenuItem_Click);
			// 
			// êğàñíûéToolStripMenuItem
			// 
			this->êğàñíûéToolStripMenuItem->Name = L"êğàñíûéToolStripMenuItem";
			resources->ApplyResources(this->êğàñíûéToolStripMenuItem, L"êğàñíûéToolStripMenuItem");
			this->êğàñíûéToolStripMenuItem->Click += gcnew System::EventHandler(this, &LoginForm::êğàñíûéToolStripMenuItem_Click);
			// 
			// âûõîäToolStripMenuItem
			// 
			this->âûõîäToolStripMenuItem->Name = L"âûõîäToolStripMenuItem";
			resources->ApplyResources(this->âûõîäToolStripMenuItem, L"âûõîäToolStripMenuItem");
			this->âûõîäToolStripMenuItem->Click += gcnew System::EventHandler(this, &LoginForm::âûõîäToolStripMenuItem_Click);
			// 
			// îÏğîãğàììåToolStripMenuItem
			// 
			this->îÏğîãğàììåToolStripMenuItem->Name = L"îÏğîãğàììåToolStripMenuItem";
			resources->ApplyResources(this->îÏğîãğàììåToolStripMenuItem, L"îÏğîãğàììåToolStripMenuItem");
			this->îÏğîãğàììåToolStripMenuItem->Click += gcnew System::EventHandler(this, &LoginForm::îÏğîãğàììåToolStripMenuItem_Click);
			// 
			// label1
			// 
			resources->ApplyResources(this->label1, L"label1");
			this->label1->Name = L"label1";
			this->label1->Click += gcnew System::EventHandler(this, &LoginForm::label1_Click);
			// 
			// label2
			// 
			resources->ApplyResources(this->label2, L"label2");
			this->label2->Name = L"label2";
			// 
			// tbEmail
			// 
			resources->ApplyResources(this->tbEmail, L"tbEmail");
			this->tbEmail->Name = L"tbEmail";
			// 
			// tbPassword
			// 
			resources->ApplyResources(this->tbPassword, L"tbPassword");
			this->tbPassword->Name = L"tbPassword";
			// 
			// button1
			// 
			resources->ApplyResources(this->button1, L"button1");
			this->button1->Name = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &LoginForm::button1_Click);
			// 
			// llRegister
			// 
			resources->ApplyResources(this->llRegister, L"llRegister");
			this->llRegister->Name = L"llRegister";
			this->llRegister->UseVisualStyleBackColor = true;
			this->llRegister->Click += gcnew System::EventHandler(this, &LoginForm::llRegister_Click);
			// 
			// label3
			// 
			resources->ApplyResources(this->label3, L"label3");
			this->label3->Name = L"label3";
			// 
			// pictureBox1
			// 
			resources->ApplyResources(this->pictureBox1, L"pictureBox1");
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox5
			// 
			resources->ApplyResources(this->pictureBox5, L"pictureBox5");
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->TabStop = false;
			// 
			// LoginForm
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->llRegister);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->tbPassword);
			this->Controls->Add(this->tbEmail);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->KeyPreview = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"LoginForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		// Localization
	private: System::Void àíãëèéñêèéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) // English
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
	private: System::Void ğóññêèéToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) // Russian
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
		private: System::Void ğóññêèéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) // Belarussian
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
	private: System::Void âûáğàòüÑàìîñòîÿòåëüíîToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		OpenFileDialog^ openDlg = gcnew OpenFileDialog();
		openDlg->Filter = "Image Files(*.BMP;*.JPG;*.GIF;*.PNG)|*.BMP;*.JPG;*.GIF;*.PNG|All files (*.*)|*.*";
		if (System::Windows::Forms::DialogResult::OK == openDlg->ShowDialog())
		{
			this->BackgroundImage = Image::FromFile(openDlg->FileName);
		}
	}
	private: System::Void ñòàíäàğòíûéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->BackColor = SystemColors::ButtonFace;
	}
	private: System::Void ğàíäîìíûéÖâåòToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
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
	private: System::Void áåëûéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->BackColor = Color::White;
	}
	private: System::Void ÷¸ğíûéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->BackColor = Color::Black;
	}
	private: System::Void êğàñíûéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->BackColor = Color::Red;
	}
	private: System::Void âûõîäToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Close();
	}
	private: System::Void îÏğîãğàììåToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		MessageBox::Show("In developing", "Error!", MessageBoxButtons::OK);
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	// Login
	public: User^ user = nullptr;
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ email = this->tbEmail->Text;
		String^ password = this->tbPassword->Text;
		if (email->Length == 0 || password->Length == 0)
		{
			MessageBox::Show("Please enter email and password", "Email or password empty", MessageBoxButtons::OK);
			return;
		}
		try
		{
			String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=courseWORK;Integrated Security=True";
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			String^ sqlQuery = "SELECT * FROM users WHERE email=@email AND password=@password;";
			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@email", email);
			command.Parameters->AddWithValue("@password", password);

			SqlDataReader^ reader = command.ExecuteReader();
			if (reader->Read())
			{
				user = gcnew User;
				user->id = reader->GetInt32(0);
				user->name = reader->GetString(1);
				user->email = reader->GetString(2);
				user->phone = reader->GetString(3);
				user->address = reader->GetString(4);
				user->password = reader->GetString(5);
				this->Close();
			}
			else
			{
				MessageBox::Show("Email or Password is incorrect", "Email or Password Error", MessageBoxButtons::OK);
			}
		}
		catch (Exception^ exception)
		{
			MessageBox::Show("Failed to connect to database", "Database Connection Error", MessageBoxButtons::OK);
		}
	}
		// SwitchToRegister button
	public: bool switchToRegister = false;
	private: System::Void llRegister_Click(System::Object^ sender, System::EventArgs^ e) {
		this->switchToRegister = true;
		this->Close();
	}
	};
}