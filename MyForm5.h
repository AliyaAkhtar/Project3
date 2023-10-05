#pragma once
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
	/// Summary for MyForm5
	/// </summary>
	public ref class MyForm5 : public System::Windows::Forms::Form
	{
	public:
		MyForm5(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		// Define this function in your form class
		int GetProductIdFromProduct(String^ selectedProduct) {
			std::ifstream prodFile("C:/Users/aliya.akhtar/Desktop/Product.txt");
			std::string line;

			if (prodFile.is_open()) {
				while (std::getline(prodFile, line)) {
					std::istringstream iss(line);
					int prd_id;
					std::string data;

					// Extract ID
					iss >> prd_id;

					// Extract the remaining data as a single string
					std::getline(iss, data);

					// Find the positions of the '|' delimiter
					size_t pos1 = data.find("|");
					size_t pos2 = data.find("|", pos1 + 1);

					if (pos1 != std::string::npos && pos2 != std::string::npos) {
						// Extract the category type
						std::string prod_nm = data.substr(pos2 + 1);

						// Convert the category type to a managed String
						String^ managedproductName = gcnew String(prod_nm.c_str());

						// Use String::Trim to remove leading and trailing whitespaces
						managedproductName = managedproductName->Trim();

						if (managedproductName == selectedProduct) {
							prodFile.close();
							return prd_id;
						}
					}
				}
				prodFile.close();
			}

			return -1; // Category type not found
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm5()
		{
			if (components)
			{
				delete components;
			}
		}




	private: System::Windows::Forms::Label^ lbl_prod_formula;
	private: System::Windows::Forms::TextBox^ tb_prod_spec;
	private: System::Windows::Forms::TextBox^ tb_prod_weight;
	private: System::Windows::Forms::TextBox^ tb_prod_unit;







	private: System::Windows::Forms::TextBox^ tb_prod_formula;
	private: System::Windows::Forms::Label^ lb_prod_weight;
	private: System::Windows::Forms::Label^ lb_prod_unit;
	private: System::Windows::Forms::Label^ lb_prod_spec;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Button^ btn_search_prod_detail;

	private: System::Windows::Forms::Button^ btn_submit_prod_detail;
	private: System::Windows::Forms::Button^ btn_cancel;
	private: System::Windows::Forms::Label^ lb_prod_detail_id;
	private: System::Windows::Forms::TextBox^ tb_prod_detail_id;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ lb_select_prod;
	private: System::Windows::Forms::ComboBox^ cmb_select_prod;







	private: System::ComponentModel::IContainer^ components;




	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->lbl_prod_formula = (gcnew System::Windows::Forms::Label());
			this->tb_prod_spec = (gcnew System::Windows::Forms::TextBox());
			this->tb_prod_weight = (gcnew System::Windows::Forms::TextBox());
			this->tb_prod_unit = (gcnew System::Windows::Forms::TextBox());
			this->tb_prod_formula = (gcnew System::Windows::Forms::TextBox());
			this->lb_prod_weight = (gcnew System::Windows::Forms::Label());
			this->lb_prod_unit = (gcnew System::Windows::Forms::Label());
			this->lb_prod_spec = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->btn_search_prod_detail = (gcnew System::Windows::Forms::Button());
			this->btn_submit_prod_detail = (gcnew System::Windows::Forms::Button());
			this->btn_cancel = (gcnew System::Windows::Forms::Button());
			this->lb_prod_detail_id = (gcnew System::Windows::Forms::Label());
			this->tb_prod_detail_id = (gcnew System::Windows::Forms::TextBox());
			this->lb_select_prod = (gcnew System::Windows::Forms::Label());
			this->cmb_select_prod = (gcnew System::Windows::Forms::ComboBox());
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// lbl_prod_formula
			// 
			this->lbl_prod_formula->AutoSize = true;
			this->lbl_prod_formula->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_prod_formula->Location = System::Drawing::Point(109, 122);
			this->lbl_prod_formula->Name = L"lbl_prod_formula";
			this->lbl_prod_formula->Size = System::Drawing::Size(199, 17);
			this->lbl_prod_formula->TabIndex = 8;
			this->lbl_prod_formula->Text = L"Enter The Product\'s Formula";
			// 
			// tb_prod_spec
			// 
			this->tb_prod_spec->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tb_prod_spec->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_prod_spec->Location = System::Drawing::Point(404, 277);
			this->tb_prod_spec->Name = L"tb_prod_spec";
			this->tb_prod_spec->Size = System::Drawing::Size(252, 25);
			this->tb_prod_spec->TabIndex = 9;
			// 
			// tb_prod_weight
			// 
			this->tb_prod_weight->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tb_prod_weight->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_prod_weight->Location = System::Drawing::Point(404, 166);
			this->tb_prod_weight->Name = L"tb_prod_weight";
			this->tb_prod_weight->Size = System::Drawing::Size(252, 25);
			this->tb_prod_weight->TabIndex = 10;
			// 
			// tb_prod_unit
			// 
			this->tb_prod_unit->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tb_prod_unit->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_prod_unit->Location = System::Drawing::Point(404, 221);
			this->tb_prod_unit->Name = L"tb_prod_unit";
			this->tb_prod_unit->Size = System::Drawing::Size(252, 25);
			this->tb_prod_unit->TabIndex = 12;
			// 
			// tb_prod_formula
			// 
			this->tb_prod_formula->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tb_prod_formula->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_prod_formula->Location = System::Drawing::Point(404, 114);
			this->tb_prod_formula->Name = L"tb_prod_formula";
			this->tb_prod_formula->Size = System::Drawing::Size(252, 25);
			this->tb_prod_formula->TabIndex = 14;
			// 
			// lb_prod_weight
			// 
			this->lb_prod_weight->AutoSize = true;
			this->lb_prod_weight->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_prod_weight->Location = System::Drawing::Point(109, 174);
			this->lb_prod_weight->Name = L"lb_prod_weight";
			this->lb_prod_weight->Size = System::Drawing::Size(191, 17);
			this->lb_prod_weight->TabIndex = 15;
			this->lb_prod_weight->Text = L"Enter The Product\'s Weight";
			// 
			// lb_prod_unit
			// 
			this->lb_prod_unit->AutoSize = true;
			this->lb_prod_unit->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_prod_unit->Location = System::Drawing::Point(109, 229);
			this->lb_prod_unit->Name = L"lb_prod_unit";
			this->lb_prod_unit->Size = System::Drawing::Size(107, 17);
			this->lb_prod_unit->TabIndex = 16;
			this->lb_prod_unit->Text = L"Enter The Unit";
			// 
			// lb_prod_spec
			// 
			this->lb_prod_spec->AutoSize = true;
			this->lb_prod_spec->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_prod_spec->Location = System::Drawing::Point(109, 285);
			this->lb_prod_spec->Name = L"lb_prod_spec";
			this->lb_prod_spec->Size = System::Drawing::Size(167, 17);
			this->lb_prod_spec->TabIndex = 17;
			this->lb_prod_spec->Text = L"Enter Any Specifications";
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
			this->tableLayoutPanel1->Controls->Add(this->button1, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->btn_search_prod_detail, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->btn_submit_prod_detail, 0, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(196, 389);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(315, 40);
			this->tableLayoutPanel1->TabIndex = 18;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(108, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(99, 34);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Delete";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// btn_search_prod_detail
			// 
			this->btn_search_prod_detail->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_search_prod_detail->Location = System::Drawing::Point(213, 3);
			this->btn_search_prod_detail->Name = L"btn_search_prod_detail";
			this->btn_search_prod_detail->Size = System::Drawing::Size(99, 34);
			this->btn_search_prod_detail->TabIndex = 12;
			this->btn_search_prod_detail->Text = L"Search";
			this->btn_search_prod_detail->UseVisualStyleBackColor = true;
			// 
			// btn_submit_prod_detail
			// 
			this->btn_submit_prod_detail->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_submit_prod_detail->Location = System::Drawing::Point(3, 3);
			this->btn_submit_prod_detail->Name = L"btn_submit_prod_detail";
			this->btn_submit_prod_detail->Size = System::Drawing::Size(99, 34);
			this->btn_submit_prod_detail->TabIndex = 0;
			this->btn_submit_prod_detail->Text = L"Submit";
			this->btn_submit_prod_detail->UseVisualStyleBackColor = true;
			this->btn_submit_prod_detail->Click += gcnew System::EventHandler(this, &MyForm5::btn_submit_prod_detail_Click);
			// 
			// btn_cancel
			// 
			this->btn_cancel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_cancel->Location = System::Drawing::Point(633, 403);
			this->btn_cancel->Name = L"btn_cancel";
			this->btn_cancel->Size = System::Drawing::Size(80, 26);
			this->btn_cancel->TabIndex = 19;
			this->btn_cancel->Text = L"Cancel";
			this->btn_cancel->UseVisualStyleBackColor = true;
			this->btn_cancel->Click += gcnew System::EventHandler(this, &MyForm5::btn_cancel_Click);
			// 
			// lb_prod_detail_id
			// 
			this->lb_prod_detail_id->AutoSize = true;
			this->lb_prod_detail_id->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_prod_detail_id->Location = System::Drawing::Point(109, 73);
			this->lb_prod_detail_id->Name = L"lb_prod_detail_id";
			this->lb_prod_detail_id->Size = System::Drawing::Size(205, 17);
			this->lb_prod_detail_id->TabIndex = 20;
			this->lb_prod_detail_id->Text = L"Enter The Product\'s Detail ID";
			// 
			// tb_prod_detail_id
			// 
			this->tb_prod_detail_id->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tb_prod_detail_id->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_prod_detail_id->Location = System::Drawing::Point(404, 65);
			this->tb_prod_detail_id->Name = L"tb_prod_detail_id";
			this->tb_prod_detail_id->Size = System::Drawing::Size(252, 25);
			this->tb_prod_detail_id->TabIndex = 21;
			// 
			// lb_select_prod
			// 
			this->lb_select_prod->AutoSize = true;
			this->lb_select_prod->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_select_prod->Location = System::Drawing::Point(109, 341);
			this->lb_select_prod->Name = L"lb_select_prod";
			this->lb_select_prod->Size = System::Drawing::Size(133, 17);
			this->lb_select_prod->TabIndex = 22;
			this->lb_select_prod->Text = L"Select The Product";
			// 
			// cmb_select_prod
			// 
			this->cmb_select_prod->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmb_select_prod->FormattingEnabled = true;
			this->cmb_select_prod->Location = System::Drawing::Point(404, 333);
			this->cmb_select_prod->Name = L"cmb_select_prod";
			this->cmb_select_prod->Size = System::Drawing::Size(252, 25);
			this->cmb_select_prod->TabIndex = 23;
			// 
			// MyForm5
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(748, 441);
			this->Controls->Add(this->cmb_select_prod);
			this->Controls->Add(this->lb_select_prod);
			this->Controls->Add(this->tb_prod_detail_id);
			this->Controls->Add(this->lb_prod_detail_id);
			this->Controls->Add(this->btn_cancel);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->lb_prod_spec);
			this->Controls->Add(this->lb_prod_unit);
			this->Controls->Add(this->lb_prod_weight);
			this->Controls->Add(this->tb_prod_formula);
			this->Controls->Add(this->tb_prod_unit);
			this->Controls->Add(this->tb_prod_weight);
			this->Controls->Add(this->tb_prod_spec);
			this->Controls->Add(this->lbl_prod_formula);
			this->Name = L"MyForm5";
			this->Text = L"Pharmacy Inventory";
			this->Load += gcnew System::EventHandler(this, &MyForm5::MyForm5_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
	private: System::Void btn_submit_prod_detail_Click(System::Object^ sender, System::EventArgs^ e) {
		int product_detail_id;
		String^ prod_detail_id = this->tb_prod_detail_id->Text;
		String^ prod_formula = this->tb_prod_formula->Text;
		String^ prod_weight = this->tb_prod_weight->Text;
		String^ prod_unit = this->tb_prod_unit->Text;
		String^ prod_spec = this->tb_prod_spec->Text;
		String^ selectedProduct = this->cmb_select_prod->Text->Trim();

		// Check if prod_detail_id is not empty
		if (String::IsNullOrEmpty(prod_detail_id)) {
			//System::Windows::Forms::MessageBox::Show("Product ID should not be entered manually");
			//return;
			// Open ProductDetails_Id.txt to read the current product_detail_id
			std::ifstream infile1("C:/Users/aliya.akhtar/Desktop/ProductDetails_Id.txt");
			if (infile1.is_open()) {
				infile1 >> product_detail_id;
				infile1.close();
			}
			else {
				System::Windows::Forms::MessageBox::Show("Error in opening the Product detail id file");
			}

			// Open Product.txt to find the product_id based on the selected product name
			std::ifstream ProductFile("C:/Users/aliya.akhtar/Desktop/Product.txt");
			std::string line;
			int product_id = -1;
			if (ProductFile.is_open()) {
				while (std::getline(ProductFile, line)) {
					// Split the line by the '|' delimiter
					std::istringstream iss(line);
					std::string PdIDPart, catIDPart, PdNamePart, PdStorageTypePart;
					if (std::getline(iss, PdIDPart, '|') && std::getline(iss, catIDPart, '|') && std::getline(iss, PdNamePart, '|') && std::getline(iss, PdStorageTypePart)) {
						std::string productIDStr = PdIDPart;
						std::string productNameStr = PdNamePart;
						int productId = std::stoi(productIDStr);
						String^ managedProductName = msclr::interop::marshal_as<String^>(productNameStr.c_str())->Trim();

						if (managedProductName == selectedProduct) {
							product_id = productId;
							break;
						}
					}
				}
				ProductFile.close();

				if (product_id != -1) {
					// Open Product_Details.txt to append the product details
					std::ofstream outfile1("C:/Users/aliya.akhtar/Desktop/ProductDetails.txt", std::ios::app);
					if (outfile1.is_open()) {
						std::string Pd_formula, Pd_weight, Pd_unit, Pd_spec;

						if (!String::IsNullOrEmpty(this->tb_prod_formula->Text))
							Pd_formula = msclr::interop::marshal_as<std::string>(prod_formula);
						if (!String::IsNullOrEmpty(this->tb_prod_weight->Text))
							Pd_weight = msclr::interop::marshal_as<std::string>(prod_weight);
						if (!String::IsNullOrEmpty(this->tb_prod_unit->Text))
							Pd_unit = msclr::interop::marshal_as<std::string>(prod_unit);
						if (!String::IsNullOrEmpty(this->tb_prod_spec->Text))
							Pd_spec = msclr::interop::marshal_as<std::string>(prod_spec);

						outfile1 << product_detail_id << "|" << product_id << "|" << Pd_formula << "|" << Pd_weight << "|" << Pd_unit << "|" << Pd_spec << "\n";
						outfile1.close();
					}
					else {
						System::Windows::Forms::MessageBox::Show("Error in opening the product details file");
					}
					// Update ProductDetails_Id.txt with the new product_detail_id
					std::ofstream outfile2("C:/Users/aliya.akhtar/Desktop/ProductDetails_Id.txt");
					if (outfile2.is_open()) {
						product_detail_id++;
						outfile2 << product_detail_id;
						outfile2.close();
					}
					else {
						System::Windows::Forms::MessageBox::Show("Error in opening the product detail ID file");
					}

					System::Windows::Forms::MessageBox::Show("Record has been added to file!");
					// Clear the textboxes and combo box
					this->tb_prod_formula->Text = "";
					this->tb_prod_weight->Text = "";
					this->tb_prod_unit->Text = "";
					this->tb_prod_spec->Text = "";
					this->cmb_select_prod->Text = "";
				}
			}
			else {
				System::Windows::Forms::MessageBox::Show("Error in opening the products records file");
			}
		}
		else {
			System::Windows::Forms::MessageBox::Show("Product details ID should not be entered manually");
		}

	}

	
	private: System::Void btn_cancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void btn_delete_prod_detail_Click(System::Object^ sender, System::EventArgs^ e) {
		int productIdToDelete = System::Convert::ToInt32(tb_prod_detail_id->Text);

		std::ifstream infile("C:/Users/aliya.akhtar/Desktop/ProductDetails.txt");
		std::string line;
		std::vector<std::string> updatedRecords;  // To store updated records
		bool recordDeleted = false;  // Flag to track whether a record was deleted

		if (infile.is_open()) {
			while (std::getline(infile, line)) {
				std::istringstream iss(line);
				int product_det_id;
				std::string data;

				// Extract ID
				iss >> product_det_id;

				if (product_det_id != productIdToDelete) {
					// If the ID doesn't match, keep this record
					updatedRecords.push_back(line);
				}
				else {
					recordDeleted = true;  // Record found and deleted
				}
			}
			infile.close();

			// Now, write the updated records back to the file
			std::ofstream outfile("C:/Users/aliya.akhtar/Desktop/ProductDetails.txt");

			if (outfile.is_open()) {
				for (const std::string& record : updatedRecords) {
					outfile << record << "\n";
				}
				outfile.close();

				// Clear the textboxes
				tb_prod_detail_id->Text = "";
				tb_prod_formula->Text = "";
				tb_prod_weight->Text = "";
				tb_prod_unit->Text = "";
				tb_prod_spec->Text = "";

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
		   
	private: System::Void btn_search_prod_detail_Click(System::Object^ sender, System::EventArgs^ e) {
		int PdDetailIdToSearch = System::Convert::ToInt32(tb_prod_detail_id->Text);
		System::String^ filePath = "C:/Users/aliya.akhtar/Desktop/ProductDetails.txt";
		std::wstring filePathWStr = msclr::interop::marshal_as<std::wstring>(filePath);

		std::ifstream infile2(filePathWStr);
		std::string line;
		bool productFound = false; // Flag to track whether the product was found

		if (infile2.is_open()) {
			while (std::getline(infile2, line)) {
				std::istringstream iss(line);
				std::string PdDetailIDStr;

				// Extract the PdIDPart
				std::string PdDetailIDPart, ProductID, PdFormula, PdWeight, PdUnit, PdSpec;
				if (std::getline(iss, PdDetailIDPart, '|') && std::getline(iss, ProductID, '|') && std::getline(iss, PdFormula, '|') && std::getline(iss, PdWeight, '|') && std::getline(iss, PdUnit, '|') && std::getline(iss, PdSpec)) {
					// Convert PdIDPart to an integer
					int PdDetailID = std::stoi(PdDetailIDPart);

					// Check if PdID matches the one to search
					if (PdDetailID == PdDetailIdToSearch) {
						// Display product details
						std::string ProductIDStr = ProductID;
						std::string PdFormulaStr = PdFormula;
						std::string PdWeightStr = PdWeight;
						std::string PdUnitStr = PdUnit;
						std::string PdSpecStr = PdSpec;

						// Set the text of Windows Forms controls
						tb_prod_formula->Text = gcnew System::String(PdFormulaStr.c_str());
						tb_prod_weight->Text = gcnew System::String(PdWeightStr.c_str());
						tb_prod_unit->Text = gcnew System::String(PdUnitStr.c_str());
						tb_prod_weight->Text = gcnew System::String(PdWeightStr.c_str());
						tb_prod_spec->Text = gcnew System::String(PdSpecStr.c_str());

						// Now, find and set the product
						std::ifstream infile3("C:/Users/asamad.nasir/Desktop/Product.txt");
						if (infile3.is_open()) {
							while (std::getline(infile3, line)) {
								std::istringstream iss(line);
								std::string PdIDPart, CtIDPart, PdNamePart, PdStorageType;
								if (std::getline(iss, PdIDPart, '|') && std::getline(iss, CtIDPart, '|') && std::getline(iss, PdNamePart, '|') && std::getline(iss, PdStorageType)) {
									int PdID = std::stoi(PdIDPart);

									// Check if PdID matches the one from the product
									if (PdID == std::stoi(PdIDPart)) {
										std::string PdNameStr = PdNamePart;
										cmb_select_prod->Text = gcnew System::String(PdNameStr.c_str());
										break; // Product found, no need to continue searching
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
			tb_prod_formula->Text = "";
			tb_prod_weight->Text = "";
			tb_prod_unit->Text = "";
			tb_prod_spec->Text = "";
			cmb_select_prod->Text = "";
		}
	}

	private: System::Void MyForm5_Load(System::Object^ sender, System::EventArgs^ e) {
		std::ifstream productRecordsFile("C:/Users/aliya.akhtar/Desktop/Product.txt");
		std::string line;

		if (productRecordsFile.is_open()) {
			std::set<std::string> uniqueProduct; // Use a set to store unique category names

			while (std::getline(productRecordsFile, line)) {
				// Split the line by the '|' delimiter
				std::istringstream iss(line);
				std::string prodIDPart, catIDPart, prodnmPart, prodstoragetyp;

				if (std::getline(iss, prodIDPart, '|') && std::getline(iss, catIDPart, '|') && std::getline(iss, prodnmPart, '|') && std::getline(iss, prodstoragetyp)) {
					std::string ProductName = prodnmPart;

					// Check if the product name is not in the set (i.e., it's unique)
					if (uniqueProduct.find(ProductName) == uniqueProduct.end()) {
						System::String^ managedName = gcnew System::String(ProductName.c_str());
						cmb_select_prod->Items->Add(managedName);

						// Add the category name to the set to mark it as added
						uniqueProduct.insert(ProductName);
					}
				}
			}
			productRecordsFile.close(); // Close the file when done reading
		}
		else {
			// Handle the case where the file cannot be opened
			System::Windows::Forms::MessageBox::Show("Error in opening the file for reading.");
		}
	}
};
}
