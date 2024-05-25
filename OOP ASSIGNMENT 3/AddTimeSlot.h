#pragma once

namespace OOPASSIGNMENT2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Data::SqlClient;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AddTimeSlot
	/// </summary>
	public ref class AddTimeSlot : public System::Windows::Forms::Form
	{
	public:
		AddTimeSlot(void)
		{
			InitializeComponent();
			void ClearTextBoxes();
			bool CheckForClashes(String ^ day, String ^ startTime, String ^ endTime, String ^ section, String ^ courseName, String ^ teacherName, int roomId);
			bool AddTimeSlotToDatabase(String ^ day, String ^ startTime, String ^ endTime, String ^ section, String ^ courseName, String ^ teacherName, int roomId);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AddTimeSlot()
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
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ AddButton;
	private: System::Windows::Forms::Button^ ClearButton;
	private: System::Windows::Forms::TextBox^ DayTextBox;
	private: System::Windows::Forms::Label^ DayLabel;
	private: System::Windows::Forms::Label^ EndTimeLabel;
	private: System::Windows::Forms::TextBox^ EndTimeTextBox;
	private: System::Windows::Forms::TextBox^ RoomIDTextBox;
	private: System::Windows::Forms::TextBox^ CourseNameTextBox;
	private: System::Windows::Forms::TextBox^ SectionTextBox;
	private: System::Windows::Forms::TextBox^ TeacherNameTextBox;
	private: System::Windows::Forms::Label^ SectionLabel;
	private: System::Windows::Forms::Label^ TeacherNameLabel;
	private: System::Windows::Forms::Label^ CourseNameLabel;
	private: System::Windows::Forms::Label^ RoomLabel;
	private: System::Windows::Forms::TextBox^ TeacherIDTextBox;
	private: System::Windows::Forms::Label^ TeacherIDLabel;
	private: System::Windows::Forms::Button^ CloseButton;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AddTimeSlot::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->AddTimeSlotLabel = (gcnew System::Windows::Forms::Label());
			this->DayLabel = (gcnew System::Windows::Forms::Label());
			this->DayTextBox = (gcnew System::Windows::Forms::TextBox());
			this->SectionLabel = (gcnew System::Windows::Forms::Label());
			this->SectionTextBox = (gcnew System::Windows::Forms::TextBox());
			this->StartTimeTextBox = (gcnew System::Windows::Forms::TextBox());
			this->StartTimeLabel = (gcnew System::Windows::Forms::Label());
			this->EndTimeLabel = (gcnew System::Windows::Forms::Label());
			this->EndTimeTextBox = (gcnew System::Windows::Forms::TextBox());
			this->TeacherNameLabel = (gcnew System::Windows::Forms::Label());
			this->TeacherNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->TeacherIDLabel = (gcnew System::Windows::Forms::Label());
			this->TeacherIDTextBox = (gcnew System::Windows::Forms::TextBox());
			this->CourseNameLabel = (gcnew System::Windows::Forms::Label());
			this->CourseNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->RoomLabel = (gcnew System::Windows::Forms::Label());
			this->RoomIDTextBox = (gcnew System::Windows::Forms::TextBox());
			this->AddButton = (gcnew System::Windows::Forms::Button());
			this->ClearButton = (gcnew System::Windows::Forms::Button());
			this->CloseButton = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(293, 21);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(354, 191);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 55;
			this->pictureBox1->TabStop = false;
			// 
			// AddTimeSlotLabel
			// 
			this->AddTimeSlotLabel->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->AddTimeSlotLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AddTimeSlotLabel->Location = System::Drawing::Point(268, 215);
			this->AddTimeSlotLabel->Name = L"AddTimeSlotLabel";
			this->AddTimeSlotLabel->Size = System::Drawing::Size(360, 28);
			this->AddTimeSlotLabel->TabIndex = 56;
			this->AddTimeSlotLabel->Text = L"     Add TimeSlot";
			this->AddTimeSlotLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// DayLabel
			// 
			this->DayLabel->AutoSize = true;
			this->DayLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DayLabel->Location = System::Drawing::Point(23, 262);
			this->DayLabel->Name = L"DayLabel";
			this->DayLabel->Size = System::Drawing::Size(123, 27);
			this->DayLabel->TabIndex = 51;
			this->DayLabel->Text = L"Enter Day :";
			this->DayLabel->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// DayTextBox
			// 
			this->DayTextBox->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DayTextBox->Location = System::Drawing::Point(28, 292);
			this->DayTextBox->Name = L"DayTextBox";
			this->DayTextBox->Size = System::Drawing::Size(382, 35);
			this->DayTextBox->TabIndex = 53;
			// 
			// SectionLabel
			// 
			this->SectionLabel->AutoSize = true;
			this->SectionLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SectionLabel->Location = System::Drawing::Point(515, 262);
			this->SectionLabel->Name = L"SectionLabel";
			this->SectionLabel->Size = System::Drawing::Size(154, 27);
			this->SectionLabel->TabIndex = 73;
			this->SectionLabel->Text = L"Enter Section :";
			this->SectionLabel->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// SectionTextBox
			// 
			this->SectionTextBox->AccessibleName = L"";
			this->SectionTextBox->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SectionTextBox->Location = System::Drawing::Point(514, 292);
			this->SectionTextBox->Name = L"SectionTextBox";
			this->SectionTextBox->Size = System::Drawing::Size(382, 35);
			this->SectionTextBox->TabIndex = 75;
			// 
			// StartTimeTextBox
			// 
			this->StartTimeTextBox->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StartTimeTextBox->Location = System::Drawing::Point(28, 375);
			this->StartTimeTextBox->Name = L"StartTimeTextBox";
			this->StartTimeTextBox->Size = System::Drawing::Size(382, 35);
			this->StartTimeTextBox->TabIndex = 58;
			// 
			// StartTimeLabel
			// 
			this->StartTimeLabel->AutoSize = true;
			this->StartTimeLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StartTimeLabel->Location = System::Drawing::Point(23, 345);
			this->StartTimeLabel->Name = L"StartTimeLabel";
			this->StartTimeLabel->Size = System::Drawing::Size(176, 27);
			this->StartTimeLabel->TabIndex = 57;
			this->StartTimeLabel->Text = L"Enter Start time :";
			this->StartTimeLabel->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// EndTimeLabel
			// 
			this->EndTimeLabel->AutoSize = true;
			this->EndTimeLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EndTimeLabel->Location = System::Drawing::Point(515, 345);
			this->EndTimeLabel->Name = L"EndTimeLabel";
			this->EndTimeLabel->Size = System::Drawing::Size(176, 27);
			this->EndTimeLabel->TabIndex = 64;
			this->EndTimeLabel->Text = L"Enter End Time :";
			this->EndTimeLabel->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// EndTimeTextBox
			// 
			this->EndTimeTextBox->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EndTimeTextBox->Location = System::Drawing::Point(514, 375);
			this->EndTimeTextBox->Name = L"EndTimeTextBox";
			this->EndTimeTextBox->Size = System::Drawing::Size(382, 35);
			this->EndTimeTextBox->TabIndex = 65;
			// 
			// TeacherNameLabel
			// 
			this->TeacherNameLabel->AutoSize = true;
			this->TeacherNameLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TeacherNameLabel->Location = System::Drawing::Point(23, 427);
			this->TeacherNameLabel->Name = L"TeacherNameLabel";
			this->TeacherNameLabel->Size = System::Drawing::Size(222, 27);
			this->TeacherNameLabel->TabIndex = 72;
			this->TeacherNameLabel->Text = L"Enter Teacher Name :";
			this->TeacherNameLabel->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// TeacherNameTextBox
			// 
			this->TeacherNameTextBox->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TeacherNameTextBox->Location = System::Drawing::Point(28, 457);
			this->TeacherNameTextBox->Name = L"TeacherNameTextBox";
			this->TeacherNameTextBox->Size = System::Drawing::Size(382, 35);
			this->TeacherNameTextBox->TabIndex = 74;
			// 
			// TeacherIDLabel
			// 
			this->TeacherIDLabel->AutoSize = true;
			this->TeacherIDLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TeacherIDLabel->Location = System::Drawing::Point(509, 427);
			this->TeacherIDLabel->Name = L"TeacherIDLabel";
			this->TeacherIDLabel->Size = System::Drawing::Size(190, 27);
			this->TeacherIDLabel->TabIndex = 79;
			this->TeacherIDLabel->Text = L"Enter Teacher ID :";
			this->TeacherIDLabel->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// TeacherIDTextBox
			// 
			this->TeacherIDTextBox->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TeacherIDTextBox->Location = System::Drawing::Point(514, 457);
			this->TeacherIDTextBox->Name = L"TeacherIDTextBox";
			this->TeacherIDTextBox->Size = System::Drawing::Size(382, 35);
			this->TeacherIDTextBox->TabIndex = 78;
			// 
			// CourseNameLabel
			// 
			this->CourseNameLabel->AutoSize = true;
			this->CourseNameLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CourseNameLabel->Location = System::Drawing::Point(23, 508);
			this->CourseNameLabel->Name = L"CourseNameLabel";
			this->CourseNameLabel->Size = System::Drawing::Size(214, 27);
			this->CourseNameLabel->TabIndex = 71;
			this->CourseNameLabel->Text = L"Enter Course Name :";
			this->CourseNameLabel->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// CourseNameTextBox
			// 
			this->CourseNameTextBox->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CourseNameTextBox->Location = System::Drawing::Point(28, 538);
			this->CourseNameTextBox->Name = L"CourseNameTextBox";
			this->CourseNameTextBox->Size = System::Drawing::Size(382, 35);
			this->CourseNameTextBox->TabIndex = 76;
			// 
			// RoomLabel
			// 
			this->RoomLabel->AutoSize = true;
			this->RoomLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RoomLabel->Location = System::Drawing::Point(515, 508);
			this->RoomLabel->Name = L"RoomLabel";
			this->RoomLabel->Size = System::Drawing::Size(141, 27);
			this->RoomLabel->TabIndex = 70;
			this->RoomLabel->Text = L"Enter Room :";
			this->RoomLabel->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// RoomIDTextBox
			// 
			this->RoomIDTextBox->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RoomIDTextBox->Location = System::Drawing::Point(514, 538);
			this->RoomIDTextBox->Name = L"RoomIDTextBox";
			this->RoomIDTextBox->Size = System::Drawing::Size(382, 35);
			this->RoomIDTextBox->TabIndex = 77;
			// 
			// AddButton
			// 
			this->AddButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->AddButton->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AddButton->Location = System::Drawing::Point(28, 609);
			this->AddButton->Name = L"AddButton";
			this->AddButton->Size = System::Drawing::Size(254, 51);
			this->AddButton->TabIndex = 50;
			this->AddButton->Text = L"Add";
			this->AddButton->UseVisualStyleBackColor = true;
			this->AddButton->Click += gcnew System::EventHandler(this, &AddTimeSlot::AddButton_Click);
			// 
			// ClearButton
			// 
			this->ClearButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->ClearButton->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ClearButton->Location = System::Drawing::Point(339, 609);
			this->ClearButton->Name = L"ClearButton";
			this->ClearButton->Size = System::Drawing::Size(254, 51);
			this->ClearButton->TabIndex = 52;
			this->ClearButton->Text = L"Clear";
			this->ClearButton->UseVisualStyleBackColor = true;
			this->ClearButton->Click += gcnew System::EventHandler(this, &AddTimeSlot::ClearButton_Click);
			// 
			// CloseButton
			// 
			this->CloseButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->CloseButton->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CloseButton->Location = System::Drawing::Point(642, 609);
			this->CloseButton->Name = L"CloseButton";
			this->CloseButton->Size = System::Drawing::Size(254, 51);
			this->CloseButton->TabIndex = 81;
			this->CloseButton->Text = L"Close";
			this->CloseButton->UseVisualStyleBackColor = true;
			this->CloseButton->Click += gcnew System::EventHandler(this, &AddTimeSlot::CloseButton_Click);
			// 
			// AddTimeSlot
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(947, 684);
			this->Controls->Add(this->CloseButton);
			this->Controls->Add(this->TeacherIDLabel);
			this->Controls->Add(this->TeacherIDTextBox);
			this->Controls->Add(this->RoomIDTextBox);
			this->Controls->Add(this->CourseNameTextBox);
			this->Controls->Add(this->SectionTextBox);
			this->Controls->Add(this->TeacherNameTextBox);
			this->Controls->Add(this->SectionLabel);
			this->Controls->Add(this->TeacherNameLabel);
			this->Controls->Add(this->CourseNameLabel);
			this->Controls->Add(this->RoomLabel);
			this->Controls->Add(this->EndTimeTextBox);
			this->Controls->Add(this->EndTimeLabel);
			this->Controls->Add(this->StartTimeTextBox);
			this->Controls->Add(this->StartTimeLabel);
			this->Controls->Add(this->AddTimeSlotLabel);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->AddButton);
			this->Controls->Add(this->ClearButton);
			this->Controls->Add(this->DayTextBox);
			this->Controls->Add(this->DayLabel);
			this->Name = L"AddTimeSlot";
			this->Text = L"AddTimeSlot";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		bool AddTimeSlotToDatabase(String^ day, String^ startTime, String^ endTime, String^ section, String^ courseName, String^ teacherName, String^ roomId, String^ AppId)
		{
			try
			{
				SqlConnection^ con = gcnew SqlConnection("Data Source=DESKTOP-MN4CFP4;Initial Catalog=TIMETABLEDB;Integrated Security=True");
				con->Open();

				SqlCommand^ checkTimeslotCmd = gcnew SqlCommand(
					"IF NOT EXISTS (SELECT 1 FROM Timeslots WHERE DayOfWeek = @Day AND StartTime = @StartTime AND EndTime = @EndTime) "
					"BEGIN "
					"INSERT INTO Timeslots (DayOfWeek, StartTime, EndTime) VALUES (@Day, @StartTime, @EndTime) "
					"END", con);
				checkTimeslotCmd->Parameters->AddWithValue("@Day", day);
				checkTimeslotCmd->Parameters->AddWithValue("@StartTime", startTime);
				checkTimeslotCmd->Parameters->AddWithValue("@EndTime", endTime);
				checkTimeslotCmd->ExecuteNonQuery();

				SqlCommand^ checkSectionCmd = gcnew SqlCommand(
					"IF NOT EXISTS (SELECT 1 FROM Sections WHERE SectionID = @SectionID) "
					"BEGIN "
					"INSERT INTO Sections (SectionID) VALUES (@SectionID) "
					"END", con);
				checkSectionCmd->Parameters->AddWithValue("@SectionID", section);
				checkSectionCmd->ExecuteNonQuery();

				SqlCommand^ checkRoomCmd = gcnew SqlCommand(
					"IF NOT EXISTS (SELECT 1 FROM Rooms WHERE RoomID = @RoomID) "
					"BEGIN "
					"INSERT INTO Rooms (RoomID) VALUES (@RoomID) "
					"END", con);
				checkRoomCmd->Parameters->AddWithValue("@RoomID", roomId);
				checkRoomCmd->ExecuteNonQuery();

				SqlCommand^ checkTeacherCmd = gcnew SqlCommand(
					"IF NOT EXISTS (SELECT 1 FROM Teachers WHERE ApplicationID = @AppID) "
					"BEGIN "
					"INSERT INTO Teachers (Name, ApplicationID) VALUES (@TeacherName, @AppID) "
					"END", con);
				checkTeacherCmd->Parameters->AddWithValue("@AppID", AppId);
				checkTeacherCmd->Parameters->AddWithValue("@TeacherName", teacherName);
				checkTeacherCmd->ExecuteNonQuery();


				SqlCommand^ timetableCmd = gcnew SqlCommand(
					"INSERT INTO Timetables (TeacherID, SectionID, RoomID, DayOfWeek, StartTime, EndTime, CourseName,TeacherName) "
					"VALUES (@TeacherID, @SectionID, @RoomID, @Day, @StartTime, @EndTime, @CourseName,@TeacherName)", con);
				timetableCmd->Parameters->AddWithValue("@TeacherID", AppId);
				timetableCmd->Parameters->AddWithValue("@TeacherName", teacherName);
				timetableCmd->Parameters->AddWithValue("@SectionID", section);
				timetableCmd->Parameters->AddWithValue("@RoomID", roomId);
				timetableCmd->Parameters->AddWithValue("@Day", day);
				timetableCmd->Parameters->AddWithValue("@StartTime", startTime);
				timetableCmd->Parameters->AddWithValue("@EndTime", endTime);
				timetableCmd->Parameters->AddWithValue("@CourseName", courseName);


				int rowsAffected = timetableCmd->ExecuteNonQuery();

				con->Close();

				return rowsAffected > 0;
			}
			catch (Exception^ ex)
			{
				MessageBox::Show("An error occurred while adding the time slot: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return false;
			}
		}

		void ClearTextBoxes()
		{
			DayTextBox->Clear();
			SectionTextBox->Clear();
			StartTimeTextBox->Clear();
			EndTimeTextBox->Clear();
			TeacherNameTextBox->Clear();
			TeacherIDTextBox->Clear();
			CourseNameTextBox->Clear();
			RoomIDTextBox->Clear();
		}
		bool CheckForClashes(String^ day, String^ startTime, String^ endTime, String^ section, String^ courseName, String^ teacherName, String^ roomId, String^ AppID)
		{
			try
			{
				SqlConnection^ con = gcnew SqlConnection("Data Source=DESKTOP-MN4CFP4;Initial Catalog=TIMETABLEDB;Integrated Security=True");
				con->Open();

				SqlCommand^ roomCmd = gcnew SqlCommand(
					"SELECT COUNT(*) FROM Timetables "
					"WHERE DayOfWeek = @Day AND "
					"((StartTime <= @StartTime AND EndTime > @StartTime) OR (StartTime < @EndTime AND EndTime >= @EndTime)) "
					"AND RoomID = @RoomID", con);
				roomCmd->Parameters->AddWithValue("@Day", day);
				roomCmd->Parameters->AddWithValue("@StartTime", startTime);
				roomCmd->Parameters->AddWithValue("@EndTime", endTime);
				roomCmd->Parameters->AddWithValue("@RoomID", roomId);
				int roomCount = Convert::ToInt32(roomCmd->ExecuteScalar());

				if (roomCount > 0)
				{
					return true;
				}

				SqlCommand^ teacherCmd = gcnew SqlCommand(
					"SELECT COUNT(*) FROM Timetables "
					"WHERE DayOfWeek = @Day AND "
					"((StartTime <= @StartTime AND EndTime > @StartTime) OR (StartTime < @EndTime AND EndTime >= @EndTime)) "
					"AND TeacherID = (SELECT ApplicationID FROM Teachers WHERE Name = @TeacherName)", con);
				teacherCmd->Parameters->AddWithValue("@Day", day);
				teacherCmd->Parameters->AddWithValue("@StartTime", startTime);
				teacherCmd->Parameters->AddWithValue("@EndTime", endTime);
				teacherCmd->Parameters->AddWithValue("@TeacherName", teacherName);
				int teacherCount = Convert::ToInt32(teacherCmd->ExecuteScalar());

				if (teacherCount > 0)
				{
					return true;
				}

				SqlCommand^ courseCmd = gcnew SqlCommand(
					"SELECT COUNT(*) FROM Timetables "
					"WHERE DayOfWeek = @Day AND "
					"((StartTime <= @StartTime AND EndTime > @StartTime) OR (StartTime < @EndTime AND EndTime >= @EndTime)) "
					"AND SectionID = @SectionID AND CourseName = @CourseName", con);
				courseCmd->Parameters->AddWithValue("@Day", day);
				courseCmd->Parameters->AddWithValue("@StartTime", startTime);
				courseCmd->Parameters->AddWithValue("@EndTime", endTime);
				courseCmd->Parameters->AddWithValue("@SectionID", section);
				courseCmd->Parameters->AddWithValue("@CourseName", courseName);
				int courseCount = Convert::ToInt32(courseCmd->ExecuteScalar());

				if (courseCount > 0)
				{
					return true;
				}

				con->Close();
			}
			catch (Exception^ ex)
			{
				MessageBox::Show("Error checking for clashes: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return true;
			}
			return false;
		}

	private: System::Void AddButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		String^ day = DayTextBox->Text;
		String^ startTime = StartTimeTextBox->Text;
		String^ endTime = EndTimeTextBox->Text;
		String^ section = SectionTextBox->Text;
		String^ courseName = CourseNameTextBox->Text;
		String^ teacherName = TeacherNameTextBox->Text;
		String^ ApplicationID = TeacherIDTextBox->Text;
		String^ roomId = RoomIDTextBox->Text;
		
		if (!CheckForClashes(day, startTime, endTime, section, courseName, teacherName, roomId, ApplicationID))
		{
			if (AddTimeSlotToDatabase(day, startTime, endTime, section, courseName, teacherName, roomId, ApplicationID))
			{
				MessageBox::Show("Time Slot Added Successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
				ClearTextBoxes();
			}
			else
			{
				MessageBox::Show("Failed To Add Time Slot!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		else
		{
			MessageBox::Show("Clash Detected! Please Choose Another Time OR Room OR Teacher.", "Clash Detected", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
	private: System::Void ClearButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		ClearTextBoxes();
	}
	private: System::Void CloseButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Hide();
	}
};
}
