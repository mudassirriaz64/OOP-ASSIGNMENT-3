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

	/// <summary>
	/// Summary for Room
	/// </summary>
	public ref class AddTeacher : public System::Windows::Forms::Form
	{
	public:
		AddTeacher(void)
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
		~AddTeacher()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ AddTeacherLabel;
	protected:

	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ CloseButton;
	private: System::Windows::Forms::Button^ AddButton;


	private: System::Windows::Forms::Button^ ClearButton;

	private: System::Windows::Forms::TextBox^ NameTextBox;

	private: System::Windows::Forms::Label^ NameLabel;
	private: System::Windows::Forms::Label^ IDLabel;
	private: System::Windows::Forms::TextBox^ IDTextBox;






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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AddTeacher::typeid));
			this->AddTeacherLabel = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->CloseButton = (gcnew System::Windows::Forms::Button());
			this->AddButton = (gcnew System::Windows::Forms::Button());
			this->ClearButton = (gcnew System::Windows::Forms::Button());
			this->NameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->NameLabel = (gcnew System::Windows::Forms::Label());
			this->IDLabel = (gcnew System::Windows::Forms::Label());
			this->IDTextBox = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// AddTeacherLabel
			// 
			this->AddTeacherLabel->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->AddTeacherLabel->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->AddTeacherLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AddTeacherLabel->Location = System::Drawing::Point(111, 211);
			this->AddTeacherLabel->Name = L"AddTeacherLabel";
			this->AddTeacherLabel->Size = System::Drawing::Size(420, 28);
			this->AddTeacherLabel->TabIndex = 47;
			this->AddTeacherLabel->Text = L"     Add Teacher";
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
			this->CloseButton->Location = System::Drawing::Point(448, 455);
			this->CloseButton->Name = L"CloseButton";
			this->CloseButton->Size = System::Drawing::Size(186, 51);
			this->CloseButton->TabIndex = 45;
			this->CloseButton->Text = L"Close";
			this->CloseButton->UseVisualStyleBackColor = true;
			this->CloseButton->Click += gcnew System::EventHandler(this, &AddTeacher::CloseButton_Click);
			// 
			// AddButton
			// 
			this->AddButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->AddButton->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AddButton->Location = System::Drawing::Point(12, 455);
			this->AddButton->Name = L"AddButton";
			this->AddButton->Size = System::Drawing::Size(182, 51);
			this->AddButton->TabIndex = 41;
			this->AddButton->Text = L"Add";
			this->AddButton->UseVisualStyleBackColor = true;
			this->AddButton->Click += gcnew System::EventHandler(this, &AddTeacher::AddButton_Click);
			// 
			// ClearButton
			// 
			this->ClearButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->ClearButton->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ClearButton->Location = System::Drawing::Point(215, 455);
			this->ClearButton->Name = L"ClearButton";
			this->ClearButton->Size = System::Drawing::Size(199, 51);
			this->ClearButton->TabIndex = 43;
			this->ClearButton->Text = L"Clear";
			this->ClearButton->UseVisualStyleBackColor = true;
			this->ClearButton->Click += gcnew System::EventHandler(this, &AddTeacher::ClearButton_Click);
			// 
			// NameTextBox
			// 
			this->NameTextBox->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NameTextBox->Location = System::Drawing::Point(2, 304);
			this->NameTextBox->Name = L"NameTextBox";
			this->NameTextBox->Size = System::Drawing::Size(643, 35);
			this->NameTextBox->TabIndex = 44;
			// 
			// NameLabel
			// 
			this->NameLabel->AutoSize = true;
			this->NameLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NameLabel->Location = System::Drawing::Point(-3, 274);
			this->NameLabel->Name = L"NameLabel";
			this->NameLabel->Size = System::Drawing::Size(140, 27);
			this->NameLabel->TabIndex = 42;
			this->NameLabel->Text = L"Enter Name :";
			this->NameLabel->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// IDLabel
			// 
			this->IDLabel->AutoSize = true;
			this->IDLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->IDLabel->Location = System::Drawing::Point(-3, 358);
			this->IDLabel->Name = L"IDLabel";
			this->IDLabel->Size = System::Drawing::Size(225, 27);
			this->IDLabel->TabIndex = 48;
			this->IDLabel->Text = L"Enter Application ID :";
			this->IDLabel->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// IDTextBox
			// 
			this->IDTextBox->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->IDTextBox->Location = System::Drawing::Point(2, 388);
			this->IDTextBox->Name = L"IDTextBox";
			this->IDTextBox->Size = System::Drawing::Size(643, 35);
			this->IDTextBox->TabIndex = 49;
			// 
			// AddTeacher
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(659, 518);
			this->Controls->Add(this->IDTextBox);
			this->Controls->Add(this->IDLabel);
			this->Controls->Add(this->AddTeacherLabel);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->CloseButton);
			this->Controls->Add(this->AddButton);
			this->Controls->Add(this->ClearButton);
			this->Controls->Add(this->NameTextBox);
			this->Controls->Add(this->NameLabel);
			this->Name = L"AddTeacher";
			this->Text = L"Add Teacher";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void CloseButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Close();
	}

	private: System::Void AddButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		String^ TeacherName = NameTextBox->Text;
		String^ ApplicationID = IDTextBox->Text;

		if (TeacherName == "" || ApplicationID == "")
		{
			MessageBox::Show("Please fill in all the fields.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		try
		{
			if (TeacherExists(ApplicationID))
			{
				MessageBox::Show("Teacher already exists.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else
			{
				InsertTeacherIntoDatabase(ApplicationID, TeacherName);
				ClearTextBoxes();
				MessageBox::Show("Teacher added successfully.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("An error occurred while adding the teacher: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

		   void InsertTeacherIntoDatabase(String^ ApplicationID, String^ TeacherName)
		   {
			   String^ connectionString = "Data Source=DESKTOP-MN4CFP4;Initial Catalog=TIMETABLEDB;Integrated Security=True";

			   String^ query = "INSERT INTO Teachers (ApplicationID, Name) VALUES (@ApplicationID, @Name)";

			   SqlConnection^ connection = gcnew SqlConnection(connectionString);

			   SqlCommand^ command = gcnew SqlCommand(query, connection);
			   command->Parameters->AddWithValue("@ApplicationID", ApplicationID);
			   command->Parameters->AddWithValue("@Name", TeacherName);

			   try
			   {
				   connection->Open();

				   command->ExecuteNonQuery();

				   connection->Close();
			   }
			   catch (Exception^ ex)
			   {
				   throw ex;
			   }
		   }

		   bool TeacherExists(String^ ApplicationID)
		   {
			   String^ connectionString = "Data Source=DESKTOP-MN4CFP4;Initial Catalog=TIMETABLEDB;Integrated Security=True";
			   SqlConnection^ connection = gcnew SqlConnection(connectionString);
			   String^ query = "SELECT COUNT(*) FROM Teachers WHERE ApplicationID = @ApplicationID";
			   SqlCommand^ command = gcnew SqlCommand(query, connection);
			   command->Parameters->AddWithValue("@ApplicationID", ApplicationID);

			   try
			   {
				   connection->Open();
				   int count = (int)command->ExecuteScalar();
				   connection->Close();
				   return count > 0;
			   }
			   catch (Exception^ ex)
			   {
				   MessageBox::Show("An error occurred while checking the teacher: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				   return false;
			   }
		   }
		   void ClearTextBoxes()
		   {
			   NameTextBox->Clear();
			   IDTextBox->Clear();
		   }

	private: System::Void ClearButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		ClearTextBoxes();
	}
	};
}
