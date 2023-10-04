#pragma once
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
	private: System::Windows::Forms::Button^ btn_delete_prod_detail;
	private: System::Windows::Forms::Button^ btn_submit_prod_detail;
	private: System::Windows::Forms::Button^ btn_cancel;
	private: System::Windows::Forms::Label^ lb_prod_detail_id;
	private: System::Windows::Forms::TextBox^ tb_prod_detail_id;





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
			this->btn_delete_prod_detail = (gcnew System::Windows::Forms::Button());
			this->btn_submit_prod_detail = (gcnew System::Windows::Forms::Button());
			this->btn_cancel = (gcnew System::Windows::Forms::Button());
			this->lb_prod_detail_id = (gcnew System::Windows::Forms::Label());
			this->tb_prod_detail_id = (gcnew System::Windows::Forms::TextBox());
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
			this->tb_prod_spec->Size = System::Drawing::Size(220, 25);
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
			this->tb_prod_weight->Size = System::Drawing::Size(220, 25);
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
			this->tb_prod_unit->Size = System::Drawing::Size(220, 25);
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
			this->tb_prod_formula->Size = System::Drawing::Size(220, 25);
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
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->btn_delete_prod_detail, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->btn_submit_prod_detail, 0, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(186, 331);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(315, 40);
			this->tableLayoutPanel1->TabIndex = 18;
			// 
			// btn_delete_prod_detail
			// 
			this->btn_delete_prod_detail->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_delete_prod_detail->Location = System::Drawing::Point(160, 3);
			this->btn_delete_prod_detail->Name = L"btn_delete_prod_detail";
			this->btn_delete_prod_detail->Size = System::Drawing::Size(149, 34);
			this->btn_delete_prod_detail->TabIndex = 12;
			this->btn_delete_prod_detail->Text = L"Delete";
			this->btn_delete_prod_detail->UseVisualStyleBackColor = true;
			this->btn_delete_prod_detail->Click += gcnew System::EventHandler(this, &MyForm5::btn_delete_prod_detail_Click);
			// 
			// btn_submit_prod_detail
			// 
			this->btn_submit_prod_detail->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_submit_prod_detail->Location = System::Drawing::Point(3, 3);
			this->btn_submit_prod_detail->Name = L"btn_submit_prod_detail";
			this->btn_submit_prod_detail->Size = System::Drawing::Size(151, 34);
			this->btn_submit_prod_detail->TabIndex = 0;
			this->btn_submit_prod_detail->Text = L"Submit";
			this->btn_submit_prod_detail->UseVisualStyleBackColor = true;
			//this->btn_submit_prod_detail->Click += gcnew System::EventHandler(this, &MyForm5::btn_submit_prod_detail_Click);
			// 
			// btn_cancel
			// 
			this->btn_cancel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_cancel->Location = System::Drawing::Point(634, 344);
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
			this->tb_prod_detail_id->Size = System::Drawing::Size(220, 25);
			this->tb_prod_detail_id->TabIndex = 21;
			// 
			// MyForm5
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(745, 382);
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
			this->tableLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		/*
	private: System::Void btn_submit_prod_detail_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ productIdText = this->tb_prod_detail_id>Text;

		// Check if the user manually entered an ID
		if (!String::IsNullOrEmpty(productIdText)) {
			System::Windows::Forms::MessageBox::Show("Product ID will be generated automatically. Please leave the ID field empty.");
			return; // Exit the function
		}

		// Create variables to store the product details
		String^ Pd_formula = this->tb_prod_formula->Text;
		String^ Pd_weight = this->tb_prod_weight->Text;
		String^ Pd_unit = this->tb_prod_unit->Text;
		String^ Pd_spec = this->tb_prod_spec->Text;

		// Check if any of the fields are empty
		if (String::IsNullOrEmpty(Pd_formula) || String::IsNullOrEmpty(Pd_weight) || String::IsNullOrEmpty(Pd_unit) || String::IsNullOrEmpty(Pd_spec)) {
			System::Windows::Forms::MessageBox::Show("Please fill in all the fields.");
			return;
		}

		// Open the file for reading the current product details ID
		std::ifstream idFile("C:/Users/aliya.akhtar/Desktop/ProductDetails_Id.txt");
		int product_details_id;

		if (idFile.is_open()) {
			idFile >> product_details_id;  // Read the current product details ID from the file
			idFile.close();

			// Open the file for appending the product details records
			std::ofstream prodDetailsOutfile("C:/Users/aliya.akhtar/Desktop/Product Details.txt", std::ios::app);

			if (prodDetailsOutfile.is_open()) {
				std::string Pd_formula_str = msclr::interop::marshal_as<std::string>(Pd_formula);
				std::string Pd_weight_str = msclr::interop::marshal_as<std::string>(Pd_weight);
				std::string Pd_unit_str = msclr::interop::marshal_as<std::string>(Pd_unit);
				std::string Pd_spec_str = msclr::interop::marshal_as<std::string>(Pd_spec);

				// Write the product details record to the file
				prodDetailsOutfile << product_details_id << "|" << Pd_formula_str << "|" << Pd_weight_str << "|" << Pd_unit_str << "|" << Pd_spec_str << "\n";
				prodDetailsOutfile.close();

				// Increment the product details ID for the next record
				product_details_id++;

				// Update the product details ID file with the new incremented value
				std::ofstream newProdDetailsIdFile("C:/Users/aliya.akhtar/Desktop/ProductDetails_Id.txt");

				if (newProdDetailsIdFile.is_open()) {
					newProdDetailsIdFile << product_details_id;
					newProdDetailsIdFile.close();
				}
				else {
					System::Windows::Forms::MessageBox::Show("Error in opening the product details ID file.");
				}

				System::Windows::Forms::MessageBox::Show("Record has been added to file!");

				// Clear the textboxes
				this->tb_prod_id->Text = ""; // Clear the ID textbox
				this->tb_prod_formula->Text = "";
				this->tb_prod_weight->Text = "";
				this->tb_prod_unit->Text = "";
				this->tb_prod_spec->Text = "";
			}
			else {
				System::Windows::Forms::MessageBox::Show("Error in opening the product details records file.");
			}
		}
		else {
			System::Windows::Forms::MessageBox::Show("Error in opening the product details ID file.");
		}
	}

	*/
	private: System::Void btn_cancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void btn_delete_prod_detail_Click(System::Object^ sender, System::EventArgs^ e) {
		int productIdToDelete = System::Convert::ToInt32(tb_prod_detail_id->Text);

		std::ifstream infile("C:/Users/aliya.akhtar/Desktop/Product Details.txt");
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
			std::ofstream outfile("C:/Users/aliya.akhtar/Desktop/Product Details.txt");

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
};
}
