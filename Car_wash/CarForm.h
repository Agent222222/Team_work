#pragma once
#include <string>
#include <fstream>
#include <algorithm>
#include <sstream>
#include <iomanip>
#include <cctype>
#include <string>
#include <windows.h>
#using <System.dll>
#using <System.Drawing.dll>
#using <System.Windows.Forms.dll>

#include "EmplForm.h"
#include "Info.h"

int Salary1 = 0;
int Salary2 = 0;
int Salary3 = 0;

namespace Carwash {
	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;
	using namespace System::IO;


	/// <summary>
	/// Summary for CarForm
	/// </summary>
	public ref class CarForm : public System::Windows::Forms::Form
	{
	public:
		CarForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	private: System::Windows::Forms::CheckBox^ checkBox1;
	public:
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox1;
		   EmplForm obj;
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CarForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ToolStrip^ toolStrip1;
	private: System::Windows::Forms::ToolStripDropDownButton^ toolStripLabel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;



	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::ToolStripButton^ Exit;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton3;


	protected:


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CarForm::typeid));
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripLabel1 = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->Exit = (gcnew System::Windows::Forms::ToolStripButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->toolStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// toolStrip1
			// 
			this->toolStrip1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(83)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->toolStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->toolStrip1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripLabel1,
					this->Exit
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 0);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Padding = System::Windows::Forms::Padding(0, 0, 3, 0);
			this->toolStrip1->Size = System::Drawing::Size(945, 38);
			this->toolStrip1->TabIndex = 0;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// toolStripLabel1
			// 
			this->toolStripLabel1->Name = L"toolStripLabel1";
			this->toolStripLabel1->Size = System::Drawing::Size(208, 33);
			this->toolStripLabel1->Text = L"Amount of employees";
			this->toolStripLabel1->Click += gcnew System::EventHandler(this, &CarForm::toolStripLabel1_Click);
			// 
			// Exit
			// 
			this->Exit->Alignment = System::Windows::Forms::ToolStripItemAlignment::Right;
			this->Exit->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->Exit->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->Exit->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Exit.Image")));
			this->Exit->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->Exit->MergeAction = System::Windows::Forms::MergeAction::MatchOnly;
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(34, 33);
			this->Exit->Text = L"toolStripButton1";
			this->Exit->Click += gcnew System::EventHandler(this, &CarForm::toolStripButton1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 8.150944F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(186)),
				static_cast<System::Int32>(static_cast<System::Byte>(144)));
			this->label1->Location = System::Drawing::Point(75, 54);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(203, 24);
			this->label1->TabIndex = 2;
			this->label1->Text = L"First and Second name";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(46, 194);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(232, 26);
			this->dateTimePicker1->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 8.150944F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(186)),
				static_cast<System::Int32>(static_cast<System::Byte>(144)));
			this->label2->Location = System::Drawing::Point(40, 162);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(172, 29);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Date of service";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 8.830189F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(186)),
				static_cast<System::Int32>(static_cast<System::Byte>(144)));
			this->label3->Location = System::Drawing::Point(42, 232);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(100, 25);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Start time";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 8.830189F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(186)),
				static_cast<System::Int32>(static_cast<System::Byte>(144)));
			this->label4->Location = System::Drawing::Point(174, 232);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(91, 25);
			this->label4->TabIndex = 6;
			this->label4->Text = L"End time";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(46, 269);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 26);
			this->textBox2->TabIndex = 7;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(178, 269);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 26);
			this->textBox3->TabIndex = 8;
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5
			});
			this->dataGridView1->Location = System::Drawing::Point(296, 55);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(611, 392);
			this->dataGridView1->TabIndex = 12;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Робітник";
			this->Column1->MinimumWidth = 8;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 150;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Послуга";
			this->Column2->MinimumWidth = 8;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 150;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Час початку";
			this->Column3->MinimumWidth = 8;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 150;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Час завершення";
			this->Column4->MinimumWidth = 8;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 150;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Дата";
			this->Column5->MinimumWidth = 8;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 150;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(158)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
				static_cast<System::Int32>(static_cast<System::Byte>(82)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 8.830189F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(46, 514);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(198, 66);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Add ";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &CarForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(158)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
				static_cast<System::Int32>(static_cast<System::Byte>(82)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 8.830189F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(486, 515);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(200, 66);
			this->button2->TabIndex = 14;
			this->button2->Text = L"Additional info";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &CarForm::button2_Click);
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(94, 308);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(150, 35);
			this->label5->TabIndex = 16;
			this->label5->Text = L"Car body washing";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(94, 355);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(150, 47);
			this->label6->TabIndex = 17;
			this->label6->Text = L"Car body + cabin washing";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label7
			// 
			this->label7->BackColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(94, 412);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(150, 35);
			this->label7->TabIndex = 18;
			this->label7->Text = L"Dry cleaning";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(158)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
				static_cast<System::Int32>(static_cast<System::Byte>(82)));
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 8.830189F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(265, 515);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(200, 65);
			this->button4->TabIndex = 19;
			this->button4->Text = L"Delete";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &CarForm::button4_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 8.150944F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(186)),
				static_cast<System::Int32>(static_cast<System::Byte>(144)));
			this->label8->Location = System::Drawing::Point(75, 90);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(203, 24);
			this->label8->TabIndex = 20;
			this->label8->Text = L"First and Second name";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 8.150944F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(186)),
				static_cast<System::Int32>(static_cast<System::Byte>(144)));
			this->label9->Location = System::Drawing::Point(75, 128);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(203, 24);
			this->label9->TabIndex = 21;
			this->label9->Text = L"First and Second name";
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(48, 315);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(21, 20);
			this->radioButton1->TabIndex = 22;
			this->radioButton1->TabStop = true;
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(48, 368);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(21, 20);
			this->radioButton2->TabIndex = 23;
			this->radioButton2->TabStop = true;
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(48, 419);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(21, 20);
			this->radioButton3->TabIndex = 24;
			this->radioButton3->TabStop = true;
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(48, 54);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(22, 21);
			this->checkBox1->TabIndex = 25;
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(48, 90);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(22, 21);
			this->checkBox2->TabIndex = 26;
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(48, 128);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(22, 21);
			this->checkBox3->TabIndex = 27;
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(158)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
				static_cast<System::Int32>(static_cast<System::Byte>(82)));
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 8.830189F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(707, 515);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(200, 66);
			this->button3->TabIndex = 28;
			this->button3->Text = L"File info";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &CarForm::button3_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(48, 462);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(853, 37);
			this->textBox1->TabIndex = 29;
			this->textBox1->Visible = false;
			// 
			// CarForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(43)));
			this->ClientSize = System::Drawing::Size(945, 632);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->toolStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"CarForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"CarForm";
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		void refill() { 
			dataGridView1->RowCount = 1;
			for (int i = 0; i < dayInfo.size(); i++) {
				dataGridView1->RowCount++;
				for (int j = 0; j < 5; j++) {
					dataGridView1->Rows[i]->Cells[j]->Value = dayInfo[i].GetProperty(j); 
				}
			}
		}

		int convertTimeToMinutes(const std::string& timeStr) {
			std::istringstream ss(timeStr);
			int hours, minutes;

			char colon;
			if (!(ss >> hours >> colon >> minutes) || colon != ':') {
				std::cerr << "Invalid time format: " << timeStr << std::endl;
				return -1;
			}

			int totalMinutes = hours * 60 + minutes;
			return totalMinutes;
		}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox1->Visible = false;
	if (checkBox1->Checked) {

		if (convertTimeToMinutes(marshal_as<std::string>(textBox2->Text)) == -1 || -1 == convertTimeToMinutes(marshal_as<std::string>(textBox3->Text))) {
			MessageBox::Show(this, "Incorect time format ! \n Correct example < 12:00 > ", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		if (convertTimeToMinutes(marshal_as<std::string>(textBox2->Text)) < 480 || 1200 < convertTimeToMinutes(marshal_as<std::string>(textBox3->Text))) {
			MessageBox::Show(this, "It is too early or too late to work", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		int am = 1;
		if (checkBox2->Checked) {
			am++;
		}
		if (checkBox3->Checked) {
			am++;
		}

		CInfo* elem = new CInfo(obj.list->GetName1(), marshal_as<std::string>(textBox2->Text), marshal_as<std::string>(textBox3->Text), marshal_as<std::string>(dateTimePicker1->Text));
		if (radioButton1->Checked) {
			if (convertTimeToMinutes(marshal_as<std::string>(textBox3->Text)) - convertTimeToMinutes(marshal_as<std::string>(textBox2->Text)) > 30) {
				MessageBox::Show(this, "your workers are not done in time", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			elem->setProcedure("Кузов");
			elem->setIncome(350 / am);
			Salary1 += 350 / am;
		}
		else if (radioButton2->Checked) {
			if (convertTimeToMinutes(marshal_as<std::string>(textBox3->Text)) - convertTimeToMinutes(marshal_as<std::string>(textBox2->Text)) > 60) {
				MessageBox::Show(this, "your workers are not done in time", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			elem->setProcedure("Кузов + Салон");
			elem->setIncome(750 / am);
			Salary1 += 750 / am;
		}
		else if (radioButton3->Checked) {
			if (convertTimeToMinutes(marshal_as<std::string>(textBox3->Text)) - convertTimeToMinutes(marshal_as<std::string>(textBox2->Text)) > 240) {
				MessageBox::Show(this, "your workers are not done in time", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			elem->setProcedure("Хімчистка");
			elem->setIncome(1800 / am);
			Salary1 += 1800 / am;
		}
		elem->setInfo(marshal_as<std::string>(textBox1->Text));

		dayInfo.push_back(*elem);
		refill();

		std::string filename = "table_of_" + msclr::interop::marshal_as<std::string>(dateTimePicker1->Text->Replace(" ", "")) + ".txt";

		const char* fileName = filename.c_str();

		std::ofstream outputFile;

		outputFile.open(fileName);

		if (!outputFile.is_open()) {
			MessageBox::Show(this, "File was not opened", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		outputFile.clear();

		for (int i = 0; i < dayInfo.size(); i++) {
			if (dayInfo[i].getDate() == marshal_as<std::string>(dateTimePicker1->Text)) {
				outputFile << dayInfo[i];
			}
		}

		if (obj.list->GetAmount() == 3) {
			outputFile << obj.list->GetName1() << " : " << Salary1 / 2 << std::endl;
			outputFile << obj.list->GetName2() << " : " << Salary2 / 2 << std::endl;
			outputFile << obj.list->GetName3() << " : " << Salary3 / 2 << std::endl;
		}
		else if (obj.list->GetAmount() == 2) {
			outputFile << obj.list->GetName1() << " : " << Salary1 / 2 << std::endl;
			outputFile << obj.list->GetName2() << " : " << Salary2 / 2 << std::endl;
		}
		else {
			outputFile << obj.list->GetName1() << " : " << Salary1 / 2 << std::endl;
		}

		outputFile.close();
	}
	if (checkBox2->Checked) {

		if (convertTimeToMinutes(marshal_as<std::string>(textBox2->Text)) == -1 || -1 == convertTimeToMinutes(marshal_as<std::string>(textBox3->Text))) {
			MessageBox::Show(this, "Incorect time format ! \n Correct example < 12:00 > ", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		if (convertTimeToMinutes(marshal_as<std::string>(textBox2->Text)) < 480 || 1200 < convertTimeToMinutes(marshal_as<std::string>(textBox3->Text))) {
			MessageBox::Show(this, "It is too early or too late to work", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		int am = 1;
		if (checkBox1->Checked) {
			am++;
		}
		if (checkBox3->Checked) {
			am++;
		}

		CInfo* elem = new CInfo(obj.list->GetName2(), marshal_as<std::string>(textBox2->Text), marshal_as<std::string>(textBox3->Text), marshal_as<std::string>(dateTimePicker1->Text));
		if (radioButton1->Checked) {
			if (convertTimeToMinutes(marshal_as<std::string>(textBox3->Text)) - convertTimeToMinutes(marshal_as<std::string>(textBox2->Text)) > 30) {
				MessageBox::Show(this, "your workers are not done in time", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			elem->setProcedure("Кузов");
			elem->setIncome(350 / am);
			Salary2 += 350 / am;
		}
		else if (radioButton2->Checked) {
			if (convertTimeToMinutes(marshal_as<std::string>(textBox3->Text)) - convertTimeToMinutes(marshal_as<std::string>(textBox2->Text)) > 60) {
				MessageBox::Show(this, "your workers are not done in time", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			elem->setProcedure("Кузов + Салон");
			elem->setIncome(750 / am);
			Salary2 += 750 / am;
		}
		else if (radioButton3->Checked) {
			if (convertTimeToMinutes(marshal_as<std::string>(textBox3->Text)) - convertTimeToMinutes(marshal_as<std::string>(textBox2->Text)) > 240) {
				MessageBox::Show(this, "your workers are not done in time", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			elem->setProcedure("Хімчистка");
			elem->setIncome(1800 / am);
			Salary2 += 1800 / am;
		}
		elem->setInfo(marshal_as<std::string>(textBox1->Text));

		dayInfo.push_back(*elem);
		refill();

		std::string filename = "table_of_" + msclr::interop::marshal_as<std::string>(dateTimePicker1->Text->Replace(" ", "")) + ".txt";

		const char* fileName = filename.c_str();

		std::ofstream outputFile;

		outputFile.open(fileName);

		if (!outputFile.is_open()) {
			MessageBox::Show(this, "File was not opened", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		outputFile.clear();

		for (int i = 0; i < dayInfo.size(); i++) {
			if (dayInfo[i].getDate() == marshal_as<std::string>(dateTimePicker1->Text)) {
				outputFile << dayInfo[i];
			}
		}

		if (obj.list->GetAmount() == 3) {
			outputFile << obj.list->GetName1() << " : " << Salary1 / 2 << std::endl;
			outputFile << obj.list->GetName2() << " : " << Salary2 / 2 << std::endl;
			outputFile << obj.list->GetName3() << " : " << Salary3 / 2 << std::endl;
		}
		else if (obj.list->GetAmount() == 2) {
			outputFile << obj.list->GetName1() << " : " << Salary1 / 2 << std::endl;
			outputFile << obj.list->GetName2() << " : " << Salary2 / 2 << std::endl;
		}
		else {
			outputFile << obj.list->GetName1() << " : " << Salary1 / 2 << std::endl;
		}

		outputFile.close();
	}
	if (checkBox3->Checked) {

		if (convertTimeToMinutes(marshal_as<std::string>(textBox2->Text)) == -1 || -1 == convertTimeToMinutes(marshal_as<std::string>(textBox3->Text))) {
			MessageBox::Show(this, "Incorect time format ! \n Correct example < 12:00 > ", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		if (convertTimeToMinutes(marshal_as<std::string>(textBox2->Text)) < 480 || 1200 < convertTimeToMinutes(marshal_as<std::string>(textBox3->Text))) {
			MessageBox::Show(this, "It is too early or too late to work", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		int am = 1;
		if (checkBox2->Checked) {
			am++;
		}
		if (checkBox1->Checked) {
			am++;
		}

		CInfo* elem = new CInfo(obj.list->GetName3(), marshal_as<std::string>(textBox2->Text), marshal_as<std::string>(textBox3->Text), marshal_as<std::string>(dateTimePicker1->Text));
		if (radioButton1->Checked) {
			if (convertTimeToMinutes(marshal_as<std::string>(textBox3->Text)) - convertTimeToMinutes(marshal_as<std::string>(textBox2->Text)) > 30) {
				MessageBox::Show(this, "your workers are not done in time", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			elem->setProcedure("Кузов");
			elem->setIncome(350 / am);
			Salary3 += 350 / am;
		}
		else if (radioButton2->Checked) {
			if (convertTimeToMinutes(marshal_as<std::string>(textBox3->Text)) - convertTimeToMinutes(marshal_as<std::string>(textBox2->Text)) > 60) {
				MessageBox::Show(this, "your workers are not done in time", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			elem->setProcedure("Кузов + Салон");
			elem->setIncome(750 / am);
			Salary3 += 750 / am;
		}
		else if (radioButton3->Checked) {
			if (convertTimeToMinutes(marshal_as<std::string>(textBox3->Text)) - convertTimeToMinutes(marshal_as<std::string>(textBox2->Text)) > 240) {
				MessageBox::Show(this, "your workers are not done in time", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			elem->setProcedure("Хімчистка");
			elem->setIncome(1800 / am);
			Salary3 += 1800 / am;
		}
		elem->setInfo(marshal_as<std::string>(textBox1->Text));

		dayInfo.push_back(*elem);
		refill();

		std::string filename = "table_of_" + msclr::interop::marshal_as<std::string>(dateTimePicker1->Text->Replace(" ", "")) + ".txt";

		const char* fileName = filename.c_str();

		std::ofstream outputFile;

		outputFile.open(fileName);

		if (!outputFile.is_open()) {
			MessageBox::Show(this, "File was not opened", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		outputFile.clear();

		for (int i = 0; i < dayInfo.size(); i++) {
			if (dayInfo[i].getDate() == marshal_as<std::string>(dateTimePicker1->Text)) {
				outputFile << dayInfo[i];
			}
		}

		if (obj.list->GetAmount() == 3) {
			outputFile << obj.list->GetName1() << " : " << Salary1/2 << std::endl;
			outputFile << obj.list->GetName2() << " : " << Salary2/2 << std::endl;
			outputFile << obj.list->GetName3() << " : " << Salary3/2 << std::endl;
		}
		else if (obj.list->GetAmount() == 2) {
			outputFile << obj.list->GetName1() << " : " << Salary1/2 << std::endl;
			outputFile << obj.list->GetName2() << " : " << Salary2/2 << std::endl;
		}
		else {
			outputFile << obj.list->GetName1() << " : " << Salary1/2 << std::endl;
		}

 		outputFile.close();
	}
}

private: System::Void toolStripButton1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void toolStripLabel1_Click(System::Object^ sender, System::EventArgs^ e) {
	obj.ShowDialog();
	
	if (obj.list->GetAmount() == 3) {
		checkBox2->Visible = true;
		label8->Visible = true;
		checkBox3->Visible = true;
		label9->Visible = true;
		label1->Text = msclr::interop::marshal_as<System::String^>(obj.list->GetName1());
		label8->Text = msclr::interop::marshal_as<System::String^>(obj.list->GetName2());
		label9->Text = msclr::interop::marshal_as<System::String^>(obj.list->GetName3());

	}
	else if (obj.list->GetAmount() == 2) {
		checkBox2->Visible = true;
		label8->Visible = true;
		checkBox3->Visible = false;
		label9->Visible = false;
		label1->Text = msclr::interop::marshal_as<System::String^>(obj.list->GetName1());
		label8->Text = msclr::interop::marshal_as<System::String^>(obj.list->GetName2());

	}
	else {
		checkBox2->Visible = false;
		label8->Visible = false;
		checkBox3->Visible = false;
		label9->Visible = false;
		label1->Text = msclr::interop::marshal_as<System::String^>(obj.list->GetName1());
	}
}

private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (dataGridView1->SelectedRows->Count > 0) { // перевірка, чи елемент вибрано
		int i = dayInfo.size() - 1;
		int selectedIndex = dataGridView1->SelectedRows[0]->Index; // знаходження вибраного елементу

		if (msclr::interop::marshal_as<System::String^>(dayInfo[selectedIndex].getName()) == label1->Text) {
			Salary1 -= dayInfo[selectedIndex].getIncome();
		}
		if (msclr::interop::marshal_as<System::String^>(dayInfo[selectedIndex].getName()) == label8->Text) {
			Salary2 -= dayInfo[selectedIndex].getIncome();
		}
		if (msclr::interop::marshal_as<System::String^>(dayInfo[selectedIndex].getName()) == label9->Text) {
			Salary3 -= dayInfo[selectedIndex].getIncome();
		}

		dataGridView1->RowCount--;
		for (int k = selectedIndex; k < dataGridView1->RowCount - 1; k++) { // очищення таблиці від вибраного елементу
			for (int j = 0; j < 5; j++) {
				dataGridView1->Rows[k]->Cells[j]->Value = dayInfo[k + 1].GetProperty(j);
			}
		}

		std::vector<CInfo> daynfobuffer;

		if (selectedIndex < dayInfo.size()) { 
			while (i >= selectedIndex) {
				if (i == selectedIndex) {
					dayInfo.pop_back();
				}
				else {
					daynfobuffer.push_back(dayInfo[i]);
					dayInfo.pop_back();
				}
				i--;
			}
			i = daynfobuffer.size() - 1;
			while (i >= 0) {
				dayInfo.push_back(daynfobuffer[i]);
				daynfobuffer.pop_back();
				i--;
			}
		}

		std::string filename = "table_of_" + msclr::interop::marshal_as<std::string>(dateTimePicker1->Text->Replace(" ", "")) + ".txt";

		const char* fileName = filename.c_str();

		std::ofstream outputFile;

		outputFile.open(fileName);

		if (!outputFile.is_open()) {
			MessageBox::Show(this, "File was not opened", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		outputFile.clear();

		for (int i = 0; i < dayInfo.size(); i++) {
			if (dayInfo[i].getDate() == marshal_as<std::string>(dateTimePicker1->Text)){
				outputFile << dayInfo[i];
			}
		}

		if (obj.list->GetAmount() == 3) {
			outputFile << obj.list->GetName1() << " : " << Salary1 / 2 << std::endl;
			outputFile << obj.list->GetName2() << " : " << Salary2 / 2 << std::endl;
			outputFile << obj.list->GetName3() << " : " << Salary3 / 2 << std::endl;
		}
		else if (obj.list->GetAmount() == 2) {
			outputFile << obj.list->GetName1() << " : " << Salary1 / 2 << std::endl;
			outputFile << obj.list->GetName2() << " : " << Salary2 / 2 << std::endl;
		}
		else {
			outputFile << obj.list->GetName1() << " : " << Salary1 / 2 << std::endl;
		}

		outputFile.close();
	}
	else {
		MessageBox::Show(this, "You have not chosen any element", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if (dataGridView1->SelectedRows->Count > 0) {
		this->textBox1->Visible = false;
		// перевірка, чи елемент вибрано
		int i = dayInfo.size() - 1;
		int selectedIndex = dataGridView1->SelectedRows[0]->Index; // знаходження вибраного елементу

		std::string Text = dayInfo[selectedIndex].getAddinf();

		System::String^ STRText = gcnew System::String(Text.c_str());
		MessageBox::Show(this, STRText, "Info", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	else {
		this->textBox1->Visible = true;
		return;
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	// Specify the full path to the file
	std::string stdStr = msclr::interop::marshal_as<std::string>(dateTimePicker1->Text->Replace(" ", "")) + ".txt";
	std::string fullPath = "E:\\Slavery\\ONLY_FANS\\2curs\\Team_w\\Team_work\\Car_wash\\table_of_" + stdStr;  // Update this with the actual path

	const char* charStr = fullPath.c_str();

	std::ifstream fin(charStr);
	if (!fin.is_open()) {
		std::cerr << "Error opening file for reading." << std::endl;
		return;
	}

	std::string line;
	std::string Text;
	while (std::getline(fin, line)) {
		Text += line;
		Text += "\n";
	}

	fin.close();

	System::String^ STRText = gcnew System::String(Text.c_str());
	MessageBox::Show(this, STRText, "Info", MessageBoxButtons::OK, MessageBoxIcon::Information);

}
};
}
