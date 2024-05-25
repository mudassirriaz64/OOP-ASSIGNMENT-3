#include <string>

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


	ref class Student
	{
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
	private:
		System::ComponentModel::Container^ components;
		System::Windows::Forms::DataGridView^ dataGridView1;

		void PopulateDataGridView()
		{
			List<Student^>^ students = gcnew List<Student^>();

			String^ connectionString = "Data Source=DESKTOP-MN4CFP4;Initial Catalog=TIMETABLEDB;Integrated Security=True";
			String^ query = "SELECT EnrollmentID, Name, SectionID FROM Students";

			SqlConnection^ connection = gcnew SqlConnection(connectionString);
			SqlCommand^ command = gcnew SqlCommand(query, connection);

			try
			{
				connection->Open();
				SqlDataReader^ reader = command->ExecuteReader();
				while (reader->Read())
				{
					Student^ student = gcnew Student();
					student->EnrollmentID = reader["EnrollmentID"]->ToString();
					student->Name = reader["Name"]->ToString();
					student->Section = reader["SectionID"]->ToString();

					students->Add(student);
				}
				reader->Close();
			}
			catch (Exception^ ex) 
			{
				MessageBox::Show("An error occurred while fetching data: " + ex->Message);
			}
			finally 
			{
				if (connection->State == ConnectionState::Open) 
				{
					connection->Close();
				}
			}

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
	};
}
