#pragma once
#include "user_account.h"

namespace AshesiUARMS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		MySqlConnection^ sqlConn = gcnew MySqlConnection();
		MySqlCommand^ sqlCmd = gcnew MySqlCommand();
		MySqlDataAdapter^ sqlDA = gcnew MySqlDataAdapter();
		MySqlDataReader^ sqlDR;
		DataTable^ sqlDT = gcnew DataTable();
		// fixed connection string formatting (empty password)
		String^ ConnectionStr = "datasource=localhost;port=3306;username=root;password=;database=uarms;";
		UserAccount^ userAccount = gcnew UserAccount("", "", "", "", "");
		// track the role selected via the menu
		String^ selectedRole = "Select role";

		LoginForm(void)
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
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtEmail;


	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::TextBox^ txtPassword;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ btnLogin;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ selectRoleToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ adminToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ facultyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ studentToolStripMenuItem;
	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->btnLogin = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->txtEmail = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->selectRoleToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->adminToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->facultyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->studentToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->panel1->SuspendLayout();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->linkLabel1);
			this->panel1->Controls->Add(this->btnLogin);
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->menuStrip1);
			this->panel1->Location = System::Drawing::Point(263, -1);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(431, 652);
			this->panel1->TabIndex = 0;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(51, 352);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(43, 21);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Role";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Gray;
			this->label5->Location = System::Drawing::Point(92, 607);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(301, 19);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Developed by: Daasebre, Logan, Mariana";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(106, 131);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(325, 21);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Academic Record Management System";
			this->label4->Click += gcnew System::EventHandler(this, &LoginForm::label4_Click);
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->DisabledLinkColor = System::Drawing::Color::Black;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel1->LinkBehavior = System::Windows::Forms::LinkBehavior::NeverUnderline;
			this->linkLabel1->LinkColor = System::Drawing::Color::Black;
			this->linkLabel1->Location = System::Drawing::Point(146, 508);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(146, 19);
			this->linkLabel1->TabIndex = 7;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Forgot my password";
			// 
			// btnLogin
			// 
			this->btnLogin->BackColor = System::Drawing::Color::Firebrick;
			this->btnLogin->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btnLogin->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnLogin->FlatAppearance->BorderSize = 0;
			this->btnLogin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnLogin->ForeColor = System::Drawing::Color::White;
			this->btnLogin->Location = System::Drawing::Point(53, 450);
			this->btnLogin->Name = L"btnLogin";
			this->btnLogin->Size = System::Drawing::Size(327, 37);
			this->btnLogin->TabIndex = 6;
			this->btnLogin->Text = L"LOGIN";
			this->btnLogin->UseVisualStyleBackColor = false;
			this->btnLogin->Click += gcnew System::EventHandler(this, &LoginForm::button1_Click);
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->panel5);
			this->panel4->Controls->Add(this->pictureBox3);
			this->panel4->Controls->Add(this->txtPassword);
			this->panel4->Location = System::Drawing::Point(52, 297);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(329, 36);
			this->panel4->TabIndex = 5;
			this->panel4->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &LoginForm::panel4_Paint);
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::Firebrick;
			this->panel5->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel5->Location = System::Drawing::Point(0, 35);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(329, 1);
			this->panel5->TabIndex = 5;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(308, 8);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(20, 20);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 4;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &LoginForm::pictureBox3_Click);
			// 
			// txtPassword
			// 
			this->txtPassword->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtPassword->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPassword->Location = System::Drawing::Point(3, 6);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->PasswordChar = '*';
			this->txtPassword->Size = System::Drawing::Size(290, 25);
			this->txtPassword->TabIndex = 4;
			this->txtPassword->TextChanged += gcnew System::EventHandler(this, &LoginForm::textBox2_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(48, 271);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(82, 21);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Password";
			this->label3->Click += gcnew System::EventHandler(this, &LoginForm::label3_Click);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Controls->Add(this->pictureBox2);
			this->panel2->Controls->Add(this->txtEmail);
			this->panel2->Location = System::Drawing::Point(52, 217);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(329, 36);
			this->panel2->TabIndex = 3;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Firebrick;
			this->panel3->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel3->Location = System::Drawing::Point(0, 35);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(329, 1);
			this->panel3->TabIndex = 5;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(308, 8);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(20, 20);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 4;
			this->pictureBox2->TabStop = false;
			// 
			// txtEmail
			// 
			this->txtEmail->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtEmail->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtEmail->Location = System::Drawing::Point(3, 6);
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->Size = System::Drawing::Size(290, 25);
			this->txtEmail->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(48, 191);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(51, 21);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Email";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(160, 22);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(96, 96);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Dock = System::Windows::Forms::DockStyle::None;
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->selectRoleToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(55, 382);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(117, 33);
			this->menuStrip1->TabIndex = 11;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// selectRoleToolStripMenuItem
			// 
			this->selectRoleToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->adminToolStripMenuItem,
					this->facultyToolStripMenuItem, this->studentToolStripMenuItem
			});
			this->selectRoleToolStripMenuItem->Name = L"selectRoleToolStripMenuItem";
			this->selectRoleToolStripMenuItem->Size = System::Drawing::Size(109, 29);
			this->selectRoleToolStripMenuItem->Text = L"Select role";
			// 
			// adminToolStripMenuItem
			// 
			this->adminToolStripMenuItem->Name = L"adminToolStripMenuItem";
			this->adminToolStripMenuItem->Size = System::Drawing::Size(175, 34);
			this->adminToolStripMenuItem->Text = L"Admin";
			this->adminToolStripMenuItem->Click += gcnew System::EventHandler(this, &LoginForm::adminToolStripMenuItem_Click);
			// 
			// facultyToolStripMenuItem
			// 
			this->facultyToolStripMenuItem->Name = L"facultyToolStripMenuItem";
			this->facultyToolStripMenuItem->Size = System::Drawing::Size(175, 34);
			this->facultyToolStripMenuItem->Text = L"Faculty";
			this->facultyToolStripMenuItem->Click += gcnew System::EventHandler(this, &LoginForm::facultyToolStripMenuItem_Click);
			// 
			// studentToolStripMenuItem
			// 
			this->studentToolStripMenuItem->Name = L"studentToolStripMenuItem";
			this->studentToolStripMenuItem->Size = System::Drawing::Size(175, 34);
			this->studentToolStripMenuItem->Text = L"Student";
			this->studentToolStripMenuItem->Click += gcnew System::EventHandler(this, &LoginForm::studentToolStripMenuItem_Click);
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 21);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(950, 650);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"LoginForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"LoginForm";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void panel4_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
		   // menu item click handlers to track selected role
	private: System::Void adminToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		selectedRole = "Admin";
		this->selectRoleToolStripMenuItem->Text = selectedRole;
	}
	private: System::Void facultyToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		selectedRole = "Faculty";
		this->selectRoleToolStripMenuItem->Text = selectedRole;
	}
	private: System::Void studentToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		selectedRole = "Student";
		this->selectRoleToolStripMenuItem->Text = selectedRole;
	}
		   // Login button (keeps original handler name as wired in InitializeComponent)
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {//Login button
		String^ email = txtEmail->Text->Trim();
		String^ password = txtPassword->Text->Trim();

		if (email->Length == 0 || password->Length == 0 || selectedRole == "Select role") {
			MessageBox::Show("Please fill in all fields and select a role.", "Error",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		try {
			sqlConn->ConnectionString = ConnectionStr;
			sqlConn->Open();

			sqlCmd->Connection = sqlConn;
			sqlCmd->Parameters->Clear();

			// Use correct column names from your database
			sqlCmd->CommandText = "SELECT * FROM user_account WHERE email = @email AND passwordHash = @pwd";
			sqlCmd->Parameters->AddWithValue("@email", email);
			sqlCmd->Parameters->AddWithValue("@pwd", password);

			sqlDR = sqlCmd->ExecuteReader();

			if (sqlDR->Read()) {
				// Get role from database (stored as text: "student", "faculty", "admin")
				String^ dbRole = sqlDR["role"]->ToString()->ToLower()->Trim();
				String^ inputRole = selectedRole->ToLower();

				// Verify role matches
				if (dbRole != inputRole) {
					MessageBox::Show("Selected role does not match your account role.",
						"Login Failed", MessageBoxButtons::OK, MessageBoxIcon::Error);
					sqlDR->Close();
					sqlConn->Close();
					return;
				}

				// Populate userAccount with correct column names
				userAccount->userID = sqlDR["userID"]->ToString();
				userAccount->username = sqlDR["username"]->ToString();
				userAccount->passwordHash = sqlDR["passwordHash"]->ToString();
				userAccount->role = sqlDR["role"]->ToString();
				userAccount->linkedID = sqlDR["linkedID"]->ToString();

				MessageBox::Show("Welcome " + userAccount->username + "!",
					"Login Successful", MessageBoxButtons::OK, MessageBoxIcon::Information);

				sqlDR->Close();
				sqlConn->Close();

				// TODO: Navigate to appropriate dashboard based on role
				// if (dbRole == "admin") { /* open admin dashboard */ }
				// else if (dbRole == "faculty") { /* open faculty dashboard */ }
				// else if (dbRole == "student") { /* open student dashboard */ }

				this->Hide(); // Hide login form instead of closing
				return;
			}
			else {
				sqlDR->Close();
				sqlConn->Close();
				MessageBox::Show("Email or Password is incorrect, or account does not exist.",
					"Login Failed", MessageBoxButtons::OK, MessageBoxIcon::Error);
				txtPassword->Clear();
				return;
			}
		}
		catch (Exception^ ex) {
			if (sqlDR != nullptr && !sqlDR->IsClosed) {
				try { sqlDR->Close(); }
				catch (...) {}
			}
			if (sqlConn->State == ConnectionState::Open) {
				try { sqlConn->Close(); }
				catch (...) {}
			}
			MessageBox::Show("Database Error: " + ex->Message,
				"Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	};
}