#pragma once
#include <Windows.h>
#include "Form3.h"
#include <iostream>
#include <direct.h>
#include <msclr\marshal_cppstd.h>
#include <fstream>
#include <io.h>
#include <filesystem>
#include <cstdint> 
#include <thread>

namespace ProjectKur {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;
	using namespace System::IO;
	using namespace std;
	using namespace System::Diagnostics;

	/// <summary>
	/// ������ ��� Form2
	/// </summary>
	public ref class Form2 : public System::Windows::Forms::Form
	{
	public:
		Form2(void)
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
		~Form2()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������������ToolStripMenuItem;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::ToolStripMenuItem^ �����������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;





	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ComboBox^ comboBox6;
	private: System::Windows::Forms::ToolStripMenuItem^ ������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ���������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ���������������ToolStripMenuItem;

	private: System::Windows::Forms::TreeView^ treeView1;

	private: System::Windows::Forms::ToolStripMenuItem^ ���������������DToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ����������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ ���������������ToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ ����������ToolStripMenuItem1;
	private: System::Windows::Forms::TreeView^ treeView2;
	private: System::Windows::Forms::ToolStripMenuItem^ �����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����������������������������ToolStripMenuItem;





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form2::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����������������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���������������DToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���������������ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->comboBox6 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->treeView1 = (gcnew System::Windows::Forms::TreeView());
			this->treeView2 = (gcnew System::Windows::Forms::TreeView());
			this->menuStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->����ToolStripMenuItem,
					this->������ToolStripMenuItem, this->�������ToolStripMenuItem, this->�������ToolStripMenuItem1
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1087, 31);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->�������������ToolStripMenuItem,
					this->�����������ToolStripMenuItem, this->�������ToolStripMenuItem, this->�����������������������������ToolStripMenuItem, this->�����ToolStripMenuItem
			});
			this->����ToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(64, 27);
			this->����ToolStripMenuItem->Text = L"����";
			// 
			// �������������ToolStripMenuItem
			// 
			this->�������������ToolStripMenuItem->Name = L"�������������ToolStripMenuItem";
			this->�������������ToolStripMenuItem->Size = System::Drawing::Size(384, 28);
			this->�������������ToolStripMenuItem->Text = L"����������";
			this->�������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form2::�������������ToolStripMenuItem_Click);
			// 
			// �����������ToolStripMenuItem
			// 
			this->�����������ToolStripMenuItem->Name = L"�����������ToolStripMenuItem";
			this->�����������ToolStripMenuItem->Size = System::Drawing::Size(384, 28);
			this->�����������ToolStripMenuItem->Text = L"�����������";
			this->�����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form2::�����������ToolStripMenuItem_Click);
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(384, 28);
			this->�������ToolStripMenuItem->Text = L"�������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form2::�������ToolStripMenuItem_Click);
			// 
			// �����������������������������ToolStripMenuItem
			// 
			this->�����������������������������ToolStripMenuItem->Name = L"�����������������������������ToolStripMenuItem";
			this->�����������������������������ToolStripMenuItem->Size = System::Drawing::Size(384, 28);
			this->�����������������������������ToolStripMenuItem->Text = L"������ ������������ �� ���������";
			this->�����������������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form2::�����������������������������ToolStripMenuItem_Click);
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(384, 28);
			this->�����ToolStripMenuItem->Text = L"�����";
			this->�����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form2::�����ToolStripMenuItem_Click);
			// 
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->���������ToolStripMenuItem,
					this->��������ToolStripMenuItem
			});
			this->������ToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->Size = System::Drawing::Size(119, 27);
			this->������ToolStripMenuItem->Text = L"����������";
			// 
			// ���������ToolStripMenuItem
			// 
			this->���������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->���������������DToolStripMenuItem,
					this->����������������ToolStripMenuItem
			});
			this->���������ToolStripMenuItem->Name = L"���������ToolStripMenuItem";
			this->���������ToolStripMenuItem->Size = System::Drawing::Size(172, 28);
			this->���������ToolStripMenuItem->Text = L"�������";
			// 
			// ���������������DToolStripMenuItem
			// 
			this->���������������DToolStripMenuItem->Name = L"���������������DToolStripMenuItem";
			this->���������������DToolStripMenuItem->Size = System::Drawing::Size(259, 28);
			this->���������������DToolStripMenuItem->Text = L"���������� ����� D:";
			this->���������������DToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form2::���������������DToolStripMenuItem_Click);
			// 
			// ����������������ToolStripMenuItem
			// 
			this->����������������ToolStripMenuItem->Name = L"����������������ToolStripMenuItem";
			this->����������������ToolStripMenuItem->Size = System::Drawing::Size(259, 28);
			this->����������������ToolStripMenuItem->Text = L"���������� ����� �:";
			this->����������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form2::����������������ToolStripMenuItem_Click);
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(172, 28);
			this->��������ToolStripMenuItem->Text = L"��������";
			this->��������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form2::��������ToolStripMenuItem_Click);
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->���������������ToolStripMenuItem });
			this->�������ToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(84, 27);
			this->�������ToolStripMenuItem->Text = L"������";
			// 
			// ���������������ToolStripMenuItem
			// 
			this->���������������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->��������ToolStripMenuItem });
			this->���������������ToolStripMenuItem->Name = L"���������������ToolStripMenuItem";
			this->���������������ToolStripMenuItem->Size = System::Drawing::Size(180, 28);
			this->���������������ToolStripMenuItem->Text = L"���������";
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(175, 28);
			this->��������ToolStripMenuItem->Text = L"�� ������";
			this->��������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form2::��������ToolStripMenuItem_Click);
			// 
			// �������ToolStripMenuItem1
			// 
			this->�������ToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->���������������ToolStripMenuItem1,
					this->����������ToolStripMenuItem1
			});
			this->�������ToolStripMenuItem1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->�������ToolStripMenuItem1->Name = L"�������ToolStripMenuItem1";
			this->�������ToolStripMenuItem1->Size = System::Drawing::Size(90, 27);
			this->�������ToolStripMenuItem1->Text = L"�������";
			// 
			// ���������������ToolStripMenuItem1
			// 
			this->���������������ToolStripMenuItem1->Name = L"���������������ToolStripMenuItem1";
			this->���������������ToolStripMenuItem1->Size = System::Drawing::Size(242, 28);
			this->���������������ToolStripMenuItem1->Text = L"�������� �������";
			this->���������������ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form2::���������������ToolStripMenuItem1_Click);
			// 
			// ����������ToolStripMenuItem1
			// 
			this->����������ToolStripMenuItem1->Name = L"����������ToolStripMenuItem1";
			this->����������ToolStripMenuItem1->Size = System::Drawing::Size(242, 28);
			this->����������ToolStripMenuItem1->Text = L"� ���������";
			this->����������ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form2::����������ToolStripMenuItem1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->comboBox6);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->comboBox3);
			this->groupBox1->Controls->Add(this->comboBox2);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"SimSun-ExtB", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(632, 40);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(443, 367);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"������� ������ �����";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &Form2::groupBox1_Enter);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(6, 173);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(259, 40);
			this->label6->TabIndex = 8;
			this->label6->Text = L"��� ����� ��� \r\n����������� (�����������):";
			// 
			// comboBox6
			// 
			this->comboBox6->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox6->FormattingEnabled = true;
			this->comboBox6->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"D:", L"C:" });
			this->comboBox6->Location = System::Drawing::Point(230, 226);
			this->comboBox6->Name = L"comboBox6";
			this->comboBox6->Size = System::Drawing::Size(207, 28);
			this->comboBox6->TabIndex = 7;
			this->comboBox6->SelectedIndexChanged += gcnew System::EventHandler(this, &Form2::comboBox6_SelectedIndexChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 94);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(266, 20);
			this->label3->TabIndex = 6;
			this->label3->Text = L"���� (� ��� ������������):";
			// 
			// comboBox3
			// 
			this->comboBox3->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(230, 131);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(207, 28);
			this->comboBox3->TabIndex = 5;
			this->comboBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &Form2::comboBox3_SelectedIndexChanged);
			// 
			// comboBox2
			// 
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(230, 310);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(207, 28);
			this->comboBox2->TabIndex = 3;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &Form2::comboBox2_SelectedIndexChanged);
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"D:", L"C:" });
			this->comboBox1->Location = System::Drawing::Point(230, 38);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(207, 28);
			this->comboBox1->TabIndex = 2;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form2::comboBox1_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 269);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(257, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"����� ������������ �����:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 38);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(203, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"��� ��������� �����:";
			// 
			// treeView1
			// 
			this->treeView1->BackColor = System::Drawing::Color::LightCyan;
			this->treeView1->Location = System::Drawing::Point(12, 40);
			this->treeView1->Name = L"treeView1";
			this->treeView1->Size = System::Drawing::Size(299, 371);
			this->treeView1->TabIndex = 3;
			// 
			// treeView2
			// 
			this->treeView2->BackColor = System::Drawing::Color::LightCyan;
			this->treeView2->Location = System::Drawing::Point(317, 40);
			this->treeView2->Name = L"treeView2";
			this->treeView2->Size = System::Drawing::Size(299, 371);
			this->treeView2->TabIndex = 5;
			// 
			// Form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightBlue;
			this->ClientSize = System::Drawing::Size(1087, 419);
			this->Controls->Add(this->treeView2);
			this->Controls->Add(this->treeView1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form2";
			this->Text = L"���������� ��� ������ � �������";
			this->Load += gcnew System::EventHandler(this, &Form2::Form2_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
		void BindDirectoryToTreeView1(String^ directoryPathToBind)
			//����� ���������� ����� D
		{
			treeView1->Nodes->Clear();
			TreeNode^ rootNode = gcnew TreeNode();
			treeView1->Nodes->Add(rootNode);
			RecurseFolders(directoryPathToBind, rootNode);
		}
		void BindDirectoryToTreeView2(String^ directoryPathToBind)
			//����� ���������� ����� C
		{
			treeView2->Nodes->Clear();
			TreeNode^ rootNode = gcnew TreeNode();
			treeView2->Nodes->Add(rootNode);
			RecurseFolders(directoryPathToBind, rootNode);
		}

		void RecurseFolders(String^ path, TreeNode^ node)
		{
			DirectoryInfo^ dir = gcnew DirectoryInfo(path);
			node->Text = dir->Name;

			try
			{
				auto Dirs = dir->GetDirectories();
				for (int i = 0; i < Dirs->GetLength(0); i++) {
					auto subdir = Dirs[i];
					auto childnode = gcnew TreeNode();
					node->Nodes->Add(childnode);
					RecurseFolders(subdir->FullName, childnode);

				}

			}
			catch (UnauthorizedAccessException^ ex)
			{
				std::cout << "Exception";
			}
			auto fiList = dir->GetFiles();
			for (int i = 0; i < fiList->GetLength(0); i++) {
				auto fi = fiList[i];
				auto fileNode = gcnew TreeNode(fi->Name);
				node->Nodes->Add(fileNode);
			}
		}
	

	private: System::Void �������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

		//���� file1.txt 
		if ((comboBox3->SelectedItem == "D:/S1/file1.txt") && (comboBox2->SelectedItem == "D:/")) {
			if (std::ifstream("D:/S1/file1.txt")) {
				char* startFile = "D:/S1/file1.txt";
				char* copyFile = "D:/";
				char* newFile = "D:/file1.txt";
				CopyingFile(startFile, copyFile, newFile);
				
			}
			else {
				MessageBox::Show("�� �� ������ ����������� ����, ��� ��� �� ������� ������������ ����� �� ����������!", "���������", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		if ((comboBox3->SelectedItem == "D:/S1/file1.txt") && (comboBox2->SelectedItem == "D:/S1/S4/")) {
			if (std::ifstream("D:/S1/file1.txt")) {
				char* startFile = "D:/S1/file1.txt";
				char* copyFile = "D:/S1/S4/";
				char* newFile = "D:/S1/S4/file1.txt";
				CopyingFile(startFile, copyFile, newFile);
			}
			else {
				MessageBox::Show("�� �� ������ ����������� ����, ��� ��� �� ������� ������������ ����� �� ����������!", "���������", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		if ((comboBox3->SelectedItem == "D:/S1/file1.txt") && (comboBox2->SelectedItem == "D:/S2/")) {
			if (std::ifstream("D:/S1/file1.txt")) {
				char* startFile = "D:/S1/file1.txt";
				char* copyFile = "D:/S2/";
				char* newFile = "D:/S2/file1.txt";
				CopyingFile(startFile, copyFile, newFile);
			}
			else {
				MessageBox::Show("�� �� ������ ����������� ����, ��� ��� �� ������� ������������ ����� �� ����������!", "���������", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		if ((comboBox3->SelectedItem == "D:/S1/file1.txt") && (comboBox2->SelectedItem == "D:/S2/S3/")) {
			if (std::ifstream("D:/S1/file1.txt")) {
				char* startFile = "D:/S1/file1.txt";
				char* copyFile = "D:/S2/S3/";
				char* newFile = "D:/S2/S3/file1.txt";
				CopyingFile(startFile, copyFile, newFile);
			}
			else {
				MessageBox::Show("�� �� ������ ����������� ����, ��� ��� �� ������� ������������ ����� �� ����������!", "���������", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		if ((comboBox3->SelectedItem == "D:/S1/file1.txt") && (comboBox2->SelectedItem == "C:/Users/darya/Work/OSiO/S4")) {
			if (std::ifstream("D:/S1/file1.txt")) {
				char* startFile = "D:/S1/file1.txt";
				char* copyFile = "C:/Users/darya/Work/OSiO/S4";
				char* newFile = "C:/Users/darya/Work/OSiO/S4/file1.txt";
				CopyingFile(startFile, copyFile, newFile);
			}
			else {
				MessageBox::Show("�� �� ������ ����������� ����, ��� ��� �� ������� ������������ ����� �� ����������!", "���������", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		//���� file2.txt 
		if ((comboBox3->SelectedItem == "D:/S2/file2.txt") && (comboBox2->SelectedItem == "D:/")) {
			if (std::ifstream("D:/S2/file2.txt")) {
				char* startFile = "D:/S2/file2.txt";
				char* copyFile = "D:/";
				char* newFile = "D:/file2.txt";
				CopyingFile(startFile, copyFile, newFile);
			}
			else {
				MessageBox::Show("�� �� ������ ����������� ����, ��� ��� �� ������� ������������ ����� �� ����������!", "���������", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		if ((comboBox3->SelectedItem == "D:/S2/file2.txt") && (comboBox2->SelectedItem == "D:/S1/")) {
			if (std::ifstream("D:/S2/file2.txt")) {
				char* startFile = "D:/S2/file2.txt";
				char* copyFile = "D:/S1/";
				char* newFile = "D:/S1/file2.txt";
				CopyingFile(startFile, copyFile, newFile);
			}
			else {
				MessageBox::Show("�� �� ������ ����������� ����, ��� ��� �� ������� ������������ ����� �� ����������!", "���������", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		if ((comboBox3->SelectedItem == "D:/S2/file2.txt") && (comboBox2->SelectedItem == "D:/S1/S4/")) {
			if (std::ifstream("D:/S2/file2.txt")) {
				char* startFile = "D:/S2/file2.txt";
				char* copyFile = "D:/S1/S4/";
				char* newFile = "D:/S1/S4/file2.txt";
				CopyingFile(startFile, copyFile, newFile);
			}
			else {
				MessageBox::Show("�� �� ������ ����������� ����, ��� ��� �� ������� ������������ ����� �� ����������!", "���������", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		if ((comboBox3->SelectedItem == "D:/S2/file2.txt") && (comboBox2->SelectedItem == "D:/S2/S3/")) {
			if (std::ifstream("D:/S2/file2.txt")) {
				char* startFile = "D:/S2/file2.txt";
				char* copyFile = "D:/S2/S3/";
				char* newFile = "D:/S2/S3/file2.txt";
				CopyingFile(startFile, copyFile, newFile);
			}
			else {
				MessageBox::Show("�� �� ������ ����������� ����, ��� ��� �� ������� ������������ ����� �� ����������!", "���������", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		if ((comboBox3->SelectedItem == "D:/S2/file2.txt") && (comboBox2->SelectedItem == "C:/Users/darya/Work/OSiO/S4")) {
			if (std::ifstream("D:/S2/file2.txt")) {
				char* startFile = "D:/S2/file2.txt";
				char* copyFile = "C:/Users/darya/Work/OSiO/S4/";
				char* newFile = "C:/Users/darya/Work/OSiO/S4/file2.txt";
				CopyingFile(startFile, copyFile, newFile);
			}
			else {
				MessageBox::Show("�� �� ������ ����������� ����, ��� ��� �� ������� ������������ ����� �� ����������!", "���������", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		//���� file5.txt 
		if ((comboBox3->SelectedItem == "C:/Users/darya/Work/OSiO/S4/file5.txt") && (comboBox2->SelectedItem == "D:/")) {
			if (std::ifstream("C:/Users/darya/Work/OSiO/S4/file5.txt")) {
				char* startFile = "C:/Users/darya/Work/OSiO/S4/file5.txt";
				char* copyFile = "D:/";
				char* newFile = "D:/file5.txt";
				CopyingFile(startFile, copyFile, newFile);
			}
			else {
				MessageBox::Show("�� �� ������ ����������� ����, ��� ��� �� ������� ������������ ����� �� ����������!", "���������", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		if ((comboBox3->SelectedItem == "C:/Users/darya/Work/OSiO/S4/file5.txt") && (comboBox2->SelectedItem == "D:/S1/")) {
			if (std::ifstream("C:/Users/darya/Work/OSiO/S4/file5.txt")) {
				char* startFile = "C:/Users/darya/Work/OSiO/S4/file5.txt";
				char* copyFile = "D:/S1/";
				char* newFile = "D:/S1/file5.txt";
				CopyingFile(startFile, copyFile, newFile);
			}
			else {
				MessageBox::Show("�� �� ������ ����������� ����, ��� ��� �� ������� ������������ ����� �� ����������!", "���������", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		if ((comboBox3->SelectedItem == "C:/Users/darya/Work/OSiO/S4/file5.txt") && (comboBox2->SelectedItem == "D:/S1/S4/")) {
			if (std::ifstream("C:/Users/darya/Work/OSiO/S4/file5.txt")) {
				char* startFile = "C:/Users/darya/Work/OSiO/S4/file5.txt";
				char* copyFile = "D:/S1/S4/";
				char* newFile = "D:/S1/S4/file5.txt";
				CopyingFile(startFile, copyFile, newFile);
			}
			else {
				MessageBox::Show("�� �� ������ ����������� ����, ��� ��� �� ������� ������������ ����� �� ����������!", "���������", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		if ((comboBox3->SelectedItem == "C:/Users/darya/Work/OSiO/S4/file5.txt") && (comboBox2->SelectedItem == "D:/S2/")) {
			if (std::ifstream("C:/Users/darya/Work/OSiO/S4/file5.txt")) {
				char* startFile = "C:/Users/darya/Work/OSiO/S4/file5.txt";
				char* copyFile = "D:/S2/";
				char* newFile = "D:/S2/file5.txt";
				CopyingFile(startFile, copyFile, newFile);
			}
			else {
				MessageBox::Show("�� �� ������ ����������� ����, ��� ��� �� ������� ������������ ����� �� ����������!", "���������", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		if ((comboBox3->SelectedItem == "C:/Users/darya/Work/OSiO/S4/file5.txt") && (comboBox2->SelectedItem == "D:/S2/S3/")) {
			if (std::ifstream("C:/Users/darya/Work/OSiO/S4/file5.txt")) {
				char* startFile = "C:/Users/darya/Work/OSiO/S4/file5.txt";
				char* copyFile = "D:/S2/S3/";
				char* newFile = "D:/S2/S3/file5.txt";
				CopyingFile(startFile, copyFile, newFile);
			}
			else {
				MessageBox::Show("�� �� ������ ����������� ����, ��� ��� �� ������� ������������ ����� �� ����������!", "���������", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		if ((comboBox1->Text == "") || (comboBox2->Text == "") || (comboBox3->Text == "") || (comboBox6->Text == "")) {
			MessageBox::Show("�� �� ������� ������ ��� �����������!", "��������������", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		comboBox1->SelectedIndex = -1;
		comboBox2->SelectedIndex = -1;
		comboBox3->SelectedIndex = -1;
		comboBox6->SelectedIndex = -1;
	}
		   //������� ��� ����������� ������
	private: void CopyingFile(char* startFile, char* copyFile, char* newFile)
	{
		TCHAR startFileName[512];
		TCHAR copyName[512];
		mbstowcs(startFileName, startFile, 511);
		mbstowcs(copyName, copyFile, 511);
		TCHAR createName[512];
		mbstowcs(createName, newFile, 511);
		auto ourFile = CreateFile(createName, GENERIC_WRITE, FILE_SHARE_WRITE, NULL, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);
		CopyFile(startFileName, createName, FALSE);
		CloseHandle(ourFile);
		MessageBox::Show("���� ������� ����������!", "���������", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
		   //������� ��� ����������� ������
	private: void MovingFile(char* startFile, char* copyFile) {
		TCHAR startFileName[512];
		TCHAR copyName[512];
		mbstowcs(startFileName, startFile, 511);
		mbstowcs(copyName, copyFile, 511);
		MoveFile(startFileName, copyName);
		MessageBox::Show("���� ������� ���������!", "���������", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}


	private: System::Void comboBox3_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		comboBox2->SelectedIndex = -1;
		comboBox6->SelectedIndex = -1;
		
	}
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		comboBox3->SelectedIndex = -1;
		if (comboBox1->SelectedItem == "D:") {
			comboBox3->Items->Clear();
			comboBox3->Items->Add("D:/S1/file1.txt");
			comboBox3->Items->Add("D:/S2/file2.txt");
		}
		else {
			comboBox3->Items->Clear();
			comboBox3->Items->Add("C:/Users/darya/Work/OSiO/S4/file5.txt");
		}
	}
	private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void �����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

		//���� file1.txt
		if ((comboBox3->SelectedItem == "D:/S1/file1.txt") && (comboBox2->SelectedItem == "D:/")) {
			if (std::ifstream("D:/S1/file1.txt")) {
				char* startFile = "D:/S1/file1.txt";
				char* copyFile = "D:/file1.txt";
				MovingFile(startFile, copyFile);
			}
			else {
				MessageBox::Show("�� �� ������ ����������� ����, ��� ��� �� ������� ������������ ����� �� ����������!", "���������", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		else if ((comboBox3->SelectedItem == "D:/S1/file1.txt") && (comboBox2->SelectedItem == "D:/S1/S4/")) {
			if (std::ifstream("D:/S1/file1.txt")) {
				char* startFile = "D:/S1/file1.txt";
				char* copyFile = "D:/S1/S4/file1.txt";
				MovingFile(startFile, copyFile);
			}
			else {
				MessageBox::Show("�� �� ������ ����������� ����, ��� ��� �� ������� ������������ ����� �� ����������!", "���������", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		else if ((comboBox3->SelectedItem == "D:/S1/file1.txt") && (comboBox2->SelectedItem == "D:/S2/")) {
			if (std::ifstream("D:/S1/file1.txt")) {
				char* startFile = "D:/S1/file1.txt";
				char* copyFile = "D:/S2/file1.txt";
				MovingFile(startFile, copyFile);
			}
			else {
				MessageBox::Show("�� �� ������ ����������� ����, ��� ��� �� ������� ������������ ����� �� ����������!", "���������", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		else if ((comboBox3->SelectedItem == "D:/S1/file1.txt") && (comboBox2->SelectedItem == "D:/S2/S3/")) {
			if (std::ifstream("D:/S1/file1.txt")) {
				char* startFile = "D:/S1/file1.txt";
				char* copyFile = "D:/S2/S3/file1.txt";
				MovingFile(startFile, copyFile);
			}
			else {
				MessageBox::Show("�� �� ������ ����������� ����, ��� ��� �� ������� ������������ ����� �� ����������!", "���������", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		else if ((comboBox3->SelectedItem == "D:/S1/file1.txt") && (comboBox2->SelectedItem == "C:/Users/darya/Work/OSiO/S4")) {
			if (std::ifstream("D:/S1/file1.txt")) {
				char* startFile = "D:/S1/file1.txt";
				char* copyFile = "C:/Users/darya/Work/OSiO/S4/file1.txt";
				MovingFile(startFile, copyFile);
			}
			else {
				MessageBox::Show("�� �� ������ ����������� ����, ��� ��� �� ������� ������������ ����� �� ����������!", "���������", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		//���� file2.txt
		else if ((comboBox3->SelectedItem == "D:/S2/file2.txt") && (comboBox2->SelectedItem == "D:/")) {
			if (std::ifstream("D:/S2/file2.txt")) {
				char* startFile = "D:/S2/file2.txt";
				char* copyFile = "D:/file2.txt";
				MovingFile(startFile, copyFile);
			}
			else {
				MessageBox::Show("�� �� ������ ����������� ����, ��� ��� �� ������� ������������ ����� �� ����������!", "���������", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		else if ((comboBox3->SelectedItem == "D:/S2/file2.txt") && (comboBox2->SelectedItem == "D:/S1/")) {
			if (std::ifstream("D:/S2/file2.txt")) {
				char* startFile = "D:/S2/file2.txt";
				char* copyFile = "D:/S1/file2.txt";
				MovingFile(startFile, copyFile);
			}
			else {
				MessageBox::Show("�� �� ������ ����������� ����, ��� ��� �� ������� ������������ ����� �� ����������!", "���������", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		else if ((comboBox3->SelectedItem == "D:/S2/file2.txt") && (comboBox2->SelectedItem == "D:/S1/S4/")) {
			if (std::ifstream("D:/S2/file2.txt")) {
				char* startFile = "D:/S2/file2.txt";
				char* copyFile = "D:/S1/S4/file2.txt";
				MovingFile(startFile, copyFile);
			}
			else {
				MessageBox::Show("�� �� ������ ����������� ����, ��� ��� �� ������� ������������ ����� �� ����������!", "���������", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		else if ((comboBox3->SelectedItem == "D:/S2/file2.txt") && (comboBox2->SelectedItem == "D:/S2/S3/")) {
			if (std::ifstream("D:/S2/file2.txt")) {
				char* startFile = "D:/S2/file2.txt";
				char* copyFile = "D:/S2/S3/file2.txt";
				MovingFile(startFile, copyFile);
			}
			else {
				MessageBox::Show("�� �� ������ ����������� ����, ��� ��� �� ������� ������������ ����� �� ����������!", "���������", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		else if ((comboBox3->SelectedItem == "D:/S2/file2.txt") && (comboBox2->SelectedItem == "C:/Users/darya/Work/OSiO/S4")) {
			if (std::ifstream("D:/S2/file2.txt")) {
				char* startFile = "D:/S2/file2.txt";
				char* copyFile = "C:/Users/darya/Work/OSiO/S4/file2.txt";
				MovingFile(startFile, copyFile);
			}
			else {
				MessageBox::Show("�� �� ������ ����������� ����, ��� ��� �� ������� ������������ ����� �� ����������!", "���������", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		//���� file5.txt
		if ((comboBox3->SelectedItem == "C:/Users/darya/Work/OSiO/S4/file5.txt") && (comboBox2->SelectedItem == "D:/")) {
			if (std::ifstream("C:/Users/darya/Work/OSiO/S4/file5.txt")) {
				char* startFile = "C:/Users/darya/Work/OSiO/S4/file5.txt";
				char* copyFile = "D:/file5.txt";
				MovingFile(startFile, copyFile);
			}
			else {
				MessageBox::Show("�� �� ������ ����������� ����, ��� ��� �� ������� ������������ ����� �� ����������!", "���������", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		if ((comboBox3->SelectedItem == "C:/Users/darya/Work/OSiO/S4/file5.txt") && (comboBox2->SelectedItem == "D:/S1/")) {
			if (std::ifstream("C:/Users/darya/Work/OSiO/S4/file5.txt")) {
				char* startFile = "C:/Users/darya/Work/OSiO/S4/file5.txt";
				char* copyFile = "D:/S1/file5.txt";
				MovingFile(startFile, copyFile);
			}
			else {
				MessageBox::Show("�� �� ������ ����������� ����, ��� ��� �� ������� ������������ ����� �� ����������!", "���������", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		if ((comboBox3->SelectedItem == "C:/Users/darya/Work/OSiO/S4/file5.txt") && (comboBox2->SelectedItem == "D:/S1/S4/")) {
			if (std::ifstream("C:/Users/darya/Work/OSiO/S4/file5.txt")) {
				char* startFile = "C:/Users/darya/Work/OSiO/S4/file5.txt";
				char* copyFile = "D:/S1/S4/file5.txt";
				MovingFile(startFile, copyFile);
			}
			else {
				MessageBox::Show("�� �� ������ ����������� ����, ��� ��� �� ������� ������������ ����� �� ����������!", "���������", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		if ((comboBox3->SelectedItem == "C:/Users/darya/Work/OSiO/S4/file5.txt") && (comboBox2->SelectedItem == "D:/S2/")) {
			if (std::ifstream("C:/Users/darya/Work/OSiO/S4/file5.txt")) {
				char* startFile = "C:/Users/darya/Work/OSiO/S4/file5.txt";
				char* copyFile = "D:/S2/file5.txt";
				MovingFile(startFile, copyFile);
			}
			else {
				MessageBox::Show("�� �� ������ ����������� ����, ��� ��� �� ������� ������������ ����� �� ����������!", "���������", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		if ((comboBox3->SelectedItem == "C:/Users/darya/Work/OSiO/S4/file5.txt") && (comboBox2->SelectedItem == "D:/S2/S3/")) {
			if (std::ifstream("C:/Users/darya/Work/OSiO/S4/file5.txt")) {
				char* startFile = "C:/Users/darya/Work/OSiO/S4/file5.txt";
				char* copyFile = "D:/S2/S3/file5.txt";
				MovingFile(startFile, copyFile);
			}
			else {
				MessageBox::Show("�� �� ������ ����������� ����, ��� ��� �� ������� ������������ ����� �� ����������!", "���������", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		if ((comboBox1->Text == "") || (comboBox2->Text == "") || (comboBox3->Text == "") || (comboBox6->Text == "")) {
			MessageBox::Show("�� �� ������� ������ ��� �����������!", "��������������", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		comboBox1->SelectedIndex = -1;
		comboBox2->SelectedIndex = -1;
		comboBox3->SelectedIndex = -1;
		comboBox6->SelectedIndex = -1;
	}

	private: System::Void comboBox6_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		comboBox2->SelectedIndex = -1;
		if ((comboBox3->SelectedItem == "D:/S1/file1.txt") && (comboBox6->SelectedItem == "D:")) {
			comboBox2->Items->Clear();
			comboBox2->Items->Add("D:/");
			comboBox2->Items->Add("D:/S1/S4/");
			comboBox2->Items->Add("D:/S2/");
			comboBox2->Items->Add("D:/S2/S3/");
		}
		else if ((comboBox3->SelectedItem == "D:/S1/file1.txt") && (comboBox6->SelectedItem == "C:")) {
			comboBox2->Items->Clear();
			comboBox2->Items->Add("C:/Users/darya/Work/OSiO/S4");
		}
		if ((comboBox3->SelectedItem == "D:/S2/file2.txt") && (comboBox6->SelectedItem == "D:")) {
			comboBox2->Items->Clear();
			comboBox2->Items->Add("D:/");
			comboBox2->Items->Add("D:/S1/");
			comboBox2->Items->Add("D:/S1/S4/");
			comboBox2->Items->Add("D:/S2/S3/");
		}
		else if ((comboBox3->SelectedItem == "D:/S2/file2.txt") && (comboBox6->SelectedItem == "C:")) {
			comboBox2->Items->Clear();
			comboBox2->Items->Add("C:/Users/darya/Work/OSiO/S4");
		}
		if ((comboBox3->SelectedItem == "C:/Users/darya/Work/OSiO/S4/file5.txt") && (comboBox6->SelectedItem == "D:")) {
			comboBox2->Items->Clear();
			comboBox2->Items->Add("D:/");
			comboBox2->Items->Add("D:/S1/");
			comboBox2->Items->Add("D:/S1/S4/");
			comboBox2->Items->Add("D:/S2/");
			comboBox2->Items->Add("D:/S2/S3/");
		}
		else if ((comboBox3->SelectedItem == "C:/Users/darya/Work/OSiO/S4/file5.txt") && (comboBox6->SelectedItem == "C:")) {
			comboBox2->Items->Clear();
			comboBox2->Items->Add("C:/Users/darya/Work/OSiO/S4/S5");
		}
	}

	private: System::Void ���������������DToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		BindDirectoryToTreeView1("D:");
		treeView1->ExpandAll();
	}
	private: System::Void ����������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		BindDirectoryToTreeView2("C:/Users/darya/Work/OSiO/S4");
		treeView2->ExpandAll();
	}
	private: System::Void ��������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		BindDirectoryToTreeView1("D:");
		BindDirectoryToTreeView2("C:/Users/darya/Work/OSiO/S4");
	}

	private: System::Void �������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if ((treeView1->SelectedNode) || (treeView2->SelectedNode)) {
			if (treeView1->SelectedNode) {
				String^ startFile = treeView1->SelectedNode->FullPath;
				std::string chars = msclr::interop::marshal_as<std::string>(startFile);
				const char* c = chars.c_str();
				TCHAR szName[512];
				mbstowcs(szName, c, 511);
				if ((startFile == "D:\\\\S1") || (startFile == "D:\\\\S2") || (startFile == "D:\\\\S1\\S4") || (startFile == "D:\\\\S2\\S3")) {

					int count = treeView1->SelectedNode->GetNodeCount(true);
					if (count == 0) {
						RemoveDirectory(szName);
						treeView1->SelectedNode->Remove();
						MessageBox::Show("������� ������� ������!", "���������", MessageBoxButtons::OK, MessageBoxIcon::Information);
					}
					else {
						MessageBox::Show("������� ������ �������, ��� ��� �� �� ����!", "���������", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
				}
				else {
					DeleteFile(szName);
					if (std::ifstream(c)) {
						MessageBox::Show("������ �������� �����!", "���������", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
					else {
						treeView1->SelectedNode->Remove();
						MessageBox::Show("���� ������� ������!", "���������", MessageBoxButtons::OK, MessageBoxIcon::Information);
					}
				}
			}
			if (treeView2->SelectedNode) {
				String^ startFile = "C:/Users/darya/Work/OSiO/" + treeView2->SelectedNode->FullPath;
				std::string chars = msclr::interop::marshal_as<std::string>(startFile);
				const char* c = chars.c_str();
				TCHAR szName[512];
				mbstowcs(szName, c, 511);
				if (startFile == "C:/Users/darya/Work/OSiO/S4") {

					int count = treeView2->SelectedNode->GetNodeCount(true);
					if (count == 0) {
						RemoveDirectory(szName);
						treeView2->SelectedNode->Remove();
						MessageBox::Show("������� ������� ������!", "���������", MessageBoxButtons::OK, MessageBoxIcon::Information);
					}
					else {
						MessageBox::Show("������� ������ �������, ��� ��� �� �� ����!", "���������", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
				}
				else {
					DeleteFile(szName);
					if (std::ifstream(c)) {
						MessageBox::Show("������ �������� �����!", "���������", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
					else {
						treeView2->SelectedNode->Remove();
						MessageBox::Show("���� ������� ������!", "���������", MessageBoxButtons::OK, MessageBoxIcon::Information);
					}
				}
			}
		}
		else {
			MessageBox::Show("�� �� ������� ���� ��� ��������!", "��������������", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}

	}
	private: System::Void �����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Form2::Close();
	}
	private: System::Void ��������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Form2::CenterToScreen();
	}


	private: System::Void ����������ToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		Process::Start("notepad.exe", "C:\\Users\\darya\\Work\\OSiO\\������\\Kurs1\\� ���������.txt");
	}
	private: Thread^ myThread2;
	private: void Go2() {
		Form^ f3 = gcnew Form3;
		f3->ShowDialog();
	}
	private: System::Void �����������������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		// ������� � ��������� �����
		myThread2 = gcnew Thread(gcnew ThreadStart(this, &Form2::Go2));
		myThread2->Start();
	}
private: System::Void Form2_Load(System::Object^ sender, System::EventArgs^ e) {
	this->WindowState = System::Windows::Forms::FormWindowState::Minimized;
	this->WindowState = System::Windows::Forms::FormWindowState::Normal;
}
private: System::Void ���������������ToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	Help::ShowHelp(this, "C:\\Users\\darya\\Work\\OSiO\\������\\�������.chm");
}
};
}
