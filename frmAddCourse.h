#pragma once

namespace AshesiUARMS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for frmAddCourse
	/// </summary>
	public ref class frmAddCourse : public System::Windows::Forms::Form
	{
	public:
		frmAddCourse(void)
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
		~frmAddCourse()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtFindCourse;
	protected:

	private: System::Windows::Forms::TextBox^ txtCourseCode;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnClose;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::Button^ btnUpdate;
	private: System::Windows::Forms::Button^ btnSave;
	private: System::Windows::Forms::Button^ btnFind;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txtCourseTitle;
	private: System::Windows::Forms::ComboBox^ cbSemester;
	private: System::Windows::Forms::ComboBox^ cbLevel;
	private: System::Windows::Forms::ComboBox^ cbProgram;
	private: System::Windows::Forms::ComboBox^ cbCourseCredit;


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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtFindCourse = (gcnew System::Windows::Forms::TextBox());
			this->txtCourseCode = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnSave = (gcnew System::Windows::Forms::Button());
			this->btnFind = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtCourseTitle = (gcnew System::Windows::Forms::TextBox());
			this->cbSemester = (gcnew System::Windows::Forms::ComboBox());
			this->cbLevel = (gcnew System::Windows::Forms::ComboBox());
			this->cbProgram = (gcnew System::Windows::Forms::ComboBox());
			this->cbCourseCredit = (gcnew System::Windows::Forms::ComboBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(615, 768);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(130, 25);
			this->label2->TabIndex = 21;
			this->label2->Text = L"Find Course";
			// 
			// txtFindCourse
			// 
			this->txtFindCourse->Location = System::Drawing::Point(757, 767);
			this->txtFindCourse->Name = L"txtFindCourse";
			this->txtFindCourse->Size = System::Drawing::Size(141, 26);
			this->txtFindCourse->TabIndex = 20;
			// 
			// txtCourseCode
			// 
			this->txtCourseCode->Location = System::Drawing::Point(227, 212);
			this->txtCourseCode->Name = L"txtCourseCode";
			this->txtCourseCode->Size = System::Drawing::Size(434, 26);
			this->txtCourseCode->TabIndex = 19;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(68, 80);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 25);
			this->label1->TabIndex = 18;
			this->label1->Text = L"Program:";
			// 
			// btnClose
			// 
			this->btnClose->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnClose->Location = System::Drawing::Point(12, 12);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(44, 42);
			this->btnClose->TabIndex = 17;
			this->btnClose->Text = L"X";
			this->btnClose->UseVisualStyleBackColor = true;
			this->btnClose->Click += gcnew System::EventHandler(this, &frmAddCourse::btnClose_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(926, 619);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(110, 42);
			this->btnCancel->TabIndex = 16;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = true;
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(926, 530);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(110, 42);
			this->btnDelete->TabIndex = 15;
			this->btnDelete->Text = L"Delete";
			this->btnDelete->UseVisualStyleBackColor = true;
			// 
			// btnUpdate
			// 
			this->btnUpdate->Location = System::Drawing::Point(926, 438);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(110, 42);
			this->btnUpdate->TabIndex = 14;
			this->btnUpdate->Text = L"Update";
			this->btnUpdate->UseVisualStyleBackColor = true;
			// 
			// btnSave
			// 
			this->btnSave->Location = System::Drawing::Point(926, 350);
			this->btnSave->Name = L"btnSave";
			this->btnSave->Size = System::Drawing::Size(110, 42);
			this->btnSave->TabIndex = 13;
			this->btnSave->Text = L"Save";
			this->btnSave->UseVisualStyleBackColor = true;
			// 
			// btnFind
			// 
			this->btnFind->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->btnFind->Location = System::Drawing::Point(926, 751);
			this->btnFind->Name = L"btnFind";
			this->btnFind->Size = System::Drawing::Size(110, 42);
			this->btnFind->TabIndex = 12;
			this->btnFind->Text = L"Find";
			this->btnFind->UseVisualStyleBackColor = true;
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->Controls->Add(this->dataGridView1);
			this->panel1->Location = System::Drawing::Point(49, 350);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(849, 380);
			this->panel1->TabIndex = 11;
			// 
			// dataGridView1
			// 
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(13, 13);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(819, 353);
			this->dataGridView1->TabIndex = 0;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(68, 124);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(71, 25);
			this->label3->TabIndex = 22;
			this->label3->Text = L"Level:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(68, 165);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(111, 25);
			this->label4->TabIndex = 23;
			this->label4->Text = L"Semester:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(68, 211);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(147, 25);
			this->label5->TabIndex = 24;
			this->label5->Text = L"Course Code:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(68, 262);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(137, 25);
			this->label6->TabIndex = 25;
			this->label6->Text = L"Course Title:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(68, 310);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(153, 25);
			this->label7->TabIndex = 26;
			this->label7->Text = L"Course Credit:";
			// 
			// txtCourseTitle
			// 
			this->txtCourseTitle->Location = System::Drawing::Point(227, 261);
			this->txtCourseTitle->Name = L"txtCourseTitle";
			this->txtCourseTitle->Size = System::Drawing::Size(671, 26);
			this->txtCourseTitle->TabIndex = 27;
			// 
			// cbSemester
			// 
			this->cbSemester->FormattingEnabled = true;
			this->cbSemester->Location = System::Drawing::Point(227, 162);
			this->cbSemester->Name = L"cbSemester";
			this->cbSemester->Size = System::Drawing::Size(159, 28);
			this->cbSemester->TabIndex = 28;
			// 
			// cbLevel
			// 
			this->cbLevel->FormattingEnabled = true;
			this->cbLevel->Location = System::Drawing::Point(227, 121);
			this->cbLevel->Name = L"cbLevel";
			this->cbLevel->Size = System::Drawing::Size(159, 28);
			this->cbLevel->TabIndex = 29;
			// 
			// cbProgram
			// 
			this->cbProgram->FormattingEnabled = true;
			this->cbProgram->Location = System::Drawing::Point(227, 77);
			this->cbProgram->Name = L"cbProgram";
			this->cbProgram->Size = System::Drawing::Size(434, 28);
			this->cbProgram->TabIndex = 30;
			// 
			// cbCourseCredit
			// 
			this->cbCourseCredit->FormattingEnabled = true;
			this->cbCourseCredit->Location = System::Drawing::Point(227, 307);
			this->cbCourseCredit->Name = L"cbCourseCredit";
			this->cbCourseCredit->Size = System::Drawing::Size(159, 28);
			this->cbCourseCredit->TabIndex = 31;
			// 
			// frmAddCourse
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1109, 819);
			this->Controls->Add(this->cbCourseCredit);
			this->Controls->Add(this->cbProgram);
			this->Controls->Add(this->cbLevel);
			this->Controls->Add(this->cbSemester);
			this->Controls->Add(this->txtCourseTitle);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtFindCourse);
			this->Controls->Add(this->txtCourseCode);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnClose);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnUpdate);
			this->Controls->Add(this->btnSave);
			this->Controls->Add(this->btnFind);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"frmAddCourse";
			this->Text = L"frmAddCourse";
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnClose_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}
