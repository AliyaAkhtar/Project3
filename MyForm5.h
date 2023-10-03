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
	private: System::Windows::Forms::Button^ btn_manufacturer;
	private: System::Windows::Forms::Button^ btn_category;
	private: System::Windows::Forms::Button^ btn_product;
	private: System::Windows::Forms::Button^ btn_prod_detail;
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
			this->btn_manufacturer = (gcnew System::Windows::Forms::Button());
			this->btn_category = (gcnew System::Windows::Forms::Button());
			this->btn_product = (gcnew System::Windows::Forms::Button());
			this->btn_prod_detail = (gcnew System::Windows::Forms::Button());
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
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// btn_manufacturer
			// 
			this->btn_manufacturer->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_manufacturer->Location = System::Drawing::Point(40, 34);
			this->btn_manufacturer->Name = L"btn_manufacturer";
			this->btn_manufacturer->Size = System::Drawing::Size(173, 29);
			this->btn_manufacturer->TabIndex = 4;
			this->btn_manufacturer->Text = L"MANUFACTURER";
			this->btn_manufacturer->UseVisualStyleBackColor = true;
			// 
			// btn_category
			// 
			this->btn_category->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_category->Location = System::Drawing::Point(40, 100);
			this->btn_category->Name = L"btn_category";
			this->btn_category->Size = System::Drawing::Size(173, 26);
			this->btn_category->TabIndex = 5;
			this->btn_category->Text = L"CATEGORY";
			this->btn_category->UseVisualStyleBackColor = true;
			// 
			// btn_product
			// 
			this->btn_product->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_product->Location = System::Drawing::Point(40, 166);
			this->btn_product->Name = L"btn_product";
			this->btn_product->Size = System::Drawing::Size(173, 26);
			this->btn_product->TabIndex = 6;
			this->btn_product->Text = L"PRODUCT";
			this->btn_product->UseVisualStyleBackColor = true;
			// 
			// btn_prod_detail
			// 
			this->btn_prod_detail->BackColor = System::Drawing::Color::Silver;
			this->btn_prod_detail->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_prod_detail->Location = System::Drawing::Point(40, 234);
			this->btn_prod_detail->Name = L"btn_prod_detail";
			this->btn_prod_detail->Size = System::Drawing::Size(173, 30);
			this->btn_prod_detail->TabIndex = 7;
			this->btn_prod_detail->Text = L"PRODUCT DETAILS";
			this->btn_prod_detail->UseVisualStyleBackColor = false;
			// 
			// lbl_prod_formula
			// 
			this->lbl_prod_formula->AutoSize = true;
			this->lbl_prod_formula->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_prod_formula->Location = System::Drawing::Point(346, 24);
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
			this->tb_prod_spec->Location = System::Drawing::Point(349, 277);
			this->tb_prod_spec->Name = L"tb_prod_spec";
			this->tb_prod_spec->Size = System::Drawing::Size(242, 25);
			this->tb_prod_spec->TabIndex = 9;
			// 
			// tb_prod_weight
			// 
			this->tb_prod_weight->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tb_prod_weight->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_prod_weight->Location = System::Drawing::Point(349, 132);
			this->tb_prod_weight->Name = L"tb_prod_weight";
			this->tb_prod_weight->Size = System::Drawing::Size(242, 25);
			this->tb_prod_weight->TabIndex = 10;
			// 
			// tb_prod_unit
			// 
			this->tb_prod_unit->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tb_prod_unit->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_prod_unit->Location = System::Drawing::Point(349, 205);
			this->tb_prod_unit->Name = L"tb_prod_unit";
			this->tb_prod_unit->Size = System::Drawing::Size(242, 25);
			this->tb_prod_unit->TabIndex = 12;
			// 
			// tb_prod_formula
			// 
			this->tb_prod_formula->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tb_prod_formula->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_prod_formula->Location = System::Drawing::Point(349, 56);
			this->tb_prod_formula->Name = L"tb_prod_formula";
			this->tb_prod_formula->Size = System::Drawing::Size(242, 25);
			this->tb_prod_formula->TabIndex = 14;
			// 
			// lb_prod_weight
			// 
			this->lb_prod_weight->AutoSize = true;
			this->lb_prod_weight->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_prod_weight->Location = System::Drawing::Point(346, 100);
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
			this->lb_prod_unit->Location = System::Drawing::Point(346, 175);
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
			this->lb_prod_spec->Location = System::Drawing::Point(346, 247);
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
			this->tableLayoutPanel1->Location = System::Drawing::Point(349, 325);
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
			this->btn_submit_prod_detail->Click += gcnew System::EventHandler(this, &MyForm5::btn_submit_prod_detail_Click);
			// 
			// btn_cancel
			// 
			this->btn_cancel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_cancel->Location = System::Drawing::Point(662, 265);
			this->btn_cancel->Name = L"btn_cancel";
			this->btn_cancel->Size = System::Drawing::Size(80, 26);
			this->btn_cancel->TabIndex = 19;
			this->btn_cancel->Text = L"Cancel";
			this->btn_cancel->UseVisualStyleBackColor = true;
			this->btn_cancel->Click += gcnew System::EventHandler(this, &MyForm5::btn_cancel_Click);
			// 
			// MyForm5
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(767, 367);
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
			this->Controls->Add(this->btn_prod_detail);
			this->Controls->Add(this->btn_product);
			this->Controls->Add(this->btn_category);
			this->Controls->Add(this->btn_manufacturer);
			this->Name = L"MyForm5";
			this->Text = L"Pharmacy Inventory";
			this->tableLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_submit_prod_detail_Click(System::Object^ sender, System::EventArgs^ e) {
		int Product_details_id;
		
		String^ Pd_formula = this->tb_prod_formula->Text;
		String^ Pd_weight = this->tb_prod_weight->Text;
		String^ Pd_unit = this->tb_prod_unit->Text;
		String^ Pd_spec = this->tb_prod_spec->Text;
		std::ifstream infile("C:/Users/aliya.akhtar/Desktop/ProductDetails_Id.txt");
		if (infile.is_open()) {   //Check if the file is open or not
			infile >> Product_details_id;   //Reading the Product ID from file

			infile.close();
		}
		else {
			System::Windows::Forms::MessageBox::Show("Error! File Not Found"); //Pop up message 
		}
		//Opening the file in Write mode
		std::ofstream outfile1("C:/Users/aliya.akhtar/Desktop/Product Details.txt", std::ios::app);
		if (outfile1.is_open()) {
			std::string  Pd_formula_str, Pd_weight_str, Pd_unit_str, Pd_spec_str;
			if (!String::IsNullOrEmpty(this->tb_prod_formula->Text))    //Check whether the textbox is empty or not
				Pd_formula_str = msclr::interop::marshal_as<std::string>(Pd_formula);
			if (!String::IsNullOrEmpty(this->tb_prod_weight->Text))
				Pd_weight_str = msclr::interop::marshal_as<std::string>(Pd_weight);
			if (!String::IsNullOrEmpty(this->tb_prod_unit->Text))
				Pd_unit_str = msclr::interop::marshal_as<std::string>(Pd_unit);
			if (!String::IsNullOrEmpty(this->tb_prod_spec->Text))
				Pd_spec_str = msclr::interop::marshal_as<std::string>(Pd_spec);

			outfile1 << "Product ID :" << Product_details_id << " | " << "Product's Formula :" << Pd_formula_str << " | " << "Product's Weight :" << Pd_weight_str << " | " << "Product's Unit :" << Pd_unit_str << " | " << "Product's Specification :" << Pd_spec_str << "\n";
			//outfile1 << "---------------------------------------------------------------------------------------------------------- " << "\n";
			outfile1.close();

		}
		else {
			System::Windows::Forms::MessageBox::Show("Error! File Not Found");
		}
		/*std::ifstream infile1("C:/Users/aliya.akhtar/Desktop/Product_Id.txt");
		int Product_id;
		if (infile1.is_open()) {   //Check if the file is open or not
			infile1 >> Product_id;   //Reading the Product ID from file

			infile1.close();

		}
		else {
			System::Windows::Forms::MessageBox::Show("Error! File Not Found"); //Pop up message 
		}
		std::ofstream outfile2("C:/Users/aliya.akhtar/Desktop/Product_Id.txt"); //Opening file for increasing the value of Product_ID
		

		if (outfile2.is_open()) {
			Product_id++;       //incrementing the product id
			outfile2 << Product_id;
			outfile2.close();
		}
		else {
			System::Windows::Forms::MessageBox::Show("Error! File Not Found");
		}
		std::ifstream infile2("C:/Users/aliya.akhtar/Desktop/ProductCategory_Id.txt");
		int category_id;
		if (infile2.is_open()) {   //Check if the file is open or not
			infile2 >> category_id;   //Reading the Product ID from file

			infile2.close();
		}
		else {
			System::Windows::Forms::MessageBox::Show("Error! File Not Found");
		}
		std::ofstream outfile3("C:/Users/aliya.akhtar/Desktop/ProductCategory_Id.txt"); //Opening file for increasing the value of Category_ID
		
		if (outfile3.is_open()) {
			category_id++;         //incrementing the category id
			outfile3 << category_id;
			outfile3.close();
		}
		else {
			System::Windows::Forms::MessageBox::Show("Error! File Not Found");
		}
		std::ifstream manuIdFile("C:/Users/aliya.akhtar/Desktop/Manufacturers_Id.txt");
		int manufacturer_id;

		if (manuIdFile.is_open()) {
			manuIdFile >> manufacturer_id;  // Read the current manufacturer ID from the file
			manuIdFile.close();
		}
		std::ofstream newManuIdFile("C:/Users/aliya.akhtar/Desktop/Manufacturers_Id.txt");
		
		if (newManuIdFile.is_open()) {
			manufacturer_id++;
			newManuIdFile << manufacturer_id;
			newManuIdFile.close();
		}
		else {
			System::Windows::Forms::MessageBox::Show("Error! File Not Found");
		}
		*/
		std::ofstream newProdDetailIdFile("C:/Users/aliya.akhtar/Desktop/ProductDetails_Id.txt");
		if (newProdDetailIdFile.is_open()) {
			Product_details_id++;
			newProdDetailIdFile << Product_details_id;
			newProdDetailIdFile.close();
		}
		else {
			System::Windows::Forms::MessageBox::Show("Error! File Not Found");
		}

		System::Windows::Forms::MessageBox::Show("Record has been added to file!");

		// Clear the textboxes
		this->tb_prod_formula->Text = "";
		this->tb_prod_weight->Text = "";
		this->tb_prod_unit->Text = "";
		this->tb_prod_spec->Text = "";
	}

	private: System::Void btn_cancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}
