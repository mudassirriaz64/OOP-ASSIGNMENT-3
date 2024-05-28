#pragma once
#include "TeacherLogin.h"
#include "StudentLogin.h"
#include "SectionLogin.h"
#include "RoomLogin.h"
#include "SearchTimeSlot.h"
#include "AdminLogin.h"

#pragma once

namespace OOPASSIGNMENT2
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for mainform
	/// </summary>
	public ref class MainMenuForm : public System::Windows::Forms::Form
	{
	public:
		MainMenuForm(void)
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
		~MainMenuForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ TimeTableLabel;


	protected:

	protected:




	private: System::Windows::Forms::Button^ RoomTimeTableButton;

	private: System::Windows::Forms::Button^ SectionTimeTableButton;
	private: System::Windows::Forms::Button^ StudentTimeTableButton;



	private: System::Windows::Forms::Button^ TeacherTimeTableButton;

	private: System::Windows::Forms::PictureBox^ pictureBox1;




	private: System::Windows::Forms::Button^ ExitButton;


	private: System::Windows::Forms::Button^ SearchTimeSlotButton;
	private: System::Windows::Forms::Button^ AdminLoginButton;







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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainMenuForm::typeid));
			this->TimeTableLabel = (gcnew System::Windows::Forms::Label());
			this->RoomTimeTableButton = (gcnew System::Windows::Forms::Button());
			this->SectionTimeTableButton = (gcnew System::Windows::Forms::Button());
			this->StudentTimeTableButton = (gcnew System::Windows::Forms::Button());
			this->TeacherTimeTableButton = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->ExitButton = (gcnew System::Windows::Forms::Button());
			this->SearchTimeSlotButton = (gcnew System::Windows::Forms::Button());
			this->AdminLoginButton = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// TimeTableLabel
			// 
			this->TimeTableLabel->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->TimeTableLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TimeTableLabel->Location = System::Drawing::Point(189, 246);
			this->TimeTableLabel->Name = L"TimeTableLabel";
			this->TimeTableLabel->Size = System::Drawing::Size(420, 28);
			this->TimeTableLabel->TabIndex = 31;
			this->TimeTableLabel->Text = L"      Time-table Management System";
			// 
			// RoomTimeTableButton
			// 
			this->RoomTimeTableButton->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RoomTimeTableButton->Location = System::Drawing::Point(417, 394);
			this->RoomTimeTableButton->Name = L"RoomTimeTableButton";
			this->RoomTimeTableButton->Size = System::Drawing::Size(308, 39);
			this->RoomTimeTableButton->TabIndex = 5;
			this->RoomTimeTableButton->Text = L"Room Wise Time-table";
			this->RoomTimeTableButton->UseVisualStyleBackColor = true;
			this->RoomTimeTableButton->Click += gcnew System::EventHandler(this, &MainMenuForm::RoomTimeTableButton_Click);
			// 
			// SectionTimeTableButton
			// 
			this->SectionTimeTableButton->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SectionTimeTableButton->Location = System::Drawing::Point(47, 394);
			this->SectionTimeTableButton->Name = L"SectionTimeTableButton";
			this->SectionTimeTableButton->Size = System::Drawing::Size(308, 39);
			this->SectionTimeTableButton->TabIndex = 4;
			this->SectionTimeTableButton->Text = L"Section Wise Time-table";
			this->SectionTimeTableButton->UseVisualStyleBackColor = true;
			this->SectionTimeTableButton->Click += gcnew System::EventHandler(this, &MainMenuForm::SectionTimeTableButton_Click);
			// 
			// StudentTimeTableButton
			// 
			this->StudentTimeTableButton->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StudentTimeTableButton->Location = System::Drawing::Point(417, 349);
			this->StudentTimeTableButton->Name = L"StudentTimeTableButton";
			this->StudentTimeTableButton->Size = System::Drawing::Size(308, 39);
			this->StudentTimeTableButton->TabIndex = 3;
			this->StudentTimeTableButton->Text = L" Student Wise Time-table";
			this->StudentTimeTableButton->UseVisualStyleBackColor = true;
			this->StudentTimeTableButton->Click += gcnew System::EventHandler(this, &MainMenuForm::StudentTimeTableButton_Click);
			// 
			// TeacherTimeTableButton
			// 
			this->TeacherTimeTableButton->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TeacherTimeTableButton->Location = System::Drawing::Point(47, 349);
			this->TeacherTimeTableButton->Name = L"TeacherTimeTableButton";
			this->TeacherTimeTableButton->Size = System::Drawing::Size(308, 39);
			this->TeacherTimeTableButton->TabIndex = 2;
			this->TeacherTimeTableButton->Text = L" Teacher Wise Time-table";
			this->TeacherTimeTableButton->UseVisualStyleBackColor = true;
			this->TeacherTimeTableButton->Click += gcnew System::EventHandler(this, &MainMenuForm::TeacherTimeTableButton_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(237, 56);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(308, 184);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 23;
			this->pictureBox1->TabStop = false;
			// 
			// ExitButton
			// 
			this->ExitButton->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ExitButton->Location = System::Drawing::Point(417, 439);
			this->ExitButton->Name = L"ExitButton";
			this->ExitButton->Size = System::Drawing::Size(308, 38);
			this->ExitButton->TabIndex = 7;
			this->ExitButton->Text = L"Exit";
			this->ExitButton->UseVisualStyleBackColor = true;
			this->ExitButton->Click += gcnew System::EventHandler(this, &MainMenuForm::ExitButton_Click);
			// 
			// SearchTimeSlotButton
			// 
			this->SearchTimeSlotButton->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SearchTimeSlotButton->Location = System::Drawing::Point(47, 439);
			this->SearchTimeSlotButton->Name = L"SearchTimeSlotButton";
			this->SearchTimeSlotButton->Size = System::Drawing::Size(308, 38);
			this->SearchTimeSlotButton->TabIndex = 6;
			this->SearchTimeSlotButton->Text = L"Search TimeSlot";
			this->SearchTimeSlotButton->UseVisualStyleBackColor = true;
			this->SearchTimeSlotButton->Click += gcnew System::EventHandler(this, &MainMenuForm::SearchTimeSlotButton_Click);
			// 
			// AdminLoginButton
			// 
			this->AdminLoginButton->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AdminLoginButton->Location = System::Drawing::Point(47, 305);
			this->AdminLoginButton->Name = L"AdminLoginButton";
			this->AdminLoginButton->Size = System::Drawing::Size(678, 38);
			this->AdminLoginButton->TabIndex = 1;
			this->AdminLoginButton->Text = L"Admin Login";
			this->AdminLoginButton->UseVisualStyleBackColor = true;
			this->AdminLoginButton->Click += gcnew System::EventHandler(this, &MainMenuForm::AdminLoginButton_Click);
			// 
			// MainMenuForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(802, 504);
			this->Controls->Add(this->AdminLoginButton);
			this->Controls->Add(this->SearchTimeSlotButton);
			this->Controls->Add(this->ExitButton);
			this->Controls->Add(this->TimeTableLabel);
			this->Controls->Add(this->RoomTimeTableButton);
			this->Controls->Add(this->SectionTimeTableButton);
			this->Controls->Add(this->StudentTimeTableButton);
			this->Controls->Add(this->TeacherTimeTableButton);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MainMenuForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Time Table Management System";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void TeacherTimeTableButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		TeacherLogin^ teacher = gcnew TeacherLogin();
		teacher->ShowDialog();
	}
	private: System::Void StudentTimeTableButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		StudentLogin^ student = gcnew StudentLogin();
		student->ShowDialog();
	}
	private: System::Void SectionTimeTableButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		SectionLogin^ section = gcnew SectionLogin();
		section->ShowDialog();
	}

	private: System::Void RoomTimeTableButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		RoomLogin^ room = gcnew RoomLogin();
		room->ShowDialog();
	}
	private: System::Void RemoveTeacherButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		RemoveTeacher^ removeteacher = gcnew RemoveTeacher();
		removeteacher->ShowDialog();
		this->Show();
	}
	private: System::Void ExitButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Application::Exit();
	}
	private: System::Void SearchTimeSlotButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		SearchTimeSlot^ searchtimeslot = gcnew SearchTimeSlot();
		searchtimeslot->ShowDialog();
		this->Show();
	}

	private: System::Void AdminLoginButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		AdminLogin^ adminlogin = gcnew AdminLogin();
		adminlogin->ShowDialog();
		this->Show();
	}
	};

};

