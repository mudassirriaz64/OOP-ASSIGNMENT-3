#pragma once
#include"RoomTimeTable.h"
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
	/// Summary for Room
	/// </summary>
	public ref class RoomLogin : public System::Windows::Forms::Form
	{
	public:
		RoomLogin(void)
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
		~RoomLogin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ TimeTableLabel;
	protected:

	protected:

	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ CloseButton;


	private: System::Windows::Forms::Button^ ViewButton;
	private: System::Windows::Forms::Button^ ClearButton;


	private: System::Windows::Forms::TextBox^ RoomIDTEXTFIELD;

	private: System::Windows::Forms::Label^ RoomIDLABEL;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(RoomLogin::typeid));
			this->TimeTableLabel = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->CloseButton = (gcnew System::Windows::Forms::Button());
			this->ViewButton = (gcnew System::Windows::Forms::Button());
			this->ClearButton = (gcnew System::Windows::Forms::Button());
			this->RoomIDTEXTFIELD = (gcnew System::Windows::Forms::TextBox());
			this->RoomIDLABEL = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// TimeTableLabel
			// 
			this->TimeTableLabel->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->TimeTableLabel->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TimeTableLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TimeTableLabel->Location = System::Drawing::Point(111, 211);
			this->TimeTableLabel->Name = L"TimeTableLabel";
			this->TimeTableLabel->Size = System::Drawing::Size(420, 28);
			this->TimeTableLabel->TabIndex = 47;
			this->TimeTableLabel->Text = L"      Time-table Management System";
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
			this->CloseButton->Location = System::Drawing::Point(448, 405);
			this->CloseButton->Name = L"CloseButton";
			this->CloseButton->Size = System::Drawing::Size(186, 51);
			this->CloseButton->TabIndex = 45;
			this->CloseButton->Text = L"Close";
			this->CloseButton->UseVisualStyleBackColor = true;
			this->CloseButton->Click += gcnew System::EventHandler(this, &RoomLogin::CloseButton_Click);
			// 
			// ViewButton
			// 
			this->ViewButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->ViewButton->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ViewButton->Location = System::Drawing::Point(12, 405);
			this->ViewButton->Name = L"ViewButton";
			this->ViewButton->Size = System::Drawing::Size(182, 51);
			this->ViewButton->TabIndex = 41;
			this->ViewButton->Text = L"View";
			this->ViewButton->UseVisualStyleBackColor = true;
			this->ViewButton->Click += gcnew System::EventHandler(this, &RoomLogin::ViewButton_Click);
			// 
			// ClearButton
			// 
			this->ClearButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->ClearButton->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ClearButton->Location = System::Drawing::Point(215, 405);
			this->ClearButton->Name = L"ClearButton";
			this->ClearButton->Size = System::Drawing::Size(199, 51);
			this->ClearButton->TabIndex = 43;
			this->ClearButton->Text = L"Clear";
			this->ClearButton->UseVisualStyleBackColor = true;
			this->ClearButton->Click += gcnew System::EventHandler(this, &RoomLogin::ClearButton_Click);
			// 
			// RoomIDTEXTFIELD
			// 
			this->RoomIDTEXTFIELD->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RoomIDTEXTFIELD->Location = System::Drawing::Point(2, 304);
			this->RoomIDTEXTFIELD->Name = L"RoomIDTEXTFIELD";
			this->RoomIDTEXTFIELD->Size = System::Drawing::Size(643, 35);
			this->RoomIDTEXTFIELD->TabIndex = 44;
			// 
			// RoomIDLABEL
			// 
			this->RoomIDLABEL->AutoSize = true;
			this->RoomIDLABEL->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RoomIDLABEL->Location = System::Drawing::Point(-3, 265);
			this->RoomIDLABEL->Name = L"RoomIDLABEL";
			this->RoomIDLABEL->Size = System::Drawing::Size(325, 27);
			this->RoomIDLABEL->TabIndex = 42;
			this->RoomIDLABEL->Text = L"Enter Room ( 4-17, 4-18, 4-19 ):";
			this->RoomIDLABEL->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// RoomLogin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(659, 468);
			this->Controls->Add(this->TimeTableLabel);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->CloseButton);
			this->Controls->Add(this->ViewButton);
			this->Controls->Add(this->ClearButton);
			this->Controls->Add(this->RoomIDTEXTFIELD);
			this->Controls->Add(this->RoomIDLABEL);
			this->Name = L"RoomLogin";
			this->Text = L"Room Login";
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
		String^ RoomID = RoomIDTEXTFIELD->Text;

		if (IsRoomValid(RoomID))
		{
			this->Hide();
			RoomTimeTable^ timetable = gcnew RoomTimeTable(RoomID);
			timetable->Show();
		}
		else
		{
			MessageBox::Show("Invalid room number!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
		   bool IsRoomValid(String^ RoomID)
		   {
			   String^ connectionString = "Data Source = DESKTOP-MN4CFP4; Initial Catalog = TIMETABLEDB;Integrated Security = True";

			   String^ query = "SELECT COUNT(*) FROM Rooms WHERE RoomID = @RoomID";

			   SqlConnection^ connection = gcnew SqlConnection(connectionString);
			   SqlCommand^ command = gcnew SqlCommand(query, connection);

			   command->Parameters->AddWithValue("@RoomID", RoomID);

			   try
			   {
				   connection->Open();
				   int count = safe_cast<int>(command->ExecuteScalar());
				   return (count > 0);
			   }
			   catch (Exception^ ex)
			   {
				   MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				   return false;
			   }
			   finally
			   {
				   connection->Close();
			   }
		   }

		   void ClearTextBoxes()
		   {
			   RoomIDTEXTFIELD->Text = "";
		   }
	private: System::Void ClearButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		ClearTextBoxes();
	}
	};
}
