#pragma once
#include "MyForm5.h"
#include "MyForm4.h"
#include <iostream>
#include <fstream>
#include <msclr/marshal_cppstd.h>
#include <sstream>
#include <algorithm>
#include <set>


namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm4
	/// </summary>
	public ref class MyForm4 : public System::Windows::Forms::Form
	{
	public:
		MyForm4(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		// Define this function in your form class
		int GetCategoryIdFromCategoryType(String^ selectedCategoryType) {
			std::ifstream catFile("C:/Users/aliya.akhtar/Desktop/ProductCategory_Records.txt");
			std::string line;

			if (catFile.is_open()) {
				while (std::getline(catFile, line)) {
					std::istringstream iss(line);
					int cat_id;
					std::string data;

					// Extract ID
					iss >> cat_id;

					// Extract the remaining data as a single string
					std::getline(iss, data);

					// Find the positions of the '|' delimiter
					size_t pos1 = data.find("|");
					size_t pos2 = data.find("|", pos1 + 1);

					if (pos1 != std::string::npos && pos2 != std::string::npos) {
						// Extract the category type
						std::string cat_type = data.substr(pos2 + 1);

						// Convert the category type to a managed String
						String^ managedCategoryType = gcnew String(cat_type.c_str());

						// Use String::Trim to remove leading and trailing whitespaces
						managedCategoryType = managedCategoryType->Trim();

						if (managedCategoryType == selectedCategoryType) {
							catFile.close();
							return cat_id;
						}
					}
				}
				catFile.close();
			}

			return -1; // Category type not found
		}


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm4()
		{
			if (components)
			{
				delete components;
			}
		}




	private: System::Windows::Forms::Label^ lbl_prod_nm;
	private: System::Windows::Forms::TextBox^ tb_prod_nm;
	private: System::Windows::Forms::Label^ lb_stor_typ;
	private: System::Windows::Forms::TextBox^ tb_stor_typ;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Button^ btn_delete_prod;
	private: System::Windows::Forms::Button^ btn_submit_prod;
	private: System::Windows::Forms::Label^ lb_prod_id;
	private: System::Windows::Forms::TextBox^ tb_prod_id;


	private: System::Windows::Forms::Button^ btn_cancel;
	private: System::Windows::Forms::Label^ lb_select_cat;
	private: System::Windows::Forms::ComboBox^ cmb_select_cat;
	private: System::Windows::Forms::Button^ btn_search_prod;



	protected:

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
			this->lbl_prod_nm = (gcnew System::Windows::Forms::Label());
			this->tb_prod_nm = (gcnew System::Windows::Forms::TextBox());
			this->lb_stor_typ = (gcnew System::Windows::Forms::Label());
			this->tb_stor_typ = (gcnew System::Windows::Forms::TextBox());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->btn_search_prod = (gcnew System::Windows::Forms::Button());
			this->btn_delete_prod = (gcnew System::Windows::Forms::Button());
			this->btn_submit_prod = (gcnew System::Windows::Forms::Button());
			this->lb_prod_id = (gcnew System::Windows::Forms::Label());
			this->tb_prod_id = (gcnew System::Windows::Forms::TextBox());
			this->btn_cancel = (gcnew System::Windows::Forms::Button());
			this->lb_select_cat = (gcnew System::Windows::Forms::Label());
			this->cmb_select_cat = (gcnew System::Windows::Forms::ComboBox());
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// lbl_prod_nm
			// 
			this->lbl_prod_nm->AutoSize = true;
			this->lbl_prod_nm->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_prod_nm->Location = System::Drawing::Point(109, 117);
			this->lbl_prod_nm->Name = L"lbl_prod_nm";
			this->lbl_prod_nm->Size = System::Drawing::Size(172, 17);
			this->lbl_prod_nm->TabIndex = 4;
			this->lbl_prod_nm->Text = L"Enter The Product Name";
			// 
			// tb_prod_nm
			// 
			this->tb_prod_nm->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tb_prod_nm->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_prod_nm->Location = System::Drawing::Point(405, 109);
			this->tb_prod_nm->Name = L"tb_prod_nm";
			this->tb_prod_nm->Size = System::Drawing::Size(252, 25);
			this->tb_prod_nm->TabIndex = 5;
			// 
			// lb_stor_typ
			// 
			this->lb_stor_typ->AutoSize = true;
			this->lb_stor_typ->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_stor_typ->Location = System::Drawing::Point(109, 171);
			this->lb_stor_typ->Name = L"lb_stor_typ";
			this->lb_stor_typ->Size = System::Drawing::Size(231, 17);
			this->lb_stor_typ->TabIndex = 6;
			this->lb_stor_typ->Text = L"Enter The Product\'s Storage Type";
			// 
			// tb_stor_typ
			// 
			this->tb_stor_typ->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tb_stor_typ->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_stor_typ->Location = System::Drawing::Point(405, 161);
			this->tb_stor_typ->Name = L"tb_stor_typ";
			this->tb_stor_typ->Size = System::Drawing::Size(252, 25);
			this->tb_stor_typ->TabIndex = 7;
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
			this->tableLayoutPanel1->Controls->Add(this->btn_search_prod, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->btn_delete_prod, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->btn_submit_prod, 0, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(196, 276);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(315, 40);
			this->tableLayoutPanel1->TabIndex = 13;
			// 
			// btn_search_prod
			// 
			this->btn_search_prod->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_search_prod->Location = System::Drawing::Point(213, 3);
			this->btn_search_prod->Name = L"btn_search_prod";
			this->btn_search_prod->Size = System::Drawing::Size(99, 34);
			this->btn_search_prod->TabIndex = 21;
			this->btn_search_prod->Text = L"Search";
			this->btn_search_prod->UseVisualStyleBackColor = true;
			this->btn_search_prod->Click += gcnew System::EventHandler(this, &MyForm4::btn_search_prod_Click);
			// 
			// btn_delete_prod
			// 
			this->btn_delete_prod->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_delete_prod->Location = System::Drawing::Point(108, 3);
			this->btn_delete_prod->Name = L"btn_delete_prod";
			this->btn_delete_prod->Size = System::Drawing::Size(99, 34);
			this->btn_delete_prod->TabIndex = 12;
			this->btn_delete_prod->Text = L"Delete";
			this->btn_delete_prod->UseVisualStyleBackColor = true;
			this->btn_delete_prod->Click += gcnew System::EventHandler(this, &MyForm4::btn_delete_prod_Click);
			// 
			// btn_submit_prod
			// 
			this->btn_submit_prod->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_submit_prod->Location = System::Drawing::Point(3, 3);
			this->btn_submit_prod->Name = L"btn_submit_prod";
			this->btn_submit_prod->Size = System::Drawing::Size(99, 34);
			this->btn_submit_prod->TabIndex = 0;
			this->btn_submit_prod->Text = L"Submit";
			this->btn_submit_prod->UseVisualStyleBackColor = true;
			this->btn_submit_prod->Click += gcnew System::EventHandler(this, &MyForm4::btn_submit_prod_Click);
			// 
			// lb_prod_id
			// 
			this->lb_prod_id->AutoSize = true;
			this->lb_prod_id->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_prod_id->Location = System::Drawing::Point(109, 62);
			this->lb_prod_id->Name = L"lb_prod_id";
			this->lb_prod_id->Size = System::Drawing::Size(151, 17);
			this->lb_prod_id->TabIndex = 14;
			this->lb_prod_id->Text = L"Enter The Product ID";
			// 
			// tb_prod_id
			// 
			this->tb_prod_id->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tb_prod_id->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_prod_id->Location = System::Drawing::Point(405, 54);
			this->tb_prod_id->Name = L"tb_prod_id";
			this->tb_prod_id->Size = System::Drawing::Size(252, 25);
			this->tb_prod_id->TabIndex = 15;
			// 
			// btn_cancel
			// 
			this->btn_cancel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_cancel->Location = System::Drawing::Point(654, 290);
			this->btn_cancel->Name = L"btn_cancel";
			this->btn_cancel->Size = System::Drawing::Size(80, 26);
			this->btn_cancel->TabIndex = 18;
			this->btn_cancel->Text = L"Cancel";
			this->btn_cancel->UseVisualStyleBackColor = true;
			this->btn_cancel->Click += gcnew System::EventHandler(this, &MyForm4::btn_cancel_Click);
			// 
			// lb_select_cat
			// 
			this->lb_select_cat->AutoSize = true;
			this->lb_select_cat->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_select_cat->Location = System::Drawing::Point(109, 226);
			this->lb_select_cat->Name = L"lb_select_cat";
			this->lb_select_cat->Size = System::Drawing::Size(142, 17);
			this->lb_select_cat->TabIndex = 19;
			this->lb_select_cat->Text = L"Select The Category";
			// 
			// cmb_select_cat
			// 
			this->cmb_select_cat->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmb_select_cat->FormattingEnabled = true;
			this->cmb_select_cat->Location = System::Drawing::Point(405, 218);
			this->cmb_select_cat->Name = L"cmb_select_cat";
			this->cmb_select_cat->Size = System::Drawing::Size(252, 25);
			this->cmb_select_cat->TabIndex = 20;
			// 
			// MyForm4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(767, 354);
			this->Controls->Add(this->cmb_select_cat);
			this->Controls->Add(this->lb_select_cat);
			this->Controls->Add(this->btn_cancel);
			this->Controls->Add(this->tb_prod_id);
			this->Controls->Add(this->lb_prod_id);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->tb_stor_typ);
			this->Controls->Add(this->lb_stor_typ);
			this->Controls->Add(this->tb_prod_nm);
			this->Controls->Add(this->lbl_prod_nm);
			this->Name = L"MyForm4";
			this->Text = L"Pharmacy Inventory";
			this->Load += gcnew System::EventHandler(this, &MyForm4::MyForm4_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	
	/*private: System::Void btn_prod_detail_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		MyForm5^ form5 = gcnew MyForm5;
		form5->Show();
	}
	*/
	private: System::Void btn_submit_prod_Click(System::Object^ sender, System::EventArgs^ e) {
		int product_id;
		String^ prod_nm = this->tb_prod_nm->Text;
		String^ prod_storage_type = this->tb_stor_typ->Text;

		// Opening the file in Read mode to get the next product ID
		std::ifstream infile1("C:/Users/aliya.akhtar/Desktop/Product_Id.txt");
		if (infile1.is_open()) {
			infile1 >> product_id;
			infile1.close();
		}
		else {
			System::Windows::Forms::MessageBox::Show("Error! File Not Found");
			return; // Return early on error
		}

		// Get the selected category type from the combo box
		String^ selectedCategoryType = this->cmb_select_cat->Text;

		// Check if a category ID is associated with the selected category type
		int category_id = GetCategoryIdFromCategoryType(selectedCategoryType);

		if (category_id != -1) {
			// Opening the file in Append mode to add the product record
			std::ofstream outfile1("C:/Users/aliya.akhtar/Desktop/Product.txt", std::ios::app);

			if (outfile1.is_open()) {
				std::string Pd_nm_str, Pd_storage_type_str;

				if (!String::IsNullOrEmpty(this->tb_prod_nm->Text))
					Pd_nm_str = msclr::interop::marshal_as<std::string>(prod_nm);
				if (!String::IsNullOrEmpty(this->tb_stor_typ->Text))
					Pd_storage_type_str = msclr::interop::marshal_as<std::string>(prod_storage_type);

				outfile1 << product_id << " | " << category_id << " | " << Pd_nm_str << " | " << Pd_storage_type_str << "\n";
				outfile1.close();
			}
			else {
				System::Windows::Forms::MessageBox::Show("Error! File Not Found");
			}

			// Increment the product ID for the next record
			product_id++;

			// Update the product ID file with the new incremented value
			std::ofstream newProdIdFile("C:/Users/aliya.akhtar/Desktop/Product_Id.txt");
			if (newProdIdFile.is_open()) {
				newProdIdFile << product_id;
				newProdIdFile.close();
			}

			System::Windows::Forms::MessageBox::Show("Record has been added to file!");

			// Clear the textboxes
			this->tb_prod_nm->Text = "";
			this->tb_stor_typ->Text = "";
		}
		else {
			System::Windows::Forms::MessageBox::Show("Selected category type not found.");
		}
	}

	private: System::Void btn_cancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void MyForm4_Load(System::Object^ sender, System::EventArgs^ e) {
		 std::ifstream catRecordsFile("C:/Users/aliya.akhtar/Desktop/ProductCategory_Records.txt");
		 std::string line;

		 if (catRecordsFile.is_open()) {
			 std::set<std::string> uniqueCategories; // Use a set to store unique category names

			 while (std::getline(catRecordsFile, line)) {
				 // Split the line by the '|' delimiter
				 std::istringstream iss(line);
				 std::string catIDPart, manuIDPart, catnmPart;

				 if (std::getline(iss, catIDPart, '|') && std::getline(iss, manuIDPart, '|') && std::getline(iss, catnmPart)) {
					 std::string categoryName = catnmPart;

					 // Check if the category name is not in the set (i.e., it's unique)
					 if (uniqueCategories.find(categoryName) == uniqueCategories.end()) {
						 System::String^ managedName = gcnew System::String(categoryName.c_str());
						 cmb_select_cat->Items->Add(managedName);

						 // Add the category name to the set to mark it as added
						 uniqueCategories.insert(categoryName);
					 }
				 }
			 }
			 catRecordsFile.close(); // Close the file when done reading
		 }
		 else {
			 // Handle the case where the file cannot be opened
			 System::Windows::Forms::MessageBox::Show("Error in opening the file for reading.");
		 }
	}

	private: System::Void btn_search_prod_Click(System::Object^ sender, System::EventArgs^ e) {
	
		int PdIdToSearch = System::Convert::ToInt32(tb_prod_id->Text);
		System::String^ filePath = "C:/Users/aliya.akhtar/Desktop/Product.txt";
		std::wstring filePathWStr = msclr::interop::marshal_as<std::wstring>(filePath);

		std::ifstream infile2(filePathWStr);
		std::string line;
		bool productFound = false; // Flag to track whether the product was found

		if (infile2.is_open()) {
			while (std::getline(infile2, line)) {
				std::istringstream iss(line);
				//std::string PdIDStr;

				// Extract the PdIDPart
				std::string PdIDPart, CtIDPart, PdName, PdStorageType;
				if (std::getline(iss, PdIDPart, '|') && std::getline(iss, CtIDPart, '|') && std::getline(iss, PdName, '|') && std::getline(iss, PdStorageType)) {
					// Convert PdIDPart to an integer
					int PdID = std::stoi(PdIDPart);

					// Check if PdID matches the one to search
					if (PdID == PdIdToSearch) {
						// Display product details
						std::string PdNameStr = PdName;
						std::string ProductStorageTypeStr = PdStorageType;

						// Set the text of Windows Forms controls
						tb_prod_nm->Text = gcnew System::String(PdNameStr.c_str());
						tb_stor_typ->Text = gcnew System::String(ProductStorageTypeStr.c_str());

						// Now, find and set the category
						std::ifstream infile3("C:/Users/aliya.akhtar/Desktop/ProductCategory_Records.txt");
						if (infile3.is_open()) {
							while (std::getline(infile3, line)) {
								std::istringstream iss(line);
								std::string CtIDPart, manuIDPart, CtNamePart;
								if (std::getline(iss, CtIDPart, '|') && std::getline(iss, manuIDPart, '|') && std::getline(iss, CtNamePart)) {
									int CtID = std::stoi(CtIDPart);

									// Check if CtID matches the one from the product
									if (CtID == std::stoi(CtIDPart)) {
										std::string CtNameStr = CtNamePart;
										cmb_select_cat->Text = gcnew System::String(CtNameStr.c_str());
										break; // Category found, no need to continue searching
									}
								}
							}
							infile3.close();
						}

						productFound = true; // Set the flag to indicate that the product was found
						break; // No need to continue searching
					}
				}
			}
			infile2.close();
		}
		else {
			System::Windows::Forms::MessageBox::Show("Error in opening the file for reading.");
		}

		// Show a message if the product was not found
		if (!productFound) {
			System::Windows::Forms::MessageBox::Show("Record for the entered ID doesn't exists");
			tb_prod_nm->Text = "";
			tb_stor_typ->Text = "";
			cmb_select_cat->Text = "";

		}
	}

	private: System::Void btn_delete_prod_Click(System::Object^ sender, System::EventArgs^ e) {
		int PdIdToDelete = System::Convert::ToInt32(tb_prod_id->Text);

		// File paths
		System::String^ filePath = "C:/Users/aliya.akhtar/Desktop/Product.txt";
		std::wstring filePathWStr = msclr::interop::marshal_as<std::wstring>(filePath);

		std::ifstream infile1(filePathWStr);
		std::string line;

		std::vector<std::string> updatedRecords;  // To store updated records
		bool recordDeleted = false;  // Flag to track whether a record was deleted

		if (infile1.is_open()) {
			while (std::getline(infile1, line)) {
				std::istringstream iss(line);
				std::string PdIDStr;

				// Extract the PdIDPart
				std::string PdIDPart;
				if (std::getline(iss, PdIDPart, '|')) {
					// Convert PdIDPart to an integer
					int PdID = std::stoi(PdIDPart);

					// Check if PdID matches the one to delete
					if (PdID != PdIdToDelete) {
						updatedRecords.push_back(line); // Keep this record
					}
					else {
						recordDeleted = true; // Record found and deleted
					}
				}
			}
			infile1.close();

			// Now, write the updated records back to the file
			std::ofstream outfile(filePathWStr);

			if (outfile.is_open()) {
				for (const std::string& record : updatedRecords) {
					outfile << record << "\n";
				}
				outfile.close();

				// Clear the textboxes
				tb_prod_id->Text = "";
				tb_prod_nm->Text = "";
				tb_stor_typ->Text = "";
				cmb_select_cat->Text = "";

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
};
}
