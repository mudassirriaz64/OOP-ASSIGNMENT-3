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
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ ok;
	private: System::Windows::Forms::Button^ reset;
	private: System::Windows::Forms::TextBox^ name;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox3;

	private:
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AddStudentForm::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->ok = (gcnew System::Windows::Forms::Button());
			this->reset = (gcnew System::Windows::Forms::Button());
			this->name = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
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
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &AddStudentForm::textBox1_TextChanged);
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
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(448, 579);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(186, 51);
			this->button1->TabIndex = 45;
			this->button1->Text = L"Exit";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AddStudentForm::button1_Click);
			// 
			// ok
			// 
			this->ok->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->ok->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ok->Location = System::Drawing::Point(12, 579);
			this->ok->Name = L"ok";
			this->ok->Size = System::Drawing::Size(182, 51);
			this->ok->TabIndex = 41;
			this->ok->Text = L"Add";
			this->ok->UseVisualStyleBackColor = true;
			this->ok->Click += gcnew System::EventHandler(this, &AddStudentForm::ok_Click);
			// 
			// reset
			// 
			this->reset->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->reset->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->reset->Location = System::Drawing::Point(215, 579);
			this->reset->Name = L"reset";
			this->reset->Size = System::Drawing::Size(199, 51);
			this->reset->TabIndex = 43;
			this->reset->Text = L"Clear";
			this->reset->UseVisualStyleBackColor = true;
			this->reset->Click += gcnew System::EventHandler(this, &AddStudentForm::reset_Click);
			// 
			// name
			// 
			this->name->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->name->Location = System::Drawing::Point(2, 328);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(643, 35);
			this->name->TabIndex = 44;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(2, 293);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(69, 27);
			this->label1->TabIndex = 48;
			this->label1->Text = L"Name";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(2, 384);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(150, 27);
			this->label2->TabIndex = 50;
			this->label2->Text = L"Enrollment ID";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(2, 418);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(643, 35);
			this->textBox2->TabIndex = 49;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(2, 475);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(83, 27);
			this->label3->TabIndex = 52;
			this->label3->Text = L"Section";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(2, 509);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(643, 35);
			this->textBox3->TabIndex = 51;
			// 
			// AddStudentForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(659, 642);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->ok);
			this->Controls->Add(this->reset);
			this->Controls->Add(this->name);
			this->Name = L"AddStudentForm";
			this->Text = L"AddStudentForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Close();
	}
	private: System::Void reset_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		clearfields();
	}
	private: System::Void ok_Click(System::Object^ sender, System::EventArgs^ e)
	{
		String^ studentName = name->Text;
		String^ enrollmentID = textBox2->Text;
		String^ sectionID = textBox3->Text;

		if (studentName == "" || enrollmentID == "" || sectionID == "")
		{
			MessageBox::Show("Please fill in all fields.");
			return;
		}
		else
		{
			AddStudentToDatabase(studentName, enrollmentID, sectionID);
			MessageBox::Show("Student added successfully.");
			clearfields();
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

		   void clearfields()
		   {
			  name->Text="";
			  textBox2->Text="";
			  textBox3->Text="";
		   }
	};
}
