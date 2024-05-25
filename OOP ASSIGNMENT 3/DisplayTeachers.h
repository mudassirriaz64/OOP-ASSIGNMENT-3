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
    using namespace System::Collections::Generic;
    using namespace System::Data::SqlClient;

    ref class Teacher
    {
    public:
        String^ ApplicationID;
        String^ Name;
    };

    /// <summary>
    /// Summary for DisplayStudents
    /// </summary>
    public ref class DisplayTeachers : public System::Windows::Forms::Form
    {
    public:
        DisplayTeachers(void)
        {
            InitializeComponent();
            PopulateDataGridView();
        }

    protected:
        ~DisplayTeachers()
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
        void InitializeComponent(void)
        {
            this->components = gcnew System::ComponentModel::Container();
            this->Size = System::Drawing::Size(380, 300);
            this->Text = L"DisplayStudents";
            this->Padding = System::Windows::Forms::Padding(0);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
        }
#pragma endregion
        void PopulateDataGridView()
        {
            List<Teacher^>^ teachers = gcnew List<Teacher^>();

            String^ connectionString = "Data Source=DESKTOP-MN4CFP4;Initial Catalog=TIMETABLEDB;Integrated Security=True";
            String^ query = "SELECT ApplicationID, Name FROM Teachers";

            SqlConnection^ connection = gcnew SqlConnection(connectionString);
            SqlCommand^ command = gcnew SqlCommand(query, connection);

            try 
            {
                connection->Open();
                SqlDataReader^ reader = command->ExecuteReader();

                while (reader->Read()) 
                {
                    Teacher^ teacher = gcnew Teacher();
                    teacher->ApplicationID = reader["ApplicationID"]->ToString();
                    teacher->Name = reader["Name"]->ToString();
                    teachers->Add(teacher);
                }

                reader->Close();
            }
            catch (Exception^ ex)
            {
                MessageBox::Show("An error occurred while fetching data: " + ex->Message);
            }

            finally {
                if (connection->State == ConnectionState::Open) 
                {
                    connection->Close();
                }
            }

            dataGridView1 = gcnew System::Windows::Forms::DataGridView();
            dataGridView1->Dock = DockStyle::Fill;
            dataGridView1->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;

            dataGridView1->Columns->Add("ApplicationID", "Application ID");
            dataGridView1->Columns->Add("Name", "Name");

            for(int i = 0; i < teachers->Count; i++)
			{
				dataGridView1->Rows->Add(teachers[i]->ApplicationID, teachers[i]->Name);
			}
            this->Controls->Add(dataGridView1);
        }
    };
}
