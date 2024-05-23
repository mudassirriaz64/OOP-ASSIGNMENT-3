#pragma once

#include <msclr/marshal_cppstd.h> // Include this for string marshaling

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

    /// <summary>
    /// Summary for TeacherTimeTableForm
    /// </summary>
    public ref class TeacherTimeTableForm : public System::Windows::Forms::Form
    {
    public:
        TeacherTimeTableForm(String^ teacherName, String^ teacherID)
        {
            InitializeComponent();
            //
            //TODO: Add the constructor code here
            //

            // Populate the DataGridView with teacher information
            PopulateTeacherData(teacherName, teacherID);

            labelTeacherName->Text = "Teacher Name: " + teacherName;
            labelTeacherID->Text = "Teacher ID: " + teacherID;
        }

    protected:
        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        ~TeacherTimeTableForm()
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
        System::Windows::Forms::Label^ labelTeacherName; // Added declaration
        System::Windows::Forms::Label^ labelTeacherID;

#pragma region Windows Form Designer generated code
        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        void InitializeComponent(void)
        {
            this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
            this->labelTeacherName = (gcnew System::Windows::Forms::Label());
            this->labelTeacherID = (gcnew System::Windows::Forms::Label());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
            this->SuspendLayout();
            // 
            // dataGridView1
            // 
            this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::Control;
            this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView1->Location = System::Drawing::Point(14, 75);
            this->dataGridView1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
            this->dataGridView1->Name = L"dataGridView1";
            this->dataGridView1->RowHeadersWidth = 62;
            this->dataGridView1->Size = System::Drawing::Size(1125, 750);
            this->dataGridView1->TabIndex = 0;
            // 
            // labelTeacherName
            // 
            this->labelTeacherName->AutoSize = true;
            this->labelTeacherName->Location = System::Drawing::Point(14, 11);
            this->labelTeacherName->Name = L"labelTeacherName";
            this->labelTeacherName->Size = System::Drawing::Size(117, 20);
            this->labelTeacherName->TabIndex = 1;
            this->labelTeacherName->Text = L"Teacher Name:";
            // 
            // labelTeacherID
            // 
            this->labelTeacherID->AutoSize = true;
            this->labelTeacherID->Location = System::Drawing::Point(14, 38);
            this->labelTeacherID->Name = L"labelTeacherID";
            this->labelTeacherID->Size = System::Drawing::Size(92, 20);
            this->labelTeacherID->TabIndex = 2;
            this->labelTeacherID->Text = L"Teacher ID:";
            // 
            // TeacherTimeTableForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::White;
            this->ClientSize = System::Drawing::Size(1152, 840);
            this->Controls->Add(this->labelTeacherID);
            this->Controls->Add(this->labelTeacherName);
            this->Controls->Add(this->dataGridView1);
            this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
            this->Name = L"TeacherTimeTableForm";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
            this->Text = L"Teacher Time Table";
            this->Load += gcnew System::EventHandler(this, &TeacherTimeTableForm::TeacherTimeTableForm_Load);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }

#pragma endregion

        void PopulateTeacherData(String^ teacherName, String^ teacherID)
        {
            // Clear existing rows in the DataGridView

            dataGridView1->Columns->Add("Day", "Day");
            dataGridView1->Columns->Add("StartTime", "Start Time");
            dataGridView1->Columns->Add("EndTime", "End Time");
            dataGridView1->Columns->Add("SectionID", "Section ID");
            dataGridView1->Columns->Add("CourseName", "Course Name");
            dataGridView1->Columns->Add("RoomID", "Room ID");

            dataGridView1->Rows->Clear();

            try
            {
                // Connect to the database
                SqlConnection^ con = gcnew SqlConnection("Data Source=DESKTOP-MN4CFP4;Initial Catalog=TIMETABLEDB;Integrated Security=True");
                con->Open();

                // Query to retrieve timetable data for the specified teacher
                SqlCommand^ cmd = gcnew SqlCommand("SELECT DayOfWeek, StartTime, EndTime, SectionID, CourseName, RoomID FROM Timetables WHERE TeacherID = @TeacherID", con);
                cmd->Parameters->AddWithValue("@TeacherID", teacherID);

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
                    String^ roomID = reader["RoomID"]->ToString();

                    // Add the data to the DataGridView
                    dataGridView1->Rows->Add(day, startTime, endTime, sectionID, courseName, roomID);
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

    private: System::Void TeacherTimeTableForm_Load(System::Object^ sender, System::EventArgs^ e) {
    }
    };
}