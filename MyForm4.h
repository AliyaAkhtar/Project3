#pragma once
#include "MyForm5.h"
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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ btn_cancel;

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
			this->btn_delete_prod = (gcnew System::Windows::Forms::Button());
			this->btn_submit_prod = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->btn_cancel = (gcnew System::Windows::Forms::Button());
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
			this->lb_stor_typ->Location = System::Drawing::Point(109, 179);
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
			this->tb_stor_typ->Location = System::Drawing::Point(405, 171);
			this->tb_stor_typ->Name = L"tb_stor_typ";
			this->tb_stor_typ->Size = System::Drawing::Size(252, 25);
			this->tb_stor_typ->TabIndex = 7;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->btn_delete_prod, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->btn_submit_prod, 0, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(224, 239);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(315, 40);
			this->tableLayoutPanel1->TabIndex = 13;
			// 
			// btn_delete_prod
			// 
			this->btn_delete_prod->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_delete_prod->Location = System::Drawing::Point(160, 3);
			this->btn_delete_prod->Name = L"btn_delete_prod";
			this->btn_delete_prod->Size = System::Drawing::Size(152, 34);
			this->btn_delete_prod->TabIndex = 12;
			this->btn_delete_prod->Text = L"Delete";
			this->btn_delete_prod->UseVisualStyleBackColor = true;
			// 
			// btn_submit_prod
			// 
			this->btn_submit_prod->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_submit_prod->Location = System::Drawing::Point(3, 3);
			this->btn_submit_prod->Name = L"btn_submit_prod";
			this->btn_submit_prod->Size = System::Drawing::Size(151, 34);
			this->btn_submit_prod->TabIndex = 0;
			this->btn_submit_prod->Text = L"Submit";
			this->btn_submit_prod->UseVisualStyleBackColor = true;
			this->btn_submit_prod->Click += gcnew System::EventHandler(this, &MyForm4::btn_submit_prod_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(109, 62);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(172, 17);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Enter The Product Name";
			// 
			// textBox1
			// 
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(405, 54);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(252, 25);
			this->textBox1->TabIndex = 15;
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
			this->btn_cancel->Click += gcnew System::EventHandler(this, &MyForm4::btn_cancel_Click);
			// 
			// MyForm4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(767, 354);
			this->Controls->Add(this->btn_cancel);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->tb_stor_typ);
			this->Controls->Add(this->lb_stor_typ);
			this->Controls->Add(this->tb_prod_nm);
			this->Controls->Add(this->lbl_prod_nm);
			this->Name = L"MyForm4";
			this->Text = L"Pharmacy Inventory";
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
	int category_id;
	String^ prod_nm = this->tb_prod_nm->Text;
	String^ prod_storage_type = this->tb_stor_typ->Text;
	//Opening the file in Read mode//
	std::ifstream infile1("C:/Users/aliya.akhtar/Desktop/Product_Id.txt");
	if (infile1.is_open()) {   //Check if the file is open or not
		infile1 >> product_id;   //Reading the Product ID from file

		infile1.close();

	}
	else {
		System::Windows::Forms::MessageBox::Show("Error! File Not Found"); //Pop up message 
	}
	std::ifstream infile2("C:/Users/aliya.akhtar/Desktop/ProductCategory_Id.txt");
	if (infile2.is_open()) {   //Check if the file is open or not
		infile2 >> category_id;   //Reading the Product ID from file

		infile2.close();
		//Opening the file in Write mode
	std:: ofstream outfile1("C:/Users/aliya.akhtar/Desktop/Product.txt", std::ios::app);
		if (outfile1.is_open()) {
			std::string Pd_nm_str, Pd_storage_type_str;
			if (!String::IsNullOrEmpty(this->tb_prod_nm->Text))    //Check whether the textbox is empty or not
				Pd_nm_str = msclr::interop::marshal_as<std::string>(prod_nm);
			if (!String::IsNullOrEmpty(this->tb_stor_typ->Text))
				Pd_storage_type_str = msclr::interop::marshal_as<std::string>(prod_storage_type);



			outfile1 << "Product ID :" << product_id << " | " << "Category_ID :" << category_id << " | " + Pd_nm_str + " | " + Pd_storage_type_str << "\n";
			//outfile1 << "------------------------------------------------------- " << "\n";
			outfile1.close();



		}
		else {
			System::Windows::Forms::MessageBox::Show("Error! File Not Found");
		}
		/*ofstream outfile2("C:/Users/asamad.nasir/Desktop/Product_id.txt"); //Opening file for increasing the value of Product_ID
		//new_id = Product_id++;
		if (outfile2.is_open()) {
			Product_id++;
			outfile2 << Product_id;
			outfile2.close();
		}
		else {
			System::Windows::Forms::MessageBox::Show("Error! File Not Found");
		}
		ofstream outfile3("C:/Users/asamad.nasir/Desktop/Category_id.txt"); //Opening file for increasing the value of Category_ID
		//new_id = Product_id++;
		if (outfile3.is_open()) {
			Category_id++;
			outfile3 << Category_id;
			outfile3.close();
		}
		else {
			System::Windows::Forms::MessageBox::Show("Error! File Not Found");
		}*/
		System::Windows::Forms::MessageBox::Show("Record has been added to file!");

		// Clear the textboxes
		this->tb_prod_nm->Text = "";
		this->tb_stor_typ->Text = "";
	}

}
	private: System::Void btn_cancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}
