#pragma once

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
	private: System::Windows::Forms::Button^ btnAddDepartment;
	private: System::Windows::Forms::Button^ btnAdmin;
	private: System::Windows::Forms::Button^ btnFaculty;












	private: System::Windows::Forms::Button^ btnInfo;
	private: System::Windows::Forms::Button^ btnAddCourse;



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
			this->btnAddCourse = (gcnew System::Windows::Forms::Button());
			this->btnInfo = (gcnew System::Windows::Forms::Button());
			this->btnSettings = (gcnew System::Windows::Forms::Button());
			this->btnAddDepartment = (gcnew System::Windows::Forms::Button());
			this->btnAdmin = (gcnew System::Windows::Forms::Button());
			this->btnFaculty = (gcnew System::Windows::Forms::Button());
			this->btnStudent = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->logoTitle1 = (gcnew System::Windows::Forms::Label());
			this->Logo = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Logo))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Firebrick;
			this->panel1->Controls->Add(this->btnAddCourse);
			this->panel1->Controls->Add(this->btnInfo);
			this->panel1->Controls->Add(this->btnSettings);
			this->panel1->Controls->Add(this->btnAddDepartment);
			this->panel1->Controls->Add(this->btnAdmin);
			this->panel1->Controls->Add(this->btnFaculty);
			this->panel1->Controls->Add(this->btnStudent);
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(231, 700);
			this->panel1->TabIndex = 0;
			// 
			// btnAddCourse
			// 
			this->btnAddCourse->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnAddCourse->FlatAppearance->BorderSize = 0;
			this->btnAddCourse->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAddCourse->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAddCourse->ForeColor = System::Drawing::Color::White;
			this->btnAddCourse->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnAddCourse->Location = System::Drawing::Point(15, 295);
			this->btnAddCourse->Name = L"btnAddCourse";
			this->btnAddCourse->Size = System::Drawing::Size(201, 49);
			this->btnAddCourse->TabIndex = 9;
			this->btnAddCourse->Text = L"Add Course";
			this->btnAddCourse->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnAddCourse->UseVisualStyleBackColor = true;
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
			this->btnInfo->Location = System::Drawing::Point(15, 602);
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
			this->btnSettings->Location = System::Drawing::Point(15, 651);
			this->btnSettings->Name = L"btnSettings";
			this->btnSettings->Size = System::Drawing::Size(201, 49);
			this->btnSettings->TabIndex = 7;
			this->btnSettings->Text = L"Settings";
			this->btnSettings->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnSettings->UseVisualStyleBackColor = true;
			this->btnSettings->Click += gcnew System::EventHandler(this, &adminDashboard::button5_Click);
			// 
			// btnAddDepartment
			// 
			this->btnAddDepartment->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnAddDepartment->FlatAppearance->BorderSize = 0;
			this->btnAddDepartment->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAddDepartment->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAddDepartment->ForeColor = System::Drawing::Color::White;
			this->btnAddDepartment->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnAddDepartment->Location = System::Drawing::Point(15, 246);
			this->btnAddDepartment->Name = L"btnAddDepartment";
			this->btnAddDepartment->Size = System::Drawing::Size(201, 49);
			this->btnAddDepartment->TabIndex = 6;
			this->btnAddDepartment->Text = L"Add Department";
			this->btnAddDepartment->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnAddDepartment->UseVisualStyleBackColor = true;
			this->btnAddDepartment->Click += gcnew System::EventHandler(this, &adminDashboard::button4_Click);
			// 
			// btnAdmin
			// 
			this->btnAdmin->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnAdmin->FlatAppearance->BorderSize = 0;
			this->btnAdmin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAdmin->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdmin->ForeColor = System::Drawing::Color::White;
			this->btnAdmin->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnAdmin->Location = System::Drawing::Point(15, 197);
			this->btnAdmin->Name = L"btnAdmin";
			this->btnAdmin->Size = System::Drawing::Size(201, 49);
			this->btnAdmin->TabIndex = 5;
			this->btnAdmin->Text = L"Admin";
			this->btnAdmin->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnAdmin->UseVisualStyleBackColor = true;
			this->btnAdmin->Click += gcnew System::EventHandler(this, &adminDashboard::button3_Click);
			// 
			// btnFaculty
			// 
			this->btnFaculty->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnFaculty->FlatAppearance->BorderSize = 0;
			this->btnFaculty->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnFaculty->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnFaculty->ForeColor = System::Drawing::Color::White;
			this->btnFaculty->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnFaculty->Location = System::Drawing::Point(15, 148);
			this->btnFaculty->Name = L"btnFaculty";
			this->btnFaculty->Size = System::Drawing::Size(201, 49);
			this->btnFaculty->TabIndex = 4;
			this->btnFaculty->Text = L"Faculty";
			this->btnFaculty->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnFaculty->UseVisualStyleBackColor = true;
			this->btnFaculty->Click += gcnew System::EventHandler(this, &adminDashboard::button2_Click);
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
			this->panel4->Size = System::Drawing::Size(15, 601);
			this->panel4->TabIndex = 2;
			this->panel4->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &adminDashboard::panel4_Paint);
			// 
			// panel3
			// 
			this->panel3->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel3->Location = System::Drawing::Point(0, 99);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(15, 601);
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
			// adminDashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 23);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1200, 700);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->Name = L"adminDashboard";
			this->Text = L"adminDashboard";
			this->Load += gcnew System::EventHandler(this, &adminDashboard::Dashboard_Load);
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Logo))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
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
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Dashboard_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
