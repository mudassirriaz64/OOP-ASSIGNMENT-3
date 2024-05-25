#pragma once

#include "TeacherTimeTableForm.h"
#include<fstream>

using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;


namespace OOPASSIGNMENT2
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Windows::Forms;

	/// <summary>
	/// Summary for Teacher
	/// </summary>
	/// 


	public ref class TeacherLogin : public System::Windows::Forms::Form
	{
	public:
		TeacherLogin(void)
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
		~TeacherLogin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ HeaderLabel;
	protected:

	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ CloseButton;

	private: System::Windows::Forms::Button^ ViewButton;
	private: System::Windows::Forms::Button^ ClearButton;
	private: System::Windows::Forms::TextBox^ ApplicationIDTEXTFIELD;



	private: System::Windows::Forms::Label^ ApplicationIDLABEL;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(TeacherLogin::typeid));
			this->HeaderLabel = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->CloseButton = (gcnew System::Windows::Forms::Button());
			this->ViewButton = (gcnew System::Windows::Forms::Button());
			this->ClearButton = (gcnew System::Windows::Forms::Button());
			this->ApplicationIDTEXTFIELD = (gcnew System::Windows::Forms::TextBox());
			this->ApplicationIDLABEL = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// HeaderLabel
			// 
			this->HeaderLabel->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->HeaderLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->HeaderLabel->Location = System::Drawing::Point(112, 199);
			this->HeaderLabel->Name = L"HeaderLabel";
			this->HeaderLabel->Size = System::Drawing::Size(420, 28);
			this->HeaderLabel->TabIndex = 33;
			this->HeaderLabel->Text = L"      Time-table Managemnet System";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(168, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(314, 182);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 32;
			this->pictureBox1->TabStop = false;
			// 
			// CloseButton
			// 
			this->CloseButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->CloseButton->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CloseButton->Location = System::Drawing::Point(455, 375);
			this->CloseButton->Name = L"CloseButton";
			this->CloseButton->Size = System::Drawing::Size(177, 58);
			this->CloseButton->TabIndex = 31;
			this->CloseButton->Text = L"Close";
			this->CloseButton->UseVisualStyleBackColor = true;
			this->CloseButton->Click += gcnew System::EventHandler(this, &TeacherLogin::CloseButton_Click);
			// 
			// ViewButton
			// 
			this->ViewButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->ViewButton->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ViewButton->Location = System::Drawing::Point(3, 376);
			this->ViewButton->Name = L"ViewButton";
			this->ViewButton->Size = System::Drawing::Size(187, 58);
			this->ViewButton->TabIndex = 27;
			this->ViewButton->Text = L"View";
			this->ViewButton->UseVisualStyleBackColor = true;
			this->ViewButton->Click += gcnew System::EventHandler(this, &TeacherLogin::ViewButton_Click);
			// 
			// ClearButton
			// 
			this->ClearButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->ClearButton->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ClearButton->Location = System::Drawing::Point(228, 376);
			this->ClearButton->Name = L"ClearButton";
			this->ClearButton->Size = System::Drawing::Size(189, 58);
			this->ClearButton->TabIndex = 29;
			this->ClearButton->Text = L"Clear";
			this->ClearButton->UseVisualStyleBackColor = true;
			this->ClearButton->Click += gcnew System::EventHandler(this, &TeacherLogin::ClearButton_Click);
			// 
			// ApplicationIDTEXTFIELD
			// 
			this->ApplicationIDTEXTFIELD->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->ApplicationIDTEXTFIELD->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ApplicationIDTEXTFIELD->Location = System::Drawing::Point(3, 295);
			this->ApplicationIDTEXTFIELD->Name = L"ApplicationIDTEXTFIELD";
			this->ApplicationIDTEXTFIELD->Size = System::Drawing::Size(629, 35);
			this->ApplicationIDTEXTFIELD->TabIndex = 30;
			// 
			// ApplicationIDLABEL
			// 
			this->ApplicationIDLABEL->AutoSize = true;
			this->ApplicationIDLABEL->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ApplicationIDLABEL->Location = System::Drawing::Point(-2, 257);
			this->ApplicationIDLABEL->Name = L"ApplicationIDLABEL";
			this->ApplicationIDLABEL->Size = System::Drawing::Size(167, 27);
			this->ApplicationIDLABEL->TabIndex = 28;
			this->ApplicationIDLABEL->Text = L"Application ID :";
			this->ApplicationIDLABEL->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// TeacherLogin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(629, 437);
			this->Controls->Add(this->HeaderLabel);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->CloseButton);
			this->Controls->Add(this->ViewButton);
			this->Controls->Add(this->ClearButton);
			this->Controls->Add(this->ApplicationIDTEXTFIELD);
			this->Controls->Add(this->ApplicationIDLABEL);
			this->Name = L"TeacherLogin";
			this->Text = L"Teacher Login";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion


	private: System::Void CloseButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Application::Exit();

	}

	private: System::Void ViewButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		String^ appId = ApplicationIDTEXTFIELD->Text->Trim();

		if (String::IsNullOrEmpty(appId))
		{
			MessageBox::Show("Please Enter AN application ID.");
			return;
		}

		String^ connectionString = "Data Source=DESKTOP-MN4CFP4;Initial Catalog=TIMETABLEDB;Integrated Security=True";

		String^ query = "SELECT Name FROM Teachers WHERE ApplicationID = @ApplicationID";

		SqlConnection^ connection = gcnew SqlConnection(connectionString);
		SqlCommand^ command = gcnew SqlCommand(query, connection);
		command->Parameters->AddWithValue("@ApplicationID", appId);

		try
		{
			connection->Open();
			SqlDataReader^ reader = command->ExecuteReader();

			if (reader->Read())
			{
				String^ teacherName = reader["Name"]->ToString();
				this->Hide();
				TeacherTimeTableForm^ form = gcnew TeacherTimeTableForm(teacherName, appId);
				form->Show();
			}
			else
			{
				MessageBox::Show("Application ID Not Found.");
			}
			reader->Close();
			connection->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Error: " + ex->Message);
		}
	}
		   void ClearTextBoxes()
		   {
			   ApplicationIDTEXTFIELD->Text = "";
		   }
	private: System::Void ClearButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		ClearTextBoxes();
	}
	};
}
