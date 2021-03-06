// Bootloader register interface
// Author: Max Schwarz <max.schwarz@uni-bonn.de>

#ifndef BOOTLOADER_INTERFACE_H
#define BOOTLOADER_INTERFACE_H

#define BOOTLOADER_DXL_ID 0xFC
#define BOOTLOADER_MODEL 0xFAFB
#define BOOTLOADER_VERSION 1

#define BOOTLOADER_REG_COMMAND 0x10
#define BOOTLOADER_REG_STATUS 0x10
#define BOOTLOADER_REG_ADDRESS 0x11
#define BOOTLOADER_REG_PAGEBUFFER 0x100

#define BOOTLOADER_COMMAND_IDLE 0
#define BOOTLOADER_COMMAND_WRITE_PAGE 1
#define BOOTLOADER_COMMAND_READ_PAGE 2
#define BOOTLOADER_COMMAND_FAILURE 3
#define BOOTLOADER_COMMAND_EXIT 4

#endif
