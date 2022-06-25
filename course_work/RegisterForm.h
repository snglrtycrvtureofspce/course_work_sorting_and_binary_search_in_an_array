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
	/// Сводка для RegisterForm
	/// </summary>
	public ref class RegisterForm : public System::Windows::Forms::Form
	{
	public:
		RegisterForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
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



	private: System::Windows::Forms::ToolStripMenuItem^ английскийToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ русскийToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ русскийToolStripMenuItem1;









	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
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
			this->английскийToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->русскийToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->русскийToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
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
			// английскийToolStripMenuItem
			// 
			resources->ApplyResources(this->английскийToolStripMenuItem, L"английскийToolStripMenuItem");
			this->английскийToolStripMenuItem->Name = L"английскийToolStripMenuItem";
			// 
			// русскийToolStripMenuItem
			// 
			resources->ApplyResources(this->русскийToolStripMenuItem, L"русскийToolStripMenuItem");
			this->русскийToolStripMenuItem->Name = L"русскийToolStripMenuItem";
			// 
			// русскийToolStripMenuItem1
			// 
			resources->ApplyResources(this->русскийToolStripMenuItem1, L"русскийToolStripMenuItem1");
			this->русскийToolStripMenuItem1->Name = L"русскийToolStripMenuItem1";
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
				this->менюToolStripMenuItem,
					this->оПрограммеToolStripMenuItem
			});
			this->menuStrip1->Name = L"menuStrip1";
			// 
			// менюToolStripMenuItem
			// 
			resources->ApplyResources(this->менюToolStripMenuItem, L"менюToolStripMenuItem");
			this->менюToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->локализацияToolStripMenuItem,
					this->оформлениеToolStripMenuItem, this->выходToolStripMenuItem
			});
			this->менюToolStripMenuItem->Name = L"менюToolStripMenuItem";
			// 
			// локализацияToolStripMenuItem
			// 
			resources->ApplyResources(this->локализацияToolStripMenuItem, L"локализацияToolStripMenuItem");
			this->локализацияToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->английскийToolStripMenuItem1,
					this->русскийToolStripMenuItem2, this->русскийToolStripMenuItem3
			});
			this->локализацияToolStripMenuItem->Name = L"локализацияToolStripMenuItem";
			// 
			// английскийToolStripMenuItem1
			// 
			resources->ApplyResources(this->английскийToolStripMenuItem1, L"английскийToolStripMenuItem1");
			this->английскийToolStripMenuItem1->Name = L"английскийToolStripMenuItem1";
			this->английскийToolStripMenuItem1->Click += gcnew System::EventHandler(this, &RegisterForm::английскийToolStripMenuItem1_Click);
			// 
			// русскийToolStripMenuItem2
			// 
			resources->ApplyResources(this->русскийToolStripMenuItem2, L"русскийToolStripMenuItem2");
			this->русскийToolStripMenuItem2->Name = L"русскийToolStripMenuItem2";
			this->русскийToolStripMenuItem2->Click += gcnew System::EventHandler(this, &RegisterForm::русскийToolStripMenuItem2_Click);
			// 
			// русскийToolStripMenuItem3
			// 
			resources->ApplyResources(this->русскийToolStripMenuItem3, L"русскийToolStripMenuItem3");
			this->русскийToolStripMenuItem3->Name = L"русскийToolStripMenuItem3";
			this->русскийToolStripMenuItem3->Click += gcnew System::EventHandler(this, &RegisterForm::русскийToolStripMenuItem3_Click);
			// 
			// оформлениеToolStripMenuItem
			// 
			resources->ApplyResources(this->оформлениеToolStripMenuItem, L"оформлениеToolStripMenuItem");
			this->оформлениеToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->выбратьСамостоятельноToolStripMenuItem,
					this->стандартныйToolStripMenuItem, this->рандомныйЦветToolStripMenuItem, this->белыйToolStripMenuItem, this->чёрныйToolStripMenuItem,
					this->красныйToolStripMenuItem
			});
			this->оформлениеToolStripMenuItem->Name = L"оформлениеToolStripMenuItem";
			// 
			// выбратьСамостоятельноToolStripMenuItem
			// 
			resources->ApplyResources(this->выбратьСамостоятельноToolStripMenuItem, L"выбратьСамостоятельноToolStripMenuItem");
			this->выбратьСамостоятельноToolStripMenuItem->Name = L"выбратьСамостоятельноToolStripMenuItem";
			this->выбратьСамостоятельноToolStripMenuItem->Click += gcnew System::EventHandler(this, &RegisterForm::выбратьСамостоятельноToolStripMenuItem_Click);
			// 
			// стандартныйToolStripMenuItem
			// 
			resources->ApplyResources(this->стандартныйToolStripMenuItem, L"стандартныйToolStripMenuItem");
			this->стандартныйToolStripMenuItem->Name = L"стандартныйToolStripMenuItem";
			this->стандартныйToolStripMenuItem->Click += gcnew System::EventHandler(this, &RegisterForm::стандартныйToolStripMenuItem_Click);
			// 
			// рандомныйЦветToolStripMenuItem
			// 
			resources->ApplyResources(this->рандомныйЦветToolStripMenuItem, L"рандомныйЦветToolStripMenuItem");
			this->рандомныйЦветToolStripMenuItem->Name = L"рандомныйЦветToolStripMenuItem";
			this->рандомныйЦветToolStripMenuItem->Click += gcnew System::EventHandler(this, &RegisterForm::рандомныйЦветToolStripMenuItem_Click);
			// 
			// белыйToolStripMenuItem
			// 
			resources->ApplyResources(this->белыйToolStripMenuItem, L"белыйToolStripMenuItem");
			this->белыйToolStripMenuItem->Name = L"белыйToolStripMenuItem";
			this->белыйToolStripMenuItem->Click += gcnew System::EventHandler(this, &RegisterForm::белыйToolStripMenuItem_Click);
			// 
			// чёрныйToolStripMenuItem
			// 
			resources->ApplyResources(this->чёрныйToolStripMenuItem, L"чёрныйToolStripMenuItem");
			this->чёрныйToolStripMenuItem->Name = L"чёрныйToolStripMenuItem";
			this->чёрныйToolStripMenuItem->Click += gcnew System::EventHandler(this, &RegisterForm::чёрныйToolStripMenuItem_Click);
			// 
			// красныйToolStripMenuItem
			// 
			resources->ApplyResources(this->красныйToolStripMenuItem, L"красныйToolStripMenuItem");
			this->красныйToolStripMenuItem->Name = L"красныйToolStripMenuItem";
			this->красныйToolStripMenuItem->Click += gcnew System::EventHandler(this, &RegisterForm::красныйToolStripMenuItem_Click);
			// 
			// выходToolStripMenuItem
			// 
			resources->ApplyResources(this->выходToolStripMenuItem, L"выходToolStripMenuItem");
			this->выходToolStripMenuItem->Name = L"выходToolStripMenuItem";
			this->выходToolStripMenuItem->Click += gcnew System::EventHandler(this, &RegisterForm::выходToolStripMenuItem_Click);
			// 
			// оПрограммеToolStripMenuItem
			// 
			resources->ApplyResources(this->оПрограммеToolStripMenuItem, L"оПрограммеToolStripMenuItem");
			this->оПрограммеToolStripMenuItem->Name = L"оПрограммеToolStripMenuItem";
			this->оПрограммеToolStripMenuItem->Click += gcnew System::EventHandler(this, &RegisterForm::оПрограммеToolStripMenuItem_Click);
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
			MessageBox::Show(exception->Message);
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
			MessageBox::Show(exception->Message);
		}
	}
	private: System::Void русскийToolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e) {// белорусский
		try
		{
			this->Controls->Clear();
			CultureInfo::CurrentUICulture = gcnew CultureInfo("be");
			CultureInfo::CurrentCulture = gcnew CultureInfo("be");
			InitializeComponent(); // инициализирует объекты пользовательского интерфейса
		}
		catch (System::Exception^ exception)
		{
			MessageBox::Show(exception->Message);
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

		   // Описание алгоритма кнопки "Вернуться к логину"
	public: bool switchToLogin = false; // глобальная переменная для переключения к логину, изначально инициализируем как ложь (0)

	private: System::Void llogin_Click(System::Object^ sender, System::EventArgs^ e) {
		this->switchToLogin = true; // инициализируем переменную истиной (1), алгоритм активизируется
		this->Close(); // закрытие формы
	}

		   // Описание алгоритма регистрации
	public: User^ user = nullptr; // глобальная переменная класса пользователь ("User.h"), изначально инициализируем как нулевой указатель

	private: System::Void btnReg_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ name = tbName->Text; // инициализируем переменную строкового класса данными из текстового поля
		String^ email = tbEmail->Text; // инициализируем переменную строкового класса данными из текстового поля
		String^ phone = tbPhone->Text; // инициализируем переменную строкового класса данными из текстового поля
		String^ address = tbAddress->Text; // инициализируем переменную строкового класса данными из текстового поля
		String^ password = tbPassword->Text; // инициализируем переменную строкового класса данными из текстового поля
		String^ confirmPassword = tbConfirmPassword->Text; // инициализируем переменную строкового класса данными из текстового поля

		if (name->Length == 0 || email->Length == 0 || phone->Length == 0 || address->Length == 0 || password->Length == 0) // проверка на заполнение всех полей

		{
			MessageBox::Show("Please enter all the fields", "On or more empty fields", MessageBoxButtons::OK); // вывод сообщения на экран
			return; // возвращаем
		}
		if (String::Compare(password, confirmPassword) != 0) // сравниваем пароль и подтверждение пароля
		{
			MessageBox::Show("Password and Confirm Password do not match", "Password Error", MessageBoxButtons::OK); // вывод сообщения на экран
			return; // возвращаем
		}
		try
		{
			String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=courseWORK;Integrated Security=True"; // инициализируем переменную строкового класса адресом подключения к базе данных
			SqlConnection sqlConn(connString); // задаём адрес для подключения к базе данных
			sqlConn.Open(); // открываем соединение с базой данных

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
			this->Close(); // закрытие формы
		}
		catch (Exception^ exception)
		{
			MessageBox::Show("Failed to register new user", "Register Failure", MessageBoxButtons::OK); // вывод сообщения на экран
		}
	}
	};
}