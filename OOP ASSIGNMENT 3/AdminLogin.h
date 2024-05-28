#pragma once
#include "AdminDashboard.h"

namespace OOPASSIGNMENT2 
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AdminLogin
	/// </summary>
	public ref class AdminLogin : public System::Windows::Forms::Form
	{
	public:
		AdminLogin(void)
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
		~AdminLogin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ PasswordTextBox;
	protected:

	private: System::Windows::Forms::Label^ PasswordLabel;
	private: System::Windows::Forms::Label^ AdminLabel;
	protected:


	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ CloseButton;
	private: System::Windows::Forms::Button^ LoginButton;

	private: System::Windows::Forms::Button^ ClearButton;
	private: System::Windows::Forms::TextBox^ UserNameTextBox;

	private: System::Windows::Forms::Label^ UserNameLabel;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AdminLogin::typeid));
			this->PasswordTextBox = (gcnew System::Windows::Forms::TextBox());
			this->PasswordLabel = (gcnew System::Windows::Forms::Label());
			this->AdminLabel = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->CloseButton = (gcnew System::Windows::Forms::Button());
			this->LoginButton = (gcnew System::Windows::Forms::Button());
			this->ClearButton = (gcnew System::Windows::Forms::Button());
			this->UserNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->UserNameLabel = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// PasswordTextBox
			// 
			this->PasswordTextBox->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PasswordTextBox->Location = System::Drawing::Point(17, 412);
			this->PasswordTextBox->Name = L"PasswordTextBox";
			this->PasswordTextBox->PasswordChar = '*';
			this->PasswordTextBox->Size = System::Drawing::Size(452, 35);
			this->PasswordTextBox->TabIndex = 2;
			// 
			// PasswordLabel
			// 
			this->PasswordLabel->AutoSize = true;
			this->PasswordLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PasswordLabel->Location = System::Drawing::Point(12, 370);
			this->PasswordLabel->Name = L"PasswordLabel";
			this->PasswordLabel->Size = System::Drawing::Size(175, 27);
			this->PasswordLabel->TabIndex = 57;
			this->PasswordLabel->Text = L"Enter Password :";
			this->PasswordLabel->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// AdminLabel
			// 
			this->AdminLabel->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->AdminLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AdminLabel->Location = System::Drawing::Point(12, 220);
			this->AdminLabel->Name = L"AdminLabel";
			this->AdminLabel->Size = System::Drawing::Size(420, 28);
			this->AdminLabel->TabIndex = 56;
			this->AdminLabel->Text = L"Admin Login";
			this->AdminLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(73, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(314, 182);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 55;
			this->pictureBox1->TabStop = false;
			// 
			// CloseButton
			// 
			this->CloseButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->CloseButton->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CloseButton->Location = System::Drawing::Point(326, 464);
			this->CloseButton->Name = L"CloseButton";
			this->CloseButton->Size = System::Drawing::Size(143, 51);
			this->CloseButton->TabIndex = 5;
			this->CloseButton->Text = L"Close";
			this->CloseButton->UseVisualStyleBackColor = true;
			this->CloseButton->Click += gcnew System::EventHandler(this, &AdminLogin::CloseButton_Click);
			// 
			// LoginButton
			// 
			this->LoginButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->LoginButton->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LoginButton->Location = System::Drawing::Point(17, 464);
			this->LoginButton->Name = L"LoginButton";
			this->LoginButton->Size = System::Drawing::Size(135, 51);
			this->LoginButton->TabIndex = 3;
			this->LoginButton->Text = L"Login";
			this->LoginButton->UseVisualStyleBackColor = true;
			this->LoginButton->Click += gcnew System::EventHandler(this, &AdminLogin::LoginButton_Click);
			// 
			// ClearButton
			// 
			this->ClearButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->ClearButton->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ClearButton->Location = System::Drawing::Point(183, 464);
			this->ClearButton->Name = L"ClearButton";
			this->ClearButton->Size = System::Drawing::Size(126, 51);
			this->ClearButton->TabIndex = 4;
			this->ClearButton->Text = L"Clear";
			this->ClearButton->UseVisualStyleBackColor = true;
			this->ClearButton->Click += gcnew System::EventHandler(this, &AdminLogin::ClearButton_Click);
			// 
			// UserNameTextBox
			// 
			this->UserNameTextBox->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->UserNameTextBox->Location = System::Drawing::Point(17, 316);
			this->UserNameTextBox->Name = L"UserNameTextBox";
			this->UserNameTextBox->Size = System::Drawing::Size(452, 35);
			this->UserNameTextBox->TabIndex = 1;
			// 
			// UserNameLabel
			// 
			this->UserNameLabel->AutoSize = true;
			this->UserNameLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->UserNameLabel->Location = System::Drawing::Point(12, 276);
			this->UserNameLabel->Name = L"UserNameLabel";
			this->UserNameLabel->Size = System::Drawing::Size(184, 27);
			this->UserNameLabel->TabIndex = 51;
			this->UserNameLabel->Text = L"Enter UserName :";
			this->UserNameLabel->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// AdminLogin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(499, 543);
			this->Controls->Add(this->PasswordTextBox);
			this->Controls->Add(this->PasswordLabel);
			this->Controls->Add(this->AdminLabel);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->CloseButton);
			this->Controls->Add(this->LoginButton);
			this->Controls->Add(this->ClearButton);
			this->Controls->Add(this->UserNameTextBox);
			this->Controls->Add(this->UserNameLabel);
			this->Name = L"AdminLogin";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"AdminLogin";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		void ClearTextBoxes()
		{
			UserNameTextBox->Clear();
			PasswordTextBox->Clear();
		}
	private: System::Void CloseButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Close();
	}
	private: System::Void LoginButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		String^ UserName = UserNameTextBox->Text;
		String^ Password = PasswordTextBox->Text;

		if (UserName == "Mudassir" && Password == "admin123")
		{
			MessageBox::Show("Login Successful", "Welcome Mr. " + UserName, MessageBoxButtons::OK, MessageBoxIcon::Information);
			this->Close();
			AdminDashboard^ adminDashboard = gcnew AdminDashboard();
			adminDashboard->ShowDialog();
			this->Show();
		}
		else
		{
			MessageBox::Show("Login Failed", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void ClearButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		ClearTextBoxes();
	}
	};
}
