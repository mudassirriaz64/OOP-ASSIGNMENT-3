#pragma once

#include <string>
#include <fstream>
#include <vcclr.h>
#include <msclr/marshal_cppstd.h> // For marshalling between System::String^ and std::string
#include <iostream> // For debugging purposes

namespace OOPASSIGNMENT2
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Data::SqlClient;

	public ref class SectionTimeTable : public System::Windows::Forms::Form
	{
	public:
		SectionTimeTable(String^ sectionName)
		{
			InitializeComponent(sectionName);
			PopulateSectionTimeTable(sectionName);
		}

	protected:
		~SectionTimeTable()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		System::ComponentModel::Container^ components;
		System::Windows::Forms::DataGridView^ dataGridView1;

#pragma region Windows Form Designer generated code
		void InitializeComponent(String^ sectionName)
		{
			this->components = gcnew System::ComponentModel::Container();
			this->dataGridView1 = gcnew System::Windows::Forms::DataGridView();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();

			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 38);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(1000, 400);
			this->dataGridView1->TabIndex = 0;

			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(800, 450);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"SectionTimeTable";
			this->Text = L"Section Time Table";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

			Label^ sectionLabel = gcnew Label();
			sectionLabel->Text = "Timetable for Section " + sectionName;
			sectionLabel->AutoSize = true;
			sectionLabel->Location = Point(12, 9);
			this->Controls->Add(sectionLabel);
		}
#pragma endregion

		void PopulateSectionTimeTable(String^ sectionID)
		{
			

			dataGridView1->Rows->Clear();

			dataGridView1->Columns->Add("Day", "Day");
			dataGridView1->Columns->Add("Start Time", "Start Time");
			dataGridView1->Columns->Add("End Time", "End Time");
			dataGridView1->Columns->Add("Teacher Name", "Teacher Name");
			dataGridView1->Columns->Add("Course Name", "Course Name");
			dataGridView1->Columns->Add("Room ID", "Room ID");

			try
			{
				// Connect to the database
				SqlConnection^ con = gcnew SqlConnection("Data Source=DESKTOP-MN4CFP4;Initial Catalog=TIMETABLEDB;Integrated Security=True");
				con->Open();

				// Query to retrieve timetable data for the specified section
				SqlCommand^ cmd = gcnew SqlCommand("SELECT DayOfWeek, StartTime, EndTime, TeacherName, CourseName, RoomID FROM Timetables WHERE SectionID = @SectionID", con);
				cmd->Parameters->AddWithValue("@SectionID", sectionID);

				// Execute the query
				SqlDataReader^ reader = cmd->ExecuteReader();

				// Iterate through the result set and populate the DataGridView
				while (reader->Read())
				{
					String^ day = reader["DayOfWeek"]->ToString();
					String^ startTime = reader["StartTime"]->ToString();
					String^ endTime = reader["EndTime"]->ToString();
					String^ teacherName = reader["TeacherName"]->ToString();
					String^ courseName = reader["CourseName"]->ToString();
					String^ roomID = reader["RoomID"]->ToString();

					// Add the data to the DataGridView
					dataGridView1->Rows->Add(day, startTime, endTime, teacherName, courseName, roomID);
				}

				// Close the reader and database connection
				reader->Close();
				con->Close();
			}
			catch (Exception^ ex)
			{
				// Handle any exceptions
				MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}

	};
}
