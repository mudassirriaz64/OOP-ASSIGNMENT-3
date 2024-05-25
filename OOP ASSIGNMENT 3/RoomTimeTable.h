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
		RoomTimeTable(String^ ID)
		{
			InitializeComponent(ID);
			//
			//TODO: Add the constructor code here
			//
			PopulateRoomTimeTable(ID);
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
		void InitializeComponent(String^ RoomID)
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
			roomLabel->Text = "TimeTable For Room " + RoomID;
			roomLabel->AutoSize = true;
			roomLabel->Location = Point(12, 9);
			this->Controls->Add(roomLabel);
		}
#pragma endregion

		void PopulateRoomTimeTable(String^ RoomID)
		{
			dataGridView1->Rows->Clear();

			dataGridView1->Columns->Clear();

			dataGridView1->Columns->Add("Day", "Day");
			dataGridView1->Columns->Add("Start Time", "Start Time");
			dataGridView1->Columns->Add("End Time", "End Time");
			dataGridView1->Columns->Add("Section ID", "Section ID");
			dataGridView1->Columns->Add("Course Name", "Course Name");
			dataGridView1->Columns->Add("Teacher Name", "Teacher Name");

			try
			{
				SqlConnection^ con = gcnew SqlConnection("Data Source=DESKTOP-MN4CFP4;Initial Catalog=TIMETABLEDB;Integrated Security=True");
				con->Open();

				SqlCommand^ cmd = gcnew SqlCommand("SELECT DayOfWeek, StartTime, EndTime, SectionID, CourseName, TeacherName FROM Timetables WHERE RoomID = @RoomID", con);
				cmd->Parameters->AddWithValue("@RoomID", RoomID);

				SqlDataReader^ reader = cmd->ExecuteReader();

				while (reader->Read())
				{
					String^ day = reader["DayOfWeek"]->ToString();
					String^ startTime = reader["StartTime"]->ToString();
					String^ endTime = reader["EndTime"]->ToString();
					String^ sectionID = reader["SectionID"]->ToString();
					String^ courseName = reader["CourseName"]->ToString();
					String^ teacherName = reader["TeacherName"]->ToString();

					dataGridView1->Rows->Add(day, startTime, endTime, sectionID, courseName, teacherName);
				}
				reader->Close();
				con->Close();
			}
			catch (Exception^ ex)
			{
				MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}

	};
}
