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
	private: System::Windows::Forms::Label^ TimeTableLabel;
	protected:

	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ CloseButton;

	private: System::Windows::Forms::Button^ ViewButton;
	private: System::Windows::Forms::Button^ ClearButton;


	private: System::Windows::Forms::TextBox^ SectionIDTEXTFIELD;
	private: System::Windows::Forms::Label^ SectionIDLabel;



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
			this->TimeTableLabel = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->CloseButton = (gcnew System::Windows::Forms::Button());
			this->ViewButton = (gcnew System::Windows::Forms::Button());
			this->ClearButton = (gcnew System::Windows::Forms::Button());
			this->SectionIDTEXTFIELD = (gcnew System::Windows::Forms::TextBox());
			this->SectionIDLabel = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// TimeTableLabel
			// 
			this->TimeTableLabel->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->TimeTableLabel->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TimeTableLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TimeTableLabel->Location = System::Drawing::Point(103, 220);
			this->TimeTableLabel->Name = L"TimeTableLabel";
			this->TimeTableLabel->Size = System::Drawing::Size(420, 28);
			this->TimeTableLabel->TabIndex = 40;
			this->TimeTableLabel->Text = L"      Time-table Management System";
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
			// 
			// CloseButton
			// 
			this->CloseButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->CloseButton->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CloseButton->Location = System::Drawing::Point(465, 419);
			this->CloseButton->Name = L"CloseButton";
			this->CloseButton->Size = System::Drawing::Size(186, 51);
			this->CloseButton->TabIndex = 38;
			this->CloseButton->Text = L"Close";
			this->CloseButton->UseVisualStyleBackColor = true;
			this->CloseButton->Click += gcnew System::EventHandler(this, &SectionLogin::CloseButton_Click);
			// 
			// ViewButton
			// 
			this->ViewButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->ViewButton->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ViewButton->Location = System::Drawing::Point(4, 419);
			this->ViewButton->Name = L"ViewButton";
			this->ViewButton->Size = System::Drawing::Size(203, 51);
			this->ViewButton->TabIndex = 34;
			this->ViewButton->Text = L"View";
			this->ViewButton->UseVisualStyleBackColor = true;
			this->ViewButton->Click += gcnew System::EventHandler(this, &SectionLogin::ViewButton_Click);
			// 
			// ClearButton
			// 
			this->ClearButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->ClearButton->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ClearButton->Location = System::Drawing::Point(236, 419);
			this->ClearButton->Name = L"ClearButton";
			this->ClearButton->Size = System::Drawing::Size(199, 51);
			this->ClearButton->TabIndex = 36;
			this->ClearButton->Text = L"Clear";
			this->ClearButton->UseVisualStyleBackColor = true;
			this->ClearButton->Click += gcnew System::EventHandler(this, &SectionLogin::ClearButton_Click);
			// 
			// SectionIDTEXTFIELD
			// 
			this->SectionIDTEXTFIELD->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SectionIDTEXTFIELD->Location = System::Drawing::Point(8, 320);
			this->SectionIDTEXTFIELD->Name = L"SectionIDTEXTFIELD";
			this->SectionIDTEXTFIELD->Size = System::Drawing::Size(643, 35);
			this->SectionIDTEXTFIELD->TabIndex = 37;
			// 
			// SectionIDLabel
			// 
			this->SectionIDLabel->AutoSize = true;
			this->SectionIDLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SectionIDLabel->Location = System::Drawing::Point(3, 273);
			this->SectionIDLabel->Name = L"SectionIDLabel";
			this->SectionIDLabel->Size = System::Drawing::Size(402, 27);
			this->SectionIDLabel->TabIndex = 35;
			this->SectionIDLabel->Text = L"Enter Section (2-A, 2-B, 4-A, 6-A, 8-A):";
			this->SectionIDLabel->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// SectionLogin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(663, 485);
			this->Controls->Add(this->TimeTableLabel);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->CloseButton);
			this->Controls->Add(this->ViewButton);
			this->Controls->Add(this->ClearButton);
			this->Controls->Add(this->SectionIDTEXTFIELD);
			this->Controls->Add(this->SectionIDLabel);
			this->Name = L"SectionLogin";
			this->Text = L"Section Login";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}


#pragma endregion
	private: System::Void CloseButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Hide();
	}

	private: System::Void ViewButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		String^ sectionID = SectionIDTEXTFIELD->Text;
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

		   void ClearTextBoxes()
		   {
			   SectionIDTEXTFIELD->Text = "";
		   }


	private: System::Void ClearButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		ClearTextBoxes();
	}
	};
}
