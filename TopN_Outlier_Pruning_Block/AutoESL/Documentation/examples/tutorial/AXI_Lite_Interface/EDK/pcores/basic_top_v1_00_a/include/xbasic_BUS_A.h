// ==============================================================
// File generated by AutoESL - High-Level Synthesis System (C, C++, SystemC)
// Version: 2012.1
// Copyright (C) 2012 Xilinx Inc. All rights reserved.
// 
// ==============================================================

// 0x00 : Control signals
//        bit 0  - ap_start (Read/Write/SC)
//        bit 1  - ap_done (Read/COR)
//        bit 2  - ap_idle (Read)
//        others - reserved
// 0x04 : Global Interrupt Enable Register
//        bit 0  - Global Interrupt Enable (Read/Write)
//        others - reserved
// 0x08 : IP Interrupt Enable Register (Read/Write)
//        bit 0  - Channel 0 (ap_done)
//        others - reserved
// 0x0c : IP Interrupt Status Register (Read/TOW)
//        bit 0  - Channel 0 (ap_done)
//        others - reserved
// 0x10 : reserved
// 0x14 : Data signal of a
//        bit 7~0 - a[7:0] (Read/Write)
//        others  - reserved
// 0x18 : reserved
// 0x1c : Data signal of b
//        bit 7~0 - b[7:0] (Read/Write)
//        others  - reserved
// 0x20 : reserved
// 0x24 : Data signal of c
//        bit 7~0 - c[7:0] (Read)
//        others  - reserved
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XBASIC_BUS_A_ADDR_AP_CTRL 0x00
#define XBASIC_BUS_A_ADDR_GIE     0x04
#define XBASIC_BUS_A_ADDR_IER     0x08
#define XBASIC_BUS_A_ADDR_ISR     0x0c
#define XBASIC_BUS_A_ADDR_A_DATA  0x14
#define XBASIC_BUS_A_BITS_A_DATA  8
#define XBASIC_BUS_A_ADDR_B_DATA  0x1c
#define XBASIC_BUS_A_BITS_B_DATA  8
#define XBASIC_BUS_A_ADDR_C_DATA  0x24
#define XBASIC_BUS_A_BITS_C_DATA  8
