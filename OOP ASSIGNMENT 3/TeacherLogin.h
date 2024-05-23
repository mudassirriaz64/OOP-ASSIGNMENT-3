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
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ ok;
	private: System::Windows::Forms::Button^ reset;
	private: System::Windows::Forms::TextBox^ name;
	private: System::Windows::Forms::Label^ label1;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->ok = (gcnew System::Windows::Forms::Button());
			this->reset = (gcnew System::Windows::Forms::Button());
			this->name = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(112, 199);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->textBox1->Size = System::Drawing::Size(420, 28);
			this->textBox1->TabIndex = 33;
			this->textBox1->Text = L"      Time-table Managemnet System";
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
			this->pictureBox1->Click += gcnew System::EventHandler(this, &TeacherLogin::pictureBox1_Click);
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(455, 413);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(196, 58);
			this->button1->TabIndex = 31;
			this->button1->Text = L"Back";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &TeacherLogin::button1_Click);
			// 
			// ok
			// 
			this->ok->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->ok->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ok->Location = System::Drawing::Point(3, 414);
			this->ok->Name = L"ok";
			this->ok->Size = System::Drawing::Size(206, 58);
			this->ok->TabIndex = 27;
			this->ok->Text = L"Login";
			this->ok->UseVisualStyleBackColor = true;
			this->ok->Click += gcnew System::EventHandler(this, &TeacherLogin::ok_Click);
			// 
			// reset
			// 
			this->reset->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->reset->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->reset->Location = System::Drawing::Point(228, 414);
			this->reset->Name = L"reset";
			this->reset->Size = System::Drawing::Size(208, 58);
			this->reset->TabIndex = 29;
			this->reset->Text = L"Reset";
			this->reset->UseVisualStyleBackColor = true;
			this->reset->Click += gcnew System::EventHandler(this, &TeacherLogin::reset_Click);
			// 
			// name
			// 
			this->name->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->name->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->name->Location = System::Drawing::Point(3, 295);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(648, 35);
			this->name->TabIndex = 30;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(-2, 257);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(167, 27);
			this->label1->TabIndex = 28;
			this->label1->Text = L"Application ID :";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// TeacherLogin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(648, 475);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->ok);
			this->Controls->Add(this->reset);
			this->Controls->Add(this->name);
			this->Controls->Add(this->label1);
			this->Name = L"TeacherLogin";
			this->Text = L"Teacher";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion


	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Application::Exit();
		
	}

	private: System::Void ok_Click(System::Object^ sender, System::EventArgs^ e)
	{
		// Read the application ID provided by the user
		String^ appId = name->Text->Trim();

		// Check if the application ID is empty
		if (String::IsNullOrEmpty(appId))
		{
			MessageBox::Show("Please enter an application ID.");
			return;
		}

		// Define the connection string (adjust it to your database settings)
		String^ connectionString = "Data Source=DESKTOP-MN4CFP4;Initial Catalog=TIMETABLEDB;Integrated Security=True";

		// Define the query to check for the application ID
		String^ query = "SELECT Name FROM Teachers WHERE ApplicationID = @ApplicationID";

		// Create a connection and command
		SqlConnection^ connection = gcnew SqlConnection(connectionString);
		SqlCommand^ command = gcnew SqlCommand(query, connection);
		command->Parameters->AddWithValue("@ApplicationID", appId);

		try
		{
			// Open the connection
			connection->Open();

			// Execute the query
			SqlDataReader^ reader = command->ExecuteReader();

			// Check if the application ID was found
			if (reader->Read())
			{
				String^ teacherName = reader["Name"]->ToString();

				// If found, hide the current form and open the new form
				this->Hide();
				TeacherTimeTableForm^ form = gcnew TeacherTimeTableForm(teacherName, appId);
				form->Show();
			}
			else
			{
				// If the application ID was not found, display an error message
				MessageBox::Show("Invalid application ID.");
			}

			// Close the reader and connection
			reader->Close();
			connection->Close();
		}
		catch (Exception^ ex)
		{
			// Handle any errors that occurred during the connection or query
			MessageBox::Show("Error: " + ex->Message);
		}
	}


		   // Event handler for Reset button click
		private: System::Void reset_Click(System::Object^ sender, System::EventArgs^ e) {
			name->Text = "";
		}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
