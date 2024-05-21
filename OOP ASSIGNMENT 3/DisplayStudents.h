#include <fstream>
#include <string>
#include <vector>

namespace OOPASSIGNMENT2
{
    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace System::IO;
    using namespace System::Collections::Generic; // Add this for List<T>

    // Define a class to represent a student
    ref class Student {
    public:
        String^ EnrollmentID;
        String^ Name;
        String^ Section;
    };

    /// <summary>
    /// Summary for DisplayStudents
    /// </summary>
    public ref class DisplayStudents : public System::Windows::Forms::Form
    {
    public:
        DisplayStudents(void)
        {
            InitializeComponent();
            PopulateDataGridView();
        }

    protected:
        ~DisplayStudents()
        {
            if (components)
            {
                delete components;
            }
        }

    private:
        System::ComponentModel::Container^ components;
        System::Windows::Forms::DataGridView^ dataGridView1;

        void PopulateDataGridView() {
            List<Student^>^ students = gcnew List<Student^>();

            String^ filePath = "students.txt";
            StreamReader^ reader = gcnew StreamReader(filePath);

            String^ line;
            while ((line = reader->ReadLine()) != nullptr) {
                Student^ student = gcnew Student();
                student->EnrollmentID = line;
                student->Name = reader->ReadLine();
                student->Section = reader->ReadLine();

                students->Add(student);
            }

            reader->Close();

            dataGridView1 = gcnew System::Windows::Forms::DataGridView();
            dataGridView1->Dock = DockStyle::Fill;

            dataGridView1->Columns->Add("EnrollmentID", "Enrollment ID");
            dataGridView1->Columns->Add("Name", "Name");
            dataGridView1->Columns->Add("Section", "Section");

            for (int i = 0; i < students->Count; i++)
            {
                dataGridView1->Rows->Add(students[i]->EnrollmentID, students[i]->Name, students[i]->Section);
            }

            this->Controls->Add(dataGridView1);
        }

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            this->components = gcnew System::ComponentModel::Container();
            this->Size = System::Drawing::Size(300, 300);
            this->Text = L"DisplayStudents";
            this->Padding = System::Windows::Forms::Padding(0);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
        }
#pragma endregion
    };
}
