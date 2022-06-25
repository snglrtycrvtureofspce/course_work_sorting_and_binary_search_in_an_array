#pragma once
#include "User.h"
#include "HELP.h"
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
	/// Сводка для LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
		{
			InitializeComponent();
		}


	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
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
	private: System::Windows::Forms::ToolStripMenuItem^ менюToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ локализацияToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ английскийToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ русскийToolStripMenuItem;


	private: System::Windows::Forms::ToolStripMenuItem^ русскийToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ оформлениеToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ выбратьСамостоятельноToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ рандомныйЦветToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ белыйToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ чёрныйToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ красныйToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ выходToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ оПрограммеToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ стандартныйToolStripMenuItem;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->менюToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->локализацияToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->английскийToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->русскийToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->русскийToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->оформлениеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выбратьСамостоятельноToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->стандартныйToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->рандомныйЦветToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->белыйToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->чёрныйToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->красныйToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->оПрограммеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
				this->менюToolStripMenuItem,
					this->оПрограммеToolStripMenuItem
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
				this->английскийToolStripMenuItem,
					this->русскийToolStripMenuItem1, this->русскийToolStripMenuItem
			});
			this->локализацияToolStripMenuItem->Name = L"локализацияToolStripMenuItem";
			resources->ApplyResources(this->локализацияToolStripMenuItem, L"локализацияToolStripMenuItem");
			// 
			// английскийToolStripMenuItem
			// 
			this->английскийToolStripMenuItem->Name = L"английскийToolStripMenuItem";
			resources->ApplyResources(this->английскийToolStripMenuItem, L"английскийToolStripMenuItem");
			this->английскийToolStripMenuItem->Click += gcnew System::EventHandler(this, &LoginForm::английскийToolStripMenuItem_Click);
			// 
			// русскийToolStripMenuItem1
			// 
			this->русскийToolStripMenuItem1->Name = L"русскийToolStripMenuItem1";
			resources->ApplyResources(this->русскийToolStripMenuItem1, L"русскийToolStripMenuItem1");
			this->русскийToolStripMenuItem1->Click += gcnew System::EventHandler(this, &LoginForm::русскийToolStripMenuItem1_Click);
			// 
			// русскийToolStripMenuItem
			// 
			this->русскийToolStripMenuItem->Name = L"русскийToolStripMenuItem";
			resources->ApplyResources(this->русскийToolStripMenuItem, L"русскийToolStripMenuItem");
			this->русскийToolStripMenuItem->Click += gcnew System::EventHandler(this, &LoginForm::русскийToolStripMenuItem_Click);
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
			this->выбратьСамостоятельноToolStripMenuItem->Click += gcnew System::EventHandler(this, &LoginForm::выбратьСамостоятельноToolStripMenuItem_Click);
			// 
			// стандартныйToolStripMenuItem
			// 
			this->стандартныйToolStripMenuItem->Name = L"стандартныйToolStripMenuItem";
			resources->ApplyResources(this->стандартныйToolStripMenuItem, L"стандартныйToolStripMenuItem");
			this->стандартныйToolStripMenuItem->Click += gcnew System::EventHandler(this, &LoginForm::стандартныйToolStripMenuItem_Click);
			// 
			// рандомныйЦветToolStripMenuItem
			// 
			this->рандомныйЦветToolStripMenuItem->Name = L"рандомныйЦветToolStripMenuItem";
			resources->ApplyResources(this->рандомныйЦветToolStripMenuItem, L"рандомныйЦветToolStripMenuItem");
			this->рандомныйЦветToolStripMenuItem->Click += gcnew System::EventHandler(this, &LoginForm::рандомныйЦветToolStripMenuItem_Click);
			// 
			// белыйToolStripMenuItem
			// 
			this->белыйToolStripMenuItem->Name = L"белыйToolStripMenuItem";
			resources->ApplyResources(this->белыйToolStripMenuItem, L"белыйToolStripMenuItem");
			this->белыйToolStripMenuItem->Click += gcnew System::EventHandler(this, &LoginForm::белыйToolStripMenuItem_Click);
			// 
			// чёрныйToolStripMenuItem
			// 
			this->чёрныйToolStripMenuItem->Name = L"чёрныйToolStripMenuItem";
			resources->ApplyResources(this->чёрныйToolStripMenuItem, L"чёрныйToolStripMenuItem");
			this->чёрныйToolStripMenuItem->Click += gcnew System::EventHandler(this, &LoginForm::чёрныйToolStripMenuItem_Click);
			// 
			// красныйToolStripMenuItem
			// 
			this->красныйToolStripMenuItem->Name = L"красныйToolStripMenuItem";
			resources->ApplyResources(this->красныйToolStripMenuItem, L"красныйToolStripMenuItem");
			this->красныйToolStripMenuItem->Click += gcnew System::EventHandler(this, &LoginForm::красныйToolStripMenuItem_Click);
			// 
			// выходToolStripMenuItem
			// 
			this->выходToolStripMenuItem->Name = L"выходToolStripMenuItem";
			resources->ApplyResources(this->выходToolStripMenuItem, L"выходToolStripMenuItem");
			this->выходToolStripMenuItem->Click += gcnew System::EventHandler(this, &LoginForm::выходToolStripMenuItem_Click);
			// 
			// оПрограммеToolStripMenuItem
			// 
			this->оПрограммеToolStripMenuItem->Name = L"оПрограммеToolStripMenuItem";
			resources->ApplyResources(this->оПрограммеToolStripMenuItem, L"оПрограммеToolStripMenuItem");
			this->оПрограммеToolStripMenuItem->Click += gcnew System::EventHandler(this, &LoginForm::оПрограммеToolStripMenuItem_Click);
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
		// Локализация
	private: System::Void английскийToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) { // английский
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
	private: System::Void русскийToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) { // русский
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
	private: System::Void русскийToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) { // белорусский 
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
	private: System::Void оПрограммеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		coursework::HELP helpform; // создаём переменную для работы с формой
		helpform.ShowDialog(); // обращаемся к форме и открываем её
	}

		   // Описание алгоритма кнопки "Регистрация"
	public: bool switchToRegister = false; // глобальная переменная для переключения к регистрации, изначально инициализируем как ложь (0)

	private: System::Void llRegister_Click(System::Object^ sender, System::EventArgs^ e) {
		this->switchToRegister = true; // инициализируем переменную истиной (1), алгоритм активизируется
		this->Close(); // закрытие формы
	}
		   // Описание алгоритма логина
	public: User^ user = nullptr; // глобальная переменная класса пользователь ("User.h"), изначально инициализируем как нулевой указатель
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ email = this->tbEmail->Text; // инициализируем переменную строкового класса данными из текстового поля
		String^ password = this->tbPassword->Text; // инициализируем переменную строкового класса данными из текстового поля
		if (email->Length == 0 || password->Length == 0) // проверка на заполнение всех полей
		{
			MessageBox::Show("Please enter email and password", "Email or password empty", MessageBoxButtons::OK);
			return;
		}
		try
		{
			String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=courseWORK;Integrated Security=True"; // инициализируем переменную строкового класса адресом подключения к базе данных
			SqlConnection sqlConn(connString); // задаём адрес для подключения к базе данных
			sqlConn.Open(); // открываем соединение с базой данных

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
				this->Close(); // закрытие формы
			}
			else
			{
				MessageBox::Show("Email or Password is incorrect", "Email or Password Error", MessageBoxButtons::OK); // вывод сообщения на экран
			}
		}
		catch (Exception^ exception)
		{
			MessageBox::Show("Failed to connect to database", "Database Connection Error", MessageBoxButtons::OK); // вывод сообщения на экран
		}
	}
	};
}