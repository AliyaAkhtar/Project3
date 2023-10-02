#pragma once
#include "MyForm3.h"

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
	private: System::Windows::Forms::Button^ btn_manufacturer;
	private: System::Windows::Forms::Button^ btn_category;
	private: System::Windows::Forms::Button^ btn_product;
	private: System::Windows::Forms::Button^ btn_prod_detail;
	private: System::Windows::Forms::Label^ lbl_manu_nm;
	private: System::Windows::Forms::TextBox^ tb_manu_nm;

	private: System::Windows::Forms::Label^ lb_manu_add;

	private: System::Windows::Forms::TextBox^ tb_manu_add;

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
			this->btn_manufacturer = (gcnew System::Windows::Forms::Button());
			this->btn_category = (gcnew System::Windows::Forms::Button());
			this->btn_product = (gcnew System::Windows::Forms::Button());
			this->btn_prod_detail = (gcnew System::Windows::Forms::Button());
			this->lbl_manu_nm = (gcnew System::Windows::Forms::Label());
			this->tb_manu_nm = (gcnew System::Windows::Forms::TextBox());
			this->lb_manu_add = (gcnew System::Windows::Forms::Label());
			this->tb_manu_add = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// btn_manufacturer
			// 
			this->btn_manufacturer->BackColor = System::Drawing::Color::Silver;
			this->btn_manufacturer->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_manufacturer->Location = System::Drawing::Point(37, 28);
			this->btn_manufacturer->Name = L"btn_manufacturer";
			this->btn_manufacturer->Size = System::Drawing::Size(173, 29);
			this->btn_manufacturer->TabIndex = 3;
			this->btn_manufacturer->Text = L"MANUFACTURER";
			this->btn_manufacturer->UseVisualStyleBackColor = false;
			// 
			// btn_category
			// 
			this->btn_category->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_category->Location = System::Drawing::Point(37, 96);
			this->btn_category->Name = L"btn_category";
			this->btn_category->Size = System::Drawing::Size(173, 26);
			this->btn_category->TabIndex = 4;
			this->btn_category->Text = L"CATEGORY";
			this->btn_category->UseVisualStyleBackColor = true;
			this->btn_category->Click += gcnew System::EventHandler(this, &MyForm2::btn_category_Click);
			// 
			// btn_product
			// 
			this->btn_product->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_product->Location = System::Drawing::Point(37, 161);
			this->btn_product->Name = L"btn_product";
			this->btn_product->Size = System::Drawing::Size(173, 26);
			this->btn_product->TabIndex = 5;
			this->btn_product->Text = L"PRODUCT";
			this->btn_product->UseVisualStyleBackColor = true;
			this->btn_product->Click += gcnew System::EventHandler(this, &MyForm2::btn_product_Click);
			// 
			// btn_prod_detail
			// 
			this->btn_prod_detail->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_prod_detail->Location = System::Drawing::Point(37, 226);
			this->btn_prod_detail->Name = L"btn_prod_detail";
			this->btn_prod_detail->Size = System::Drawing::Size(173, 30);
			this->btn_prod_detail->TabIndex = 6;
			this->btn_prod_detail->Text = L"PRODUCT DETAILS";
			this->btn_prod_detail->UseVisualStyleBackColor = true;
			this->btn_prod_detail->Click += gcnew System::EventHandler(this, &MyForm2::btn_prod_detail_Click);
			// 
			// lbl_manu_nm
			// 
			this->lbl_manu_nm->AutoSize = true;
			this->lbl_manu_nm->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_manu_nm->Location = System::Drawing::Point(339, 28);
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
			this->tb_manu_nm->Location = System::Drawing::Point(342, 64);
			this->tb_manu_nm->Name = L"tb_manu_nm";
			this->tb_manu_nm->Size = System::Drawing::Size(245, 25);
			this->tb_manu_nm->TabIndex = 8;
			// 
			// lb_manu_add
			// 
			this->lb_manu_add->AutoSize = true;
			this->lb_manu_add->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_manu_add->Location = System::Drawing::Point(339, 116);
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
			this->tb_manu_add->Location = System::Drawing::Point(342, 150);
			this->tb_manu_add->Name = L"tb_manu_add";
			this->tb_manu_add->Size = System::Drawing::Size(245, 25);
			this->tb_manu_add->TabIndex = 10;
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(767, 354);
			this->Controls->Add(this->tb_manu_add);
			this->Controls->Add(this->lb_manu_add);
			this->Controls->Add(this->tb_manu_nm);
			this->Controls->Add(this->lbl_manu_nm);
			this->Controls->Add(this->btn_prod_detail);
			this->Controls->Add(this->btn_product);
			this->Controls->Add(this->btn_category);
			this->Controls->Add(this->btn_manufacturer);
			this->Name = L"MyForm2";
			this->Text = L"MyForm2";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_category_Click(System::Object^ sender, System::EventArgs^ e) {
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
};
}
