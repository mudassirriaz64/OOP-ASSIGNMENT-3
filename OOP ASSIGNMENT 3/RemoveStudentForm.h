#pragma once

#include <algorithm>
#include <cliext/list>

namespace OOPASSIGNMENT2
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Data::SqlClient;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Summary for RemoveStudentForm
	/// </summary>
	public ref class RemoveStudentForm : public System::Windows::Forms::Form
	{
	public:
		RemoveStudentForm(void)
		{
			InitializeComponent();
		}

	protected:
		~RemoveStudentForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ EnrollmentIDTextBox;
	protected:


	private: System::Windows::Forms::Button^ RemoveButton;
	protected:

	private: System::Windows::Forms::Button^ CancelButton;


	private: System::Windows::Forms::Button^ ClearButton;
	private: System::Windows::Forms::Label^ EnrollmentIDLabel;


	private: System::Windows::Forms::PictureBox^ pictureBox2;

	private:
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(RemoveStudentForm::typeid));
			this->EnrollmentIDTextBox = (gcnew System::Windows::Forms::TextBox());
			this->RemoveButton = (gcnew System::Windows::Forms::Button());
			this->CancelButton = (gcnew System::Windows::Forms::Button());
			this->ClearButton = (gcnew System::Windows::Forms::Button());
			this->EnrollmentIDLabel = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// EnrollmentIDTextBox
			// 
			this->EnrollmentIDTextBox->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EnrollmentIDTextBox->Location = System::Drawing::Point(12, 274);
			this->EnrollmentIDTextBox->Name = L"EnrollmentIDTextBox";
			this->EnrollmentIDTextBox->Size = System::Drawing::Size(579, 35);
			this->EnrollmentIDTextBox->TabIndex = 0;
			// 
			// RemoveButton
			// 
			this->RemoveButton->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RemoveButton->Location = System::Drawing::Point(12, 360);
			this->RemoveButton->Name = L"RemoveButton";
			this->RemoveButton->Size = System::Drawing::Size(135, 38);
			this->RemoveButton->TabIndex = 1;
			this->RemoveButton->Text = L"Remove";
			this->RemoveButton->UseVisualStyleBackColor = true;
			this->RemoveButton->Click += gcnew System::EventHandler(this, &RemoveStudentForm::removeButton_Click);
			// 
			// CancelButton
			// 
			this->CancelButton->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CancelButton->Location = System::Drawing::Point(424, 360);
			this->CancelButton->Name = L"CancelButton";
			this->CancelButton->Size = System::Drawing::Size(149, 38);
			this->CancelButton->TabIndex = 2;
			this->CancelButton->Text = L"Close";
			this->CancelButton->UseVisualStyleBackColor = true;
			// 
			// ClearButton
			// 
			this->ClearButton->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ClearButton->Location = System::Drawing::Point(195, 360);
			this->ClearButton->Name = L"ClearButton";
			this->ClearButton->Size = System::Drawing::Size(158, 37);
			this->ClearButton->TabIndex = 4;
			this->ClearButton->Text = L"Clear";
			this->ClearButton->UseVisualStyleBackColor = true;
			// 
			// EnrollmentIDLabel
			// 
			this->EnrollmentIDLabel->AutoSize = true;
			this->EnrollmentIDLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EnrollmentIDLabel->Location = System::Drawing::Point(12, 245);
			this->EnrollmentIDLabel->Name = L"EnrollmentIDLabel";
			this->EnrollmentIDLabel->Size = System::Drawing::Size(332, 27);
			this->EnrollmentIDLabel->TabIndex = 5;
			this->EnrollmentIDLabel->Text = L"Enter Enrollment ID to Remove :";
			// 
			// pictureBox2
			// 
			this->pictureBox2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(147, 12);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(314, 182);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 47;
			this->pictureBox2->TabStop = false;
			// 
			// RemoveStudentForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(585, 410);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->EnrollmentIDLabel);
			this->Controls->Add(this->ClearButton);
			this->Controls->Add(this->CancelButton);
			this->Controls->Add(this->RemoveButton);
			this->Controls->Add(this->EnrollmentIDTextBox);
			this->Name = L"RemoveStudentForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Remove Student";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void removeButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		String^ enrollmentID = EnrollmentIDTextBox->Text;

		if (enrollmentID == "")
		{
			MessageBox::Show("Please enter the enrollment ID.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		try
		{
			String^ connectionString = "Data Source=DESKTOP-MN4CFP4;Initial Catalog=TIMETABLEDB;Integrated Security=True";
			SqlConnection^ connection = gcnew SqlConnection(connectionString);
			connection->Open();
			String^ query = "DELETE FROM Students WHERE EnrollmentID = @EnrollmentID";
			SqlCommand^ command = gcnew SqlCommand(query, connection);
			command->Parameters->AddWithValue("@EnrollmentID", enrollmentID);
			int rowsAffected = command->ExecuteNonQuery();
			if (rowsAffected > 0)
			{
				MessageBox::Show("Student removed successfully.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
				EnrollmentIDTextBox->Clear();
			}
			else
			{
				MessageBox::Show("Enrollment ID not found.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}

			connection->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("An error occurred while removing the student: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}


	private: System::Void cancelButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Close();
	}
	private: System::Void ClearButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		EnrollmentIDTextBox->Clear();
	}
	};
}
