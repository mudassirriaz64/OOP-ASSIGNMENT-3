#pragma once

#include <string>
#include <fstream>
#include <vcclr.h>
#include <msclr/marshal_cppstd.h> // For marshalling between System::String^ and std::string
#include <iostream> // For debugging purposes

using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient; // For SqlConnection, SqlCommand, SqlDataReader
using namespace System::Windows::Forms; // For DataGridView

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

		void PopulateSectionTimeTable(String^ sectionName)
		{
			// Add columns to the DataGridView
			dataGridView1->Columns->Add("Day", "Day");
			dataGridView1->Columns->Add("Start Time", "Start Time");
			dataGridView1->Columns->Add("End Time", "End Time");
			dataGridView1->Columns->Add("Course Name", "Course Name");
			dataGridView1->Columns->Add("Room Name", "Room Name");

			// Make the "Course Name" column wider
			dataGridView1->Columns["Course Name"]->Width = 200; // Set the desired width

			// Database connection details
			String^ connectionString = "Server=DESKTOP-MN4CFP4;Database=TimeTableDB;Integrated Security=True;";
			String^ query = "SELECT DayOfWeek, StartTime, EndTime, CourseName, RoomName "
				"FROM ClassScheduleView "
				"WHERE SectionName = @sectionName "
				"ORDER BY "
				"CASE "
				"   WHEN DayOfWeek = 'Monday' THEN 1 "
				"   WHEN DayOfWeek = 'Tuesday' THEN 2 "
				"   WHEN DayOfWeek = 'Wednesday' THEN 3 "
				"   WHEN DayOfWeek = 'Thursday' THEN 4 "
				"   WHEN DayOfWeek = 'Friday' THEN 5 "
				"   WHEN DayOfWeek = 'Saturday' THEN 6 "
				"   WHEN DayOfWeek = 'Sunday' THEN 7 "
				"END, StartTime;";

			try
			{
				SqlConnection^ connection = gcnew SqlConnection(connectionString);
				connection->Open();
				SqlCommand^ command = gcnew SqlCommand(query, connection);
				command->Parameters->AddWithValue("@sectionName", sectionName);
				SqlDataReader^ reader = command->ExecuteReader();
				while (reader->Read())
				{
					String^ day = reader["DayOfWeek"]->ToString();
					String^ startTime = reader["StartTime"]->ToString();
					String^ endTime = reader["EndTime"]->ToString();
					String^ course = reader["CourseName"]->ToString();
					String^ room = reader["RoomName"]->ToString();

					dataGridView1->Rows->Add(day, startTime, endTime, course, room);
				}
				reader->Close();
				connection->Close();
			}
			catch (Exception^ ex)
			{
				MessageBox::Show("An error occurred while fetching the timetable: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	};
}
