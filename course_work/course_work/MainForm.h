#pragma once
#include "User.h"
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
	/// Ñâîäêà äëÿ MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(User^ user)
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
		~MainForm()
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
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
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
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
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
			this->menuStrip1->TabIndex = 23;
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
			this->ëîêàëèçàöèÿToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->ëîêàëèçàöèÿToolStripMenuItem->Text = L"Ëîêàëèçàöèÿ";
			// 
			// àíãëèéñêèéToolStripMenuItem1
			// 
			this->àíãëèéñêèéToolStripMenuItem1->Name = L"àíãëèéñêèéToolStripMenuItem1";
			this->àíãëèéñêèéToolStripMenuItem1->Size = System::Drawing::Size(146, 22);
			this->àíãëèéñêèéToolStripMenuItem1->Text = L"Àíãëèéñêèé";
			this->àíãëèéñêèéToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MainForm::àíãëèéñêèéToolStripMenuItem1_Click);
			// 
			// ğóññêèéToolStripMenuItem2
			// 
			this->ğóññêèéToolStripMenuItem2->Name = L"ğóññêèéToolStripMenuItem2";
			this->ğóññêèéToolStripMenuItem2->Size = System::Drawing::Size(146, 22);
			this->ğóññêèéToolStripMenuItem2->Text = L"Ğóññêèé";
			this->ğóññêèéToolStripMenuItem2->Click += gcnew System::EventHandler(this, &MainForm::ğóññêèéToolStripMenuItem2_Click);
			// 
			// ğóññêèéToolStripMenuItem3
			// 
			this->ğóññêèéToolStripMenuItem3->Name = L"ğóññêèéToolStripMenuItem3";
			this->ğóññêèéToolStripMenuItem3->Size = System::Drawing::Size(146, 22);
			this->ğóññêèéToolStripMenuItem3->Text = L"Áåëîğóññêèé";
			this->ğóññêèéToolStripMenuItem3->Click += gcnew System::EventHandler(this, &MainForm::ğóññêèéToolStripMenuItem3_Click);
			// 
			// îôîğìëåíèåToolStripMenuItem
			// 
			this->îôîğìëåíèåToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->âûáğàòüÑàìîñòîÿòåëüíîToolStripMenuItem,
					this->ñòàíäàğòíûéToolStripMenuItem, this->ğàíäîìíûéÖâåòToolStripMenuItem, this->áåëûéToolStripMenuItem, this->÷¸ğíûéToolStripMenuItem,
					this->êğàñíûéToolStripMenuItem
			});
			this->îôîğìëåíèåToolStripMenuItem->Name = L"îôîğìëåíèåToolStripMenuItem";
			this->îôîğìëåíèåToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->îôîğìëåíèåToolStripMenuItem->Text = L"Îôîğìëåíèå";
			// 
			// âûáğàòüÑàìîñòîÿòåëüíîToolStripMenuItem
			// 
			this->âûáğàòüÑàìîñòîÿòåëüíîToolStripMenuItem->Name = L"âûáğàòüÑàìîñòîÿòåëüíîToolStripMenuItem";
			this->âûáğàòüÑàìîñòîÿòåëüíîToolStripMenuItem->Size = System::Drawing::Size(275, 22);
			this->âûáğàòüÑàìîñòîÿòåëüíîToolStripMenuItem->Text = L"Âûáğàòü ñàìîñòîÿòåëüíî (êàğòèíêà)";
			this->âûáğàòüÑàìîñòîÿòåëüíîToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::âûáğàòüÑàìîñòîÿòåëüíîToolStripMenuItem_Click);
			// 
			// ñòàíäàğòíûéToolStripMenuItem
			// 
			this->ñòàíäàğòíûéToolStripMenuItem->Name = L"ñòàíäàğòíûéToolStripMenuItem";
			this->ñòàíäàğòíûéToolStripMenuItem->Size = System::Drawing::Size(275, 22);
			this->ñòàíäàğòíûéToolStripMenuItem->Text = L"Ñòàíäàğòíûé";
			this->ñòàíäàğòíûéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::ñòàíäàğòíûéToolStripMenuItem_Click);
			// 
			// ğàíäîìíûéÖâåòToolStripMenuItem
			// 
			this->ğàíäîìíûéÖâåòToolStripMenuItem->Name = L"ğàíäîìíûéÖâåòToolStripMenuItem";
			this->ğàíäîìíûéÖâåòToolStripMenuItem->Size = System::Drawing::Size(275, 22);
			this->ğàíäîìíûéÖâåòToolStripMenuItem->Text = L"Ğàíäîìíûé öâåò";
			this->ğàíäîìíûéÖâåòToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::ğàíäîìíûéÖâåòToolStripMenuItem_Click);
			// 
			// áåëûéToolStripMenuItem
			// 
			this->áåëûéToolStripMenuItem->Name = L"áåëûéToolStripMenuItem";
			this->áåëûéToolStripMenuItem->Size = System::Drawing::Size(275, 22);
			this->áåëûéToolStripMenuItem->Text = L"Áåëûé";
			this->áåëûéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::áåëûéToolStripMenuItem_Click);
			// 
			// ÷¸ğíûéToolStripMenuItem
			// 
			this->÷¸ğíûéToolStripMenuItem->Name = L"÷¸ğíûéToolStripMenuItem";
			this->÷¸ğíûéToolStripMenuItem->Size = System::Drawing::Size(275, 22);
			this->÷¸ğíûéToolStripMenuItem->Text = L"×¸ğíûé";
			this->÷¸ğíûéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::÷¸ğíûéToolStripMenuItem_Click);
			// 
			// êğàñíûéToolStripMenuItem
			// 
			this->êğàñíûéToolStripMenuItem->Name = L"êğàñíûéToolStripMenuItem";
			this->êğàñíûéToolStripMenuItem->Size = System::Drawing::Size(275, 22);
			this->êğàñíûéToolStripMenuItem->Text = L"Êğàñíûé";
			this->êğàñíûéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::êğàñíûéToolStripMenuItem_Click);
			// 
			// âûõîäToolStripMenuItem
			// 
			this->âûõîäToolStripMenuItem->Name = L"âûõîäToolStripMenuItem";
			this->âûõîäToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->âûõîäToolStripMenuItem->Text = L"Âûõîä";
			this->âûõîäToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::âûõîäToolStripMenuItem_Click);
			// 
			// îÏğîãğàììåToolStripMenuItem
			// 
			this->îÏğîãğàììåToolStripMenuItem->Name = L"îÏğîãğàììåToolStripMenuItem";
			this->îÏğîãğàììåToolStripMenuItem->Size = System::Drawing::Size(94, 19);
			this->îÏğîãğàììåToolStripMenuItem->Text = L"Î ïğîãğàììå";
			this->îÏğîãğàììåToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::îÏğîãğàììåToolStripMenuItem_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(784, 561);
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
	private: System::Void àíãëèéñêèéToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
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
private: System::Void ğóññêèéToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
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
private: System::Void ğóññêèéToolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e) {
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

private: System::Void âûáğàòüÑàìîñòîÿòåëüíîToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ openDlg = gcnew OpenFileDialog();
	openDlg->Filter = "Image Files(*.BMP;*.JPG;*.GIF;*.PNG)|*.BMP;*.JPG;*.GIF;*.PNG|All files (*.*)|*.*";
	if (System::Windows::Forms::DialogResult::OK == openDlg->ShowDialog())
	{
		this->BackgroundImage = Image::FromFile(openDlg->FileName);
	}
}
private: System::Void ñòàíäàğòíûéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->BackColor = SystemColors::ButtonFace;
}
private: System::Void ğàíäîìíûéÖâåòToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
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
private: System::Void áåëûéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->BackColor = Color::White;
}
private: System::Void ÷¸ğíûéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->BackColor = Color::Black;
}
private: System::Void êğàñíûéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->BackColor = Color::Red;
}
private: System::Void âûõîäToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void îÏğîãğàììåToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("In developing", "Error!", MessageBoxButtons::OK);
}
};
}
