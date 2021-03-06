#pragma once
#define IDS_APP_TITLE			  103
#define IDR_MAINFRAME			  128
#define IDD_NATIVEPLATFORM_DIALOG 102
#define IDI_NATIVEPLATFORM		  107
#define IDI_SMALL				  108
#define IDC_NATIVEPLATFORM		  109
#define IDC_MYICON				  2

#ifndef IDC_STATIC
 #define IDC_STATIC	-1
#endif

#ifdef APSTUDIO_INVOKED
 #ifndef APSTUDIO_READONLY_SYMBOLS
  #define _APS_NO_MFC			   130
  #define _APS_NEXT_RESOURCE_VALUE 129
  #define _APS_NEXT_COMMAND_VALUE  32771
  #define _APS_NEXT_CONTROL_VALUE  1000
  #define _APS_NEXT_SYMED_VALUE	   110
 #endif
#else
 #include <SDKDDKVer.h>
#endif

struct OBJECT
{
 bool Exist;
 unsigned char Text;
 unsigned char Transparency;
 unsigned int Pic;
 unsigned int PicX1;
 unsigned int PicY1;
 unsigned int PicX2;
 unsigned int PicY2;
 double X1;
 double X2;
 double X3;
 double X4;
 double Y1;
 double Y2;
 double Y3;
 double Y4;
};