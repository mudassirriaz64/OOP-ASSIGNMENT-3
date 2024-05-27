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

	/// <summary>
	/// Summary for RemoveTimeSlot
	/// </summary>
	public ref class SearchTimeSlot : public System::Windows::Forms::Form
	{
	public:
		SearchTimeSlot(void)
		{
			InitializeComponent();
			InitializeDataGridView();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~SearchTimeSlot()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ StartTimeTextBox;
	private: System::Windows::Forms::Label^ StartTimeLabel;
	private: System::Windows::Forms::Label^ AddTimeSlotLabel;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ SearchButton;
	private: System::Windows::Forms::Button^ ClearButton;
	private: System::Windows::Forms::TextBox^ DayTextBox;
	private: System::Windows::Forms::Label^ DayLabel;
	private: System::Windows::Forms::Button^ CloseButton;
	private: System::Windows::Forms::DataGridView^ dataGridView1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SearchTimeSlot::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->AddTimeSlotLabel = (gcnew System::Windows::Forms::Label());
			this->DayLabel = (gcnew System::Windows::Forms::Label());
			this->DayTextBox = (gcnew System::Windows::Forms::TextBox());
			this->StartTimeTextBox = (gcnew System::Windows::Forms::TextBox());
			this->StartTimeLabel = (gcnew System::Windows::Forms::Label());
			this->SearchButton = (gcnew System::Windows::Forms::Button());
			this->ClearButton = (gcnew System::Windows::Forms::Button());
			this->CloseButton = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(404, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(354, 166);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 55;
			this->pictureBox1->TabStop = false;
			// 
			// AddTimeSlotLabel
			// 
			this->AddTimeSlotLabel->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->AddTimeSlotLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AddTimeSlotLabel->Location = System::Drawing::Point(399, 190);
			this->AddTimeSlotLabel->Name = L"AddTimeSlotLabel";
			this->AddTimeSlotLabel->Size = System::Drawing::Size(360, 28);
			this->AddTimeSlotLabel->TabIndex = 56;
			this->AddTimeSlotLabel->Text = L"   Search TimeSlot";
			this->AddTimeSlotLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// DayLabel
			// 
			this->DayLabel->AutoSize = true;
			this->DayLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DayLabel->Location = System::Drawing::Point(32, 235);
			this->DayLabel->Name = L"DayLabel";
			this->DayLabel->Size = System::Drawing::Size(123, 27);
			this->DayLabel->TabIndex = 51;
			this->DayLabel->Text = L"Enter Day :";
			this->DayLabel->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// DayTextBox
			// 
			this->DayTextBox->AcceptsReturn = true;
			this->DayTextBox->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DayTextBox->Location = System::Drawing::Point(161, 235);
			this->DayTextBox->Name = L"DayTextBox";
			this->DayTextBox->Size = System::Drawing::Size(378, 35);
			this->DayTextBox->TabIndex = 53;
			this->DayTextBox->Text = L"\r\n";
			// 
			// StartTimeTextBox
			// 
			this->StartTimeTextBox->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StartTimeTextBox->Location = System::Drawing::Point(764, 235);
			this->StartTimeTextBox->Name = L"StartTimeTextBox";
			this->StartTimeTextBox->Size = System::Drawing::Size(378, 35);
			this->StartTimeTextBox->TabIndex = 58;
			// 
			// StartTimeLabel
			// 
			this->StartTimeLabel->AutoSize = true;
			this->StartTimeLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StartTimeLabel->Location = System::Drawing::Point(576, 238);
			this->StartTimeLabel->Name = L"StartTimeLabel";
			this->StartTimeLabel->Size = System::Drawing::Size(182, 27);
			this->StartTimeLabel->TabIndex = 57;
			this->StartTimeLabel->Text = L"Enter Start Time :";
			this->StartTimeLabel->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// SearchButton
			// 
			this->SearchButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->SearchButton->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SearchButton->Location = System::Drawing::Point(581, 584);
			this->SearchButton->Name = L"SearchButton";
			this->SearchButton->Size = System::Drawing::Size(149, 51);
			this->SearchButton->TabIndex = 50;
			this->SearchButton->Text = L"Search";
			this->SearchButton->UseVisualStyleBackColor = true;
			this->SearchButton->Click += gcnew System::EventHandler(this, &SearchTimeSlot::SearchButton_Click);
			// 
			// ClearButton
			// 
			this->ClearButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->ClearButton->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ClearButton->Location = System::Drawing::Point(161, 584);
			this->ClearButton->Name = L"ClearButton";
			this->ClearButton->Size = System::Drawing::Size(144, 51);
			this->ClearButton->TabIndex = 52;
			this->ClearButton->Text = L"Clear";
			this->ClearButton->UseVisualStyleBackColor = true;
			this->ClearButton->Click += gcnew System::EventHandler(this, &SearchTimeSlot::ClearButton_Click);
			// 
			// CloseButton
			// 
			this->CloseButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->CloseButton->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CloseButton->Location = System::Drawing::Point(995, 584);
			this->CloseButton->Name = L"CloseButton";
			this->CloseButton->Size = System::Drawing::Size(156, 51);
			this->CloseButton->TabIndex = 81;
			this->CloseButton->Text = L"Close";
			this->CloseButton->UseVisualStyleBackColor = true;
			this->CloseButton->Click += gcnew System::EventHandler(this, &SearchTimeSlot::CloseButton_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeight = 34;
			this->dataGridView1->Location = System::Drawing::Point(47, 300);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->Size = System::Drawing::Size(1151, 256);
			this->dataGridView1->TabIndex = 82;
			// 
			// SearchTimeSlot
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(1229, 686);
			this->Controls->Add(this->CloseButton);
			this->Controls->Add(this->StartTimeTextBox);
			this->Controls->Add(this->StartTimeLabel);
			this->Controls->Add(this->AddTimeSlotLabel);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->SearchButton);
			this->Controls->Add(this->ClearButton);
			this->Controls->Add(this->DayTextBox);
			this->Controls->Add(this->DayLabel);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"SearchTimeSlot";
			this->Text = L"SearchTimeSlot";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		void ClearTextBoxes()
		{
			DayTextBox->Clear();
			StartTimeTextBox->Clear();
			dataGridView1->Rows->Clear();
			dataGridView1->Columns->Clear();
		}

		void InitializeDataGridView()
		{
			dataGridView1->Columns->Add("Day", "Day");
			dataGridView1->Columns->Add("Start Time", "Start Time");
			dataGridView1->Columns->Add("End Time", "End Time");
			dataGridView1->Columns->Add("Section", "Section");
			dataGridView1->Columns->Add("Teacher Name", "Teacher Name");
			dataGridView1->Columns->Add("Course Name", "Course Name");
			dataGridView1->Columns->Add("Room ID", "Room ID");
		}


	private: System::Void SearchButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		String^ day = DayTextBox->Text->Trim();
		String^ startTime = StartTimeTextBox->Text->Trim();

		try
		{
			dataGridView1->Rows->Clear();
			dataGridView1->Columns->Clear();

			InitializeDataGridView();
			SqlConnection^ con = gcnew SqlConnection("Data Source=DESKTOP-MN4CFP4;Initial Catalog=TIMETABLEDB;Integrated Security=True");
			con->Open();

			SqlCommand^ cmd = gcnew SqlCommand("SELECT DayOfWeek, StartTime, EndTime, SectionID, TeacherName, CourseName, RoomID FROM Timetables WHERE DayOfWeek = @Day AND StartTime = @StartTime", con);
			cmd->Parameters->AddWithValue("@Day", day);
			cmd->Parameters->AddWithValue("@StartTime", startTime);

			SqlDataReader^ reader = cmd->ExecuteReader();

			while (reader->Read())
			{
				String^ day = reader["DayOfWeek"]->ToString();
				String^ startTime = reader["StartTime"]->ToString();
				String^ endTime = reader["EndTime"]->ToString();
				String^ sectionID = reader["SectionID"]->ToString();
				String^ teacherName = reader["TeacherName"]->ToString();
				String^ courseName = reader["CourseName"]->ToString();
				String^ roomID = reader["RoomID"]->ToString();

				dataGridView1->Rows->Add(day, startTime, endTime, sectionID, teacherName, courseName, roomID);
			}

			reader->Close();
			con->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("An error occurred while retrieving data: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: System::Void ClearButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		ClearTextBoxes();
	}

	private: System::Void CloseButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Close();
	}
};
}
