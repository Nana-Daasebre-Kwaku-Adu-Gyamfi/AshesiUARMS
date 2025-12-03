#pragma once
#include "user_account.h"
#include "frmAddProgram.h"
#include "frmAddCourse.h"
#include "frmAddDepartment.h"
#include "frmRegisterStudent.h"
#include "frmRegisterFaculty.h"

namespace AshesiUARMS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for adminDashboard
	/// </summary>
	public ref class adminDashboard : public System::Windows::Forms::Form
	{
	public:
		adminDashboard(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			csutomizeDesign();
		}
	private: void csutomizeDesign()
		{
			studentSubMenuPanel->Visible = false;
			facultySubMenuPanel->Visible = false;
			adminSubMenuPanel->Visible = false;
		}
	private: void hideSubMenu()
		{
			if (studentSubMenuPanel->Visible == true)
				studentSubMenuPanel->Visible = false;
			if (facultySubMenuPanel->Visible == true)
				facultySubMenuPanel->Visible = false;
			if (adminSubMenuPanel->Visible == true)
				adminSubMenuPanel->Visible = false;
	}
	private: void showSubMenu(System::Windows::Forms::Panel^ subMenu)
		{
			if (subMenu->Visible == false)
			{
				hideSubMenu();
				subMenu->Visible = true;
			}
			else
				subMenu->Visible = false;
	}
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ btnAddProgram;
	private: Form^ activeForm = nullptr;
	private: void openChildForm(Form^ childForm)
		{
			if (activeForm != nullptr)
				activeForm->Close();
			activeForm = childForm;
			childForm->TopLevel = false;
			childForm->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			childForm->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel6->Controls->Add(childForm);
			this->panel6->Tag = childForm;
			childForm->BringToFront();
			childForm->Show();
	}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~adminDashboard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::PictureBox^ Logo;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ logoTitle1;
	private: System::Windows::Forms::Button^ btnStudent;




	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ btnSettings;















	private: System::Windows::Forms::Button^ btnInfo;
	private: System::Windows::Forms::Button^ btnRegisterCourse;

	private: System::Windows::Forms::Panel^ studentSubMenuPanel;

	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
private: System::Windows::Forms::Button^ btnViewGrades;

	private: System::Windows::Forms::Button^ btnFaculty;

	private: System::Windows::Forms::Panel^ adminSubMenuPanel;
private: System::Windows::Forms::Button^ btnAddDepartment;









private: System::Windows::Forms::Button^ btnAddCourse;

private: System::Windows::Forms::Button^ btnRegisterStudent;

private: System::Windows::Forms::Button^ btnRegisterFaculty;

	private: System::Windows::Forms::Button^ btnAdmin;

	private: System::Windows::Forms::Panel^ facultySubMenuPanel;

	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
private: System::Windows::Forms::Button^ btnGenerateReport;

private: System::Windows::Forms::Button^ btnEnterGrades;







	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(adminDashboard::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->adminSubMenuPanel = (gcnew System::Windows::Forms::Panel());
			this->btnAddDepartment = (gcnew System::Windows::Forms::Button());
			this->btnAddCourse = (gcnew System::Windows::Forms::Button());
			this->btnRegisterStudent = (gcnew System::Windows::Forms::Button());
			this->btnRegisterFaculty = (gcnew System::Windows::Forms::Button());
			this->btnAdmin = (gcnew System::Windows::Forms::Button());
			this->facultySubMenuPanel = (gcnew System::Windows::Forms::Panel());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->btnGenerateReport = (gcnew System::Windows::Forms::Button());
			this->btnEnterGrades = (gcnew System::Windows::Forms::Button());
			this->btnFaculty = (gcnew System::Windows::Forms::Button());
			this->studentSubMenuPanel = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->btnViewGrades = (gcnew System::Windows::Forms::Button());
			this->btnRegisterCourse = (gcnew System::Windows::Forms::Button());
			this->btnInfo = (gcnew System::Windows::Forms::Button());
			this->btnSettings = (gcnew System::Windows::Forms::Button());
			this->btnStudent = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->logoTitle1 = (gcnew System::Windows::Forms::Label());
			this->Logo = (gcnew System::Windows::Forms::PictureBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->btnAddProgram = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->adminSubMenuPanel->SuspendLayout();
			this->facultySubMenuPanel->SuspendLayout();
			this->studentSubMenuPanel->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Logo))->BeginInit();
			this->panel6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->AutoScroll = true;
			this->panel1->BackColor = System::Drawing::Color::Firebrick;
			this->panel1->Controls->Add(this->adminSubMenuPanel);
			this->panel1->Controls->Add(this->btnAdmin);
			this->panel1->Controls->Add(this->facultySubMenuPanel);
			this->panel1->Controls->Add(this->btnFaculty);
			this->panel1->Controls->Add(this->studentSubMenuPanel);
			this->panel1->Controls->Add(this->btnInfo);
			this->panel1->Controls->Add(this->btnSettings);
			this->panel1->Controls->Add(this->btnStudent);
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(231, 919);
			this->panel1->TabIndex = 0;
			// 
			// adminSubMenuPanel
			// 
			this->adminSubMenuPanel->BackColor = System::Drawing::Color::IndianRed;
			this->adminSubMenuPanel->Controls->Add(this->btnAddProgram);
			this->adminSubMenuPanel->Controls->Add(this->btnAddDepartment);
			this->adminSubMenuPanel->Controls->Add(this->btnAddCourse);
			this->adminSubMenuPanel->Controls->Add(this->btnRegisterStudent);
			this->adminSubMenuPanel->Controls->Add(this->btnRegisterFaculty);
			this->adminSubMenuPanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->adminSubMenuPanel->Location = System::Drawing::Point(15, 501);
			this->adminSubMenuPanel->Name = L"adminSubMenuPanel";
			this->adminSubMenuPanel->Size = System::Drawing::Size(201, 173);
			this->adminSubMenuPanel->TabIndex = 13;
			// 
			// btnAddDepartment
			// 
			this->btnAddDepartment->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnAddDepartment->FlatAppearance->BorderSize = 0;
			this->btnAddDepartment->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAddDepartment->ForeColor = System::Drawing::Color::White;
			this->btnAddDepartment->Location = System::Drawing::Point(0, 93);
			this->btnAddDepartment->Name = L"btnAddDepartment";
			this->btnAddDepartment->Size = System::Drawing::Size(201, 36);
			this->btnAddDepartment->TabIndex = 12;
			this->btnAddDepartment->Text = L"Add Department";
			this->btnAddDepartment->UseVisualStyleBackColor = true;
			this->btnAddDepartment->Click += gcnew System::EventHandler(this, &adminDashboard::button11_Click);
			// 
			// btnAddCourse
			// 
			this->btnAddCourse->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnAddCourse->FlatAppearance->BorderSize = 0;
			this->btnAddCourse->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAddCourse->ForeColor = System::Drawing::Color::White;
			this->btnAddCourse->Location = System::Drawing::Point(0, 62);
			this->btnAddCourse->Name = L"btnAddCourse";
			this->btnAddCourse->Size = System::Drawing::Size(201, 31);
			this->btnAddCourse->TabIndex = 11;
			this->btnAddCourse->Text = L"Add Course";
			this->btnAddCourse->UseVisualStyleBackColor = true;
			this->btnAddCourse->Click += gcnew System::EventHandler(this, &adminDashboard::button12_Click);
			// 
			// btnRegisterStudent
			// 
			this->btnRegisterStudent->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnRegisterStudent->FlatAppearance->BorderSize = 0;
			this->btnRegisterStudent->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnRegisterStudent->ForeColor = System::Drawing::Color::White;
			this->btnRegisterStudent->Location = System::Drawing::Point(0, 31);
			this->btnRegisterStudent->Name = L"btnRegisterStudent";
			this->btnRegisterStudent->Size = System::Drawing::Size(201, 31);
			this->btnRegisterStudent->TabIndex = 10;
			this->btnRegisterStudent->Text = L"Register Student";
			this->btnRegisterStudent->UseVisualStyleBackColor = true;
			this->btnRegisterStudent->Click += gcnew System::EventHandler(this, &adminDashboard::button13_Click);
			// 
			// btnRegisterFaculty
			// 
			this->btnRegisterFaculty->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnRegisterFaculty->FlatAppearance->BorderSize = 0;
			this->btnRegisterFaculty->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnRegisterFaculty->ForeColor = System::Drawing::Color::White;
			this->btnRegisterFaculty->Location = System::Drawing::Point(0, 0);
			this->btnRegisterFaculty->Name = L"btnRegisterFaculty";
			this->btnRegisterFaculty->Size = System::Drawing::Size(201, 31);
			this->btnRegisterFaculty->TabIndex = 9;
			this->btnRegisterFaculty->Text = L"Register Faculty";
			this->btnRegisterFaculty->UseVisualStyleBackColor = true;
			this->btnRegisterFaculty->Click += gcnew System::EventHandler(this, &adminDashboard::button14_Click);
			// 
			// btnAdmin
			// 
			this->btnAdmin->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnAdmin->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnAdmin->FlatAppearance->BorderSize = 0;
			this->btnAdmin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAdmin->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdmin->ForeColor = System::Drawing::Color::White;
			this->btnAdmin->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnAdmin.Image")));
			this->btnAdmin->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnAdmin->Location = System::Drawing::Point(15, 452);
			this->btnAdmin->Name = L"btnAdmin";
			this->btnAdmin->Size = System::Drawing::Size(201, 49);
			this->btnAdmin->TabIndex = 12;
			this->btnAdmin->Text = L"Administration";
			this->btnAdmin->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnAdmin->UseVisualStyleBackColor = true;
			this->btnAdmin->Click += gcnew System::EventHandler(this, &adminDashboard::btnAdmin_Click);
			// 
			// facultySubMenuPanel
			// 
			this->facultySubMenuPanel->BackColor = System::Drawing::Color::IndianRed;
			this->facultySubMenuPanel->Controls->Add(this->button6);
			this->facultySubMenuPanel->Controls->Add(this->button7);
			this->facultySubMenuPanel->Controls->Add(this->btnGenerateReport);
			this->facultySubMenuPanel->Controls->Add(this->btnEnterGrades);
			this->facultySubMenuPanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->facultySubMenuPanel->Location = System::Drawing::Point(15, 322);
			this->facultySubMenuPanel->Name = L"facultySubMenuPanel";
			this->facultySubMenuPanel->Size = System::Drawing::Size(201, 130);
			this->facultySubMenuPanel->TabIndex = 11;
			// 
			// button6
			// 
			this->button6->Dock = System::Windows::Forms::DockStyle::Top;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Location = System::Drawing::Point(0, 93);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(201, 34);
			this->button6->TabIndex = 12;
			this->button6->Text = L"button6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &adminDashboard::button6_Click_1);
			// 
			// button7
			// 
			this->button7->Dock = System::Windows::Forms::DockStyle::Top;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->ForeColor = System::Drawing::Color::White;
			this->button7->Location = System::Drawing::Point(0, 62);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(201, 31);
			this->button7->TabIndex = 11;
			this->button7->Text = L"button7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &adminDashboard::button7_Click);
			// 
			// btnGenerateReport
			// 
			this->btnGenerateReport->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnGenerateReport->FlatAppearance->BorderSize = 0;
			this->btnGenerateReport->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnGenerateReport->ForeColor = System::Drawing::Color::White;
			this->btnGenerateReport->Location = System::Drawing::Point(0, 31);
			this->btnGenerateReport->Name = L"btnGenerateReport";
			this->btnGenerateReport->Size = System::Drawing::Size(201, 31);
			this->btnGenerateReport->TabIndex = 10;
			this->btnGenerateReport->Text = L"Generate Report";
			this->btnGenerateReport->UseVisualStyleBackColor = true;
			this->btnGenerateReport->Click += gcnew System::EventHandler(this, &adminDashboard::button8_Click);
			// 
			// btnEnterGrades
			// 
			this->btnEnterGrades->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnEnterGrades->FlatAppearance->BorderSize = 0;
			this->btnEnterGrades->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnEnterGrades->ForeColor = System::Drawing::Color::White;
			this->btnEnterGrades->Location = System::Drawing::Point(0, 0);
			this->btnEnterGrades->Name = L"btnEnterGrades";
			this->btnEnterGrades->Size = System::Drawing::Size(201, 31);
			this->btnEnterGrades->TabIndex = 9;
			this->btnEnterGrades->Text = L"Enter Grades";
			this->btnEnterGrades->UseVisualStyleBackColor = true;
			this->btnEnterGrades->Click += gcnew System::EventHandler(this, &adminDashboard::button9_Click);
			// 
			// btnFaculty
			// 
			this->btnFaculty->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnFaculty->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnFaculty->FlatAppearance->BorderSize = 0;
			this->btnFaculty->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnFaculty->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnFaculty->ForeColor = System::Drawing::Color::White;
			this->btnFaculty->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnFaculty.Image")));
			this->btnFaculty->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnFaculty->Location = System::Drawing::Point(15, 273);
			this->btnFaculty->Name = L"btnFaculty";
			this->btnFaculty->Size = System::Drawing::Size(201, 49);
			this->btnFaculty->TabIndex = 10;
			this->btnFaculty->Text = L"Faculty";
			this->btnFaculty->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnFaculty->UseVisualStyleBackColor = true;
			this->btnFaculty->Click += gcnew System::EventHandler(this, &adminDashboard::button5_Click_1);
			// 
			// studentSubMenuPanel
			// 
			this->studentSubMenuPanel->BackColor = System::Drawing::Color::IndianRed;
			this->studentSubMenuPanel->Controls->Add(this->button4);
			this->studentSubMenuPanel->Controls->Add(this->button3);
			this->studentSubMenuPanel->Controls->Add(this->btnViewGrades);
			this->studentSubMenuPanel->Controls->Add(this->btnRegisterCourse);
			this->studentSubMenuPanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->studentSubMenuPanel->Location = System::Drawing::Point(15, 148);
			this->studentSubMenuPanel->Name = L"studentSubMenuPanel";
			this->studentSubMenuPanel->Size = System::Drawing::Size(201, 125);
			this->studentSubMenuPanel->TabIndex = 9;
			// 
			// button4
			// 
			this->button4->Dock = System::Windows::Forms::DockStyle::Top;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(0, 93);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(201, 32);
			this->button4->TabIndex = 12;
			this->button4->Text = L"button4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &adminDashboard::button4_Click_1);
			// 
			// button3
			// 
			this->button3->Dock = System::Windows::Forms::DockStyle::Top;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(0, 62);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(201, 31);
			this->button3->TabIndex = 11;
			this->button3->Text = L"button3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &adminDashboard::button3_Click_1);
			// 
			// btnViewGrades
			// 
			this->btnViewGrades->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnViewGrades->FlatAppearance->BorderSize = 0;
			this->btnViewGrades->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnViewGrades->ForeColor = System::Drawing::Color::White;
			this->btnViewGrades->Location = System::Drawing::Point(0, 31);
			this->btnViewGrades->Name = L"btnViewGrades";
			this->btnViewGrades->Size = System::Drawing::Size(201, 31);
			this->btnViewGrades->TabIndex = 10;
			this->btnViewGrades->Text = L"View Grades";
			this->btnViewGrades->UseVisualStyleBackColor = true;
			this->btnViewGrades->Click += gcnew System::EventHandler(this, &adminDashboard::button2_Click_1);
			// 
			// btnRegisterCourse
			// 
			this->btnRegisterCourse->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnRegisterCourse->FlatAppearance->BorderSize = 0;
			this->btnRegisterCourse->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnRegisterCourse->ForeColor = System::Drawing::Color::White;
			this->btnRegisterCourse->Location = System::Drawing::Point(0, 0);
			this->btnRegisterCourse->Name = L"btnRegisterCourse";
			this->btnRegisterCourse->Size = System::Drawing::Size(201, 31);
			this->btnRegisterCourse->TabIndex = 9;
			this->btnRegisterCourse->Text = L"Register Course";
			this->btnRegisterCourse->UseVisualStyleBackColor = true;
			this->btnRegisterCourse->Click += gcnew System::EventHandler(this, &adminDashboard::button1_Click_1);
			// 
			// btnInfo
			// 
			this->btnInfo->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->btnInfo->FlatAppearance->BorderSize = 0;
			this->btnInfo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnInfo->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnInfo->ForeColor = System::Drawing::Color::White;
			this->btnInfo->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnInfo->Location = System::Drawing::Point(15, 821);
			this->btnInfo->Name = L"btnInfo";
			this->btnInfo->Size = System::Drawing::Size(201, 49);
			this->btnInfo->TabIndex = 8;
			this->btnInfo->Text = L"Info";
			this->btnInfo->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnInfo->UseVisualStyleBackColor = true;
			this->btnInfo->Click += gcnew System::EventHandler(this, &adminDashboard::button6_Click);
			// 
			// btnSettings
			// 
			this->btnSettings->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->btnSettings->FlatAppearance->BorderSize = 0;
			this->btnSettings->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSettings->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSettings->ForeColor = System::Drawing::Color::White;
			this->btnSettings->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnSettings->Location = System::Drawing::Point(15, 870);
			this->btnSettings->Name = L"btnSettings";
			this->btnSettings->Size = System::Drawing::Size(201, 49);
			this->btnSettings->TabIndex = 7;
			this->btnSettings->Text = L"Settings";
			this->btnSettings->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnSettings->UseVisualStyleBackColor = true;
			this->btnSettings->Click += gcnew System::EventHandler(this, &adminDashboard::button5_Click);
			// 
			// btnStudent
			// 
			this->btnStudent->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnStudent->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnStudent->FlatAppearance->BorderSize = 0;
			this->btnStudent->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnStudent->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnStudent->ForeColor = System::Drawing::Color::White;
			this->btnStudent->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnStudent.Image")));
			this->btnStudent->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnStudent->Location = System::Drawing::Point(15, 99);
			this->btnStudent->Name = L"btnStudent";
			this->btnStudent->Size = System::Drawing::Size(201, 49);
			this->btnStudent->TabIndex = 3;
			this->btnStudent->Text = L"Student";
			this->btnStudent->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnStudent->UseVisualStyleBackColor = true;
			this->btnStudent->Click += gcnew System::EventHandler(this, &adminDashboard::button1_Click);
			// 
			// panel4
			// 
			this->panel4->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel4->Location = System::Drawing::Point(216, 99);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(15, 820);
			this->panel4->TabIndex = 2;
			this->panel4->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &adminDashboard::panel4_Paint);
			// 
			// panel3
			// 
			this->panel3->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel3->Location = System::Drawing::Point(0, 99);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(15, 820);
			this->panel3->TabIndex = 1;
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &adminDashboard::panel3_Paint);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->logoTitle1);
			this->panel2->Controls->Add(this->Logo);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(231, 99);
			this->panel2->TabIndex = 0;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &adminDashboard::panel2_Paint);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 5, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(63, 62);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(157, 15);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Record Management System";
			this->label3->Click += gcnew System::EventHandler(this, &adminDashboard::label3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 5, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(62, 49);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(109, 15);
			this->label2->TabIndex = 2;
			this->label2->Text = L"University Academic";
			this->label2->Click += gcnew System::EventHandler(this, &adminDashboard::label2_Click);
			// 
			// logoTitle1
			// 
			this->logoTitle1->AutoSize = true;
			this->logoTitle1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->logoTitle1->ForeColor = System::Drawing::Color::White;
			this->logoTitle1->Location = System::Drawing::Point(60, 26);
			this->logoTitle1->Name = L"logoTitle1";
			this->logoTitle1->Size = System::Drawing::Size(147, 23);
			this->logoTitle1->TabIndex = 1;
			this->logoTitle1->Text = L"Ashesi UARMS";
			this->logoTitle1->Click += gcnew System::EventHandler(this, &adminDashboard::label1_Click);
			// 
			// Logo
			// 
			this->Logo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Logo.Image")));
			this->Logo->Location = System::Drawing::Point(10, 29);
			this->Logo->Name = L"Logo";
			this->Logo->Size = System::Drawing::Size(50, 50);
			this->Logo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Logo->TabIndex = 0;
			this->Logo->TabStop = false;
			this->Logo->Click += gcnew System::EventHandler(this, &adminDashboard::pictureBox1_Click);
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::Firebrick;
			this->panel5->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel5->Location = System::Drawing::Point(231, 819);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(1109, 100);
			this->panel5->TabIndex = 1;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::Maroon;
			this->panel6->Controls->Add(this->pictureBox1);
			this->panel6->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel6->Location = System::Drawing::Point(231, 0);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(1109, 819);
			this->panel6->TabIndex = 2;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(402, 148);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(517, 467);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// btnAddProgram
			// 
			this->btnAddProgram->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnAddProgram->FlatAppearance->BorderSize = 0;
			this->btnAddProgram->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAddProgram->ForeColor = System::Drawing::Color::White;
			this->btnAddProgram->Location = System::Drawing::Point(0, 129);
			this->btnAddProgram->Name = L"btnAddProgram";
			this->btnAddProgram->Size = System::Drawing::Size(201, 41);
			this->btnAddProgram->TabIndex = 13;
			this->btnAddProgram->Text = L"Add Program";
			this->btnAddProgram->UseVisualStyleBackColor = true;
			this->btnAddProgram->Click += gcnew System::EventHandler(this, &adminDashboard::btnAddProgram_Click);
			// 
			// adminDashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 23);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1340, 919);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->Name = L"adminDashboard";
			this->Text = L"adminDashboard";
			this->Load += gcnew System::EventHandler(this, &adminDashboard::Dashboard_Load);
			this->panel1->ResumeLayout(false);
			this->adminSubMenuPanel->ResumeLayout(false);
			this->facultySubMenuPanel->ResumeLayout(false);
			this->studentSubMenuPanel->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Logo))->EndInit();
			this->panel6->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {//settings button
		hideSubMenu();
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void panel4_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {//student button
		showSubMenu(studentSubMenuPanel);
	}
	private: System::Void Dashboard_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {//info button
		hideSubMenu();
	}
	private: System::Void button4_Click_1(System::Object^ sender, System::EventArgs^ e) {
		//code to open a new form within the main form
		hideSubMenu();
	}
private: System::Void button5_Click_1(System::Object^ sender, System::EventArgs^ e) {//faculty button
	showSubMenu(facultySubMenuPanel);
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	//code to open a new form within the main form
	hideSubMenu();
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	//code to open a new form within the main form
	hideSubMenu();
}
private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	//code to open a new form within the main form
	hideSubMenu();
}
private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {
	//code to open a new form within the main form
	hideSubMenu();
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	//code to open a new form within the main form
	hideSubMenu();
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	//code to open a new form within the main form
	hideSubMenu();
}
private: System::Void button6_Click_1(System::Object^ sender, System::EventArgs^ e) {
	//code to open a new form within the main form
	hideSubMenu();
}
private: System::Void btnAdmin_Click(System::Object^ sender, System::EventArgs^ e) {//admin button
	showSubMenu(adminSubMenuPanel);
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	openChildForm(gcnew frmRegisterFaculty());
	//code to open a new form within the main form
	hideSubMenu();
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	openChildForm(gcnew frmRegisterStudent());
	//code to open a new form within the main form
	hideSubMenu();
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	openChildForm(gcnew frmAddCourse());
	//code to open a new form within the main form
	hideSubMenu();
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	openChildForm(gcnew frmAddDepartment());
	//code to open a new form within the main form
	hideSubMenu();
}
private: System::Void panel5_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void btnAddProgram_Click(System::Object^ sender, System::EventArgs^ e) {
	openChildForm(gcnew frmAddProgram());
	//code to open a new form within the main form
	hideSubMenu();
}
};
}
