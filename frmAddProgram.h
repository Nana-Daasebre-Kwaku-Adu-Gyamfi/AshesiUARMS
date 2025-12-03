#pragma once

namespace AshesiUARMS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for frmAddProgram
	/// </summary>
	public ref class frmAddProgram : public System::Windows::Forms::Form
	{
	public:
		frmAddProgram(void)
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
		~frmAddProgram()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ cbProgramType;
	protected:

	private: System::Windows::Forms::ComboBox^ cbDepartment;
	protected:




	private: System::Windows::Forms::Label^ label7;

	private: System::Windows::Forms::Label^ label5;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtFindProgram;
	private: System::Windows::Forms::TextBox^ txtProgram;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnClose;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::Button^ btnUpdate;
	private: System::Windows::Forms::Button^ btnSave;
	private: System::Windows::Forms::Button^ btnFind;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;

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
			this->cbProgramType = (gcnew System::Windows::Forms::ComboBox());
			this->cbDepartment = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtFindProgram = (gcnew System::Windows::Forms::TextBox());
			this->txtProgram = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnSave = (gcnew System::Windows::Forms::Button());
			this->btnFind = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// cbProgramType
			// 
			this->cbProgramType->FormattingEnabled = true;
			this->cbProgramType->Location = System::Drawing::Point(257, 246);
			this->cbProgramType->Name = L"cbProgramType";
			this->cbProgramType->Size = System::Drawing::Size(212, 28);
			this->cbProgramType->TabIndex = 52;
			// 
			// cbDepartment
			// 
			this->cbDepartment->FormattingEnabled = true;
			this->cbDepartment->Location = System::Drawing::Point(257, 84);
			this->cbDepartment->Name = L"cbDepartment";
			this->cbDepartment->Size = System::Drawing::Size(434, 28);
			this->cbDepartment->TabIndex = 51;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(98, 245);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(155, 25);
			this->label7->TabIndex = 47;
			this->label7->Text = L"Program Type:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(98, 165);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(100, 25);
			this->label5->TabIndex = 45;
			this->label5->Text = L"Program:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(645, 775);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(141, 25);
			this->label2->TabIndex = 42;
			this->label2->Text = L"Find Program";
			// 
			// txtFindProgram
			// 
			this->txtFindProgram->Location = System::Drawing::Point(787, 774);
			this->txtFindProgram->Name = L"txtFindProgram";
			this->txtFindProgram->Size = System::Drawing::Size(141, 26);
			this->txtFindProgram->TabIndex = 41;
			// 
			// txtProgram
			// 
			this->txtProgram->Location = System::Drawing::Point(257, 164);
			this->txtProgram->Name = L"txtProgram";
			this->txtProgram->Size = System::Drawing::Size(434, 26);
			this->txtProgram->TabIndex = 40;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(98, 87);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(130, 25);
			this->label1->TabIndex = 39;
			this->label1->Text = L"Department:";
			// 
			// btnClose
			// 
			this->btnClose->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnClose->Location = System::Drawing::Point(42, 19);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(44, 42);
			this->btnClose->TabIndex = 38;
			this->btnClose->Text = L"X";
			this->btnClose->UseVisualStyleBackColor = true;
			this->btnClose->Click += gcnew System::EventHandler(this, &frmAddProgram::btnClose_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(956, 570);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(110, 42);
			this->btnCancel->TabIndex = 37;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = true;
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(956, 481);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(110, 42);
			this->btnDelete->TabIndex = 36;
			this->btnDelete->Text = L"Delete";
			this->btnDelete->UseVisualStyleBackColor = true;
			// 
			// btnUpdate
			// 
			this->btnUpdate->Location = System::Drawing::Point(956, 389);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(110, 42);
			this->btnUpdate->TabIndex = 35;
			this->btnUpdate->Text = L"Update";
			this->btnUpdate->UseVisualStyleBackColor = true;
			// 
			// btnSave
			// 
			this->btnSave->Location = System::Drawing::Point(956, 301);
			this->btnSave->Name = L"btnSave";
			this->btnSave->Size = System::Drawing::Size(110, 42);
			this->btnSave->TabIndex = 34;
			this->btnSave->Text = L"Save";
			this->btnSave->UseVisualStyleBackColor = true;
			// 
			// btnFind
			// 
			this->btnFind->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->btnFind->Location = System::Drawing::Point(956, 758);
			this->btnFind->Name = L"btnFind";
			this->btnFind->Size = System::Drawing::Size(110, 42);
			this->btnFind->TabIndex = 33;
			this->btnFind->Text = L"Find";
			this->btnFind->UseVisualStyleBackColor = true;
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->Controls->Add(this->dataGridView1);
			this->panel1->Location = System::Drawing::Point(79, 301);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(849, 436);
			this->panel1->TabIndex = 32;
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
			this->dataGridView1->Size = System::Drawing::Size(819, 409);
			this->dataGridView1->TabIndex = 0;
			// 
			// frmAddProgram
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1109, 819);
			this->Controls->Add(this->cbProgramType);
			this->Controls->Add(this->cbDepartment);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtFindProgram);
			this->Controls->Add(this->txtProgram);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnClose);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnUpdate);
			this->Controls->Add(this->btnSave);
			this->Controls->Add(this->btnFind);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"frmAddProgram";
			this->Text = L"frmAddProgram";
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
