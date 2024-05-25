
#include "StudentTimeTable.h"

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

	/// <summary>
	/// Summary for loginstudent
	/// </summary>
	public ref class StudentLogin : public System::Windows::Forms::Form
	{
	public:
		StudentLogin(void)
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
		~StudentLogin()
		{
			if (components)
			{
				delete components;
			}
		}
	protected:
	private: System::Windows::Forms::Label^ HeaderLabel;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ CloseButton;
	private: System::Windows::Forms::Button^ ViewButton;
	private: System::Windows::Forms::Button^ ClearButton;
	private: System::Windows::Forms::TextBox^ EnrollmentIDTEXTFIELD;
	private: System::Windows::Forms::Label^ EnrollmentIDLABEL;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(StudentLogin::typeid));
			this->HeaderLabel = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->CloseButton = (gcnew System::Windows::Forms::Button());
			this->ViewButton = (gcnew System::Windows::Forms::Button());
			this->ClearButton = (gcnew System::Windows::Forms::Button());
			this->EnrollmentIDTEXTFIELD = (gcnew System::Windows::Forms::TextBox());
			this->EnrollmentIDLABEL = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// HeaderLabel
			// 
			this->HeaderLabel->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->HeaderLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->HeaderLabel->Location = System::Drawing::Point(124, 222);
			this->HeaderLabel->Name = L"HeaderLabel";
			this->HeaderLabel->Size = System::Drawing::Size(420, 28);
			this->HeaderLabel->TabIndex = 40;
			this->HeaderLabel->Text = L"      Time-table Managemnet System";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(173, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(314, 182);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 39;
			this->pictureBox1->TabStop = false;
			// 
			// CloseButton
			// 
			this->CloseButton->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CloseButton->Location = System::Drawing::Point(439, 426);
			this->CloseButton->Name = L"CloseButton";
			this->CloseButton->Size = System::Drawing::Size(173, 58);
			this->CloseButton->TabIndex = 38;
			this->CloseButton->Text = L"Close";
			this->CloseButton->UseVisualStyleBackColor = true;
			this->CloseButton->Click += gcnew System::EventHandler(this, &StudentLogin::CloseButton_Click);
			// 
			// ViewButton
			// 
			this->ViewButton->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ViewButton->Location = System::Drawing::Point(12, 426);
			this->ViewButton->Name = L"ViewButton";
			this->ViewButton->Size = System::Drawing::Size(176, 58);
			this->ViewButton->TabIndex = 34;
			this->ViewButton->Text = L"View";
			this->ViewButton->UseVisualStyleBackColor = true;
			this->ViewButton->Click += gcnew System::EventHandler(this, &StudentLogin::ViewButton_Click);
			// 
			// ClearButton
			// 
			this->ClearButton->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ClearButton->Location = System::Drawing::Point(229, 426);
			this->ClearButton->Name = L"ClearButton";
			this->ClearButton->Size = System::Drawing::Size(181, 58);
			this->ClearButton->TabIndex = 36;
			this->ClearButton->Text = L"Clear";
			this->ClearButton->UseVisualStyleBackColor = true;
			this->ClearButton->Click += gcnew System::EventHandler(this, &StudentLogin::ClearButton_Click);
			// 
			// EnrollmentIDTEXTFIELD
			// 
			this->EnrollmentIDTEXTFIELD->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EnrollmentIDTEXTFIELD->Location = System::Drawing::Point(7, 330);
			this->EnrollmentIDTEXTFIELD->Name = L"EnrollmentIDTEXTFIELD";
			this->EnrollmentIDTEXTFIELD->Size = System::Drawing::Size(605, 35);
			this->EnrollmentIDTEXTFIELD->TabIndex = 37;
			// 
			// EnrollmentIDLABEL
			// 
			this->EnrollmentIDLABEL->AutoSize = true;
			this->EnrollmentIDLABEL->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EnrollmentIDLABEL->Location = System::Drawing::Point(2, 287);
			this->EnrollmentIDLABEL->Name = L"EnrollmentIDLABEL";
			this->EnrollmentIDLABEL->Size = System::Drawing::Size(162, 27);
			this->EnrollmentIDLABEL->TabIndex = 35;
			this->EnrollmentIDLABEL->Text = L"Enrollment ID :";
			this->EnrollmentIDLABEL->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// StudentLogin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(629, 502);
			this->Controls->Add(this->HeaderLabel);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->CloseButton);
			this->Controls->Add(this->ViewButton);
			this->Controls->Add(this->ClearButton);
			this->Controls->Add(this->EnrollmentIDTEXTFIELD);
			this->Controls->Add(this->EnrollmentIDLABEL);
			this->Name = L"StudentLogin";
			this->Text = L"loginstudent";
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
		String^ enrollmentID = EnrollmentIDTEXTFIELD->Text->Trim();

		String^ connectionString = "Server=DESKTOP-MN4CFP4;Database=TIMETABLEDB;Integrated Security=True;";
		String^ query = "SELECT Name, SectionID FROM Students WHERE EnrollmentID = @enrollmentID";

		try
		{
			SqlConnection^ connection = gcnew SqlConnection(connectionString);
			SqlCommand^ command = gcnew SqlCommand(query, connection);
			command->Parameters->AddWithValue("@enrollmentID", enrollmentID);

			connection->Open();

			SqlDataReader^ reader = command->ExecuteReader();

			if (reader->Read())
			{
				String^ studentName = reader["Name"]->ToString();
				String^ section = reader["SectionID"]->ToString();

				reader->Close();
				connection->Close();

				this->Hide();
				StudentTimeTable^ timetableForm = gcnew StudentTimeTable(section, studentName, enrollmentID);
				timetableForm->Show();
			}
			else
			{
				reader->Close();
				connection->Close();
				MessageBox::Show("Enrollment ID not found!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("An error occurred while fetching student information: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
		   void ClearTextBoxes()
		   {
			   EnrollmentIDTEXTFIELD->Text = "";
		   }

	private: System::Void ClearButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		ClearTextBoxes();
	}
	};
}
