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

            // Display student information at the top of the form
            DisplayStudentInfo(studentName, enrollmentID, sectionName);

            // Populate the DataGridView with student timetable data for the specified section
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
            this->dataGridView1->Location = System::Drawing::Point(12, 100); // Adjusted position
            this->dataGridView1->Name = L"dataGridView1";
            this->dataGridView1->Size = System::Drawing::Size(1000, 318); // Adjusted size
            this->dataGridView1->TabIndex = 0;
            // 
            // StudentTimeTable
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(1000, 450);
            this->Controls->Add(this->dataGridView1);

            // Now, let's add a panel to contain the labels
            Label^ nameLabel = gcnew Label();
            nameLabel->Text = "Student Name: ";
            nameLabel->Location = Point(10, 10);
            nameLabel->AutoSize = true;
            this->Controls->Add(nameLabel);

            Label^ idLabel = gcnew Label();
            idLabel->Text = "Enrollment ID: ";
            idLabel->Location = Point(10, 30);
            idLabel->AutoSize = true;
            this->Controls->Add(idLabel);

            Label^ sectionLabel = gcnew Label();
            sectionLabel->Text = "Section: ";
            sectionLabel->Location = Point(10, 50);
            sectionLabel->AutoSize = true;
            this->Controls->Add(sectionLabel);


            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
            this->ResumeLayout(false);
        }

#pragma endregion

        // Method to populate the DataGridView with student timetable data
        // Method to populate the DataGridView with student timetable data
        void DisplayStudentInfo(String^ studentName, String^ enrollmentID, String^ sectionName)
        {
            // Create labels to display student information
            Label^ nameLabel = gcnew Label();
            nameLabel->Text = studentName;
            nameLabel->Location = Point(150, 10);
            nameLabel->AutoSize = true;
            this->Controls->Add(nameLabel);

            Label^ idLabel = gcnew Label();
            idLabel->Text = enrollmentID;
            idLabel->Location = Point(150, 30);
            idLabel->AutoSize = true;
            this->Controls->Add(idLabel);

            Label^ sectionLabel = gcnew Label();
            sectionLabel->Text = sectionName;
            sectionLabel->Location = Point(150, 50);
            sectionLabel->AutoSize = true;
            this->Controls->Add(sectionLabel);
        }

        void PopulateStudentTimeTable(String^ sectionName)
        {
            // Database connection details
            String^ connectionString = "Server=DESKTOP-MN4CFP4;Database=TIMETABLEDB;Integrated Security=True;";
            String^ query = "SELECT DayOfWeek, StartTime, EndTime, CourseName, TeacherName, RoomID "
                "FROM Timetables "
                "WHERE SectionID = @sectionID";

            try
            {
                // Open a connection to the database
                SqlConnection^ connection = gcnew SqlConnection(connectionString);
                SqlCommand^ command = gcnew SqlCommand(query, connection);
                command->Parameters->AddWithValue("@sectionID", sectionName);

                // Open the database connection
                connection->Open();

                // Execute the query
                SqlDataReader^ reader = command->ExecuteReader();

                // Clear existing rows and columns in the DataGridView
                dataGridView1->Rows->Clear();
                dataGridView1->Columns->Clear();

                // Add columns to the DataGridView
                dataGridView1->Columns->Add("Day", "Day");
                dataGridView1->Columns->Add("Start Time", "Start Time");
                dataGridView1->Columns->Add("End Time", "End Time");
                dataGridView1->Columns->Add("Course Name", "Course Name");
                dataGridView1->Columns->Add("Teacher Name", "Teacher Name");
                dataGridView1->Columns->Add("Room ID", "Room ID");

                // Populate the DataGridView with data from the database
                while (reader->Read())
                {
                    String^ day = reader["DayOfWeek"]->ToString();
                    String^ startTime = reader["StartTime"]->ToString();
                    String^ endTime = reader["EndTime"]->ToString();
                    String^ courseName = reader["CourseName"]->ToString();
                    String^ teacherName = reader["TeacherName"]->ToString();
                    String^ roomID = reader["RoomID"]->ToString();

                    // Add the data to the DataGridView
                    dataGridView1->Rows->Add(day, startTime, endTime, courseName, teacherName, roomID);
                }

                // Close the database connection and the reader
                reader->Close();
                connection->Close();
            }
            catch (Exception^ ex)
            {
                // Display an error message if an exception occurs
                MessageBox::Show("An error occurred while fetching timetable data: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
        }


    };
}