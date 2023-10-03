#pragma once
#include "MyForm4.h"
#include <iostream>
#include <fstream>
#include <msclr/marshal_cppstd.h>
#include <sstream>
#include <algorithm>

namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm3
	/// </summary>
	public ref class MyForm3 : public System::Windows::Forms::Form
	{
	public:
		MyForm3(void)
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
		~MyForm3()
		{
			if (components)
			{
				delete components;
			}
		}




	private: System::Windows::Forms::Label^ lbl_prod_cat;
	private: System::Windows::Forms::TextBox^ tb_prod_cat;




	private: System::Windows::Forms::ComboBox^ cmb_select_manu;
	private: System::Windows::Forms::Label^ lb_select_manu;
	private: System::Windows::Forms::Label^ lb_cat_id;
	private: System::Windows::Forms::TextBox^ tb_cat_id;
	private: System::Windows::Forms::Button^ btn_submit_cat;
	private: System::Windows::Forms::Button^ btn_delete_cat;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Button^ btn_search_cat;
	private: System::Windows::Forms::Button^ btn_cancel;



	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->lbl_prod_cat = (gcnew System::Windows::Forms::Label());
			this->tb_prod_cat = (gcnew System::Windows::Forms::TextBox());
			this->cmb_select_manu = (gcnew System::Windows::Forms::ComboBox());
			this->lb_select_manu = (gcnew System::Windows::Forms::Label());
			this->lb_cat_id = (gcnew System::Windows::Forms::Label());
			this->tb_cat_id = (gcnew System::Windows::Forms::TextBox());
			this->btn_submit_cat = (gcnew System::Windows::Forms::Button());
			this->btn_delete_cat = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->btn_search_cat = (gcnew System::Windows::Forms::Button());
			this->btn_cancel = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// lbl_prod_cat
			// 
			this->lbl_prod_cat->AutoSize = true;
			this->lbl_prod_cat->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_prod_cat->Location = System::Drawing::Point(105, 123);
			this->lbl_prod_cat->Name = L"lbl_prod_cat";
			this->lbl_prod_cat->Size = System::Drawing::Size(194, 17);
			this->lbl_prod_cat->TabIndex = 5;
			this->lbl_prod_cat->Text = L"Enter The Product Category";
			// 
			// tb_prod_cat
			// 
			this->tb_prod_cat->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tb_prod_cat->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_prod_cat->Location = System::Drawing::Point(403, 115);
			this->tb_prod_cat->Name = L"tb_prod_cat";
			this->tb_prod_cat->Size = System::Drawing::Size(249, 25);
			this->tb_prod_cat->TabIndex = 6;
			// 
			// cmb_select_manu
			// 
			this->cmb_select_manu->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmb_select_manu->FormattingEnabled = true;
			this->cmb_select_manu->Location = System::Drawing::Point(403, 167);
			this->cmb_select_manu->Name = L"cmb_select_manu";
			this->cmb_select_manu->Size = System::Drawing::Size(249, 25);
			this->cmb_select_manu->TabIndex = 13;
			// 
			// lb_select_manu
			// 
			this->lb_select_manu->AutoSize = true;
			this->lb_select_manu->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_select_manu->Location = System::Drawing::Point(105, 175);
			this->lb_select_manu->Name = L"lb_select_manu";
			this->lb_select_manu->Size = System::Drawing::Size(171, 17);
			this->lb_select_manu->TabIndex = 14;
			this->lb_select_manu->Text = L"Select The Manufacturer";
			// 
			// lb_cat_id
			// 
			this->lb_cat_id->AutoSize = true;
			this->lb_cat_id->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_cat_id->Location = System::Drawing::Point(105, 71);
			this->lb_cat_id->Name = L"lb_cat_id";
			this->lb_cat_id->Size = System::Drawing::Size(160, 17);
			this->lb_cat_id->TabIndex = 15;
			this->lb_cat_id->Text = L"Enter The Category ID";
			// 
			// tb_cat_id
			// 
			this->tb_cat_id->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tb_cat_id->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_cat_id->Location = System::Drawing::Point(403, 63);
			this->tb_cat_id->Name = L"tb_cat_id";
			this->tb_cat_id->Size = System::Drawing::Size(249, 25);
			this->tb_cat_id->TabIndex = 16;
			// 
			// btn_submit_cat
			// 
			this->btn_submit_cat->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_submit_cat->Location = System::Drawing::Point(3, 3);
			this->btn_submit_cat->Name = L"btn_submit_cat";
			this->btn_submit_cat->Size = System::Drawing::Size(99, 34);
			this->btn_submit_cat->TabIndex = 0;
			this->btn_submit_cat->Text = L"Submit";
			this->btn_submit_cat->UseVisualStyleBackColor = true;
			this->btn_submit_cat->Click += gcnew System::EventHandler(this, &MyForm3::btn_submit_cat_Click);
			// 
			// btn_delete_cat
			// 
			this->btn_delete_cat->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_delete_cat->Location = System::Drawing::Point(108, 3);
			this->btn_delete_cat->Name = L"btn_delete_cat";
			this->btn_delete_cat->Size = System::Drawing::Size(99, 34);
			this->btn_delete_cat->TabIndex = 12;
			this->btn_delete_cat->Text = L"Delete";
			this->btn_delete_cat->UseVisualStyleBackColor = true;
			this->btn_delete_cat->Click += gcnew System::EventHandler(this, &MyForm3::btn_delete_cat_Click);
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
			this->tableLayoutPanel1->Controls->Add(this->btn_search_cat, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->btn_delete_cat, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->btn_submit_cat, 0, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(214, 245);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(315, 41);
			this->tableLayoutPanel1->TabIndex = 12;
			// 
			// btn_search_cat
			// 
			this->btn_search_cat->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_search_cat->Location = System::Drawing::Point(213, 3);
			this->btn_search_cat->Name = L"btn_search_cat";
			this->btn_search_cat->Size = System::Drawing::Size(99, 34);
			this->btn_search_cat->TabIndex = 17;
			this->btn_search_cat->Text = L"Search";
			this->btn_search_cat->UseVisualStyleBackColor = true;
			// 
			// btn_cancel
			// 
			this->btn_cancel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_cancel->Location = System::Drawing::Point(657, 260);
			this->btn_cancel->Name = L"btn_cancel";
			this->btn_cancel->Size = System::Drawing::Size(80, 26);
			this->btn_cancel->TabIndex = 17;
			this->btn_cancel->Text = L"Cancel";
			this->btn_cancel->UseVisualStyleBackColor = true;
			this->btn_cancel->Click += gcnew System::EventHandler(this, &MyForm3::btn_cancel_Click);
			// 
			// MyForm3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(767, 354);
			this->Controls->Add(this->btn_cancel);
			this->Controls->Add(this->tb_cat_id);
			this->Controls->Add(this->lb_cat_id);
			this->Controls->Add(this->lb_select_manu);
			this->Controls->Add(this->cmb_select_manu);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->tb_prod_cat);
			this->Controls->Add(this->lbl_prod_cat);
			this->Name = L"MyForm3";
			this->Text = L"Pharmacy Inventory";
			this->Load += gcnew System::EventHandler(this, &MyForm3::MyForm3_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	/*private: System::Void btn_product_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		MyForm4^ form4 = gcnew MyForm4;
		form4->Show();
	}
	private: System::Void btn_prod_detail_Click(System::Object^ sender, System::EventArgs^ e) {
		// Show an error message
		System::Windows::Forms::MessageBox::Show("Error! Kindly enter the data for Product");
	}
	*/
	private: System::Void btn_submit_cat_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ categoryName = this->tb_prod_cat->Text;
		String^ selectedManufacturer = this->cmb_select_manu->Text->Trim();

		// Check if the Manufacturer ID is manually entered
		String^ categoryId = this->tb_cat_id->Text;

		if (String::IsNullOrEmpty(categoryId)) {
			// No Category ID is provided, continue with the submission
			// Open the file for reading the current category ID
			std::ifstream idFile("C:/Users/aliya.akhtar/Desktop/ProductCategory_Id.txt");
			int category_id;

			if (idFile.is_open()) {
				idFile >> category_id;  // Read the current category ID from the file
				idFile.close();

				// Open the file for reading the manufacturer records
				std::ifstream manuRecordsFile("C:/Users/aliya.akhtar/Desktop/Manufacturers_Record.txt");
				std::string line;
				int manufacturer_id = -1;  // Initialize with an invalid ID

				if (manuRecordsFile.is_open()) {
					while (std::getline(manuRecordsFile, line)) {
						// Split the line by the '|' delimiter
						std::istringstream iss(line);
						std::string idPart, namePart, addressPart;
						if (std::getline(iss, idPart, '|') && std::getline(iss, namePart, '|') && std::getline(iss, addressPart)) {
							// Trim whitespace from extracted parts
							std::string manufacturerIdStr = idPart;
							std::string manufacturerName = namePart;
							std::string manufacturerAddress = addressPart;

							// Convert manufacturerIdStr to an integer
							int manufacturerId = std::stoi(manufacturerIdStr);

							// Trim whitespace from the managedManufacturerName
							String^ managedManufacturerName = msclr::interop::marshal_as<String^>(manufacturerName.c_str())->Trim();

							// Check if the selected manufacturer name matches the current line
							if (managedManufacturerName == selectedManufacturer) {
								manufacturer_id = manufacturerId;
								break;  // Manufacturer found, no need to continue searching
							}
						}
					}

					manuRecordsFile.close();

					if (manufacturer_id != -1) {  // Check if a valid manufacturer ID was found
						// Open the file for appending the category records
						std::ofstream catOutfile("C:/Users/aliya.akhtar/Desktop/ProductCategory_Records.txt", std::ios::app);

						if (catOutfile.is_open()) {
							std::string categoryNameStr;
							if (categoryName != nullptr)
								categoryNameStr = msclr::interop::marshal_as<std::string>(categoryName);

							// Write the category and manufacturer IDs and the category record to the file
							catOutfile << category_id << "|" << manufacturer_id << "|" << categoryNameStr << "\n";
							catOutfile.close();

							// Increment the category ID for the next record
							category_id++;
							// manufacturer_id++;

							// Update the category ID file with the new incremented value
							std::ofstream newCatIdFile("C:/Users/aliya.akhtar/Desktop/ProductCategory_Id.txt");
							if (newCatIdFile.is_open()) {
								newCatIdFile << category_id;
								newCatIdFile.close();
							}

							// Update the manufacturer ID file with the new incremented value
							//std::ofstream newManuIdFile("C:/Users/aliya.akhtar/Desktop/Manufacturers_Id.txt");
							//if (newManuIdFile.is_open()) {
								//newManuIdFile << manufacturer_id;
								//newManuIdFile.close();
							//}
							System::Windows::Forms::MessageBox::Show("Record has been added to file!");

							// Clear the boxes
							this->tb_prod_cat->Text = "";
							this->cmb_select_manu->Text = "";
						}
						else {
							System::Windows::Forms::MessageBox::Show("Error in opening the category records file");
						}
					}
					else {
						System::Windows::Forms::MessageBox::Show("Selected manufacturer not found in records.");
					}
				}
				else {
					System::Windows::Forms::MessageBox::Show("Error in opening the manufacturer records file");
				}
			}
			else {
				System::Windows::Forms::MessageBox::Show("Error in opening the category ID file");
			}
		}
		else {
			// User manually entered a Category ID, show an error message
			System::Windows::Forms::MessageBox::Show("Category ID should not be entered manually.");
		}
	}

	private: System::Void btn_delete_cat_Click(System::Object^ sender, System::EventArgs^ e) {
		int catIdToDelete = System::Convert::ToInt32(tb_cat_id->Text);

		std::ifstream infile("C:/Users/aliya.akhtar/Desktop/ProductCategory_Records.txt");
		std::string line;
		std::vector<std::string> updatedRecords;  // To store updated records
		bool recordDeleted = false;  // Flag to track whether a record was deleted

		if (infile.is_open()) {
			while (std::getline(infile, line)) {
				std::istringstream iss(line);
				int cat_id;
				std::string data;

				// Extract ID
				iss >> cat_id;

				if (cat_id != catIdToDelete) {
					// If the ID doesn't match, keep this record
					updatedRecords.push_back(line);
				}
				else {
					recordDeleted = true;  // Record found and deleted
				}
			}
			infile.close();

			// Now, write the updated records back to the file
			std::ofstream outfile("C:/Users/aliya.akhtar/Desktop/ProductCategory_Records.txt");

			if (outfile.is_open()) {
				for (const std::string& record : updatedRecords) {
					outfile << record << "\n";
				}
				outfile.close();

				// Clear the textboxes
				tb_cat_id->Text = "";
				tb_prod_cat->Text = "";
				cmb_select_manu->Text = "";

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

	private: System::Void MyForm3_Load(System::Object^ sender, System::EventArgs^ e) {
		// Initialize the ComboBox with manufacturer names
		PopulateManufacturerComboBox();
	}

	private: void PopulateManufacturerComboBox() {
		// Create a list to store manufacturer names
		System::Collections::Generic::List<String^>^ manufacturerNames = gcnew System::Collections::Generic::List<String^>();

		// Open the manufacturer file for reading
		std::ifstream manuRecordsFile("C:/Users/aliya.akhtar/Desktop/Manufacturers_Record.txt");
		std::string line;

		if (manuRecordsFile.is_open()) {
			while (std::getline(manuRecordsFile, line)) {
				// Split the line by the '|' delimiter
				std::istringstream iss(line);
				std::string idPart, namePart, addressPart;

				if (std::getline(iss, idPart, '|') && std::getline(iss, namePart, '|') && std::getline(iss, addressPart)) {
					// Trim whitespace from extracted parts
					std::string manufacturerName = namePart;

					// Convert the manufacturer name to System::String^ and add it to the list
					String^ managedManufacturerName = gcnew String(manufacturerName.c_str());
					manufacturerNames->Add(managedManufacturerName);
				}
			}

			manuRecordsFile.close();
		}

		// Bind the ComboBox to the list of manufacturer names
		cmb_select_manu->DataSource = manufacturerNames;

	}
};
}