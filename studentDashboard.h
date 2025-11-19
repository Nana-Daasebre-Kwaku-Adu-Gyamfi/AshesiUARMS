#pragma once

namespace AshesiUARMS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Dashboard
	/// </summary>
	public ref class Dashboard : public System::Windows::Forms::Form
	{
	public:
		Dashboard(void)
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
		~Dashboard()
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
	private: System::Windows::Forms::Button^ btnDashboard;



	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ btnSettings;
	private: System::Windows::Forms::Button^ btnViewSchedule;


	private: System::Windows::Forms::Button^ btnViewGrades;

	private: System::Windows::Forms::Button^ btnRegisterCourse;

	private: System::Windows::Forms::Button^ btnInfo;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Dashboard::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnInfo = (gcnew System::Windows::Forms::Button());
			this->btnSettings = (gcnew System::Windows::Forms::Button());
			this->btnViewSchedule = (gcnew System::Windows::Forms::Button());
			this->btnViewGrades = (gcnew System::Windows::Forms::Button());
			this->btnRegisterCourse = (gcnew System::Windows::Forms::Button());
			this->btnDashboard = (gcnew System::Windows::Forms::Button());
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
			this->panel1->Controls->Add(this->btnInfo);
			this->panel1->Controls->Add(this->btnSettings);
			this->panel1->Controls->Add(this->btnViewSchedule);
			this->panel1->Controls->Add(this->btnViewGrades);
			this->panel1->Controls->Add(this->btnRegisterCourse);
			this->panel1->Controls->Add(this->btnDashboard);
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(231, 700);
			this->panel1->TabIndex = 0;
			// 
			// btnInfo
			// 
			this->btnInfo->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->btnInfo->FlatAppearance->BorderSize = 0;
			this->btnInfo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnInfo->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnInfo->ForeColor = System::Drawing::Color::White;
			this->btnInfo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnInfo.Image")));
			this->btnInfo->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnInfo->Location = System::Drawing::Point(15, 602);
			this->btnInfo->Name = L"btnInfo";
			this->btnInfo->Size = System::Drawing::Size(201, 49);
			this->btnInfo->TabIndex = 8;
			this->btnInfo->Text = L"Info";
			this->btnInfo->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnInfo->UseVisualStyleBackColor = true;
			this->btnInfo->Click += gcnew System::EventHandler(this, &Dashboard::button6_Click);
			// 
			// btnSettings
			// 
			this->btnSettings->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->btnSettings->FlatAppearance->BorderSize = 0;
			this->btnSettings->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSettings->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSettings->ForeColor = System::Drawing::Color::White;
			this->btnSettings->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSettings.Image")));
			this->btnSettings->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnSettings->Location = System::Drawing::Point(15, 651);
			this->btnSettings->Name = L"btnSettings";
			this->btnSettings->Size = System::Drawing::Size(201, 49);
			this->btnSettings->TabIndex = 7;
			this->btnSettings->Text = L"Settings";
			this->btnSettings->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnSettings->UseVisualStyleBackColor = true;
			this->btnSettings->Click += gcnew System::EventHandler(this, &Dashboard::button5_Click);
			// 
			// btnViewSchedule
			// 
			this->btnViewSchedule->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnViewSchedule->FlatAppearance->BorderSize = 0;
			this->btnViewSchedule->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnViewSchedule->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnViewSchedule->ForeColor = System::Drawing::Color::White;
			this->btnViewSchedule->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnViewSchedule.Image")));
			this->btnViewSchedule->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnViewSchedule->Location = System::Drawing::Point(15, 246);
			this->btnViewSchedule->Name = L"btnViewSchedule";
			this->btnViewSchedule->Size = System::Drawing::Size(201, 49);
			this->btnViewSchedule->TabIndex = 6;
			this->btnViewSchedule->Text = L"View Schedule";
			this->btnViewSchedule->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnViewSchedule->UseVisualStyleBackColor = true;
			this->btnViewSchedule->Click += gcnew System::EventHandler(this, &Dashboard::button4_Click);
			// 
			// btnViewGrades
			// 
			this->btnViewGrades->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnViewGrades->FlatAppearance->BorderSize = 0;
			this->btnViewGrades->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnViewGrades->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnViewGrades->ForeColor = System::Drawing::Color::White;
			this->btnViewGrades->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnViewGrades.Image")));
			this->btnViewGrades->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnViewGrades->Location = System::Drawing::Point(15, 197);
			this->btnViewGrades->Name = L"btnViewGrades";
			this->btnViewGrades->Size = System::Drawing::Size(201, 49);
			this->btnViewGrades->TabIndex = 5;
			this->btnViewGrades->Text = L"View Grades";
			this->btnViewGrades->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnViewGrades->UseVisualStyleBackColor = true;
			this->btnViewGrades->Click += gcnew System::EventHandler(this, &Dashboard::button3_Click);
			// 
			// btnRegisterCourse
			// 
			this->btnRegisterCourse->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnRegisterCourse->FlatAppearance->BorderSize = 0;
			this->btnRegisterCourse->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnRegisterCourse->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRegisterCourse->ForeColor = System::Drawing::Color::White;
			this->btnRegisterCourse->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnRegisterCourse.Image")));
			this->btnRegisterCourse->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnRegisterCourse->Location = System::Drawing::Point(15, 148);
			this->btnRegisterCourse->Name = L"btnRegisterCourse";
			this->btnRegisterCourse->Size = System::Drawing::Size(201, 49);
			this->btnRegisterCourse->TabIndex = 4;
			this->btnRegisterCourse->Text = L"Register Course";
			this->btnRegisterCourse->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnRegisterCourse->UseVisualStyleBackColor = true;
			this->btnRegisterCourse->Click += gcnew System::EventHandler(this, &Dashboard::button2_Click);
			// 
			// btnDashboard
			// 
			this->btnDashboard->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnDashboard->FlatAppearance->BorderSize = 0;
			this->btnDashboard->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDashboard->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDashboard->ForeColor = System::Drawing::Color::White;
			this->btnDashboard->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnDashboard.Image")));
			this->btnDashboard->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnDashboard->Location = System::Drawing::Point(15, 99);
			this->btnDashboard->Name = L"btnDashboard";
			this->btnDashboard->Size = System::Drawing::Size(201, 49);
			this->btnDashboard->TabIndex = 3;
			this->btnDashboard->Text = L"Dashboard";
			this->btnDashboard->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnDashboard->UseVisualStyleBackColor = true;
			this->btnDashboard->Click += gcnew System::EventHandler(this, &Dashboard::button1_Click);
			// 
			// panel4
			// 
			this->panel4->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel4->Location = System::Drawing::Point(216, 99);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(15, 601);
			this->panel4->TabIndex = 2;
			this->panel4->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Dashboard::panel4_Paint);
			// 
			// panel3
			// 
			this->panel3->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel3->Location = System::Drawing::Point(0, 99);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(15, 601);
			this->panel3->TabIndex = 1;
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Dashboard::panel3_Paint);
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
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Dashboard::panel2_Paint);
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
			this->label3->Click += gcnew System::EventHandler(this, &Dashboard::label3_Click);
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
			this->label2->Click += gcnew System::EventHandler(this, &Dashboard::label2_Click);
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
			this->logoTitle1->Click += gcnew System::EventHandler(this, &Dashboard::label1_Click);
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
			this->Logo->Click += gcnew System::EventHandler(this, &Dashboard::pictureBox1_Click);
			// 
			// Dashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 23);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1200, 700);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->Name = L"Dashboard";
			this->Text = L"Dashboard";
			this->Load += gcnew System::EventHandler(this, &Dashboard::Dashboard_Load);
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
