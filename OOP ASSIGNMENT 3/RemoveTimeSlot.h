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
	public ref class RemoveTimeSlot : public System::Windows::Forms::Form
	{
	public:
		RemoveTimeSlot(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~RemoveTimeSlot()
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
	private: System::Windows::Forms::TextBox^ SectionTextBox;
	private: System::Windows::Forms::Label^ SectionLabel;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(RemoveTimeSlot::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->AddTimeSlotLabel = (gcnew System::Windows::Forms::Label());
			this->DayLabel = (gcnew System::Windows::Forms::Label());
			this->DayTextBox = (gcnew System::Windows::Forms::TextBox());
			this->SectionLabel = (gcnew System::Windows::Forms::Label());
			this->SectionTextBox = (gcnew System::Windows::Forms::TextBox());
			this->StartTimeTextBox = (gcnew System::Windows::Forms::TextBox());
			this->StartTimeLabel = (gcnew System::Windows::Forms::Label());
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
			this->pictureBox1->Location = System::Drawing::Point(70, 21);
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
			this->AddTimeSlotLabel->Location = System::Drawing::Point(51, 215);
			this->AddTimeSlotLabel->Name = L"AddTimeSlotLabel";
			this->AddTimeSlotLabel->Size = System::Drawing::Size(360, 28);
			this->AddTimeSlotLabel->TabIndex = 56;
			this->AddTimeSlotLabel->Text = L"     Remove TimeSlot";
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
			this->DayTextBox->Size = System::Drawing::Size(489, 35);
			this->DayTextBox->TabIndex = 53;
			// 
			// SectionLabel
			// 
			this->SectionLabel->AutoSize = true;
			this->SectionLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SectionLabel->Location = System::Drawing::Point(23, 338);
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
			this->SectionTextBox->Location = System::Drawing::Point(28, 368);
			this->SectionTextBox->Name = L"SectionTextBox";
			this->SectionTextBox->Size = System::Drawing::Size(489, 35);
			this->SectionTextBox->TabIndex = 75;
			// 
			// StartTimeTextBox
			// 
			this->StartTimeTextBox->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StartTimeTextBox->Location = System::Drawing::Point(28, 447);
			this->StartTimeTextBox->Name = L"StartTimeTextBox";
			this->StartTimeTextBox->Size = System::Drawing::Size(489, 35);
			this->StartTimeTextBox->TabIndex = 58;
			// 
			// StartTimeLabel
			// 
			this->StartTimeLabel->AutoSize = true;
			this->StartTimeLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StartTimeLabel->Location = System::Drawing::Point(23, 417);
			this->StartTimeLabel->Name = L"StartTimeLabel";
			this->StartTimeLabel->Size = System::Drawing::Size(182, 27);
			this->StartTimeLabel->TabIndex = 57;
			this->StartTimeLabel->Text = L"Enter Start Time :";
			this->StartTimeLabel->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// AddButton
			// 
			this->AddButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->AddButton->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AddButton->Location = System::Drawing::Point(28, 506);
			this->AddButton->Name = L"AddButton";
			this->AddButton->Size = System::Drawing::Size(149, 51);
			this->AddButton->TabIndex = 50;
			this->AddButton->Text = L"Remove";
			this->AddButton->UseVisualStyleBackColor = true;
			this->AddButton->Click += gcnew System::EventHandler(this, &RemoveTimeSlot::RemoveButton_Click);
			// 
			// ClearButton
			// 
			this->ClearButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->ClearButton->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ClearButton->Location = System::Drawing::Point(197, 506);
			this->ClearButton->Name = L"ClearButton";
			this->ClearButton->Size = System::Drawing::Size(144, 51);
			this->ClearButton->TabIndex = 52;
			this->ClearButton->Text = L"Clear";
			this->ClearButton->UseVisualStyleBackColor = true;
			this->ClearButton->Click += gcnew System::EventHandler(this, &RemoveTimeSlot::ClearButton_Click);
			// 
			// CloseButton
			// 
			this->CloseButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->CloseButton->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CloseButton->Location = System::Drawing::Point(361, 506);
			this->CloseButton->Name = L"CloseButton";
			this->CloseButton->Size = System::Drawing::Size(156, 51);
			this->CloseButton->TabIndex = 81;
			this->CloseButton->Text = L"Close";
			this->CloseButton->UseVisualStyleBackColor = true;
			this->CloseButton->Click += gcnew System::EventHandler(this, &RemoveTimeSlot::CloseButton_Click);
			// 
			// RemoveTimeSlot
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(529, 581);
			this->Controls->Add(this->CloseButton);
			this->Controls->Add(this->SectionTextBox);
			this->Controls->Add(this->SectionLabel);
			this->Controls->Add(this->StartTimeTextBox);
			this->Controls->Add(this->StartTimeLabel);
			this->Controls->Add(this->AddTimeSlotLabel);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->AddButton);
			this->Controls->Add(this->ClearButton);
			this->Controls->Add(this->DayTextBox);
			this->Controls->Add(this->DayLabel);
			this->Name = L"RemoveTimeSlot";
			this->Text = L"RemoveTimeSlot";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		void ClearTextBoxes()
		{
			DayTextBox->Clear();
			SectionTextBox->Clear();
			StartTimeTextBox->Clear();
		}

	private: System::Void RemoveButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		String^ day = DayTextBox->Text;
		String^ section = SectionTextBox->Text;
		String^ startTime = StartTimeTextBox->Text;
		String^ connString = "Data Source=DESKTOP-MN4CFP4;Initial Catalog=TIMETABLEDB;Integrated Security=True";

		SqlConnection^ conn = gcnew SqlConnection(connString);

		try
		{
			conn->Open();
			String^ sqlQuery = "DELETE FROM Timetables WHERE DayOfWeek = @DayOfWeek AND SectionID = @SectionID AND StartTime = @StartTime";

			SqlCommand^ cmd = gcnew SqlCommand(sqlQuery, conn);
			cmd->Parameters->AddWithValue("@DayOfWeek", day);
			cmd->Parameters->AddWithValue("@SectionID", section);
			cmd->Parameters->AddWithValue("@StartTime", startTime);

			int rowsAffected = cmd->ExecuteNonQuery();

			if (rowsAffected > 0)
			{
				MessageBox::Show("TimeSlot removed successfully.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
				ClearTextBoxes();
			}
			else
			{
				MessageBox::Show("No matching timeslot found.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Failed to remove timeslot. Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		finally
		{
			conn->Close();
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
