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
	public ref class RemoveTeacher : public System::Windows::Forms::Form
	{
	public:
		RemoveTeacher(void)
		{
			InitializeComponent();
		}

	protected:
		~RemoveTeacher()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::TextBox^ ApplicationIDTextBox;
	private: System::Windows::Forms::Button^ RemoveButton;
	protected:

	private: System::Windows::Forms::Button^ CloseButton;
	private: System::Windows::Forms::Button^ ClearButton;
	private: System::Windows::Forms::Label^ ApplicationIDLabel;


	private: System::Windows::Forms::PictureBox^ pictureBox2;

	private:
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(RemoveTeacher::typeid));
			this->ApplicationIDTextBox = (gcnew System::Windows::Forms::TextBox());
			this->RemoveButton = (gcnew System::Windows::Forms::Button());
			this->CloseButton = (gcnew System::Windows::Forms::Button());
			this->ClearButton = (gcnew System::Windows::Forms::Button());
			this->ApplicationIDLabel = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// ApplicationIDTextBox
			// 
			this->ApplicationIDTextBox->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ApplicationIDTextBox->Location = System::Drawing::Point(12, 284);
			this->ApplicationIDTextBox->Name = L"ApplicationIDTextBox";
			this->ApplicationIDTextBox->Size = System::Drawing::Size(560, 35);
			this->ApplicationIDTextBox->TabIndex = 0;
			// 
			// RemoveButton
			// 
			this->RemoveButton->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RemoveButton->Location = System::Drawing::Point(12, 360);
			this->RemoveButton->Name = L"RemoveButton";
			this->RemoveButton->Size = System::Drawing::Size(157, 38);
			this->RemoveButton->TabIndex = 1;
			this->RemoveButton->Text = L"Remove";
			this->RemoveButton->UseVisualStyleBackColor = true;
			this->RemoveButton->Click += gcnew System::EventHandler(this, &RemoveTeacher::RemoveButton_Click);
			// 
			// CloseButton
			// 
			this->CloseButton->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CloseButton->Location = System::Drawing::Point(437, 360);
			this->CloseButton->Name = L"CloseButton";
			this->CloseButton->Size = System::Drawing::Size(135, 38);
			this->CloseButton->TabIndex = 2;
			this->CloseButton->Text = L"Cancel";
			this->CloseButton->UseVisualStyleBackColor = true;
			this->CloseButton->Click += gcnew System::EventHandler(this, &RemoveTeacher::CloseButton_Click);
			// 
			// ClearButton
			// 
			this->ClearButton->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ClearButton->Location = System::Drawing::Point(217, 361);
			this->ClearButton->Name = L"ClearButton";
			this->ClearButton->Size = System::Drawing::Size(168, 37);
			this->ClearButton->TabIndex = 4;
			this->ClearButton->Text = L"Clear";
			this->ClearButton->UseVisualStyleBackColor = true;
			this->ClearButton->Click += gcnew System::EventHandler(this, &RemoveTeacher::ClearButton_Click);
			// 
			// ApplicationIDLabel
			// 
			this->ApplicationIDLabel->AutoSize = true;
			this->ApplicationIDLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ApplicationIDLabel->Location = System::Drawing::Point(13, 248);
			this->ApplicationIDLabel->Name = L"ApplicationIDLabel";
			this->ApplicationIDLabel->Size = System::Drawing::Size(336, 27);
			this->ApplicationIDLabel->TabIndex = 5;
			this->ApplicationIDLabel->Text = L"Enter Application ID to Remove :";
			// 
			// pictureBox2
			// 
			this->pictureBox2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(133, 21);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(314, 182);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 47;
			this->pictureBox2->TabStop = false;
			// 
			// RemoveTeacher
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(570, 410);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->ApplicationIDLabel);
			this->Controls->Add(this->ClearButton);
			this->Controls->Add(this->CloseButton);
			this->Controls->Add(this->RemoveButton);
			this->Controls->Add(this->ApplicationIDTextBox);
			this->Name = L"RemoveTeacher";
			this->Text = L"Remove Teacher";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void RemoveButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		String^ ApplicationID = ApplicationIDTextBox->Text;

		if (ApplicationID == "")
		{
			MessageBox::Show("Please enter the application ID.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		try
		{
			String^ connectionString = "Data Source=DESKTOP-MN4CFP4;Initial Catalog=TIMETABLEDB;Integrated Security=True";
			SqlConnection^ connection = gcnew SqlConnection(connectionString);
			connection->Open();
			String^ query = "DELETE FROM Teachers WHERE ApplicationID = @ApplicationID";
			SqlCommand^ command = gcnew SqlCommand(query, connection);
			command->Parameters->AddWithValue("@ApplicationID", ApplicationID);
			int rowsAffected = command->ExecuteNonQuery();
			if (rowsAffected > 0)
			{
				MessageBox::Show("Teacher removed successfully.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
				ApplicationIDTextBox->Text = "";
			}
			else
			{
				MessageBox::Show("Application ID not found.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}

			connection->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("An error occurred while removing the teacher: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: System::Void ClearButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		ApplicationIDTextBox->Clear();
	}
	private: System::Void CloseButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Close();
	}
	};
}
