#pragma once
#include "MyForm3.h"
#include <iostream>
#include <fstream>
#include <msclr/marshal_cppstd.h>
#include <sstream>
#include <algorithm>
#include <vector>

namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}




	private: System::Windows::Forms::Label^ lbl_manu_nm;
	private: System::Windows::Forms::TextBox^ tb_manu_nm;

	private: System::Windows::Forms::Label^ lb_manu_add;

	private: System::Windows::Forms::TextBox^ tb_manu_add;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Button^ btn_submit_manu;
	private: System::Windows::Forms::Button^ btn_search_manu;



	private: System::Windows::Forms::Label^ lb_manu_id;
	private: System::Windows::Forms::TextBox^ tb_manu_id;
	private: System::Windows::Forms::Button^ btn_delete_manu;
	private: System::Windows::Forms::Button^ btn_cancel;





	protected:

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
			this->lbl_manu_nm = (gcnew System::Windows::Forms::Label());
			this->tb_manu_nm = (gcnew System::Windows::Forms::TextBox());
			this->lb_manu_add = (gcnew System::Windows::Forms::Label());
			this->tb_manu_add = (gcnew System::Windows::Forms::TextBox());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->btn_delete_manu = (gcnew System::Windows::Forms::Button());
			this->btn_search_manu = (gcnew System::Windows::Forms::Button());
			this->btn_submit_manu = (gcnew System::Windows::Forms::Button());
			this->lb_manu_id = (gcnew System::Windows::Forms::Label());
			this->tb_manu_id = (gcnew System::Windows::Forms::TextBox());
			this->btn_cancel = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// lbl_manu_nm
			// 
			this->lbl_manu_nm->AutoSize = true;
			this->lbl_manu_nm->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_manu_nm->Location = System::Drawing::Point(95, 127);
			this->lbl_manu_nm->Name = L"lbl_manu_nm";
			this->lbl_manu_nm->Size = System::Drawing::Size(221, 17);
			this->lbl_manu_nm->TabIndex = 7;
			this->lbl_manu_nm->Text = L"Enter The Manufacturer\'s Name";
			// 
			// tb_manu_nm
			// 
			this->tb_manu_nm->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tb_manu_nm->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_manu_nm->Location = System::Drawing::Point(391, 119);
			this->tb_manu_nm->Name = L"tb_manu_nm";
			this->tb_manu_nm->Size = System::Drawing::Size(245, 25);
			this->tb_manu_nm->TabIndex = 8;
			// 
			// lb_manu_add
			// 
			this->lb_manu_add->AutoSize = true;
			this->lb_manu_add->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_manu_add->Location = System::Drawing::Point(95, 185);
			this->lb_manu_add->Name = L"lb_manu_add";
			this->lb_manu_add->Size = System::Drawing::Size(237, 17);
			this->lb_manu_add->TabIndex = 9;
			this->lb_manu_add->Text = L"Enter The Manufacturer\'s Address";
			// 
			// tb_manu_add
			// 
			this->tb_manu_add->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tb_manu_add->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_manu_add->Location = System::Drawing::Point(391, 177);
			this->tb_manu_add->Name = L"tb_manu_add";
			this->tb_manu_add->Size = System::Drawing::Size(245, 25);
			this->tb_manu_add->TabIndex = 10;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 3;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33333F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33333F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33333F)));
			this->tableLayoutPanel1->Controls->Add(this->btn_delete_manu, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->btn_search_manu, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->btn_submit_manu, 0, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(211, 245);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(309, 40);
			this->tableLayoutPanel1->TabIndex = 11;
			// 
			// btn_delete_manu
			// 
			this->btn_delete_manu->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_delete_manu->Location = System::Drawing::Point(105, 3);
			this->btn_delete_manu->Name = L"btn_delete_manu";
			this->btn_delete_manu->Size = System::Drawing::Size(96, 34);
			this->btn_delete_manu->TabIndex = 13;
			this->btn_delete_manu->Text = L"Delete";
			this->btn_delete_manu->UseVisualStyleBackColor = true;
			this->btn_delete_manu->Click += gcnew System::EventHandler(this, &MyForm2::btn_delete_manu_Click);
			// 
			// btn_search_manu
			// 
			this->btn_search_manu->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_search_manu->Location = System::Drawing::Point(207, 3);
			this->btn_search_manu->Name = L"btn_search_manu";
			this->btn_search_manu->Size = System::Drawing::Size(97, 34);
			this->btn_search_manu->TabIndex = 12;
			this->btn_search_manu->Text = L"Search";
			this->btn_search_manu->UseVisualStyleBackColor = true;
			this->btn_search_manu->Click += gcnew System::EventHandler(this, &MyForm2::btn_search_manu_Click);
			// 
			// btn_submit_manu
			// 
			this->btn_submit_manu->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_submit_manu->Location = System::Drawing::Point(3, 3);
			this->btn_submit_manu->Name = L"btn_submit_manu";
			this->btn_submit_manu->Size = System::Drawing::Size(96, 34);
			this->btn_submit_manu->TabIndex = 0;
			this->btn_submit_manu->Text = L"Submit";
			this->btn_submit_manu->UseVisualStyleBackColor = true;
			this->btn_submit_manu->Click += gcnew System::EventHandler(this, &MyForm2::btn_submit_manu_Click);
			// 
			// lb_manu_id
			// 
			this->lb_manu_id->AutoSize = true;
			this->lb_manu_id->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_manu_id->Location = System::Drawing::Point(95, 67);
			this->lb_manu_id->Name = L"lb_manu_id";
			this->lb_manu_id->Size = System::Drawing::Size(200, 17);
			this->lb_manu_id->TabIndex = 12;
			this->lb_manu_id->Text = L"Enter The Manufacturer\'s ID";
			// 
			// tb_manu_id
			// 
			this->tb_manu_id->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tb_manu_id->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_manu_id->Location = System::Drawing::Point(391, 59);
			this->tb_manu_id->Name = L"tb_manu_id";
			this->tb_manu_id->Size = System::Drawing::Size(245, 25);
			this->tb_manu_id->TabIndex = 13;
			// 
			// btn_cancel
			// 
			this->btn_cancel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_cancel->Location = System::Drawing::Point(657, 260);
			this->btn_cancel->Name = L"btn_cancel";
			this->btn_cancel->Size = System::Drawing::Size(80, 26);
			this->btn_cancel->TabIndex = 18;
			this->btn_cancel->Text = L"Cancel";
			this->btn_cancel->UseVisualStyleBackColor = true;
			this->btn_cancel->Click += gcnew System::EventHandler(this, &MyForm2::btn_cancel_Click);
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(767, 354);
			this->Controls->Add(this->btn_cancel);
			this->Controls->Add(this->tb_manu_id);
			this->Controls->Add(this->lb_manu_id);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->tb_manu_add);
			this->Controls->Add(this->lb_manu_add);
			this->Controls->Add(this->tb_manu_nm);
			this->Controls->Add(this->lbl_manu_nm);
			this->Name = L"MyForm2";
			this->Text = L"Pharmacy Inventory";
			this->tableLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	/*private: System::Void btn_category_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		MyForm3^ form3 = gcnew MyForm3;
		form3->Show();
	}
	private: System::Void btn_product_Click(System::Object^ sender, System::EventArgs^ e) {
		// Show an error message
		System::Windows::Forms::MessageBox::Show("Error! Kindly enter the data for Product's Category");
	}
	private: System::Void btn_prod_detail_Click(System::Object^ sender, System::EventArgs^ e) {
		// Show an error message
		System::Windows::Forms::MessageBox::Show("Error! Kindly enter the data for Product's Category");
	}
	*/
	private: System::Void btn_submit_manu_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ manufactName = this->tb_manu_nm->Text;
		String^ manufactAddress = this->tb_manu_add->Text;

		// Check if the Manufacturer ID is manually entered
		String^ manufactId = this->tb_manu_id->Text;

		if (String::IsNullOrEmpty(manufactId)) {
			// No Manufacturer ID is provided, continue with the submission
			// Open the file for reading the current ID
			std::ifstream idFile("C:/Users/aliya.akhtar/Desktop/Manufacturers_Id.txt");
			int manufacturer_id;

			if (idFile.is_open()) {
				idFile >> manufacturer_id;  // Read the current ID from the file
				idFile.close();

				// Open the file for appending the records
				std::ofstream outfile("C:/Users/aliya.akhtar/Desktop/Manufacturers_Record.txt", std::ios::app);

				if (outfile.is_open()) {
					std::string manufactNameStr, manufactAddressStr;
					if (manufactName != nullptr)
						manufactNameStr = msclr::interop::marshal_as<std::string>(manufactName);
					if (manufactAddress != nullptr)
						manufactAddressStr = msclr::interop::marshal_as<std::string>(manufactAddress);

					// Write the ID and record to the file
					outfile << manufacturer_id << "|" << manufactNameStr << "|" << manufactAddressStr << "\n";
					//outfile << "Manufacturer ID: " << manufacturer_id << " | Name: " << manufactNameStr << " | Address: " << manufactAddressStr << "\n";
					//outfile << "-----------------------------------------------" << "\n";

					outfile.close();

					// Increment the ID for the next record
					manufacturer_id++;

					// Update the ID file with the new incremented value
					std::ofstream newIdFile("C:/Users/aliya.akhtar/Desktop/Manufacturers_Id.txt");
					if (newIdFile.is_open()) {
						newIdFile << manufacturer_id;
						newIdFile.close();
					}

					System::Windows::Forms::MessageBox::Show("Record has been added to file!");

					// Clear the textboxes
					this->tb_manu_nm->Text = "";
					this->tb_manu_add->Text = "";
				}
				else {
					System::Windows::Forms::MessageBox::Show("Error in opening the record file");
				}
			}
			else {
				System::Windows::Forms::MessageBox::Show("Error in opening the ID file");
			}
		}
		else {
			// User manually entered a Manufacturer ID, show an error message
			System::Windows::Forms::MessageBox::Show("Manufacturer ID should not be entered manually.");
		}
	}


	private: System::Void btn_search_manu_Click(System::Object^ sender, System::EventArgs^ e) {
		int manufactId = System::Convert::ToInt32(tb_manu_id->Text);

		std::ifstream infile("C:/Users/aliya.akhtar/Desktop/Manufacturers_Record.txt");
		std::string line;

		if (infile.is_open()) {
			while (std::getline(infile, line)) {
				std::istringstream iss(line);
				int manu_id;
				std::string data;

				// Extract ID
				iss >> manu_id;

				if (manu_id == manufactId) {
					// Extract the remaining data as a single string
					std::getline(iss, data);

					// Find the positions of the '|' delimiter
					size_t pos1 = data.find("|");
					size_t pos2 = data.find("|", pos1 + 1);

					if (pos1 != std::string::npos && pos2 != std::string::npos) {
						// Extract the manufacturer name and address
						std::string manuName = data.substr(pos1 + 1, pos2 - pos1 - 1);
						std::string manuAdd = data.substr(pos2 + 1);

						// Display the data
						String^ manuNameStr = gcnew String(manuName.c_str());
						String^ manuAddStr = gcnew String(manuAdd.c_str());

						tb_manu_nm->Text = manuNameStr;
						tb_manu_add->Text = manuAddStr;

						infile.close();
						return;
					}
					
				}
				
			}
			infile.close();
		}
		// If the record was not found
		tb_manu_nm->Text = "";
		tb_manu_add->Text = "";
		// Show an error message
		System::Windows::Forms::MessageBox::Show("Record for the entered ID does not exist.");
	}

	private: System::Void btn_delete_manu_Click(System::Object^ sender, System::EventArgs^ e) {
		int manufactIdToDelete = System::Convert::ToInt32(tb_manu_id->Text);

		std::ifstream infile("C:/Users/aliya.akhtar/Desktop/Manufacturers_Record.txt");
		std::string line;
		std::vector<std::string> updatedRecords;  // To store updated records
		bool recordDeleted = false;

		if (infile.is_open()) {
			while (std::getline(infile, line)) {
				std::istringstream iss(line);
				int manu_id;
				std::string data;

				// Extract ID
				iss >> manu_id;

				if (manu_id != manufactIdToDelete) {
					// If the ID doesn't match, keep this record
					updatedRecords.push_back(line);
				}
				else {
					recordDeleted = true;  // Record found and deleted
				}
			}
			infile.close();

			// Now, write the updated records back to the file
			std::ofstream outfile("C:/Users/aliya.akhtar/Desktop/Manufacturers_Record.txt");

			if (outfile.is_open()) {
				for (const std::string& record : updatedRecords) {
					outfile << record << "\n";
				}
				outfile.close();

				// Clear the textboxes
				tb_manu_id->Text = "";
				tb_manu_nm->Text = "";
				tb_manu_add->Text = "";

				// Display the appropriate message
				if (recordDeleted) {
					System::Windows::Forms::MessageBox::Show("Record has been deleted.");
				}
				else {
					System::Windows::Forms::MessageBox::Show("Record for the entered ID does not exist.");
				}
			}
			else {
				System::Windows::Forms::MessageBox::Show("Error in opening the record file for writing.");
			}
		}
		else {
			System::Windows::Forms::MessageBox::Show("Error in opening the record file for reading.");
		}
	}

	private: System::Void btn_cancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}