#pragma once
#include "common.h"
//#include <ntddkbd.h>
//#include <devguid.h>
#pragma comment(lib, "setupapi.lib")

namespace kbftest {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    /// <summary>
    /// Сводка для Form1
    /// </summary>
    public ref class Form1 : public System::Windows::Forms::Form
    {
    public:
        Form1(void)
        {
            InitializeComponent();
            //
            //TODO: добавьте код конструктора
            //
            DevPath = NULL;
        }

    protected:
        /// <summary>
        /// Освободить все используемые ресурсы.
        /// </summary>
        ~Form1()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::CheckBox^  checkBox1;
    private: System::Windows::Forms::ListBox^  listBox1;
    protected: 
        LPCTSTR DevPath;
        BOOLEAN bSndOn;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;

	protected: 
	private: System::ComponentModel::IContainer^  components;
	private:
        /// <summary>
        /// Требуется переменная конструктора.
        /// </summary>


#pragma region Windows Form Designer generated code
        /// <summary>
        /// Обязательный метод для поддержки конструктора - не изменяйте
        /// содержимое данного метода при помощи редактора кода.
        /// </summary>
        void InitializeComponent(void)
        {
			this->components = (gcnew System::ComponentModel::Container());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(12, 233);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(68, 17);
			this->checkBox1->TabIndex = 0;
			this->checkBox1->Text = L"Активен";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(13, 13);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(604, 212);
			this->listBox1->TabIndex = 1;
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 500;
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(421, 237);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(99, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Текущий символ: ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(554, 237);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 13);
			this->label2->TabIndex = 3;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Checked = true;
			this->checkBox2->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox2->Location = System::Drawing::Point(104, 233);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(126, 17);
			this->checkBox2->TabIndex = 4;
			this->checkBox2->Text = L"Поверх других окон";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox2_CheckedChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(517, 237);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(30, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"RUS";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(569, 237);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(27, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"LAT";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(606, 237);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 13);
			this->label5->TabIndex = 6;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(629, 262);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->checkBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Text = L"kdclient";
			this->TopMost = true;
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
    private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
                 HDEVINFO                            hardwareDeviceInfo;
                 SP_DEVICE_INTERFACE_DATA            deviceInterfaceData;
                 PSP_DEVICE_INTERFACE_DETAIL_DATA    deviceInterfaceDetailData = NULL;
                 ULONG                               i = 0;
                 ULONG                               predictedLength = 0;
                 ULONG                               requiredLength = 0;
                 String^                             s1;
                 String^                             s2;
                 HANDLE                              file;
                 KEYBOARD_ATTRIBUTES                 kbdattrib;
                 ULONG                               bytes = 0;
                 BOOLEAN                             bState = FALSE;

                 hardwareDeviceInfo = SetupDiGetClassDevs (
                                    (LPGUID)&GUID_DEVINTERFACE_KBFILTER,
                                    NULL, // Define no enumerator (global)
                                    NULL, // Define no
                                    (DIGCF_PRESENT | // Only Devices present
                                    DIGCF_DEVICEINTERFACE)); // Function class devices.
                 if(INVALID_HANDLE_VALUE == hardwareDeviceInfo)
                 {
                     listBox1->Items->Add(String::Format("SetupDiGetClassDevs failed: {0}", GetLastError()));
                     return;
                 }

                 deviceInterfaceData.cbSize = sizeof (SP_DEVICE_INTERFACE_DATA);

                 i = 0;

                 //
                 // Enumerate devices of toaster class
                 //

                 do {
                     if (SetupDiEnumDeviceInterfaces (hardwareDeviceInfo,
                                              0, // No care about specific PDOs
                                              (LPGUID)&GUID_DEVINTERFACE_KBFILTER,
                                              i, //
                                              &deviceInterfaceData)) {

                         if(deviceInterfaceDetailData) {
                             free (deviceInterfaceDetailData);
                             deviceInterfaceDetailData = NULL;
                         }

                         //
                         // Allocate a function class device data structure to
                         // receive the information about this particular device.
                         //

                         //
                         // First find out required length of the buffer
                         //

                         if(!SetupDiGetDeviceInterfaceDetail (
                                 hardwareDeviceInfo,
                                 &deviceInterfaceData,
                                 NULL, // probing so no output buffer yet
                                 0, // probing so output buffer length of zero
                                 &requiredLength,
                                 NULL)) { // not interested in the specific dev-node
                             if(ERROR_INSUFFICIENT_BUFFER != GetLastError()) {
                                 listBox1->Items->Add(String::Format("SetupDiGetDeviceInterfaceDetail failed: {0}", GetLastError()));
                                 SetupDiDestroyDeviceInfoList (hardwareDeviceInfo);
                                 return ;
                             }

                         }

                         predictedLength = requiredLength;

                         deviceInterfaceDetailData = (PSP_DEVICE_INTERFACE_DETAIL_DATA) malloc (predictedLength);

                         if(deviceInterfaceDetailData) {
                             deviceInterfaceDetailData->cbSize =
                                             sizeof (SP_DEVICE_INTERFACE_DETAIL_DATA);
                         } else {
                             listBox1->Items->Add(String::Format("Couldn't allocate {0} bytes for device interface details.", predictedLength));
                             SetupDiDestroyDeviceInfoList (hardwareDeviceInfo);
                             return ;
                         }

                         if (! SetupDiGetDeviceInterfaceDetail (
                                    hardwareDeviceInfo,
                                    &deviceInterfaceData,
                                    deviceInterfaceDetailData,
                                    predictedLength,
                                    &requiredLength,
                                    NULL)) {
                             listBox1->Items->Add(String::Format("Error in SetupDiGetDeviceInterfaceDetail"));
                             SetupDiDestroyDeviceInfoList (hardwareDeviceInfo);
                             free (deviceInterfaceDetailData);
                             return ;
                         }
                         ++i;
                         s1 = String::Format("{0}) ", i);
                         s2 = gcnew String(deviceInterfaceDetailData->DevicePath);
                         listBox1->Items->Add(s1 + s2);
                     }
                     else if (ERROR_NO_MORE_ITEMS != GetLastError()) {
                         free (deviceInterfaceDetailData);
                         deviceInterfaceDetailData = NULL;
                         continue;
                     }
                     else
                         break;

                 } while (TRUE);


                 SetupDiDestroyDeviceInfoList (hardwareDeviceInfo);

                 if(!deviceInterfaceDetailData)
                 {
                     listBox1->Items->Add("No device interfaces present");
                     return;
                 }
                 DevPath = deviceInterfaceDetailData->DevicePath;
              //   free((void*)deviceInterfaceDetailData);

                 file = CreateFile ( DevPath,
                                     GENERIC_READ | GENERIC_WRITE,
                                     0,
                                     NULL, // no SECURITY_ATTRIBUTES structure
                                     OPEN_EXISTING, // No special create flags
                                     0, // No special attributes
                                     NULL);

                 if (INVALID_HANDLE_VALUE == file) {
                     listBox1->Items->Add(String::Format("Error in CreateFile: {0}", GetLastError()));
                     return;
                 }

                 //
                 // Send an IOCTL to retrive the keyboard attributes
                 // These are cached in the kbfiltr
                 //

                 if (!DeviceIoControl (file,
                                       IOCTL_KBFILTR_GET_STATE,
                                       NULL, 0,
                                       &bState, sizeof(bState),
                                       &bytes, NULL)) {
                     listBox1->Items->Add(String::Format("Retrieve state request failed: {0}", GetLastError()));
                     CloseHandle(file);
                     return;
                 }
                 checkBox1->Checked = bState;
                 listBox1->Items->Add(String::Format("State: {0}", bState));

                 if (!DeviceIoControl (file,
                                       IOCTL_KBFILTR_GET_KEYBOARD_ATTRIBUTES,
                                       NULL, 0,
                                       &kbdattrib, sizeof(kbdattrib),
                                       &bytes, NULL)) {
                     listBox1->Items->Add(String::Format("Retrieve Keyboard Attributes request failed: {0}", GetLastError()));
                     CloseHandle(file);
                     return;
                 }

                 listBox1->Items->Add("Keyboard Attributes:");
                 listBox1->Items->Add(String::Format(" KeyboardMode:          {0}", kbdattrib.KeyboardMode));
                 listBox1->Items->Add(String::Format(" NumberOfFunctionKeys:  {0}", kbdattrib.NumberOfFunctionKeys));
                 listBox1->Items->Add(String::Format(" NumberOfIndicators:    {0}", kbdattrib.NumberOfIndicators));
                 listBox1->Items->Add(String::Format(" NumberOfKeysTotal:     {0}", kbdattrib.NumberOfKeysTotal));
                 listBox1->Items->Add(String::Format(" InputDataQueueLength:  {0}", kbdattrib.InputDataQueueLength));
                 CloseHandle(file);
              }
    private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
                 HANDLE                              file;
                 ULONG                               bytes=0;

                 file = CreateFile ( DevPath,
                                     GENERIC_READ | GENERIC_WRITE,
                                     0,
                                     NULL, // no SECURITY_ATTRIBUTES structure
                                     OPEN_EXISTING, // No special create flags
                                     0, // No special attributes
                                     NULL);

                 if (INVALID_HANDLE_VALUE == file) {
                     listBox1->Items->Add(String::Format("Error in CreateFile: {0}", GetLastError()));
                     return;
                 }

                 if(checkBox1->Checked){
                     if (!DeviceIoControl (file,
                                           IOCTL_KBFILTR_ON,
                                           NULL, 0,
                                           NULL, 0,
                                           &bytes, NULL)) {
                         listBox1->Items->Add(String::Format("Switching on is failed: {0}", GetLastError()));
                         CloseHandle(file);
                         return;
                     }
                 }
                 else
                     if (!DeviceIoControl (file,
                                           IOCTL_KBFILTR_OFF,
                                           NULL, 0,
                                           NULL, 0,
                                           &bytes, NULL)) {
                         listBox1->Items->Add(String::Format("Switching off is failed: {0}", GetLastError()));
                         CloseHandle(file);
                         return;
                    }
             }
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
	                 HANDLE                              file;
                 ULONG                               bytes=0;
				 USHORT c;

                 file = CreateFile ( DevPath,
                                     GENERIC_READ | GENERIC_WRITE,
                                     0,
                                     NULL, // no SECURITY_ATTRIBUTES structure
                                     OPEN_EXISTING, // No special create flags
                                     0, // No special attributes
                                     NULL);

                 if (INVALID_HANDLE_VALUE == file) {
                     listBox1->Items->Add(String::Format("Error in CreateFile: {0}", GetLastError()));
                     return;
                 }

				 c = 0;
                 if (!DeviceIoControl (file,
                                       IOCTL_KBFILTR_GET_CHAR,
                                       NULL, 0,
                                       &c, sizeof(USHORT),
                                       &bytes, NULL)) {
                     listBox1->Items->Add(String::Format("Retrieve char request failed: {0}", GetLastError()));
   
                 }
				 else
				 {
					 switch(c)
					 {
						case 16: 
							label2->Text="й"; 
							label5->Text="q"; 
							break;
						case 17: 
							label2->Text="ц";
							label5->Text="w";
							break;
						case 18: 
							label2->Text="у"; 
							label5->Text="e"; 
							break;
						case 19: 
							label2->Text="к"; 
							label5->Text="r";
							break;
						case 20: 
							label2->Text="е"; 
							label5->Text="t";
							break;
						case 21: 
							label2->Text="н"; 
							label5->Text="y";
							break;
						case 22: 
							label2->Text="г";
							label5->Text="u";
							break;
						case 23: 
							label2->Text="ш"; 
							label5->Text="i";
							break;
						case 24: 
							label2->Text="щ"; 
							label5->Text="o";
							break;
						case 25: 
							label2->Text="з";
							label5->Text="p";
							break;
						case 26: 
							label2->Text="х"; 
							label5->Text="-";
							break;
						case 27: 
							label2->Text="ъ"; 
							label5->Text="-";
							break;
						case 30: 
							label2->Text="ф"; 
							label5->Text="a";
							break;
						case 31: 
							label2->Text="ы";
							label5->Text="s";
							break;
						case 32: 
							label2->Text="в";
							label5->Text="d";
							break;
						case 33: 
							label2->Text="а"; 
							label5->Text="f";
							break;
						case 34: 
							label2->Text="п"; 
							label5->Text="g"; 
							break;
						case 35: 
							label2->Text="р"; 
							label5->Text="h"; 
							break;
						case 36: 
							label2->Text="о"; 
							label5->Text="j"; 
							break;
						case 37: 
							label2->Text="л"; 
							label5->Text="k"; 
							break;
						case 38: 
							label2->Text="д"; 
							label5->Text="l"; 
							break;
						case 39: 
							label2->Text="ж"; 
							label5->Text="-"; 
							break;
						case 40: 
							label2->Text="э"; 
							label5->Text="-"; 
							break;
						case 44: 
							label2->Text="я"; 
							label5->Text="z"; 
							break;
						case 45: 
							label2->Text="ч";
							label5->Text="x"; 
							break;
						case 46: 
							label2->Text="с"; 
							label5->Text="c"; 
							break;
						case 47: 
							label2->Text="м"; 
							label5->Text="v"; 
							break;
						case 48: 
							label2->Text="и"; 
							label5->Text="b"; 
							break;
						case 49: 
							label2->Text="т"; 
							label5->Text="n"; 
							break;
						case 50: 
							label2->Text="ь"; 
							label5->Text="m"; 
							break;
						case 51: 
							label2->Text="б"; 
							label5->Text="-"; 
							break;
						case 52: 
							label2->Text="ю"; 
							label5->Text="-"; 
							break;
					 }								
				 }

				 CloseHandle(file);
				 return;
			
		 }
				 
	private: System::Void checkBox2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
			 {
				 if (this->TopMost)
					 this->TopMost = false;
				 else
					 this->TopMost = true;
			 }
};
}

