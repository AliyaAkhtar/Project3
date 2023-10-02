#pragma once
#include "MyForm4.h"

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
	private: System::Windows::Forms::Button^ btn_product;
	private: System::Windows::Forms::Button^ btn_category;
	private: System::Windows::Forms::Button^ btn_manufacturer;
	private: System::Windows::Forms::Button^ btn_prod_detail;
	private: System::Windows::Forms::Label^ lbl_prod_cat;
	private: System::Windows::Forms::TextBox^ tb_prod_cat;


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
			this->btn_product = (gcnew System::Windows::Forms::Button());
			this->btn_category = (gcnew System::Windows::Forms::Button());
			this->btn_manufacturer = (gcnew System::Windows::Forms::Button());
			this->btn_prod_detail = (gcnew System::Windows::Forms::Button());
			this->lbl_prod_cat = (gcnew System::Windows::Forms::Label());
			this->tb_prod_cat = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// btn_product
			// 
			this->btn_product->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_product->Location = System::Drawing::Point(32, 163);
			this->btn_product->Name = L"btn_product";
			this->btn_product->Size = System::Drawing::Size(173, 26);
			this->btn_product->TabIndex = 1;
			this->btn_product->Text = L"PRODUCT";
			this->btn_product->UseVisualStyleBackColor = true;
			this->btn_product->Click += gcnew System::EventHandler(this, &MyForm3::btn_product_Click);
			// 
			// btn_category
			// 
			this->btn_category->BackColor = System::Drawing::Color::Silver;
			this->btn_category->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_category->Location = System::Drawing::Point(32, 97);
			this->btn_category->Name = L"btn_category";
			this->btn_category->Size = System::Drawing::Size(173, 26);
			this->btn_category->TabIndex = 2;
			this->btn_category->Text = L"CATEGORY";
			this->btn_category->UseVisualStyleBackColor = false;
			// 
			// btn_manufacturer
			// 
			this->btn_manufacturer->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_manufacturer->Location = System::Drawing::Point(32, 31);
			this->btn_manufacturer->Name = L"btn_manufacturer";
			this->btn_manufacturer->Size = System::Drawing::Size(173, 29);
			this->btn_manufacturer->TabIndex = 3;
			this->btn_manufacturer->Text = L"MANUFACTURER";
			this->btn_manufacturer->UseVisualStyleBackColor = true;
			// 
			// btn_prod_detail
			// 
			this->btn_prod_detail->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_prod_detail->Location = System::Drawing::Point(32, 226);
			this->btn_prod_detail->Name = L"btn_prod_detail";
			this->btn_prod_detail->Size = System::Drawing::Size(173, 30);
			this->btn_prod_detail->TabIndex = 4;
			this->btn_prod_detail->Text = L"PRODUCT DETAILS";
			this->btn_prod_detail->UseVisualStyleBackColor = true;
			this->btn_prod_detail->Click += gcnew System::EventHandler(this, &MyForm3::btn_prod_detail_Click);
			// 
			// lbl_prod_cat
			// 
			this->lbl_prod_cat->AutoSize = true;
			this->lbl_prod_cat->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_prod_cat->Location = System::Drawing::Point(356, 31);
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
			this->tb_prod_cat->Location = System::Drawing::Point(359, 67);
			this->tb_prod_cat->Name = L"tb_prod_cat";
			this->tb_prod_cat->Size = System::Drawing::Size(249, 25);
			this->tb_prod_cat->TabIndex = 6;
			// 
			// MyForm3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(767, 354);
			this->Controls->Add(this->tb_prod_cat);
			this->Controls->Add(this->lbl_prod_cat);
			this->Controls->Add(this->btn_prod_detail);
			this->Controls->Add(this->btn_manufacturer);
			this->Controls->Add(this->btn_category);
			this->Controls->Add(this->btn_product);
			this->Name = L"MyForm3";
			this->Text = L"MyForm3";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_product_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm4^ form4 = gcnew MyForm4;
		form4->Show();
	}
	private: System::Void btn_prod_detail_Click(System::Object^ sender, System::EventArgs^ e) {
		// Show an error message
		System::Windows::Forms::MessageBox::Show("Error! Kindly enter the data for Product");
	}
};
}
