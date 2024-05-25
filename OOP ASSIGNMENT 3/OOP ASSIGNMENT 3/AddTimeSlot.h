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
	private: System::Windows::Forms::TextBox^ textBox2;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ ok;
	private: System::Windows::Forms::Button^ reset;
	private: System::Windows::Forms::TextBox^ name;
	private: System::Windows::Forms::Label^ label1;





	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Button^ button3;





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
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->ok = (gcnew System::Windows::Forms::Button());
			this->reset = (gcnew System::Windows::Forms::Button());
			this->name = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(28, 375);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(382, 35);
			this->textBox2->TabIndex = 58;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(23, 345);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(176, 27);
			this->label2->TabIndex = 57;
			this->label2->Text = L"Enter Start time :";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label2->Click += gcnew System::EventHandler(this, &AddTimeSlot::label2_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(238, 218);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->textBox1->Size = System::Drawing::Size(418, 28);
			this->textBox1->TabIndex = 56;
			this->textBox1->Text = L"     Add TimeSlot";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &AddTimeSlot::textBox1_TextChanged);
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
			// button1
			// 
			this->button1->Location = System::Drawing::Point(0, 0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			// 
			// ok
			// 
			this->ok->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->ok->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ok->Location = System::Drawing::Point(28, 609);
			this->ok->Name = L"ok";
			this->ok->Size = System::Drawing::Size(254, 51);
			this->ok->TabIndex = 50;
			this->ok->Text = L"Add";
			this->ok->UseVisualStyleBackColor = true;
			this->ok->Click += gcnew System::EventHandler(this, &AddTimeSlot::ok_Click);
			// 
			// reset
			// 
			this->reset->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->reset->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->reset->Location = System::Drawing::Point(339, 609);
			this->reset->Name = L"reset";
			this->reset->Size = System::Drawing::Size(254, 51);
			this->reset->TabIndex = 52;
			this->reset->Text = L"Clear";
			this->reset->UseVisualStyleBackColor = true;
			this->reset->Click += gcnew System::EventHandler(this, &AddTimeSlot::reset_Click);
			// 
			// name
			// 
			this->name->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->name->Location = System::Drawing::Point(28, 307);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(382, 35);
			this->name->TabIndex = 53;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(23, 277);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(123, 27);
			this->label1->TabIndex = 51;
			this->label1->Text = L"Enter Day :";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(23, 413);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(176, 27);
			this->label8->TabIndex = 64;
			this->label8->Text = L"Enter End Time :";
			this->label8->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(28, 443);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(382, 35);
			this->textBox3->TabIndex = 65;
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->Location = System::Drawing::Point(514, 516);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(382, 35);
			this->textBox7->TabIndex = 77;
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(514, 448);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(382, 35);
			this->textBox6->TabIndex = 76;
			// 
			// textBox5
			// 
			this->textBox5->AccessibleName = L"";
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(514, 307);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(382, 35);
			this->textBox5->TabIndex = 75;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &AddTimeSlot::textBox5_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(514, 380);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(382, 35);
			this->textBox4->TabIndex = 74;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &AddTimeSlot::textBox4_TextChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(515, 277);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(154, 27);
			this->label7->TabIndex = 73;
			this->label7->Text = L"Enter Section :";
			this->label7->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(509, 345);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(222, 27);
			this->label6->TabIndex = 72;
			this->label6->Text = L"Enter Teacher Name :";
			this->label6->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(509, 418);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(209, 27);
			this->label5->TabIndex = 71;
			this->label5->Text = L"Enter Course name :";
			this->label5->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(515, 486);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(141, 27);
			this->label4->TabIndex = 70;
			this->label4->Text = L"Enter Room :";
			this->label4->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox8->Location = System::Drawing::Point(28, 516);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(382, 35);
			this->textBox8->TabIndex = 78;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(23, 486);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(190, 27);
			this->label3->TabIndex = 79;
			this->label3->Text = L"Enter Teacher ID :";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label3->Click += gcnew System::EventHandler(this, &AddTimeSlot::label3_Click);
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(642, 609);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(254, 51);
			this->button3->TabIndex = 81;
			this->button3->Text = L"Exit";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &AddTimeSlot::button3_Click);
			// 
			// AddTimeSlot
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(947, 684);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->ok);
			this->Controls->Add(this->reset);
			this->Controls->Add(this->name);
			this->Controls->Add(this->label1);
			this->Name = L"AddTimeSlot";
			this->Text = L"AddTimeSlot";
			this->Load += gcnew System::EventHandler(this, &AddTimeSlot::AddTimeSlot_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void AddTimeSlot_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
	}
		   bool AddTimeSlotToDatabase(String^ day, String^ startTime, String^ endTime, String^ section, String^ courseName, String^ teacherName, String^ roomId, String^ AppId)
		   {
			   try
			   {
				   SqlConnection^ con = gcnew SqlConnection("Data Source=DESKTOP-MN4CFP4;Initial Catalog=TIMETABLEDB;Integrated Security=True");
				   con->Open();

				   // Insert the new timeslot into the Timeslots table if it doesn't already exist
				   SqlCommand^ checkTimeslotCmd = gcnew SqlCommand(
					   "IF NOT EXISTS (SELECT 1 FROM Timeslots WHERE DayOfWeek = @Day AND StartTime = @StartTime AND EndTime = @EndTime) "
					   "BEGIN "
					   "INSERT INTO Timeslots (DayOfWeek, StartTime, EndTime) VALUES (@Day, @StartTime, @EndTime) "
					   "END", con);
				   checkTimeslotCmd->Parameters->AddWithValue("@Day", day);
				   checkTimeslotCmd->Parameters->AddWithValue("@StartTime", startTime);
				   checkTimeslotCmd->Parameters->AddWithValue("@EndTime", endTime);
				   checkTimeslotCmd->ExecuteNonQuery();

				   // Ensure the SectionID exists in the Sections table
				   SqlCommand^ checkSectionCmd = gcnew SqlCommand(
					   "IF NOT EXISTS (SELECT 1 FROM Sections WHERE SectionID = @SectionID) "
					   "BEGIN "
					   "INSERT INTO Sections (SectionID) VALUES (@SectionID) "
					   "END", con);
				   checkSectionCmd->Parameters->AddWithValue("@SectionID", section);
				   checkSectionCmd->ExecuteNonQuery();

				   // Ensure the RoomID exists in the Rooms table
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

				   return rowsAffected > 0; // Return true if the insertion was successful
			   }
			   catch (Exception^ ex)
			   {
				   MessageBox::Show("An error occurred while adding the time slot: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				   return false;
			   }
		   }




		   void ClearTextBoxes()
		   {
			   name->Clear();
			   textBox2->Clear();
			   textBox3->Clear();
			   textBox4->Clear();
			   textBox5->Clear();
			   textBox6->Clear();
			   textBox7->Clear();
			   textBox8->Clear();
		   }
		   bool CheckForClashes(String^ day, String^ startTime, String^ endTime, String^ section, String^ courseName, String^ teacherName, String^ roomId, String^ AppID)
		   {
			   try
			   {
				   SqlConnection^ con = gcnew SqlConnection("Data Source=DESKTOP-MN4CFP4;Initial Catalog=TIMETABLEDB;Integrated Security=True");
				   con->Open();

				   // Check if the room is available for the given day and timeslot
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
					   return true; // Room clash detected
				   }

				   // Check if the teacher is available for the given day and timeslot
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
					   return true; // Teacher clash detected
				   }

				   // Check if there's already a timeslot scheduled for the given course, section, and day
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
					   return true; // Course clash detected
				   }

				   con->Close();
			   }
			   catch (Exception^ ex)
			   {
				   MessageBox::Show("Error checking for clashes: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				   return true; // Assume clash to prevent adding the timeslot
			   }

			   // No clashes detected
			   return false;
		   }




	private: System::Void ok_Click(System::Object^ sender, System::EventArgs^ e)
	{
		String^ day = name->Text;
		String^ startTime = textBox2->Text;
		String^ endTime = textBox3->Text;
		String^ section = textBox5->Text;
		String^ courseName = textBox6->Text;
		String^ teacherName = textBox4->Text;
		String^ roomId = textBox7->Text; // Assuming room ID is numeric
		String^ ApplicationID = textBox8->Text;

		// Check for clashes before adding the timeslot
		if (!CheckForClashes(day, startTime, endTime, section, courseName, teacherName, roomId, ApplicationID))
		{
			// Add the timeslot to the database
			if (AddTimeSlotToDatabase(day, startTime, endTime, section, courseName, teacherName, roomId, ApplicationID))
			{
				MessageBox::Show("Time slot added successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
				// Clear the text boxes after successful addition
				ClearTextBoxes();
			}
			else
			{
				MessageBox::Show("Failed to add time slot!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		else
		{
			MessageBox::Show("Clash detected! Please choose another time or room.", "Clash Detected", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}





	private: System::Void reset_Click(System::Object^ sender, System::EventArgs^ e)
	{
		ClearTextBoxes();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Close();
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
	private:System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	Application::Exit();
}
};
}
