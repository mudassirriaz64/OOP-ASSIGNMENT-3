#pragma once

namespace OOPASSIGNMENT2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Data::SqlClient;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for RoomTimeTable
	/// </summary>
	public ref class RoomTimeTable : public System::Windows::Forms::Form
	{
	public:
		RoomTimeTable(String^ roomName)
		{
			InitializeComponent(roomName);
			//
			//TODO: Add the constructor code here
			//
			PopulateRoomTimeTable(roomName);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~RoomTimeTable()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;
		System::Windows::Forms::DataGridView^ dataGridView1;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(String^ roomName)
		{
			this->components = gcnew System::ComponentModel::Container();
			this->dataGridView1 = gcnew System::Windows::Forms::DataGridView();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 40);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(1200, 398);
			this->dataGridView1->TabIndex = 0;
			// 
			// RoomTimeTable
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1000, 450);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"RoomTimeTable";
			this->Text = L"Room Time Table";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

			Label^ roomLabel = gcnew Label();
			roomLabel->Text = "TimeTable For Room " + roomName;
			roomLabel->AutoSize = true;
			roomLabel->Location = Point(12, 9);
			this->Controls->Add(roomLabel);
		}
#pragma endregion

		void PopulateRoomTimeTable(String^ roomID)
		{
			dataGridView1->Rows->Clear();

			// Clear existing columns
			dataGridView1->Columns->Clear();

			// Add columns to the DataGridView
			dataGridView1->Columns->Add("Day", "Day");
			dataGridView1->Columns->Add("Start Time", "Start Time");
			dataGridView1->Columns->Add("End Time", "End Time");
			dataGridView1->Columns->Add("Section ID", "Section ID");
			dataGridView1->Columns->Add("Course Name", "Course Name");
			dataGridView1->Columns->Add("Teacher Name", "Teacher Name");

			try
			{
				// Connect to the database
				SqlConnection^ con = gcnew SqlConnection("Data Source=DESKTOP-MN4CFP4;Initial Catalog=TIMETABLEDB;Integrated Security=True");
				con->Open();

				// Query to retrieve timetable data for the specified room
				SqlCommand^ cmd = gcnew SqlCommand("SELECT DayOfWeek, StartTime, EndTime, SectionID, CourseName, TeacherName FROM Timetables WHERE RoomID = @RoomID", con);
				cmd->Parameters->AddWithValue("@RoomID", roomID);

				// Execute the query
				SqlDataReader^ reader = cmd->ExecuteReader();

				// Iterate through the result set and populate the DataGridView
				while (reader->Read())
				{
					String^ day = reader["DayOfWeek"]->ToString();
					String^ startTime = reader["StartTime"]->ToString();
					String^ endTime = reader["EndTime"]->ToString();
					String^ sectionID = reader["SectionID"]->ToString();
					String^ courseName = reader["CourseName"]->ToString();
					String^ teacherName = reader["TeacherName"]->ToString();

					// Add the data to the DataGridView
					dataGridView1->Rows->Add(day, startTime, endTime, sectionID, courseName, teacherName);
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
