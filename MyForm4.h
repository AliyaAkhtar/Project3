#pragma once
#include "MyForm5.h"

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
	private: System::Windows::Forms::Button^ btn_product;
	private: System::Windows::Forms::Button^ btn_category;
	private: System::Windows::Forms::Button^ btn_manufacturer;
	private: System::Windows::Forms::Button^ btn_prod_detail;
	private: System::Windows::Forms::Label^ lbl_prod_nm;
	private: System::Windows::Forms::TextBox^ tb_prod_nm;
	private: System::Windows::Forms::Label^ lb_stor_typ;
	private: System::Windows::Forms::TextBox^ tb_stor_typ;

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
			this->btn_product = (gcnew System::Windows::Forms::Button());
			this->btn_category = (gcnew System::Windows::Forms::Button());
			this->btn_manufacturer = (gcnew System::Windows::Forms::Button());
			this->btn_prod_detail = (gcnew System::Windows::Forms::Button());
			this->lbl_prod_nm = (gcnew System::Windows::Forms::Label());
			this->tb_prod_nm = (gcnew System::Windows::Forms::TextBox());
			this->lb_stor_typ = (gcnew System::Windows::Forms::Label());
			this->tb_stor_typ = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// btn_product
			// 
			this->btn_product->BackColor = System::Drawing::Color::Silver;
			this->btn_product->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_product->Location = System::Drawing::Point(39, 160);
			this->btn_product->Name = L"btn_product";
			this->btn_product->Size = System::Drawing::Size(173, 26);
			this->btn_product->TabIndex = 0;
			this->btn_product->Text = L"PRODUCT";
			this->btn_product->UseVisualStyleBackColor = false;
			// 
			// btn_category
			// 
			this->btn_category->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_category->Location = System::Drawing::Point(39, 95);
			this->btn_category->Name = L"btn_category";
			this->btn_category->Size = System::Drawing::Size(173, 26);
			this->btn_category->TabIndex = 1;
			this->btn_category->Text = L"CATEGORY";
			this->btn_category->UseVisualStyleBackColor = true;
			// 
			// btn_manufacturer
			// 
			this->btn_manufacturer->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_manufacturer->Location = System::Drawing::Point(39, 28);
			this->btn_manufacturer->Name = L"btn_manufacturer";
			this->btn_manufacturer->Size = System::Drawing::Size(173, 29);
			this->btn_manufacturer->TabIndex = 2;
			this->btn_manufacturer->Text = L"MANUFACTURER";
			this->btn_manufacturer->UseVisualStyleBackColor = true;
			// 
			// btn_prod_detail
			// 
			this->btn_prod_detail->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_prod_detail->Location = System::Drawing::Point(39, 225);
			this->btn_prod_detail->Name = L"btn_prod_detail";
			this->btn_prod_detail->Size = System::Drawing::Size(173, 30);
			this->btn_prod_detail->TabIndex = 3;
			this->btn_prod_detail->Text = L"PRODUCT DETAILS";
			this->btn_prod_detail->UseVisualStyleBackColor = true;
			this->btn_prod_detail->Click += gcnew System::EventHandler(this, &MyForm4::btn_prod_detail_Click);
			// 
			// lbl_prod_nm
			// 
			this->lbl_prod_nm->AutoSize = true;
			this->lbl_prod_nm->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_prod_nm->Location = System::Drawing::Point(367, 28);
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
			this->tb_prod_nm->Location = System::Drawing::Point(370, 65);
			this->tb_prod_nm->Name = L"tb_prod_nm";
			this->tb_prod_nm->Size = System::Drawing::Size(252, 25);
			this->tb_prod_nm->TabIndex = 5;
			// 
			// lb_stor_typ
			// 
			this->lb_stor_typ->AutoSize = true;
			this->lb_stor_typ->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_stor_typ->Location = System::Drawing::Point(367, 120);
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
			this->tb_stor_typ->Location = System::Drawing::Point(370, 160);
			this->tb_stor_typ->Name = L"tb_stor_typ";
			this->tb_stor_typ->Size = System::Drawing::Size(252, 25);
			this->tb_stor_typ->TabIndex = 7;
			// 
			// MyForm4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(767, 354);
			this->Controls->Add(this->tb_stor_typ);
			this->Controls->Add(this->lb_stor_typ);
			this->Controls->Add(this->tb_prod_nm);
			this->Controls->Add(this->lbl_prod_nm);
			this->Controls->Add(this->btn_prod_detail);
			this->Controls->Add(this->btn_manufacturer);
			this->Controls->Add(this->btn_category);
			this->Controls->Add(this->btn_product);
			this->Name = L"MyForm4";
			this->Text = L"Pharmacy Inventory";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	
	private: System::Void btn_prod_detail_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm5^ form5 = gcnew MyForm5;
		form5->Show();
	}
};
}
