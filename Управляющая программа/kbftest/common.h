#pragma once
#include <windows.h>
#include <setupapi.h>
#include <initguid.h>

#define IOCTL_INDEX             0x800

#define IOCTL_KBFILTR_GET_KEYBOARD_ATTRIBUTES CTL_CODE(FILE_DEVICE_KEYBOARD, IOCTL_INDEX,   METHOD_BUFFERED, FILE_READ_DATA)
#define IOCTL_KBFILTR_ON                  CTL_CODE(FILE_DEVICE_KEYBOARD, IOCTL_INDEX+1, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_KBFILTR_OFF                 CTL_CODE(FILE_DEVICE_KEYBOARD, IOCTL_INDEX+2, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_KBFILTR_GET_STATE           CTL_CODE(FILE_DEVICE_KEYBOARD, IOCTL_INDEX+3, METHOD_BUFFERED, FILE_READ_DATA)
#define IOCTL_KBFILTR_GET_CHAR            CTL_CODE(FILE_DEVICE_KEYBOARD, IOCTL_INDEX+4, METHOD_BUFFERED, FILE_READ_DATA)

DEFINE_GUID(GUID_DEVINTERFACE_KBFILTER,
0x3fb7299d, 0x6847, 0x4490, 0xb0, 0xc9, 0x99, 0xe0, 0x98, 0x6a, 0xb8, 0x86);
// {3FB7299D-6847-4490-B0C9-99E0986AB886}

typedef struct _KEYBOARD_TYPEMATIC_PARAMETERS {

    //
    // Unit identifier.  Specifies the device unit for which this
    // request is intended.
    //

    USHORT UnitId;

    //
    // Typematic rate, in repeats per second.
    //

    USHORT  Rate;

    //
    // Typematic delay, in milliseconds.
    //

    USHORT  Delay;

} KEYBOARD_TYPEMATIC_PARAMETERS, *PKEYBOARD_TYPEMATIC_PARAMETERS;

typedef struct _KEYBOARD_ID {
    UCHAR Type;       // Keyboard type
    UCHAR Subtype;    // Keyboard subtype (OEM-dependent value)
} KEYBOARD_ID, *PKEYBOARD_ID;

typedef struct _KEYBOARD_ATTRIBUTES {

    //
    // Keyboard ID value.  Used to distinguish between keyboard types.
    //

    KEYBOARD_ID KeyboardIdentifier;

    //
    // Scan code mode.
    //

    USHORT KeyboardMode;

    //
    // Number of function keys located on the keyboard.
    //

    USHORT NumberOfFunctionKeys;

    //
    // Number of LEDs located on the keyboard.
    //

    USHORT NumberOfIndicators;

    //
    // Total number of keys located on the keyboard.
    //

    USHORT NumberOfKeysTotal;

    //
    // Length of the typeahead buffer, in bytes.
    //

    ULONG  InputDataQueueLength;

    //
    // Minimum allowable values of keyboard typematic rate and delay.
    //

    KEYBOARD_TYPEMATIC_PARAMETERS KeyRepeatMinimum;

    //
    // Maximum allowable values of keyboard typematic rate and delay.
    //

    KEYBOARD_TYPEMATIC_PARAMETERS KeyRepeatMaximum;

} KEYBOARD_ATTRIBUTES, *PKEYBOARD_ATTRIBUTES;
