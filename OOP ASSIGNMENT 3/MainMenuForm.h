#pragma once
#include "TeacherLogin.h"
#include "StudentLogin.h"
#include "SectionLogin.h"
#include "RoomLogin.h"
#include "AddStudentForm.h"
#include "RemoveStudentForm.h"
#include "DisplayStudents.h"
#include "RemoveTeacher.h"
#include "AddTeacher.h"
#include "AddTimeSlot.h"
#include "DisplayTeachers.h"

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
	private: System::Windows::Forms::Button^ DisplayStudentButton;
	private: System::Windows::Forms::Button^ RemoveStudentButton;
	protected:

	protected:


	private: System::Windows::Forms::Button^ AddStudentButton;

	private: System::Windows::Forms::Button^ RoomTimeTableButton;

	private: System::Windows::Forms::Button^ SectionTimeTableButton;
	private: System::Windows::Forms::Button^ StudentTimeTableButton;



	private: System::Windows::Forms::Button^ TeacherTimeTableButton;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ AddTeacherButton;
	private: System::Windows::Forms::Button^ RemoveTeacherButton;
	private: System::Windows::Forms::Button^ DisplayTeacherButton;

	private: System::Windows::Forms::Button^ ExitButton;
	private: System::Windows::Forms::Button^ AddTimeSlotButton;






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
			this->DisplayStudentButton = (gcnew System::Windows::Forms::Button());
			this->RemoveStudentButton = (gcnew System::Windows::Forms::Button());
			this->AddStudentButton = (gcnew System::Windows::Forms::Button());
			this->RoomTimeTableButton = (gcnew System::Windows::Forms::Button());
			this->SectionTimeTableButton = (gcnew System::Windows::Forms::Button());
			this->StudentTimeTableButton = (gcnew System::Windows::Forms::Button());
			this->TeacherTimeTableButton = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->AddTeacherButton = (gcnew System::Windows::Forms::Button());
			this->RemoveTeacherButton = (gcnew System::Windows::Forms::Button());
			this->DisplayTeacherButton = (gcnew System::Windows::Forms::Button());
			this->ExitButton = (gcnew System::Windows::Forms::Button());
			this->AddTimeSlotButton = (gcnew System::Windows::Forms::Button());
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
			// DisplayStudentButton
			// 
			this->DisplayStudentButton->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DisplayStudentButton->Location = System::Drawing::Point(417, 406);
			this->DisplayStudentButton->Name = L"DisplayStudentButton";
			this->DisplayStudentButton->Size = System::Drawing::Size(308, 38);
			this->DisplayStudentButton->TabIndex = 30;
			this->DisplayStudentButton->Text = L"Display Students";
			this->DisplayStudentButton->UseVisualStyleBackColor = true;
			this->DisplayStudentButton->Click += gcnew System::EventHandler(this, &MainMenuForm::DisplayStudentsButton_Click);
			// 
			// RemoveStudentButton
			// 
			this->RemoveStudentButton->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RemoveStudentButton->Location = System::Drawing::Point(417, 495);
			this->RemoveStudentButton->Name = L"RemoveStudentButton";
			this->RemoveStudentButton->Size = System::Drawing::Size(308, 39);
			this->RemoveStudentButton->TabIndex = 29;
			this->RemoveStudentButton->Text = L"Remove Student";
			this->RemoveStudentButton->UseVisualStyleBackColor = true;
			this->RemoveStudentButton->Click += gcnew System::EventHandler(this, &MainMenuForm::RemoveStudentButton_Click);
			// 
			// AddStudentButton
			// 
			this->AddStudentButton->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AddStudentButton->Location = System::Drawing::Point(417, 450);
			this->AddStudentButton->Name = L"AddStudentButton";
			this->AddStudentButton->Size = System::Drawing::Size(308, 39);
			this->AddStudentButton->TabIndex = 28;
			this->AddStudentButton->Text = L"Add Student";
			this->AddStudentButton->UseVisualStyleBackColor = true;
			this->AddStudentButton->Click += gcnew System::EventHandler(this, &MainMenuForm::AddStudentButton_Click);
			// 
			// RoomTimeTableButton
			// 
			this->RoomTimeTableButton->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RoomTimeTableButton->Location = System::Drawing::Point(417, 361);
			this->RoomTimeTableButton->Name = L"RoomTimeTableButton";
			this->RoomTimeTableButton->Size = System::Drawing::Size(308, 39);
			this->RoomTimeTableButton->TabIndex = 27;
			this->RoomTimeTableButton->Text = L"Room Wise Time-table";
			this->RoomTimeTableButton->UseVisualStyleBackColor = true;
			this->RoomTimeTableButton->Click += gcnew System::EventHandler(this, &MainMenuForm::RoomTimeTableButton_Click);
			// 
			// SectionTimeTableButton
			// 
			this->SectionTimeTableButton->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SectionTimeTableButton->Location = System::Drawing::Point(47, 361);
			this->SectionTimeTableButton->Name = L"SectionTimeTableButton";
			this->SectionTimeTableButton->Size = System::Drawing::Size(308, 39);
			this->SectionTimeTableButton->TabIndex = 26;
			this->SectionTimeTableButton->Text = L"Section Wise Time-table";
			this->SectionTimeTableButton->UseVisualStyleBackColor = true;
			this->SectionTimeTableButton->Click += gcnew System::EventHandler(this, &MainMenuForm::SectionTimeTableButton_Click);
			// 
			// StudentTimeTableButton
			// 
			this->StudentTimeTableButton->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StudentTimeTableButton->Location = System::Drawing::Point(417, 316);
			this->StudentTimeTableButton->Name = L"StudentTimeTableButton";
			this->StudentTimeTableButton->Size = System::Drawing::Size(308, 39);
			this->StudentTimeTableButton->TabIndex = 25;
			this->StudentTimeTableButton->Text = L" Student Wise Time-table";
			this->StudentTimeTableButton->UseVisualStyleBackColor = true;
			this->StudentTimeTableButton->Click += gcnew System::EventHandler(this, &MainMenuForm::StudentTimeTableButton_Click);
			// 
			// TeacherTimeTableButton
			// 
			this->TeacherTimeTableButton->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TeacherTimeTableButton->Location = System::Drawing::Point(47, 316);
			this->TeacherTimeTableButton->Name = L"TeacherTimeTableButton";
			this->TeacherTimeTableButton->Size = System::Drawing::Size(308, 39);
			this->TeacherTimeTableButton->TabIndex = 24;
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
			// AddTeacherButton
			// 
			this->AddTeacherButton->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AddTeacherButton->Location = System::Drawing::Point(47, 450);
			this->AddTeacherButton->Name = L"AddTeacherButton";
			this->AddTeacherButton->Size = System::Drawing::Size(308, 39);
			this->AddTeacherButton->TabIndex = 32;
			this->AddTeacherButton->Text = L"Add Teacher";
			this->AddTeacherButton->UseVisualStyleBackColor = true;
			this->AddTeacherButton->Click += gcnew System::EventHandler(this, &MainMenuForm::AddTeacherButton_Click);
			// 
			// RemoveTeacherButton
			// 
			this->RemoveTeacherButton->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RemoveTeacherButton->Location = System::Drawing::Point(47, 495);
			this->RemoveTeacherButton->Name = L"RemoveTeacherButton";
			this->RemoveTeacherButton->Size = System::Drawing::Size(308, 39);
			this->RemoveTeacherButton->TabIndex = 33;
			this->RemoveTeacherButton->Text = L"Remove Teacher";
			this->RemoveTeacherButton->UseVisualStyleBackColor = true;
			this->RemoveTeacherButton->Click += gcnew System::EventHandler(this, &MainMenuForm::RemoveTeacherButton_Click);
			// 
			// DisplayTeacherButton
			// 
			this->DisplayTeacherButton->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DisplayTeacherButton->Location = System::Drawing::Point(47, 406);
			this->DisplayTeacherButton->Name = L"DisplayTeacherButton";
			this->DisplayTeacherButton->Size = System::Drawing::Size(308, 38);
			this->DisplayTeacherButton->TabIndex = 34;
			this->DisplayTeacherButton->Text = L"Display Teachers";
			this->DisplayTeacherButton->UseVisualStyleBackColor = true;
			this->DisplayTeacherButton->Click += gcnew System::EventHandler(this, &MainMenuForm::DisplayTeacherButton_Click);
			// 
			// ExitButton
			// 
			this->ExitButton->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ExitButton->Location = System::Drawing::Point(417, 540);
			this->ExitButton->Name = L"ExitButton";
			this->ExitButton->Size = System::Drawing::Size(308, 38);
			this->ExitButton->TabIndex = 35;
			this->ExitButton->Text = L"Exit";
			this->ExitButton->UseVisualStyleBackColor = true;
			this->ExitButton->Click += gcnew System::EventHandler(this, &MainMenuForm::ExitButton_Click);
			// 
			// AddTimeSlotButton
			// 
			this->AddTimeSlotButton->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AddTimeSlotButton->Location = System::Drawing::Point(47, 540);
			this->AddTimeSlotButton->Name = L"AddTimeSlotButton";
			this->AddTimeSlotButton->Size = System::Drawing::Size(308, 38);
			this->AddTimeSlotButton->TabIndex = 36;
			this->AddTimeSlotButton->Text = L"Add TimeSlot";
			this->AddTimeSlotButton->UseVisualStyleBackColor = true;
			this->AddTimeSlotButton->Click += gcnew System::EventHandler(this, &MainMenuForm::AddTimeSlotButton_Click);
			// 
			// MainMenuForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(802, 622);
			this->Controls->Add(this->AddTimeSlotButton);
			this->Controls->Add(this->ExitButton);
			this->Controls->Add(this->DisplayTeacherButton);
			this->Controls->Add(this->RemoveTeacherButton);
			this->Controls->Add(this->AddTeacherButton);
			this->Controls->Add(this->TimeTableLabel);
			this->Controls->Add(this->DisplayStudentButton);
			this->Controls->Add(this->RemoveStudentButton);
			this->Controls->Add(this->AddStudentButton);
			this->Controls->Add(this->RoomTimeTableButton);
			this->Controls->Add(this->SectionTimeTableButton);
			this->Controls->Add(this->StudentTimeTableButton);
			this->Controls->Add(this->TeacherTimeTableButton);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MainMenuForm";
			this->Text = L"Time Table Management System";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void TeacherTimeTableButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		TeacherLogin^ teacher = gcnew TeacherLogin();
		teacher->ShowDialog();
		this->Hide();
		this->Show();
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
	private: System::Void AddStudentButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		AddStudentForm^ addstudent = gcnew AddStudentForm();
		addstudent->ShowDialog();
		this->Show();
	}
	private: System::Void RemoveStudentButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		RemoveStudentForm^ removestudent = gcnew RemoveStudentForm();
		removestudent->ShowDialog();
		this->Show();
	}
	private: System::Void DisplayStudentsButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		DisplayStudents^ displaystudents = gcnew DisplayStudents();
		displaystudents->ShowDialog();
		this->Show();
	}
	private: System::Void RemoveTeacherButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		RemoveTeacher^ removeteacher = gcnew RemoveTeacher();
		removeteacher->ShowDialog();
		this->Show();
	}
	private: System::Void AddTeacherButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		AddTeacher^ addteacher = gcnew AddTeacher();
		addteacher->ShowDialog();
		this->Show();
	}
	private: System::Void DisplayTeacherButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		DisplayTeachers^ displayteachers = gcnew DisplayTeachers();
		displayteachers->ShowDialog();
		this->Show();
	}
	private: System::Void AddTimeSlotButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		AddTimeSlot^ addtimeslot = gcnew AddTimeSlot();
		addtimeslot->ShowDialog();
		this->Show();
	}
	private: System::Void ExitButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Application::Exit();
	}

	};

};

