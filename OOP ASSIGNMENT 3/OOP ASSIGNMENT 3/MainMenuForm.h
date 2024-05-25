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
	private: System::Windows::Forms::TextBox^ textBox2;
	protected:
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ AddTeacherButton;
	private: System::Windows::Forms::Button^ RemoveTeacherButton;
	private: System::Windows::Forms::Button^ DisplayButtonButton;
	private: System::Windows::Forms::Button^ ExitButton;
	private: System::Windows::Forms::Button^ button7;





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
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->AddTeacherButton = (gcnew System::Windows::Forms::Button());
			this->RemoveTeacherButton = (gcnew System::Windows::Forms::Button());
			this->DisplayButtonButton = (gcnew System::Windows::Forms::Button());
			this->ExitButton = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(189, 246);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->textBox2->Size = System::Drawing::Size(420, 28);
			this->textBox2->TabIndex = 31;
			this->textBox2->Text = L"      Time-table Management System";
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(417, 406);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(308, 38);
			this->button9->TabIndex = 30;
			this->button9->Text = L"Display Students";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MainMenuForm::DisplayStudentsButton_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(417, 495);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(308, 39);
			this->button6->TabIndex = 29;
			this->button6->Text = L"Remove Student";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MainMenuForm::RemoveStudentButton_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(417, 450);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(308, 39);
			this->button5->TabIndex = 28;
			this->button5->Text = L"Add Students";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MainMenuForm::AddStudent_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(417, 361);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(308, 39);
			this->button4->TabIndex = 27;
			this->button4->Text = L"Room Wise Time-table";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MainMenuForm::RoomButton_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(47, 361);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(308, 39);
			this->button3->TabIndex = 26;
			this->button3->Text = L"Section Wise Time-table";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MainMenuForm::Section_Button);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(417, 316);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(308, 39);
			this->button2->TabIndex = 25;
			this->button2->Text = L" Student Wise Time-table";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainMenuForm::StudentLogin_Button);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(47, 316);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(308, 39);
			this->button1->TabIndex = 24;
			this->button1->Text = L" Teacher Wise Time-table";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainMenuForm::Teacherlogin_button);
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
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MainMenuForm::pictureBox1_Click);
			// 
			// AddTeacherButton
			// 
			this->AddTeacherButton->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AddTeacherButton->Location = System::Drawing::Point(47, 450);
			this->AddTeacherButton->Name = L"AddTeacherButton";
			this->AddTeacherButton->Size = System::Drawing::Size(308, 39);
			this->AddTeacherButton->TabIndex = 32;
			this->AddTeacherButton->Text = L"Add Teachers";
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
			// DisplayButtonButton
			// 
			this->DisplayButtonButton->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DisplayButtonButton->Location = System::Drawing::Point(47, 406);
			this->DisplayButtonButton->Name = L"DisplayButtonButton";
			this->DisplayButtonButton->Size = System::Drawing::Size(308, 38);
			this->DisplayButtonButton->TabIndex = 34;
			this->DisplayButtonButton->Text = L"Display Teacher";
			this->DisplayButtonButton->UseVisualStyleBackColor = true;
			this->DisplayButtonButton->Click += gcnew System::EventHandler(this, &MainMenuForm::DisplayButtonButton_Click);
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
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(47, 540);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(308, 38);
			this->button7->TabIndex = 36;
			this->button7->Text = L"Add TimeSlot";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MainMenuForm::button7_Click);
			// 
			// MainMenuForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(802, 622);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->ExitButton);
			this->Controls->Add(this->DisplayButtonButton);
			this->Controls->Add(this->RemoveTeacherButton);
			this->Controls->Add(this->AddTeacherButton);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MainMenuForm";
			this->Text = L"mainform";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Teacherlogin_button(System::Object^ sender, System::EventArgs^ e)
		{
			this->Hide();
			TeacherLogin^ teacher = gcnew TeacherLogin();
			teacher->ShowDialog();
		}
	private: System::Void StudentLogin_Button(System::Object^ sender, System::EventArgs^ e)
	{
		this->Hide();
		StudentLogin^ student = gcnew StudentLogin();
		student->ShowDialog();
	}
	private: System::Void Section_Button(System::Object^ sender, System::EventArgs^ e)
	{
		this->Hide();
		SectionLogin^ section = gcnew SectionLogin();
		section->ShowDialog();
	}

	private: System::Void RoomButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Hide();
		RoomLogin^ room = gcnew RoomLogin();
		room->ShowDialog();
	}
	private: System::Void AddStudent_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Hide();
		AddStudentForm^ addstudent = gcnew AddStudentForm();
		addstudent->ShowDialog();
		this->Show();
	}
	private: System::Void RemoveStudentButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Hide();
		RemoveStudentForm^ removestudent = gcnew RemoveStudentForm();
		removestudent->ShowDialog();
		this->Show();
	}
	private: System::Void DisplayStudentsButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Hide();
		DisplayStudents^ displaystudents = gcnew DisplayStudents();
		displaystudents->ShowDialog();
		this->Show();
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
	}
private: System::Void RemoveTeacherButton_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->Hide();
	RemoveTeacher^ removeteacher = gcnew RemoveTeacher();
	removeteacher->ShowDialog();
	this->Show();

}
private: System::Void AddTeacherButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Hide();
	AddTeacher^ addteacher = gcnew AddTeacher();
	addteacher->ShowDialog();
	this->Show();
}
private: System::Void DisplayButtonButton_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->Hide();
	DisplayTeachers^ displayteachers = gcnew DisplayTeachers();
	displayteachers->ShowDialog();
	this->Show();
}
private: System::Void ExitButton_Click(System::Object^ sender, System::EventArgs^ e) 
{
	Application::Exit();
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->Hide();
	AddTimeSlot^ addtimeslot = gcnew AddTimeSlot();
	addtimeslot->ShowDialog();
	this->Show();
}
};
	  
};

