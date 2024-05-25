#pragma once

namespace OOPASSIGNMENT2
{

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Data::SqlClient;
    using namespace System::Drawing;
    using namespace System::IO;

    /// <summary>
    /// Summary for StudentTimeTable
    /// </summary>
    public ref class StudentTimeTable : public System::Windows::Forms::Form
    {
    public:
        StudentTimeTable(String^ sectionName, String^ studentName, String^ enrollmentID)
        {
            InitializeComponent();
            //
            //TODO: Add the constructor code here
            //
            DisplayStudentInfo(studentName, enrollmentID, sectionName);
            PopulateStudentTimeTable(sectionName);
        }


    protected:
        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        ~StudentTimeTable()
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
        void InitializeComponent(void)
        {
            this->components = gcnew System::ComponentModel::Container();
            this->dataGridView1 = gcnew System::Windows::Forms::DataGridView();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
            this->SuspendLayout();
            // 
            // dataGridView1
            // 
            this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView1->Location = System::Drawing::Point(12, 100);
            this->dataGridView1->Name = L"dataGridView1";
            this->dataGridView1->Size = System::Drawing::Size(1000, 318);
            this->dataGridView1->TabIndex = 0;
            // 
            // StudentTimeTable
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(1000, 450);
            this->Controls->Add(this->dataGridView1);

            Label^ NameLabel = gcnew Label();
            NameLabel->Text = "Student Name: ";
            NameLabel->Location = Point(10, 10);
            NameLabel->AutoSize = true;
            this->Controls->Add(NameLabel);

            Label^ EnrollmentIDLabel = gcnew Label();
            EnrollmentIDLabel->Text = "Enrollment ID: ";
            EnrollmentIDLabel->Location = Point(10, 30);
            EnrollmentIDLabel->AutoSize = true;
            this->Controls->Add(EnrollmentIDLabel);

            Label^ SectionLabel = gcnew Label();
            SectionLabel->Text = "Section: ";
            SectionLabel->Location = Point(10, 50);
            SectionLabel->AutoSize = true;
            this->Controls->Add(SectionLabel);

            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
            this->ResumeLayout(false);
        }

#pragma endregion

        void DisplayStudentInfo(String^ studentName, String^ enrollmentID, String^ sectionName)
        {
            Label^ NameLabel = gcnew Label();
            NameLabel->Text = studentName;
            NameLabel->Location = Point(150, 10);
            NameLabel->AutoSize = true;
            this->Controls->Add(NameLabel);

            Label^ EnrollmentIDLabel = gcnew Label();
            EnrollmentIDLabel->Text = enrollmentID;
            EnrollmentIDLabel->Location = Point(150, 30);
            EnrollmentIDLabel->AutoSize = true;
            this->Controls->Add(EnrollmentIDLabel);

            Label^ SectionLabel = gcnew Label();
            SectionLabel->Text = sectionName;
            SectionLabel->Location = Point(150, 50);
            SectionLabel->AutoSize = true;
            this->Controls->Add(SectionLabel);
        }

        void PopulateStudentTimeTable(String^ sectionName)
        {
            String^ connectionString = "Server=DESKTOP-MN4CFP4;Database=TIMETABLEDB;Integrated Security=True;";
            String^ query = "SELECT DayOfWeek, StartTime, EndTime, CourseName, TeacherName, RoomID "
                "FROM Timetables "
                "WHERE SectionID = @sectionID";

            try
            {
                SqlConnection^ connection = gcnew SqlConnection(connectionString);
                SqlCommand^ command = gcnew SqlCommand(query, connection);
                command->Parameters->AddWithValue("@sectionID", sectionName);

                connection->Open();

                SqlDataReader^ reader = command->ExecuteReader();

                dataGridView1->Rows->Clear();
                dataGridView1->Columns->Clear();

                dataGridView1->Columns->Add("Day", "Day");
                dataGridView1->Columns->Add("Start Time", "Start Time");
                dataGridView1->Columns->Add("End Time", "End Time");
                dataGridView1->Columns->Add("Course Name", "Course Name");
                dataGridView1->Columns->Add("Teacher Name", "Teacher Name");
                dataGridView1->Columns->Add("Room ID", "Room ID");

                while (reader->Read())
                {
                    String^ day = reader["DayOfWeek"]->ToString();
                    String^ startTime = reader["StartTime"]->ToString();
                    String^ endTime = reader["EndTime"]->ToString();
                    String^ courseName = reader["CourseName"]->ToString();
                    String^ teacherName = reader["TeacherName"]->ToString();
                    String^ roomID = reader["RoomID"]->ToString();

                    dataGridView1->Rows->Add(day, startTime, endTime, courseName, teacherName, roomID);
                }

                reader->Close();
                connection->Close();
            }
            catch (Exception^ ex)
            {
                MessageBox::Show("An error occurred while fetching timetable data: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
        }


    };
}
