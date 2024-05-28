#pragma once
#include "AddStudentForm.h"
#include "RemoveStudentForm.h"
#include "RemoveTeacher.h"
#include "AddTeacher.h"
#include "DisplayTeachers.h"
#include "DisplayStudents.h"
#include "ManageTimeSlots.h""


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
	public ref class AdminDashboard : public System::Windows::Forms::Form
	{
	public:
		AdminDashboard(void)
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
		~AdminDashboard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ TimeTableLabel;

	private: System::Windows::Forms::Button^ RemoveStudentButton;
	protected:

	protected:


	private: System::Windows::Forms::Button^ AddStudentButton;










	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ AddTeacherButton;
	private: System::Windows::Forms::Button^ RemoveTeacherButton;
	private: System::Windows::Forms::Button^ LogOutButton;





	private: System::Windows::Forms::Button^ ViewTeachersButton;
	private: System::Windows::Forms::Button^ ViewStudentsButton;
	private: System::Windows::Forms::Button^ ManageTimeSlotsButton;










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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AdminDashboard::typeid));
			this->TimeTableLabel = (gcnew System::Windows::Forms::Label());
			this->RemoveStudentButton = (gcnew System::Windows::Forms::Button());
			this->AddStudentButton = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->AddTeacherButton = (gcnew System::Windows::Forms::Button());
			this->RemoveTeacherButton = (gcnew System::Windows::Forms::Button());
			this->LogOutButton = (gcnew System::Windows::Forms::Button());
			this->ViewTeachersButton = (gcnew System::Windows::Forms::Button());
			this->ViewStudentsButton = (gcnew System::Windows::Forms::Button());
			this->ManageTimeSlotsButton = (gcnew System::Windows::Forms::Button());
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
			this->TimeTableLabel->Text = L"Admin Dashboard";
			this->TimeTableLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// RemoveStudentButton
			// 
			this->RemoveStudentButton->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RemoveStudentButton->Location = System::Drawing::Point(417, 374);
			this->RemoveStudentButton->Name = L"RemoveStudentButton";
			this->RemoveStudentButton->Size = System::Drawing::Size(308, 39);
			this->RemoveStudentButton->TabIndex = 5;
			this->RemoveStudentButton->Text = L"Remove Student";
			this->RemoveStudentButton->UseVisualStyleBackColor = true;
			this->RemoveStudentButton->Click += gcnew System::EventHandler(this, &AdminDashboard::RemoveStudentButton_Click);
			// 
			// AddStudentButton
			// 
			this->AddStudentButton->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AddStudentButton->Location = System::Drawing::Point(417, 329);
			this->AddStudentButton->Name = L"AddStudentButton";
			this->AddStudentButton->Size = System::Drawing::Size(308, 39);
			this->AddStudentButton->TabIndex = 3;
			this->AddStudentButton->Text = L"Add Student";
			this->AddStudentButton->UseVisualStyleBackColor = true;
			this->AddStudentButton->Click += gcnew System::EventHandler(this, &AdminDashboard::AddStudentButton_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(236, 40);
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
			this->AddTeacherButton->Location = System::Drawing::Point(47, 329);
			this->AddTeacherButton->Name = L"AddTeacherButton";
			this->AddTeacherButton->Size = System::Drawing::Size(308, 39);
			this->AddTeacherButton->TabIndex = 2;
			this->AddTeacherButton->Text = L"Add Teacher";
			this->AddTeacherButton->UseVisualStyleBackColor = true;
			this->AddTeacherButton->Click += gcnew System::EventHandler(this, &AdminDashboard::AddTeacherButton_Click);
			// 
			// RemoveTeacherButton
			// 
			this->RemoveTeacherButton->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RemoveTeacherButton->Location = System::Drawing::Point(47, 374);
			this->RemoveTeacherButton->Name = L"RemoveTeacherButton";
			this->RemoveTeacherButton->Size = System::Drawing::Size(308, 39);
			this->RemoveTeacherButton->TabIndex = 4;
			this->RemoveTeacherButton->Text = L"Remove Teacher";
			this->RemoveTeacherButton->UseVisualStyleBackColor = true;
			this->RemoveTeacherButton->Click += gcnew System::EventHandler(this, &AdminDashboard::RemoveTeacherButton_Click);
			// 
			// LogOutButton
			// 
			this->LogOutButton->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LogOutButton->Location = System::Drawing::Point(236, 464);
			this->LogOutButton->Name = L"LogOutButton";
			this->LogOutButton->Size = System::Drawing::Size(308, 38);
			this->LogOutButton->TabIndex = 10;
			this->LogOutButton->Text = L"Log Out";
			this->LogOutButton->UseVisualStyleBackColor = true;
			this->LogOutButton->Click += gcnew System::EventHandler(this, &AdminDashboard::LogOutButton_Click);
			// 
			// ViewTeachersButton
			// 
			this->ViewTeachersButton->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ViewTeachersButton->Location = System::Drawing::Point(47, 419);
			this->ViewTeachersButton->Name = L"ViewTeachersButton";
			this->ViewTeachersButton->Size = System::Drawing::Size(308, 39);
			this->ViewTeachersButton->TabIndex = 6;
			this->ViewTeachersButton->Text = L"View Teachers";
			this->ViewTeachersButton->UseVisualStyleBackColor = true;
			this->ViewTeachersButton->Click += gcnew System::EventHandler(this, &AdminDashboard::ViewTeachersButton_Click);
			// 
			// ViewStudentsButton
			// 
			this->ViewStudentsButton->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ViewStudentsButton->Location = System::Drawing::Point(417, 419);
			this->ViewStudentsButton->Name = L"ViewStudentsButton";
			this->ViewStudentsButton->Size = System::Drawing::Size(308, 39);
			this->ViewStudentsButton->TabIndex = 7;
			this->ViewStudentsButton->Text = L"View Students";
			this->ViewStudentsButton->UseVisualStyleBackColor = true;
			this->ViewStudentsButton->Click += gcnew System::EventHandler(this, &AdminDashboard::ViewStudentsButton_Click);
			// 
			// ManageTimeSlotsButton
			// 
			this->ManageTimeSlotsButton->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ManageTimeSlotsButton->Location = System::Drawing::Point(47, 285);
			this->ManageTimeSlotsButton->Name = L"ManageTimeSlotsButton";
			this->ManageTimeSlotsButton->Size = System::Drawing::Size(678, 38);
			this->ManageTimeSlotsButton->TabIndex = 1;
			this->ManageTimeSlotsButton->Text = L"Manage TimeSlots";
			this->ManageTimeSlotsButton->UseVisualStyleBackColor = true;
			this->ManageTimeSlotsButton->Click += gcnew System::EventHandler(this, &AdminDashboard::ManageTimeSlotsButton_Click);
			// 
			// AdminDashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(802, 513);
			this->Controls->Add(this->ManageTimeSlotsButton);
			this->Controls->Add(this->ViewStudentsButton);
			this->Controls->Add(this->ViewTeachersButton);
			this->Controls->Add(this->LogOutButton);
			this->Controls->Add(this->RemoveTeacherButton);
			this->Controls->Add(this->AddTeacherButton);
			this->Controls->Add(this->TimeTableLabel);
			this->Controls->Add(this->RemoveStudentButton);
			this->Controls->Add(this->AddStudentButton);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"AdminDashboard";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Admin Dashboard";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
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
	private: System::Void LogOutButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Close();
	}
	private: System::Void ViewTeachersButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		DisplayTeachers^ displayteachers = gcnew DisplayTeachers();
		displayteachers->ShowDialog();
		this->Show();
	}
	private: System::Void ViewStudentsButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		DisplayStudents^ displaystudents = gcnew DisplayStudents();
		displaystudents->ShowDialog();
		this->Show();
	}
	private: System::Void ManageTimeSlotsButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		ManageTimeSlots^ managetimeslot = gcnew ManageTimeSlots();
		managetimeslot->ShowDialog();
		this->Show();

	}

	};
}

