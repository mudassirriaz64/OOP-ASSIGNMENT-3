#pragma once
#include "SectionTimeTable.h"


namespace OOPASSIGNMENT2
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Data::SqlClient;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Section
	/// </summary>
	public ref class SectionLogin : public System::Windows::Forms::Form
	{
	public:
		SectionLogin(void)
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
		~SectionLogin()
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SectionLogin::typeid));
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
			this->textBox1->Location = System::Drawing::Point(103, 220);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->textBox1->Size = System::Drawing::Size(420, 28);
			this->textBox1->TabIndex = 40;
			this->textBox1->Text = L"      Time-table Managemnet System";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(161, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(314, 182);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 39;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &SectionLogin::pictureBox1_Click);
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(465, 419);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(186, 51);
			this->button1->TabIndex = 38;
			this->button1->Text = L"Exit";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &SectionLogin::button1_Click);
			// 
			// ok
			// 
			this->ok->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->ok->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ok->Location = System::Drawing::Point(4, 419);
			this->ok->Name = L"ok";
			this->ok->Size = System::Drawing::Size(203, 51);
			this->ok->TabIndex = 34;
			this->ok->Text = L"Login";
			this->ok->UseVisualStyleBackColor = true;
			this->ok->Click += gcnew System::EventHandler(this, &SectionLogin::ok_Click);
			// 
			// reset
			// 
			this->reset->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->reset->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->reset->Location = System::Drawing::Point(236, 419);
			this->reset->Name = L"reset";
			this->reset->Size = System::Drawing::Size(199, 51);
			this->reset->TabIndex = 36;
			this->reset->Text = L"Reset";
			this->reset->UseVisualStyleBackColor = true;
			this->reset->Click += gcnew System::EventHandler(this, &SectionLogin::reset_Click);
			// 
			// name
			// 
			this->name->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->name->Location = System::Drawing::Point(8, 320);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(643, 35);
			this->name->TabIndex = 37;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(3, 273);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(402, 27);
			this->label1->TabIndex = 35;
			this->label1->Text = L"Enter Section (2-A, 2-B, 4-A, 6-A, 8-A):";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// SectionLogin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(663, 485);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->ok);
			this->Controls->Add(this->reset);
			this->Controls->Add(this->name);
			this->Controls->Add(this->label1);
			this->Name = L"SectionLogin";
			this->Text = L"Section";
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
		String^ sectionID = name->Text;
		if (CheckSectionExistsInDatabase(sectionID))
		{
			this->Hide();
			SectionTimeTable^ sectionTimeTable = gcnew SectionTimeTable(sectionID);
			sectionTimeTable->Show();
		}
		else 
		{
			MessageBox::Show("Section Not Found.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
		   private: bool CheckSectionExistsInDatabase(String^ sectionID)
		   {
			   bool sectionExists = false;
			   String^ connectionString = "Data Source=DESKTOP-MN4CFP4;Initial Catalog=TIMETABLEDB;Integrated Security=True";
			   SqlConnection^ con = gcnew SqlConnection(connectionString);

			   try {
				   con->Open();
				   String^ query = "SELECT COUNT(*) FROM Sections WHERE SectionID = @SectionID";
				   SqlCommand^ cmd = gcnew SqlCommand(query, con);
				   cmd->Parameters->AddWithValue("@SectionID", sectionID);
				   int count = (int)cmd->ExecuteScalar();
				   sectionExists = (count > 0);
				   con->Close();
			   }
			   catch (Exception^ ex) {
				   MessageBox::Show("An error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				   if (con->State == ConnectionState::Open) {
					   con->Close();
				   }
			   }
			   return sectionExists;
		   }


	private: System::Void reset_Click(System::Object^ sender, System::EventArgs^ e) {
		name->Text = "";
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
