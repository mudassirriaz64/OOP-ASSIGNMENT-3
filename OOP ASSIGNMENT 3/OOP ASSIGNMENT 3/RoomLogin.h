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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(RoomLogin::typeid));
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
			this->textBox1->Location = System::Drawing::Point(111, 211);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->textBox1->Size = System::Drawing::Size(420, 28);
			this->textBox1->TabIndex = 47;
			this->textBox1->Text = L"      Time-table Managemnet System";
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
			this->button1->Location = System::Drawing::Point(448, 405);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(186, 51);
			this->button1->TabIndex = 45;
			this->button1->Text = L"Exit";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &RoomLogin::button1_Click);
			// 
			// ok
			// 
			this->ok->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->ok->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ok->Location = System::Drawing::Point(12, 405);
			this->ok->Name = L"ok";
			this->ok->Size = System::Drawing::Size(182, 51);
			this->ok->TabIndex = 41;
			this->ok->Text = L"Login";
			this->ok->UseVisualStyleBackColor = true;
			this->ok->Click += gcnew System::EventHandler(this, &RoomLogin::ok_Click);
			// 
			// reset
			// 
			this->reset->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->reset->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->reset->Location = System::Drawing::Point(215, 405);
			this->reset->Name = L"reset";
			this->reset->Size = System::Drawing::Size(199, 51);
			this->reset->TabIndex = 43;
			this->reset->Text = L"Reset";
			this->reset->UseVisualStyleBackColor = true;
			this->reset->Click += gcnew System::EventHandler(this, &RoomLogin::reset_Click);
			// 
			// name
			// 
			this->name->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->name->Location = System::Drawing::Point(2, 304);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(643, 35);
			this->name->TabIndex = 44;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(-3, 265);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(325, 27);
			this->label1->TabIndex = 42;
			this->label1->Text = L"Enter Room ( 4-17, 4-18, 4-19 ):";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// RoomLogin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(659, 468);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->ok);
			this->Controls->Add(this->reset);
			this->Controls->Add(this->name);
			this->Controls->Add(this->label1);
			this->Name = L"RoomLogin";
			this->Text = L"Room";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}

	private: System::Void ok_Click(System::Object^ sender, System::EventArgs^ e)
	{
		// Retrieve the entered room number
		String^ room = name->Text;

		// Check room validity from the database
		if (IsRoomValid(room))
		{
			// Hide the login form
			this->Hide();

			// Open the RoomTimeTable form
			RoomTimeTable^ timetable = gcnew RoomTimeTable(room);
			timetable->Show();
		}
		else
		{
			MessageBox::Show("Invalid room number!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
		   bool IsRoomValid(String^ room)
		   {
			   // Connection string to your database
			   String^ connectionString = "Data Source = DESKTOP-MN4CFP4; Initial Catalog = TIMETABLEDB;Integrated Security = True";

			   // SQL query to check if the room exists in the database
			   String^ query = "SELECT COUNT(*) FROM Rooms WHERE RoomID = @RoomID";

			   // Use SqlConnection and SqlCommand to execute the query
			   SqlConnection^ connection = gcnew SqlConnection(connectionString);
			   SqlCommand^ command = gcnew SqlCommand(query, connection);

			   // Add parameters to the query
			   command->Parameters->AddWithValue("@RoomID", room);

			   try
			   {
				   connection->Open();
				   int count = safe_cast<int>(command->ExecuteScalar());
				   return (count > 0); // If count is greater than 0, room exists
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
	private: System::Void reset_Click(System::Object^ sender, System::EventArgs^ e) {
		name->Text = "";
	}
	};
}
