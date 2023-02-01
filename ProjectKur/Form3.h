#pragma once
#include <Windows.h>
#include <fileapi.h>
#include <WinBase.h>
#include <sstream>
#include <msclr\marshal_cppstd.h>

namespace ProjectKur {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;

	/// <summary>
	/// Сводка для Form3
	/// </summary>
	public ref class Form3 : public System::Windows::Forms::Form
	{
	public:
		Form3(void)
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
		~Form3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column12;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column13;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column14;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column15;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column16;
	private: System::Windows::Forms::ToolStripMenuItem^ операцииToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ заполнитьТаблицуСекторовДискаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ очиститьТаблицуСекторовДискаToolStripMenuItem;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;


	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ToolStripMenuItem^ номераКластеровToolStripMenuItem;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ToolStripMenuItem^ форматToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ выровнятьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ поЦентруToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ справкаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ просмотрСправкиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ оПрограммеToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ выходToolStripMenuItem;






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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form3::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->операцииToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->заполнитьТаблицуСекторовДискаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->очиститьТаблицуСекторовДискаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->номераКластеровToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->форматToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выровнятьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->поЦентруToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->справкаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->просмотрСправкиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->оПрограммеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column15 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column16 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->операцииToolStripMenuItem,
					this->форматToolStripMenuItem, this->справкаToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1371, 31);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// операцииToolStripMenuItem
			// 
			this->операцииToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->заполнитьТаблицуСекторовДискаToolStripMenuItem,
					this->очиститьТаблицуСекторовДискаToolStripMenuItem, this->номераКластеровToolStripMenuItem, this->выходToolStripMenuItem
			});
			this->операцииToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->операцииToolStripMenuItem->Name = L"операцииToolStripMenuItem";
			this->операцииToolStripMenuItem->Size = System::Drawing::Size(105, 27);
			this->операцииToolStripMenuItem->Text = L"Операции";
			// 
			// заполнитьТаблицуСекторовДискаToolStripMenuItem
			// 
			this->заполнитьТаблицуСекторовДискаToolStripMenuItem->Name = L"заполнитьТаблицуСекторовДискаToolStripMenuItem";
			this->заполнитьТаблицуСекторовДискаToolStripMenuItem->Size = System::Drawing::Size(370, 28);
			this->заполнитьТаблицуСекторовДискаToolStripMenuItem->Text = L"Заполнить таблицу секторов диска";
			this->заполнитьТаблицуСекторовДискаToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form3::заполнитьТаблицуСекторовДискаToolStripMenuItem_Click);
			// 
			// очиститьТаблицуСекторовДискаToolStripMenuItem
			// 
			this->очиститьТаблицуСекторовДискаToolStripMenuItem->Name = L"очиститьТаблицуСекторовДискаToolStripMenuItem";
			this->очиститьТаблицуСекторовДискаToolStripMenuItem->Size = System::Drawing::Size(370, 28);
			this->очиститьТаблицуСекторовДискаToolStripMenuItem->Text = L"Очистить таблицу секторов диска";
			this->очиститьТаблицуСекторовДискаToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form3::очиститьТаблицуСекторовДискаToolStripMenuItem_Click);
			// 
			// номераКластеровToolStripMenuItem
			// 
			this->номераКластеровToolStripMenuItem->Name = L"номераКластеровToolStripMenuItem";
			this->номераКластеровToolStripMenuItem->Size = System::Drawing::Size(370, 28);
			this->номераКластеровToolStripMenuItem->Text = L"Вывести номера кластеров";
			this->номераКластеровToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form3::номераКластеровToolStripMenuItem_Click);
			// 
			// выходToolStripMenuItem
			// 
			this->выходToolStripMenuItem->Name = L"выходToolStripMenuItem";
			this->выходToolStripMenuItem->Size = System::Drawing::Size(370, 28);
			this->выходToolStripMenuItem->Text = L"Закрыть вкладку";
			this->выходToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form3::выходToolStripMenuItem_Click);
			// 
			// форматToolStripMenuItem
			// 
			this->форматToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->выровнятьToolStripMenuItem });
			this->форматToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->форматToolStripMenuItem->Name = L"форматToolStripMenuItem";
			this->форматToolStripMenuItem->Size = System::Drawing::Size(84, 27);
			this->форматToolStripMenuItem->Text = L"Формат";
			// 
			// выровнятьToolStripMenuItem
			// 
			this->выровнятьToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->поЦентруToolStripMenuItem });
			this->выровнятьToolStripMenuItem->Name = L"выровнятьToolStripMenuItem";
			this->выровнятьToolStripMenuItem->Size = System::Drawing::Size(180, 28);
			this->выровнятьToolStripMenuItem->Text = L"Выровнять";
			// 
			// поЦентруToolStripMenuItem
			// 
			this->поЦентруToolStripMenuItem->Name = L"поЦентруToolStripMenuItem";
			this->поЦентруToolStripMenuItem->Size = System::Drawing::Size(175, 28);
			this->поЦентруToolStripMenuItem->Text = L"По центру";
			this->поЦентруToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form3::поЦентруToolStripMenuItem_Click);
			// 
			// справкаToolStripMenuItem
			// 
			this->справкаToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->просмотрСправкиToolStripMenuItem,
					this->оПрограммеToolStripMenuItem
			});
			this->справкаToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->справкаToolStripMenuItem->Name = L"справкаToolStripMenuItem";
			this->справкаToolStripMenuItem->Size = System::Drawing::Size(90, 27);
			this->справкаToolStripMenuItem->Text = L"Справка";
			// 
			// просмотрСправкиToolStripMenuItem
			// 
			this->просмотрСправкиToolStripMenuItem->Name = L"просмотрСправкиToolStripMenuItem";
			this->просмотрСправкиToolStripMenuItem->Size = System::Drawing::Size(242, 28);
			this->просмотрСправкиToolStripMenuItem->Text = L"Просмотр справки";
			this->просмотрСправкиToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form3::просмотрСправкиToolStripMenuItem_Click);
			// 
			// оПрограммеToolStripMenuItem
			// 
			this->оПрограммеToolStripMenuItem->Name = L"оПрограммеToolStripMenuItem";
			this->оПрограммеToolStripMenuItem->Size = System::Drawing::Size(242, 28);
			this->оПрограммеToolStripMenuItem->Text = L"О программе";
			this->оПрограммеToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form3::оПрограммеToolStripMenuItem_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->numericUpDown1);
			this->groupBox1->Controls->Add(this->dataGridView1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"SimSun-ExtB", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(12, 104);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(978, 478);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Секторы диска:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"SimSun-ExtB", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(673, 18);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(135, 20);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Номер сектора";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"SimSun-ExtB", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numericUpDown1->Location = System::Drawing::Point(852, 16);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(120, 27);
			this->numericUpDown1->TabIndex = 1;
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &Form3::numericUpDown1_ValueChanged);
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::LightCyan;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(16) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7, this->Column8, this->Column9, this->Column10,
					this->Column11, this->Column12, this->Column13, this->Column14, this->Column15, this->Column16
			});
			this->dataGridView1->Location = System::Drawing::Point(6, 49);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(966, 417);
			this->dataGridView1->TabIndex = 0;
			// 
			// Column1
			// 
			this->Column1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column1->HeaderText = L"0";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 49;
			// 
			// Column2
			// 
			this->Column2->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column2->HeaderText = L"1";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 49;
			// 
			// Column3
			// 
			this->Column3->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column3->HeaderText = L"2";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 49;
			// 
			// Column4
			// 
			this->Column4->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column4->HeaderText = L"3";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 49;
			// 
			// Column5
			// 
			this->Column5->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column5->HeaderText = L"4";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 49;
			// 
			// Column6
			// 
			this->Column6->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column6->HeaderText = L"5";
			this->Column6->MinimumWidth = 6;
			this->Column6->Name = L"Column6";
			this->Column6->Width = 49;
			// 
			// Column7
			// 
			this->Column7->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column7->HeaderText = L"6";
			this->Column7->MinimumWidth = 6;
			this->Column7->Name = L"Column7";
			this->Column7->Width = 49;
			// 
			// Column8
			// 
			this->Column8->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column8->HeaderText = L"7";
			this->Column8->MinimumWidth = 6;
			this->Column8->Name = L"Column8";
			this->Column8->Width = 49;
			// 
			// Column9
			// 
			this->Column9->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column9->HeaderText = L"8";
			this->Column9->MinimumWidth = 6;
			this->Column9->Name = L"Column9";
			this->Column9->Width = 49;
			// 
			// Column10
			// 
			this->Column10->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column10->HeaderText = L"9";
			this->Column10->MinimumWidth = 6;
			this->Column10->Name = L"Column10";
			this->Column10->Width = 49;
			// 
			// Column11
			// 
			this->Column11->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column11->HeaderText = L"A";
			this->Column11->MinimumWidth = 6;
			this->Column11->Name = L"Column11";
			this->Column11->Width = 49;
			// 
			// Column12
			// 
			this->Column12->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column12->HeaderText = L"B";
			this->Column12->MinimumWidth = 6;
			this->Column12->Name = L"Column12";
			this->Column12->Width = 49;
			// 
			// Column13
			// 
			this->Column13->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column13->HeaderText = L"C";
			this->Column13->MinimumWidth = 6;
			this->Column13->Name = L"Column13";
			this->Column13->Width = 49;
			// 
			// Column14
			// 
			this->Column14->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column14->HeaderText = L"D";
			this->Column14->MinimumWidth = 6;
			this->Column14->Name = L"Column14";
			this->Column14->Width = 49;
			// 
			// Column15
			// 
			this->Column15->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column15->HeaderText = L"E";
			this->Column15->MinimumWidth = 6;
			this->Column15->Name = L"Column15";
			this->Column15->Width = 49;
			// 
			// Column16
			// 
			this->Column16->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column16->HeaderText = L"F";
			this->Column16->MinimumWidth = 6;
			this->Column16->Name = L"Column16";
			this->Column16->Width = 49;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"SimSun-ExtB", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(171, 26);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 27);
			this->textBox1->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"SimSun-ExtB", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(6, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(144, 20);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Номер кластера";
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::Color::LightCyan;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"SimSun-ExtB", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox1->Location = System::Drawing::Point(1007, 84);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(352, 498);
			this->richTextBox1->TabIndex = 2;
			this->richTextBox1->Text = L"";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Controls->Add(this->textBox1);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Location = System::Drawing::Point(21, 31);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(448, 67);
			this->groupBox2->TabIndex = 4;
			this->groupBox2->TabStop = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::SlateGray;
			this->button1->Font = (gcnew System::Drawing::Font(L"SimSun-ExtB", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(318, 21);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(113, 37);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Читать";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form3::button1_Click);
			// 
			// Form3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightBlue;
			this->ClientSize = System::Drawing::Size(1371, 608);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form3";
			this->Text = L"Анализ расположения по кластерам";
			this->Load += gcnew System::EventHandler(this, &Form3::Form3_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		short ReadSect
		(const char* _dsk,    // диск для доступа
			byte*& _buff,         // буфер в котором будет находиться сектор
			unsigned int _nsect   // номер сектора начиная с 0
		)
		{
			TCHAR rootName[512];
			mbstowcs(rootName, _dsk, 511);
			DWORD dwRead;
			HANDLE dDisk = CreateFile(rootName, GENERIC_READ, FILE_SHARE_READ | FILE_SHARE_WRITE | FILE_SHARE_DELETE, 0, OPEN_EXISTING, FILE_ATTRIBUTE_READONLY, 0);
			if (dDisk == INVALID_HANDLE_VALUE) // может произойти если другая программа уже читает диск
			{
				CloseHandle(dDisk);
				return 1;
			}
			SetFilePointer(dDisk, _nsect * 512, 0, FILE_BEGIN); // какой сектор читать

			ReadFile(dDisk, _buff, 512, &dwRead, 0);  // чтение сектора
			CloseHandle(dDisk);
			return 0;
		}

		short ReadSect
		(const char* _dsk,    // диск для доступа
			uint32_t*& _buff,         // буфер в котором будет храниться сектор
			unsigned int _nsect   // номер сектора начиная с 0
		)
		{
			TCHAR rootName[512];
			mbstowcs(rootName, _dsk, 511);
			DWORD dwRead;
			HANDLE dDisk = CreateFile(rootName, GENERIC_READ, FILE_SHARE_READ | FILE_SHARE_WRITE | FILE_SHARE_DELETE, 0, OPEN_EXISTING, FILE_ATTRIBUTE_READONLY, 0);
			if (dDisk == INVALID_HANDLE_VALUE) // может произойти если другая программа уже читает диск
			{
				CloseHandle(dDisk);
				return 1;
			}
			SetFilePointer(dDisk, _nsect * 512, 0, FILE_BEGIN); // какой сектор читать

			ReadFile(dDisk, _buff, 512, &dwRead, 0);  // чтение сектора
			CloseHandle(dDisk);
			return 0;
		}
		//Переменная с названием читаемого диска
		System::String^ disk = "D:";
		//Переключение секторов диска
	private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		byte* buffer = (byte*)malloc(512);
		System::String^ managed = disk;
		std::string prefix = "\\\\.\\";
		std::string unmanaged = msclr::interop::marshal_as<std::string>(managed);
		ReadSect((prefix + unmanaged).c_str(), buffer, (int)numericUpDown1->Value);
		dataGridView1->Rows->Clear();
		for (int i = 0; i < 32; i++) {
			dataGridView1->Rows->Add(buffer[0 + 16 * i].ToString("X"), buffer[1 + 16 * i].ToString("X"),
				buffer[2 + 16 * i].ToString("X"), buffer[3 + 16 * i].ToString("X"),
				buffer[4 + 16 * i].ToString("X"), buffer[5 + 16 * i].ToString("X"),
				buffer[6 + 16 * i].ToString("X"), buffer[7 + 16 * i].ToString("X"),
				buffer[8 + 16 * i].ToString("X"), buffer[9 + 16 * i].ToString("X"),
				buffer[10 + 16 * i].ToString("X"), buffer[11 + 16 * i].ToString("X"),
				buffer[12 + 16 * i].ToString("X"), buffer[13 + 16 * i].ToString("X"),
				buffer[14 + 16 * i].ToString("X"), buffer[15 + 16 * i].ToString("X"));
		}
	}
		   //Заполнение таблицы секторов, вывод загрузочного сектора
	private: System::Void заполнитьТаблицуСекторовДискаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

		HANDLE hDisk = ::CreateFile(L"\\\\.\\D:", GENERIC_READ | GENERIC_WRITE, FILE_SHARE_READ | FILE_SHARE_WRITE, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
		if (hDisk == INVALID_HANDLE_VALUE) {
			DWORD Error = GetLastError();
			String^ errorText = "Устройство недоступно - ";
			switch (Error) {
			case 2:
				errorText += "Ошибка нахождения требуемого устройства";
				break;
			case 5: errorText += "Ошибка доступа к заданному устройство";
			default:
				break;
			}
			Windows::Forms::MessageBox::Show(errorText, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		BYTE buffer[512];
		DWORD dwRead;
		if (!::ReadFile(hDisk, buffer, sizeof(buffer), &dwRead, NULL) || dwRead != sizeof(buffer)) {
			DWORD Error = GetLastError();
			String^ errorText = "Устройство недоступно - ";
			switch (Error) {
			case 2:
				errorText += "Ошибка нахождения требуемого устройства";
				break;
			case 5: errorText += "Ошибка доступа к заданному устройство";
			default:
				break;
			}
			Windows::Forms::MessageBox::Show(errorText, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		::CloseHandle(hDisk);

		dataGridView1->Rows->Clear();
		for (int i = 0; i < 32; i++) {
			dataGridView1->Rows->Add(buffer[0 + 16 * i].ToString("X"), buffer[1 + 16 * i].ToString("X"),
				buffer[2 + 16 * i].ToString("X"), buffer[3 + 16 * i].ToString("X"),
				buffer[4 + 16 * i].ToString("X"), buffer[5 + 16 * i].ToString("X"),
				buffer[6 + 16 * i].ToString("X"), buffer[7 + 16 * i].ToString("X"),
				buffer[8 + 16 * i].ToString("X"), buffer[9 + 16 * i].ToString("X"),
				buffer[10 + 16 * i].ToString("X"), buffer[11 + 16 * i].ToString("X"),
				buffer[12 + 16 * i].ToString("X"), buffer[13 + 16 * i].ToString("X"),
				buffer[14 + 16 * i].ToString("X"), buffer[15 + 16 * i].ToString("X"));
		}
		if (dataGridView1->Rows->Count == 33) {
			MessageBox::Show("Операция выполнена успешно!", "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else {
			MessageBox::Show("Ошибка заполнения!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void очиститьТаблицуСекторовДискаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		dataGridView1->Rows->Clear();
		MessageBox::Show("Операция выполнена успешно!", "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	
	private: System::Void Form2_Load(System::Object^ sender, System::EventArgs^ e) {
		groupBox2->Visible = false;
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//Открые сектора по номеру кластера
		
		int num;

		if (String::IsNullOrEmpty(textBox1->Text))
		{
			MessageBox::Show("Вы не ввели значение, выполнение операции невозможно!", "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		}

		try
		{
			num = Int32::Parse(textBox1->Text);
		}
		catch (FormatException^)
		{
			MessageBox::Show("Вы ввели некорректное значение, выполнение операции невозможно!", "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		}
		int sector = 32768 + num * 32 - 32 * 2;
		numericUpDown1->Value = sector;
		textBox1->Clear();
		if (true) {
			MessageBox::Show("Операция выполнена успешно!", "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else {
			MessageBox::Show("Ошибка заполнения!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}


	private: System::Void номераКластеровToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		int numClaster;
		int numSector = 32768;
		int rows = 1;
		const int n = 8;

		auto table = gcnew array<array<String^>^>(6)
		{
			{ "53", "31", "20", "20", "20", "20", "20", "20" },
			{ "53", "32", "20", "20", "20", "20", "20", "20" },
			{ "53", "33", "20", "20", "20", "20", "20", "20" },
			{ "53", "34", "20", "20", "20", "20", "20", "20" },
			{ "46", "49", "4C", "45", "31", "20", "20", "20" },
			{ "46", "49", "4C", "45", "32", "20", "20", "20" }
		};
		richTextBox1->Text = "";
		richTextBox1->Text += "\nАнализ каталожной структуры:\n";
		for (numClaster = 0; numClaster < 320; numClaster++) {
			numericUpDown1->Value = numSector;
			for (int i = 0; i < 32; i += 2) {
				auto stringBytes = gcnew array<String^>(8);
				for (int byte = 0; byte < 8; byte++) {
					stringBytes[byte] = dataGridView1->Rows[i]->Cells[byte]->Value->ToString();
				}
				for (int iter = 0; iter < 6; iter++) {
					for (int j = 0; j < 8; j++)
					{
						if (table[iter][j] != stringBytes[j])
							break;
						else
						{
							if (j == 7)
							{
								richTextBox1->Text += "\n";
								if (iter == 0)
								{
									richTextBox1->Text += "Имя каталога: S1";
								}
								if (iter == 1)
								{
									richTextBox1->Text += "Имя каталога: S2";
								}
								if (iter == 2)
								{
									richTextBox1->Text += "Имя каталога: S3";
								}
								if (iter == 3)
								{
									richTextBox1->Text += "Имя каталога: S4";
								}
								if (iter == 4)
								{
									richTextBox1->Text += "Имя файла: file1";
								}
								if (iter == 5)
								{
									richTextBox1->Text += "Имя файла: file2";
								}

								if ((int)((numSector - 32768) / 32) == 0)
									richTextBox1->Text += "\nНомер кластера: 2\n";
								else
									richTextBox1->Text += "\nНомер кластера: " + (int)((numSector - 32768) / 32) + "\n";

								richTextBox1->Text += "Номер сектора: " + numSector + "\n";
							}
						}
					}

				}
			}
			numSector += 1;
		}
		if (true) {
			MessageBox::Show("Операция выполнена успешно!", "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else {
			MessageBox::Show("Ошибка заполнения!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void поЦентруToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Form3::CenterToScreen();
		MessageBox::Show("Операция выполнена успешно!", "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
private: System::Void оПрограммеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Process::Start("notepad.exe", "C:\\Users\\darya\\Work\\OSiO\\Курсач\\Kurs1\\О программе.txt");
}
private: System::Void выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Form3::Close();
}

	private: System::Void Form3_Load(System::Object^ sender, System::EventArgs^ e) {
		/*this->WindowState = System::Windows::Forms::FormWindowState::Minimized;
		this->WindowState = System::Windows::Forms::FormWindowState::Normal;*/
	}
private: System::Void просмотрСправкиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Help::ShowHelp(this, "C:\\Users\\darya\\Work\\OSiO\\Курсач\\справка.chm");
}
};
}
