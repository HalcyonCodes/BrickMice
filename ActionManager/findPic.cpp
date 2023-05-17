#include "pch.h"
#include "framework.h"
#include "windows.h"
//加载识图dll
#using "../source/BlessFindPic.dll"
#include <string>
using namespace std;
#include <msclr/marshal_cppstd.h>


//WIN001获得窗口句柄
void* findWindow(string className, string gameName) {
	BlessFindPic::GetScreen^ getScreen = gcnew BlessFindPic::GetScreen();
	System::String^ dllClassName = msclr::interop::marshal_as<System::String^>(className);
	System::String^ dllGameName = msclr::interop::marshal_as<System::String^>(gameName);
	System::IntPtr result = getScreen->findWindow(dllClassName, dllGameName);
	return result.ToPointer();
}

