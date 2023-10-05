#include "MyForm2.h"
#include "MyForm3.h"
#include "MyForm4.h"
#include "MyForm5.h"
#include "MyForm6.h"

#pragma once

namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
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
			this->SuspendLayout();
			// 
			// btn_manufacturer
			// 
			this->btn_manufacturer->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_manufacturer->Location = System::Drawing::Point(114, 85);
			this->btn_manufacturer->Name = L"btn_manufacturer";
			this->btn_manufacturer->Size = System::Drawing::Size(173, 46);
			this->btn_manufacturer->TabIndex = 5;
			this->btn_manufacturer->Text = L"MANUFACTURER";
			this->btn_manufacturer->UseVisualStyleBackColor = true;
			this->btn_manufacturer->Click += gcnew System::EventHandler(this, &MyForm1::btn_manufacturer_Click);
			// 
			// btn_category
			// 
			this->btn_category->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_category->Location = System::Drawing::Point(427, 85);
			this->btn_category->Name = L"btn_category";
			this->btn_category->Size = System::Drawing::Size(186, 46);
			this->btn_category->TabIndex = 6;
			this->btn_category->Text = L"CATEGORY";
			this->btn_category->UseVisualStyleBackColor = true;
			this->btn_category->Click += gcnew System::EventHandler(this, &MyForm1::btn_category_Click);
			// 
			// btn_product
			// 
			this->btn_product->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_product->Location = System::Drawing::Point(114, 156);
			this->btn_product->Name = L"btn_product";
			this->btn_product->Size = System::Drawing::Size(173, 48);
			this->btn_product->TabIndex = 7;
			this->btn_product->Text = L"PRODUCT";
			this->btn_product->UseVisualStyleBackColor = true;
			this->btn_product->Click += gcnew System::EventHandler(this, &MyForm1::btn_product_Click);
			// 
			// btn_prod_detail
			// 
			this->btn_prod_detail->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_prod_detail->Location = System::Drawing::Point(427, 152);
			this->btn_prod_detail->Name = L"btn_prod_detail";
			this->btn_prod_detail->Size = System::Drawing::Size(186, 52);
			this->btn_prod_detail->TabIndex = 8;
			this->btn_prod_detail->Text = L"PRODUCT DETAILS";
			this->btn_prod_detail->UseVisualStyleBackColor = true;
			this->btn_prod_detail->Click += gcnew System::EventHandler(this, &MyForm1::btn_prod_detail_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(767, 354);
			this->Controls->Add(this->btn_prod_detail);
			this->Controls->Add(this->btn_product);
			this->Controls->Add(this->btn_category);
			this->Controls->Add(this->btn_manufacturer);
			this->Name = L"MyForm1";
			this->Text = L"Pharmacy Inventory";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btn_manufacturer_Click(System::Object^ sender, System::EventArgs^ e) {
		//this->Hide();
		MyForm2^ form2 = gcnew MyForm2;
		form2->Show();
		
	}
	private: System::Void btn_category_Click(System::Object^ sender, System::EventArgs^ e) {
		//this->Hide();
		MyForm3^ form3 = gcnew MyForm3;
		form3->Show();
	}
	private: System::Void btn_product_Click(System::Object^ sender, System::EventArgs^ e) {
		//this->Hide();
		MyForm4^ form4 = gcnew MyForm4;
		form4->Show();
	}
	private: System::Void btn_prod_detail_Click(System::Object^ sender, System::EventArgs^ e) {
		//this->Hide();
		//MyForm5^ form5 = gcnew MyForm5;
		//form5->Show();
		MyForm6^ form6 = gcnew MyForm6;
		form6->Show();
	}
};
}
