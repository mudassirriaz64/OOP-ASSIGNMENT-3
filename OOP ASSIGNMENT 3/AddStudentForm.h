#pragma once

#include <fstream>
#include <msclr\marshal_cppstd.h>

namespace OOPASSIGNMENT2
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Data::SqlClient;

	public ref class AddStudentForm : public System::Windows::Forms::Form
	{
	public:
		AddStudentForm(void)
		{
			InitializeComponent();
		}

	protected:
		~AddStudentForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ CloseButton;

	private: System::Windows::Forms::Button^ AddButton;
	private: System::Windows::Forms::Button^ ClearButton;


	private: System::Windows::Forms::TextBox^ NameTextBox;

	private: System::Windows::Forms::Label^ NameLabel;
	private: System::Windows::Forms::Label^ IDLabel;


	private: System::Windows::Forms::TextBox^ IDTextBox;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ SectionTextBox;


	private:
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AddStudentForm::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->CloseButton = (gcnew System::Windows::Forms::Button());
			this->AddButton = (gcnew System::Windows::Forms::Button());
			this->ClearButton = (gcnew System::Windows::Forms::Button());
			this->NameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->NameLabel = (gcnew System::Windows::Forms::Label());
			this->IDLabel = (gcnew System::Windows::Forms::Label());
			this->IDTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SectionTextBox = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(111, 211);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->textBox1->Size = System::Drawing::Size(420, 28);
			this->textBox1->TabIndex = 47;
			this->textBox1->Text = L"     Add Student";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(165, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(314, 182);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 46;
			this->pictureBox1->TabStop = false;
			// 
			// CloseButton
			// 
			this->CloseButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->CloseButton->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CloseButton->Location = System::Drawing::Point(448, 579);
			this->CloseButton->Name = L"CloseButton";
			this->CloseButton->Size = System::Drawing::Size(186, 51);
			this->CloseButton->TabIndex = 45;
			this->CloseButton->Text = L"Close";
			this->CloseButton->UseVisualStyleBackColor = true;
			this->CloseButton->Click += gcnew System::EventHandler(this, &AddStudentForm::CloseButton_Click);
			// 
			// AddButton
			// 
			this->AddButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->AddButton->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AddButton->Location = System::Drawing::Point(12, 579);
			this->AddButton->Name = L"AddButton";
			this->AddButton->Size = System::Drawing::Size(182, 51);
			this->AddButton->TabIndex = 41;
			this->AddButton->Text = L"Add";
			this->AddButton->UseVisualStyleBackColor = true;
			this->AddButton->Click += gcnew System::EventHandler(this, &AddStudentForm::AddButton_Click);
			// 
			// ClearButton
			// 
			this->ClearButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->ClearButton->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ClearButton->Location = System::Drawing::Point(215, 579);
			this->ClearButton->Name = L"ClearButton";
			this->ClearButton->Size = System::Drawing::Size(199, 51);
			this->ClearButton->TabIndex = 43;
			this->ClearButton->Text = L"Clear";
			this->ClearButton->UseVisualStyleBackColor = true;
			this->ClearButton->Click += gcnew System::EventHandler(this, &AddStudentForm::ClearButton_Click);
			// 
			// NameTextBox
			// 
			this->NameTextBox->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NameTextBox->Location = System::Drawing::Point(2, 328);
			this->NameTextBox->Name = L"NameTextBox";
			this->NameTextBox->Size = System::Drawing::Size(643, 35);
			this->NameTextBox->TabIndex = 44;
			// 
			// NameLabel
			// 
			this->NameLabel->AutoSize = true;
			this->NameLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NameLabel->Location = System::Drawing::Point(2, 293);
			this->NameLabel->Name = L"NameLabel";
			this->NameLabel->Size = System::Drawing::Size(160, 27);
			this->NameLabel->TabIndex = 48;
			this->NameLabel->Text = L"Student Name :";
			// 
			// IDLabel
			// 
			this->IDLabel->AutoSize = true;
			this->IDLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->IDLabel->Location = System::Drawing::Point(2, 384);
			this->IDLabel->Name = L"IDLabel";
			this->IDLabel->Size = System::Drawing::Size(162, 27);
			this->IDLabel->TabIndex = 50;
			this->IDLabel->Text = L"Enrollment ID :";
			// 
			// IDTextBox
			// 
			this->IDTextBox->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->IDTextBox->Location = System::Drawing::Point(2, 418);
			this->IDTextBox->Name = L"IDTextBox";
			this->IDTextBox->Size = System::Drawing::Size(643, 35);
			this->IDTextBox->TabIndex = 49;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(2, 475);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(126, 27);
			this->label3->TabIndex = 52;
			this->label3->Text = L"Section ID :";
			// 
			// SectionTextBox
			// 
			this->SectionTextBox->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SectionTextBox->Location = System::Drawing::Point(2, 509);
			this->SectionTextBox->Name = L"SectionTextBox";
			this->SectionTextBox->Size = System::Drawing::Size(643, 35);
			this->SectionTextBox->TabIndex = 51;
			// 
			// AddStudentForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(659, 642);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->SectionTextBox);
			this->Controls->Add(this->IDLabel);
			this->Controls->Add(this->IDTextBox);
			this->Controls->Add(this->NameLabel);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->CloseButton);
			this->Controls->Add(this->AddButton);
			this->Controls->Add(this->ClearButton);
			this->Controls->Add(this->NameTextBox);
			this->Name = L"AddStudentForm";
			this->Text = L"AddStudentForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void CloseButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Close();
	}
	private: System::Void ClearButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		ClearTextBoxes();
	}
	private: System::Void AddButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		String^ studentName = NameTextBox->Text;
		String^ enrollmentID = IDTextBox->Text;
		String^ sectionID = SectionTextBox->Text;

		if (studentName == "" || enrollmentID == "" || sectionID == "")
		{
			MessageBox::Show("Please fill in all fields.");
			return;
		}
		else
		{
			AddStudentToDatabase(studentName, enrollmentID, sectionID);
			MessageBox::Show("Student added successfully.");
			ClearTextBoxes();
		}
	}

		   void AddStudentToDatabase(String^ studentName, String^ enrollmentID, String^ sectionID)
		   {
			   String^ connectionString = "Data Source=DESKTOP-MN4CFP4;Initial Catalog=TIMETABLEDB;Integrated Security=True";
			   SqlConnection^ con = gcnew SqlConnection(connectionString);

			   try
			   {
				   con->Open();

				   String^ checkSectionQuery = "SELECT COUNT(*) FROM Sections WHERE SectionID = @SectionID";
				   SqlCommand^ checkSectionCmd = gcnew SqlCommand(checkSectionQuery, con);
				   checkSectionCmd->Parameters->AddWithValue("@SectionID", sectionID);
				   int sectionCount = (int)checkSectionCmd->ExecuteScalar();

				   if (sectionCount == 0)
				   {
					   String^ addSectionQuery = "INSERT INTO Sections (SectionID) VALUES (@SectionID)";
					   SqlCommand^ addSectionCmd = gcnew SqlCommand(addSectionQuery, con);
					   addSectionCmd->Parameters->AddWithValue("@SectionID", sectionID);
					   addSectionCmd->ExecuteNonQuery();
				   }

				   String^ addStudentQuery = "INSERT INTO Students (EnrollmentID, Name, SectionID) VALUES (@EnrollmentID, @StudentName, @SectionID)";

				   SqlCommand^ addStudentCmd = gcnew SqlCommand(addStudentQuery, con);
				   addStudentCmd->Parameters->AddWithValue("@EnrollmentID", enrollmentID);
				   addStudentCmd->Parameters->AddWithValue("@StudentName", studentName);
				   addStudentCmd->Parameters->AddWithValue("@SectionID", sectionID);

				   addStudentCmd->ExecuteNonQuery();

				   con->Close();
			   }
			   catch (Exception^ ex)
			   {
				   con->Close();
				   throw ex;
			   }
		   }

		   void ClearTextBoxes()
		   {
			   NameTextBox->Text = "";
			   IDTextBox->Text = "";
			   SectionTextBox->Text = "";
		   }
	};
}
