#ifndef PIC16F_FASTCG_MICROCHIP_H
#define PIC16F_FASTCG_MICROCHIP_H

#if defined CONFIG_OPPO_DEVICE_FIND7 || defined CONFIG_OPPO_DEVICE_FIND7WX	//FIND7/FIND7WX:pic1503

unsigned char Pic16F_firmware_data[] = {

0x00,0x02,0x3C,0x2A,0xFF,0x3F,0xFF,0x3F,0xFF,0x3F,0x82,0x31,0x20,0x00,0x7F,0x08,0xCB,0x00,0x91,0x1D,0x0D,0x2A,0x91,0x11,0xE0,0x01,0x38,0x2A,0x91,0x1C,0x19,0x2A,0x91,0x10,
0x10,0x02,0x36,0x08,0x03,0x19,0x16,0x2A,0x8E,0x15,0xBF,0x01,0xBF,0x0A,0xB6,0x01,0xB6,0x0A,0x38,0x2A,0x11,0x1C,0x25,0x2A,0x11,0x10,0x0B,0x30,0xC2,0x0A,0x42,0x02,0x03,0x1C,
0x20,0x02,0x38,0x2A,0xC2,0x01,0xBC,0x01,0xBC,0x0A,0x38,0x2A,0x27,0x00,0x93,0x1D,0x2D,0x2A,0x93,0x11,0x20,0x00,0xB9,0x01,0xB9,0x0A,0x38,0x2A,0x93,0x1E,0x38,0x2A,0x93,0x12,
0x30,0x02,0x20,0x00,0xC1,0x08,0x03,0x1D,0x37,0x2A,0x1C,0x15,0xC1,0x01,0xC1,0x0A,0x47,0x22,0x20,0x00,0x4B,0x08,0xFF,0x00,0x09,0x00,0x3D,0x2A,0x20,0x30,0x84,0x00,0x00,0x30,
0x40,0x02,0x85,0x00,0x25,0x30,0xA6,0x27,0x01,0x30,0xE0,0x00,0x20,0x00,0xF0,0x2D,0x08,0x30,0xFB,0x01,0x35,0x02,0x35,0x08,0x03,0x18,0x56,0x2A,0x2A,0x3E,0x86,0x00,0x00,0x30,
0x50,0x02,0x87,0x01,0x8E,0x1A,0x01,0x30,0x81,0x00,0xB5,0x0A,0x08,0x00,0x08,0x3A,0x03,0x1D,0xB0,0x2B,0x2A,0x0B,0x6F,0x2A,0xAB,0x08,0x03,0x1D,0x6F,0x2A,0x2C,0x0B,0x6F,0x2A,
0x60,0x02,0x2F,0x08,0xF9,0x00,0xF9,0x35,0x2E,0x08,0xFA,0x00,0xFA,0x35,0xFA,0x35,0x2D,0x08,0xC6,0x23,0x30,0x04,0xB4,0x00,0x09,0x30,0xB5,0x00,0xBE,0x27,0xB0,0x2B,0x2B,0x0B,
0x70,0x02,0x84,0x2A,0xAC,0x08,0x03,0x1D,0x84,0x2A,0x2D,0x0B,0x84,0x2A,0x30,0x08,0xF9,0x00,0xF9,0x35,0x2F,0x08,0xFA,0x00,0xFA,0x35,0xFA,0x35,0x2E,0x08,0xC6,0x23,0x31,0x04,
0x80,0x02,0xB4,0x00,0x09,0x30,0xB5,0x00,0xBE,0x2F,0x01,0x00,0xB0,0x2B,0xBE,0x08,0x03,0x1D,0xF7,0x2A,0x38,0x08,0xA3,0x00,0xA4,0x01,0xA5,0x01,0xA6,0x01,0xA7,0x01,0xA8,0x01,
0x90,0x02,0xA9,0x01,0x38,0x08,0x03,0x19,0xF7,0x2A,0x33,0x08,0x80,0x3A,0xFF,0x00,0x8D,0x30,0x7F,0x02,0x03,0x1D,0x9D,0x2A,0x41,0x30,0x32,0x02,0x03,0x1C,0xE7,0x2A,0x10,0x30,
0xA0,0x02,0xF0,0x00,0xF1,0x01,0x20,0x00,0x32,0x08,0xBC,0x3E,0xF2,0x00,0xF2,0x30,0x33,0x3D,0xF3,0x00,0x36,0x25,0x71,0x08,0xFD,0x00,0x70,0x08,0xFC,0x00,0x7C,0x08,0xF9,0x00,
0xB0,0x02,0x05,0x30,0xF9,0x36,0x89,0x0B,0xB1,0x2A,0x79,0x08,0xA4,0x00,0x01,0x30,0xA4,0x05,0x7C,0x0E,0x0F,0x39,0xA5,0x00,0x01,0x30,0xA5,0x05,0x7C,0x08,0xF9,0x00,0xF9,0x36,
0xC0,0x02,0xF9,0x36,0xF9,0x36,0x79,0x08,0xA6,0x00,0x01,0x30,0xA6,0x05,0x7C,0x08,0xF9,0x00,0xF9,0x36,0xF9,0x36,0x79,0x08,0xA7,0x00,0x01,0x30,0xA7,0x05,0x7C,0x36,0xA8,0x00,
0xD0,0x02,0x01,0x30,0xA8,0x05,0x7C,0x08,0xA9,0x00,0x01,0x30,0xA9,0x05,0x00,0x30,0xF8,0x01,0xF8,0x0A,0x8D,0x26,0xFB,0x00,0x04,0x30,0xF8,0x00,0x03,0x30,0x8D,0x26,0xFB,0x07,
0xE0,0x02,0x7B,0x08,0x03,0x19,0xF7,0x2A,0x8E,0x15,0xBA,0x01,0xBA,0x0A,0xF7,0x2A,0x20,0x00,0x33,0x08,0x80,0x3A,0xFF,0x00,0x8B,0x30,0x7F,0x02,0x03,0x1D,0xF1,0x2A,0xB8,0x30,
0xF0,0x02,0x32,0x02,0x03,0x1C,0xF5,0x2A,0x20,0x00,0xF7,0x2A,0x20,0x00,0xA3,0x01,0x20,0x00,0x3E,0x08,0x20,0x3E,0x86,0x00,0x87,0x01,0x01,0x1C,0x01,0x2B,0x20,0x00,0x8E,0x16,
0x00,0x03,0x03,0x2B,0x20,0x00,0x8E,0x12,0x0A,0x30,0xBE,0x0A,0x3E,0x02,0x03,0x1C,0x08,0x00,0x80,0x27,0x98,0x27,0x20,0x00,0xBE,0x01,0xB5,0x01,0xB6,0x01,0x08,0x00,0xBE,0x08,
0x10,0x03,0x03,0x1D,0x27,0x2B,0x02,0x30,0xA4,0x01,0xA5,0x01,0xF8,0x01,0x8D,0x26,0xC0,0x00,0x02,0x3A,0x03,0x1D,0x1F,0x2B,0xA4,0x01,0xA4,0x0A,0xA5,0x01,0x27,0x2B,0x40,0x0B,
0x20,0x03,0x24,0x2B,0xA4,0x01,0xA4,0x0A,0x25,0x2B,0xA4,0x01,0xA5,0x01,0xA5,0x0A,0x3E,0x08,0x20,0x3E,0x86,0x00,0x87,0x01,0x01,0x1C,0x30,0x2B,0x20,0x00,0x8E,0x16,0x32,0x2B,
0x30,0x03,0x20,0x00,0x8E,0x12,0x0A,0x30,0xBE,0x0A,0x3E,0x02,0x03,0x1C,0x08,0x00,0x80,0x27,0x98,0x27,0x20,0x00,0xB5,0x01,0xBE,0x01,0x40,0x0B,0x0D,0x2B,0x8E,0x11,0xC0,0x01,
0x40,0x03,0x0D,0x2B,0xBE,0x08,0x03,0x1D,0x54,0x2B,0xA3,0x01,0xA4,0x01,0xA5,0x01,0xA6,0x01,0x3B,0x08,0x03,0x19,0x50,0x2B,0xA7,0x01,0xA7,0x0A,0xA8,0x01,0xA8,0x0A,0x53,0x2B,
0x50,0x03,0xA7,0x01,0xA7,0x0A,0xA8,0x01,0xA9,0x01,0x3E,0x08,0x20,0x3E,0x86,0x00,0x87,0x01,0x01,0x1C,0x5D,0x2B,0x20,0x00,0x8E,0x16,0x5F,0x2B,0x20,0x00,0x8E,0x12,0x0A,0x30,
0x60,0x03,0xBE,0x0A,0x3E,0x02,0x03,0x1C,0x08,0x00,0x80,0x27,0x98,0x27,0x20,0x00,0xB5,0x01,0xBE,0x01,0x0D,0x2B,0xBE,0x08,0x03,0x1D,0x77,0x2B,0x38,0x08,0xA3,0x00,0xA4,0x01,
0x70,0x03,0xA5,0x01,0xA6,0x01,0xA6,0x0A,0xA7,0x01,0xA8,0x01,0xA9,0x01,0xA9,0x0A,0x3E,0x08,0x20,0x3E,0x86,0x00,0x87,0x01,0x01,0x1C,0x80,0x2B,0x20,0x00,0x8E,0x16,0x82,0x2B,
0x80,0x03,0x20,0x00,0x8E,0x12,0x0A,0x30,0xBE,0x0A,0x3E,0x02,0x03,0x1C,0x08,0x00,0x80,0x27,0x98,0x27,0x20,0x00,0xB7,0x01,0xB7,0x0A,0x66,0x2B,0xBE,0x08,0x03,0x1D,0x93,0x2B,
0x90,0x03,0xA4,0x01,0xA4,0x0A,0xA5,0x01,0x3E,0x08,0x20,0x3E,0x86,0x00,0x87,0x01,0x01,0x1C,0x9C,0x2B,0x20,0x00,0x8E,0x16,0x9E,0x2B,0x20,0x00,0x8E,0x12,0x0A,0x30,0xBE,0x0A,
0xA0,0x03,0x3E,0x02,0x03,0x1C,0x08,0x00,0x80,0x27,0x98,0x27,0x20,0x00,0xB5,0x01,0xBE,0x01,0x8E,0x11,0x0D,0x2B,0x8E,0x15,0xBA,0x01,0xBA,0x0A,0x08,0x00,0x01,0x00,0x08,0x00,
0xB0,0x03,0x20,0x00,0x34,0x08,0x01,0x3A,0x03,0x19,0x86,0x2A,0x03,0x3A,0x03,0x19,0x0F,0x2B,0x01,0x3A,0x03,0x19,0x41,0x2B,0x07,0x3A,0x03,0x19,0x6A,0x2B,0x01,0x3A,0x03,0x19,
0xC0,0x03,0x8D,0x2B,0x0C,0x3A,0x03,0x19,0xAA,0x2B,0xAE,0x2B,0x08,0x00,0x09,0x07,0x09,0x07,0x09,0x07,0x7A,0x04,0x79,0x04,0x08,0x00,0x20,0x00,0xD4,0x00,0xCF,0x01,0xD0,0x01,
0xD0,0x03,0xD2,0x01,0xD3,0x01,0x64,0x00,0x20,0x00,0x54,0x08,0xD0,0x00,0xB9,0x01,0x89,0x27,0xD5,0x01,0x3F,0x08,0x03,0x19,0xE2,0x2B,0x54,0x08,0x58,0x3A,0x03,0x1D,0xE2,0x2B,
0xE0,0x03,0xB8,0x27,0x20,0x00,0x20,0x00,0x39,0x08,0x03,0x1D,0xEF,0x2B,0xD2,0x0A,0x4A,0x24,0x03,0x1C,0xE1,0x2B,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE2,0x2B,0xD2,0x01,
0xF0,0x03,0xD3,0x01,0x50,0x08,0xCE,0x00,0x55,0x08,0x06,0x3C,0x89,0x0A,0xF8,0x2B,0xCE,0x36,0x89,0x0B,0xF7,0x2B,0x4E,0x1C,0xFF,0x2B,0x20,0x00,0x0E,0x16,0x01,0x2C,0x20,0x00,
0x00,0x04,0x0E,0x12,0x07,0x30,0xB9,0x01,0xD5,0x0A,0x55,0x02,0x03,0x1C,0xD9,0x2B,0x64,0x00,0x20,0x00,0xD5,0x01,0x3F,0x08,0x03,0x19,0x13,0x2C,0x54,0x08,0x58,0x3A,0x03,0x1D,
0x10,0x04,0x13,0x2C,0xB8,0x27,0x20,0x00,0x20,0x00,0x39,0x08,0x03,0x1D,0x20,0x2C,0xD2,0x0A,0x4A,0x24,0x03,0x1C,0x12,0x2C,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x13,0x2C,
0x20,0x04,0xD2,0x01,0xD3,0x01,0xD5,0x08,0x03,0x1D,0x27,0x2C,0xB2,0x27,0xCD,0x27,0x20,0x00,0x00,0x30,0xB9,0x01,0x0E,0x1A,0x01,0x30,0xD1,0x00,0x55,0x08,0x02,0x3A,0x03,0x1D,
0x30,0x04,0x34,0x2C,0x51,0x08,0xBB,0x00,0x3F,0x2C,0x51,0x08,0xCE,0x00,0x55,0x08,0x01,0x3C,0x89,0x0A,0x3B,0x2C,0xCE,0x35,0x89,0x0B,0x3A,0x2C,0x4E,0x08,0xCF,0x04,0x03,0x30,
0x40,0x04,0xD5,0x0A,0x55,0x02,0x03,0x1C,0x0A,0x2C,0xFF,0x26,0xFF,0x26,0x64,0x00,0x20,0x00,0x4F,0x08,0x08,0x00,0x03,0x19,0xD3,0x0A,0x53,0x08,0x80,0x3A,0xFF,0x00,0xA7,0x30,
0x50,0x04,0x7F,0x02,0x03,0x1D,0x08,0x00,0x11,0x30,0x52,0x02,0x08,0x00,0xD9,0x01,0xDA,0x01,0xDB,0x01,0xDC,0x01,0x18,0x14,0x20,0x00,0xDC,0x0A,0xFF,0x26,0x64,0x00,0x38,0x30,
0x60,0x04,0x20,0x00,0x5C,0x02,0x03,0x1C,0xAE,0x2C,0x06,0x30,0xCD,0x26,0x53,0x08,0xDE,0x00,0x52,0x08,0xDD,0x00,0xCC,0x24,0x03,0x1D,0x6F,0x2C,0x64,0x30,0x5D,0x02,0x03,0x1C,
0x70,0x04,0x7D,0x2C,0x20,0x00,0x5E,0x08,0x80,0x3A,0xFF,0x00,0x81,0x30,0x7F,0x02,0x03,0x1D,0x7B,0x2C,0xC3,0x30,0x5D,0x02,0x03,0x1C,0x80,0x2C,0x5C,0x30,0x4C,0x27,0x96,0x2C,
0x80,0x04,0x20,0x00,0xCC,0x24,0x03,0x1D,0x86,0x2C,0x96,0x30,0x5D,0x02,0x03,0x18,0x8F,0x2C,0x9A,0x30,0x20,0x00,0xD9,0x00,0x10,0x30,0xDA,0x00,0x53,0x30,0x95,0x2C,0xFE,0x30,
0x90,0x04,0x20,0x00,0xD9,0x00,0x10,0x30,0xDA,0x00,0x5A,0x30,0xDB,0x00,0x08,0x30,0xCD,0x26,0x53,0x08,0xB3,0x00,0x52,0x08,0xB2,0x00,0x5A,0x08,0x80,0x3A,0xD8,0x00,0x33,0x08,
0xA0,0x04,0x80,0x3A,0x58,0x02,0x03,0x1D,0xA6,0x2C,0x32,0x08,0x59,0x02,0x03,0x18,0xAB,0x2C,0x20,0x00,0x5B,0x08,0x4C,0x27,0x20,0x00,0xDC,0x01,0x64,0x00,0x20,0x00,0x3F,0x08,
0xB0,0x04,0x03,0x19,0xB9,0x2C,0x3A,0x08,0x03,0x19,0xB7,0x2C,0x59,0x30,0x4C,0x27,0x54,0x30,0x4C,0x27,0x20,0x00,0x3A,0x08,0x03,0x19,0xBF,0x2C,0x59,0x30,0x4C,0x27,0x20,0x00,
0xC0,0x04,0x3C,0x08,0x03,0x19,0x5B,0x2C,0x58,0x30,0xCC,0x23,0x02,0x3A,0x03,0x1D,0xCA,0x2C,0xBC,0x01,0x5B,0x2C,0x01,0x00,0x5B,0x2C,0x5E,0x08,0x80,0x3A,0xFF,0x00,0x80,0x30,
0xD0,0x04,0x7F,0x02,0x08,0x00,0x20,0x00,0xE0,0x01,0xE0,0x0A,0x24,0x00,0x96,0x14,0x96,0x18,0xD7,0x2C,0x20,0x00,0xE0,0x08,0x03,0x1D,0xD9,0x2C,0x91,0x11,0xAB,0x30,0x24,0x00,
0xE0,0x04,0x91,0x00,0x14,0x18,0xE1,0x2C,0x14,0x19,0xE3,0x2C,0x16,0x1B,0xE5,0x2C,0x20,0x00,0x91,0x11,0x24,0x00,0x96,0x15,0x96,0x19,0xEB,0x2C,0x20,0x00,0x91,0x19,0xED,0x2C,
0xF0,0x04,0x24,0x00,0x11,0x08,0x20,0x00,0xD0,0x00,0xD1,0x01,0x24,0x00,0x14,0x18,0xF5,0x2C,0x20,0x00,0xE0,0x01,0xE0,0x0A,0x24,0x00,0x96,0x12,0x16,0x16,0x20,0x00,0x91,0x11,
0x00,0x05,0xE0,0x08,0x03,0x1D,0x00,0x2D,0xE0,0x01,0xE0,0x0A,0x24,0x00,0x96,0x15,0x96,0x19,0x07,0x2D,0x20,0x00,0x91,0x19,0x09,0x2D,0xE0,0x08,0x03,0x1D,0x0C,0x2D,0x24,0x00,
0x10,0x05,0x11,0x08,0x20,0x00,0xBD,0x00,0x24,0x00,0x14,0x18,0x13,0x2D,0x20,0x00,0x3D,0x08,0xCE,0x00,0xCF,0x01,0xCF,0x00,0xCE,0x01,0x4E,0x08,0xD0,0x04,0x4F,0x08,0xD1,0x04,
0x20,0x05,0x24,0x00,0x96,0x16,0x16,0x12,0x20,0x00,0x91,0x11,0xE0,0x01,0xE0,0x0A,0x24,0x00,0x16,0x15,0x16,0x19,0x29,0x2D,0x20,0x00,0x91,0x19,0x2B,0x2D,0xE0,0x08,0x03,0x1D,
0x30,0x05,0x2E,0x2D,0x51,0x08,0xCD,0x00,0x50,0x08,0xCC,0x00,0x08,0x00,0xF5,0x01,0xF1,0x1F,0x40,0x2D,0xF0,0x09,0xF1,0x09,0xF0,0x0A,0x03,0x19,0xF1,0x0A,0xF5,0x01,0xF5,0x0A,
0x40,0x05,0xF3,0x1F,0x49,0x2D,0xF2,0x09,0xF3,0x09,0xF2,0x0A,0x03,0x19,0xF3,0x0A,0x01,0x30,0xF5,0x06,0xF6,0x01,0xF7,0x01,0x71,0x08,0x70,0x04,0x03,0x19,0x69,0x2D,0xF4,0x01,
0x50,0x05,0xF4,0x0A,0xF1,0x1B,0x56,0x2D,0xF0,0x35,0xF1,0x0D,0x50,0x2D,0xF6,0x35,0xF7,0x0D,0x71,0x08,0x73,0x02,0x03,0x1D,0x5E,0x2D,0x70,0x08,0x72,0x02,0x03,0x1C,0x65,0x2D,
0x60,0x05,0x70,0x08,0xF2,0x02,0x71,0x08,0xF3,0x3B,0x76,0x14,0xF1,0x36,0xF0,0x0C,0xF4,0x0B,0x56,0x2D,0x75,0x08,0x03,0x19,0x71,0x2D,0xF6,0x09,0xF7,0x09,0xF6,0x0A,0x03,0x19,
0x70,0x05,0xF7,0x0A,0x77,0x08,0xF1,0x00,0x76,0x08,0xF0,0x00,0x08,0x00,0x20,0x00,0x8E,0x11,0x22,0x00,0x8E,0x11,0x21,0x00,0x8E,0x11,0x23,0x00,0x8E,0x11,0x20,0x00,0x8E,0x15,
0x80,0x05,0x21,0x00,0x9F,0x01,0x2D,0x00,0x93,0x01,0x94,0x01,0x95,0x01,0x3E,0x00,0x98,0x01,0x99,0x01,0x20,0x00,0x0E,0x12,0x22,0x00,0x0E,0x12,0x21,0x00,0x0E,0x12,0x22,0x00,
0x90,0x05,0x0E,0x12,0x20,0x00,0x0E,0x16,0x3E,0x00,0x90,0x01,0x22,0x00,0x9D,0x10,0x2D,0x00,0x93,0x01,0x94,0x01,0x95,0x01,0x20,0x00,0x8E,0x12,0x22,0x00,0x8E,0x12,0x21,0x00,
0xA0,0x05,0x8E,0x16,0x22,0x00,0x8C,0x12,0x21,0x00,0x8C,0x16,0x20,0x00,0x8C,0x12,0x27,0x00,0x91,0x16,0x92,0x12,0x8B,0x15,0x8B,0x17,0x0B,0x10,0x20,0x00,0xB8,0x01,0xA0,0x01,
0xB0,0x05,0xA0,0x0A,0xA1,0x01,0xA2,0x01,0xA2,0x0A,0x08,0x00,0xF3,0x00,0x64,0x00,0x21,0x00,0x0C,0x14,0x23,0x00,0x0C,0x14,0x21,0x00,0x8C,0x14,0x23,0x00,0x8C,0x14,0x21,0x00,
0xC0,0x05,0x0C,0x15,0x23,0x00,0x0C,0x15,0xF0,0x30,0x21,0x00,0x9E,0x00,0xF3,0x08,0x03,0x1D,0xCB,0x2D,0x01,0x30,0xE2,0x2D,0x73,0x03,0x03,0x1D,0xD0,0x2D,0x05,0x30,0xE2,0x2D,
0xD0,0x05,0x73,0x08,0x02,0x3A,0x03,0x1D,0xD6,0x2D,0x09,0x30,0xE2,0x2D,0x73,0x08,0x03,0x3A,0x03,0x1D,0xDC,0x2D,0x19,0x30,0xE2,0x2D,0x22,0x00,0x97,0x17,0x97,0x10,0x17,0x14,
0xE0,0x05,0x7D,0x30,0x21,0x00,0x9D,0x00,0xC4,0x27,0x21,0x00,0x9D,0x14,0x9D,0x18,0xE6,0x2D,0x64,0x00,0x21,0x00,0x1C,0x08,0xF1,0x00,0xF0,0x01,0x1B,0x08,0xF0,0x04,0x08,0x00,
0xF0,0x05,0xAC,0x27,0x64,0x00,0x20,0x00,0x37,0x08,0x03,0x1D,0xFD,0x2D,0x64,0x00,0x20,0x00,0x3F,0x08,0x03,0x1D,0x01,0x00,0x62,0x27,0xF2,0x2D,0x24,0x27,0x77,0x27,0x52,0x30,
0x00,0x06,0xCC,0x23,0xDF,0x00,0x5F,0x03,0x03,0x1D,0x08,0x2E,0x62,0x27,0x27,0x26,0x0F,0x2E,0x5F,0x08,0x02,0x3A,0x03,0x1D,0x0E,0x2E,0x00,0x00,0x0F,0x2E,0x01,0x00,0x21,0x00,
0x10,0x06,0x91,0x15,0x08,0x30,0xCD,0x26,0x53,0x08,0xB3,0x00,0x52,0x08,0xB2,0x00,0xB8,0x01,0xB8,0x0A,0x20,0x00,0x8E,0x1D,0x25,0x2E,0x64,0x00,0x20,0x00,0x3F,0x08,0x03,0x19,
0x20,0x06,0x19,0x2E,0x01,0x00,0x00,0x00,0x00,0x00,0x19,0x2E,0x56,0x24,0x26,0x2E,0x23,0x00,0x15,0x13,0x07,0x30,0x92,0x00,0xFE,0x30,0x91,0x00,0x15,0x14,0x15,0x18,0x2E,0x2E,
0x30,0x06,0x13,0x08,0x20,0x00,0xC3,0x00,0x56,0x30,0xCC,0x23,0xC4,0x00,0x02,0x3A,0x03,0x1D,0x01,0x00,0x62,0x27,0x43,0x08,0xCC,0x23,0xC4,0x00,0x02,0x3A,0x03,0x1D,0x56,0x2E,
0x40,0x06,0x8B,0x13,0x07,0x30,0x23,0x00,0x92,0x00,0xFF,0x30,0x91,0x00,0x15,0x16,0x15,0x15,0x55,0x30,0x96,0x00,0xAA,0x30,0x96,0x00,0x95,0x14,0x95,0x19,0x4D,0x2E,0x15,0x1A,
0x50,0x06,0x4F,0x2E,0xFF,0x26,0x23,0x00,0x15,0x11,0x01,0x00,0x08,0x00,0x44,0x0B,0x59,0x2E,0x08,0x00,0x01,0x00,0x08,0x00,0xF7,0x00,0x02,0x3A,0x03,0x1D,0x63,0x2E,0x0A,0x30,
0x60,0x06,0xF3,0x00,0x18,0x30,0x71,0x2E,0xF7,0x08,0x03,0x1D,0x6A,0x2E,0x18,0x30,0xF3,0x00,0x17,0x30,0x71,0x2E,0x77,0x08,0x03,0x3A,0x03,0x1D,0x74,0x2E,0x3F,0x30,0xF3,0x00,
0x70,0x06,0x3E,0x30,0xF4,0x01,0xF5,0x00,0xF6,0x01,0x71,0x08,0x80,0x3A,0xF2,0x00,0x74,0x08,0x80,0x3A,0x72,0x02,0x03,0x1D,0x7E,0x2E,0x73,0x08,0x70,0x02,0x03,0x1C,0x00,0x34,
0x80,0x06,0x76,0x08,0x80,0x3A,0xF2,0x00,0x71,0x08,0x80,0x3A,0x72,0x02,0x03,0x1D,0x8A,0x2E,0x70,0x08,0x75,0x02,0x03,0x1C,0x02,0x34,0x01,0x34,0xCA,0x00,0xC5,0x01,0xC6,0x01,
0x90,0x06,0xC9,0x01,0xB5,0x25,0x71,0x08,0x20,0x00,0xC8,0x00,0x70,0x08,0xC7,0x00,0x78,0x08,0x04,0x3A,0x03,0x19,0xA2,0x2E,0x78,0x08,0xB5,0x25,0x71,0x08,0x20,0x00,0xC6,0x00,
0xA0,0x06,0x70,0x08,0xC5,0x00,0x45,0x08,0xC7,0x02,0x46,0x08,0xC8,0x3B,0x48,0x08,0xF1,0x00,0x47,0x08,0xF0,0x00,0x4A,0x08,0x5B,0x26,0x20,0x00,0xC9,0x00,0x08,0x00,0x0B,0x17,
0xB0,0x06,0x8B,0x17,0x23,0x00,0x0E,0x10,0x8E,0x10,0x21,0x00,0x0E,0x14,0x8E,0x14,0x3E,0x00,0x98,0x01,0x22,0x00,0x0E,0x10,0x8E,0x10,0x2C,0x00,0x9C,0x01,0x22,0x00,0x1D,0x14,
0xC0,0x06,0x94,0x01,0x24,0x00,0x95,0x01,0x96,0x01,0x28,0x30,0x95,0x00,0x80,0x30,0x94,0x00,0x09,0x30,0x92,0x00,0x20,0x00,0x91,0x11,0x08,0x00,0x20,0x00,0xD7,0x00,0x64,0x00,
0xD0,0x06,0x13,0x27,0x57,0x08,0xE9,0x26,0x40,0x27,0x64,0x00,0xD2,0x24,0x4D,0x08,0xD6,0x00,0x4C,0x08,0xD5,0x00,0x57,0x08,0x06,0x3A,0x03,0x1D,0xE2,0x2E,0x55,0x30,0xD5,0x07,
0xE0,0x06,0xF5,0x30,0xD6,0x3D,0x64,0x00,0x20,0x00,0x56,0x08,0xD3,0x00,0x55,0x08,0xD2,0x00,0x08,0x00,0xCC,0x00,0xAA,0x30,0xE0,0x01,0xE0,0x0A,0x24,0x00,0x91,0x00,0x14,0x18,
0xF0,0x06,0xEF,0x2E,0x16,0x1B,0xF1,0x2E,0x20,0x00,0xE0,0x08,0x03,0x1D,0xF3,0x2E,0x4C,0x08,0x24,0x00,0x91,0x00,0x14,0x18,0xFA,0x2E,0x16,0x1F,0x08,0x00,0xFC,0x2E,0x20,0x00,
0x00,0x07,0xCC,0x01,0xCD,0x01,0x00,0x00,0x20,0x00,0xCC,0x0A,0x03,0x19,0xCD,0x0A,0x4D,0x08,0x80,0x3A,0xFF,0x00,0x84,0x30,0x7F,0x02,0x03,0x1D,0x10,0x2F,0xE2,0x30,0x4C,0x02,
0x10,0x07,0x03,0x18,0x08,0x00,0x02,0x2F,0x21,0x00,0x91,0x15,0x0B,0x17,0x8B,0x17,0x20,0x00,0x91,0x11,0xE0,0x01,0xE0,0x0A,0x24,0x00,0x16,0x14,0x16,0x18,0x1D,0x2F,0x20,0x00,
0x20,0x07,0xE0,0x08,0x03,0x19,0x08,0x00,0x1F,0x2F,0x21,0x00,0x0C,0x12,0x23,0x00,0x0C,0x12,0x22,0x00,0x1D,0x14,0xFF,0x30,0x29,0x00,0x9B,0x00,0x9C,0x00,0x01,0x30,0x9F,0x00,
0x30,0x07,0xC0,0x30,0x9E,0x00,0x08,0x00,0x20,0x00,0x18,0x10,0x30,0x30,0x98,0x00,0x99,0x01,0x97,0x01,0x96,0x01,0x11,0x10,0x21,0x00,0x11,0x14,0x0B,0x17,0x8B,0x17,0x08,0x00,
0x40,0x07,0x20,0x00,0xE0,0x01,0xE0,0x0A,0x24,0x00,0x16,0x15,0x16,0x19,0x45,0x2F,0x20,0x00,0xE0,0x08,0x03,0x19,0x08,0x00,0x47,0x2F,0x20,0x00,0xD6,0x00,0x64,0x00,0x20,0x00,
0x50,0x07,0x8E,0x15,0xB8,0x27,0x20,0x00,0x56,0x08,0xCC,0x23,0x01,0x00,0x08,0x00,0x1C,0x11,0xFF,0x30,0x9B,0x00,0x63,0x30,0x9C,0x00,0x91,0x10,0x21,0x00,0x91,0x14,0x0B,0x17,
0x60,0x07,0x8B,0x17,0x08,0x00,0x20,0x00,0xCE,0x01,0xCE,0x01,0xFF,0x26,0x20,0x00,0x13,0x30,0xCE,0x0A,0x4E,0x02,0x03,0x18,0x08,0x00,0x65,0x2F,0x0E,0x12,0x22,0x00,0x0E,0x12,
0x70,0x07,0x21,0x00,0x0E,0x12,0x20,0x00,0x0E,0x12,0x22,0x00,0x0E,0x12,0x08,0x00,0x21,0x00,0x8C,0x15,0x27,0x00,0x93,0x11,0x91,0x15,0x92,0x11,0x8B,0x15,0x8B,0x17,0x08,0x00,
0x80,0x07,0xF0,0x01,0xF0,0x01,0x00,0x00,0x41,0x30,0xF0,0x0A,0x70,0x02,0x03,0x18,0x08,0x00,0x82,0x2F,0x6D,0x27,0xCD,0x27,0x20,0x00,0x0E,0x12,0xFF,0x26,0x20,0x00,0x0E,0x16,
0x90,0x07,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x00,0x20,0x00,0x8E,0x12,0x22,0x00,0x8E,0x12,0x21,0x00,0x8E,0x16,0x08,0x00,0x00,0x00,
0xA0,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x00,0x64,0x00,0x80,0x01,0x01,0x31,0x89,0x0B,0xA7,0x2F,0x00,0x34,0xC9,0x27,0x76,0x25,0xAF,0x26,0x57,0x27,
0xB0,0x07,0x33,0x27,0xD1,0x2F,0x0E,0x12,0x22,0x00,0x0E,0x12,0x21,0x00,0x0E,0x16,0x08,0x00,0x8E,0x12,0x22,0x00,0x8E,0x12,0x21,0x00,0x8E,0x16,0x08,0x00,0x8E,0x12,0x22,0x00,
0xC0,0x07,0x8E,0x12,0x21,0x00,0x8E,0x12,0x08,0x00,0x9F,0x27,0x9F,0x27,0x9F,0x27,0x9F,0x27,0x08,0x00,0x68,0x30,0x21,0x00,0x99,0x00,0x08,0x00,0x91,0x27,0x91,0x27,0x91,0x27,
0xD0,0x07,0x91,0x2F,0x14,0x30,0x97,0x00,0x08,0x00,0xff,0x3f,0xff,0x3f,0xff,0x3f,0xff,0x3f,0xff,0x3f,0xff,0x3f,0xff,0x3f,0xff,0x3f,0xff,0x3f,0xff,0x3f,0xff,0x3f,0xff,0x3f,
0xF0,0x07,0xff,0x3f,0xff,0x3f,0xff,0x3f,0xff,0x3f,0xff,0x3f,0xff,0x3f,0xff,0x3f,0xff,0x3f,0xff,0x3f,0xff,0x3f,0xff,0x3f,0xff,0x3f,0xff,0x3f,0xff,0x3f,0x14,0x34,0x55,0x34,

};

#else 		//FIND7OP:pic1508

unsigned char Pic16F_firmware_data[] = {

0x00,0x02,0x82,0x31,0x3E,0x2A,0xFF,0x3F,0xFF,0x3F,0x82,0x31,0x20,0x00,0x7F,0x08,0xFD,0x00,0x91,0x1D,0x0D,0x2A,0x91,0x11,0xDC,0x01,0x3A,0x2A,0x91,0x1C,0x1A,0x2A,0x91,0x10,
0x10,0x02,0x36,0x08,0x03,0x19,0x17,0x2A,0x8E,0x13,0x8D,0x17,0xBF,0x01,0xBF,0x0A,0xB6,0x01,0xB6,0x0A,0x3A,0x2A,0x11,0x1C,0x26,0x2A,0x11,0x10,0x0B,0x30,0xC2,0x0A,0x42,0x02,
0x20,0x02,0x03,0x1C,0x3A,0x2A,0xC2,0x01,0xBC,0x01,0xBC,0x0A,0x3A,0x2A,0x27,0x00,0x93,0x1E,0x2E,0x2A,0x93,0x12,0x20,0x00,0xB9,0x01,0xB9,0x0A,0x3A,0x2A,0x96,0x1E,0x3A,0x2A,
0x30,0x02,0x96,0x12,0x20,0x00,0xC1,0x08,0x03,0x1D,0x38,0x2A,0x1C,0x15,0xC1,0x01,0xC1,0x0A,0x85,0x31,0x04,0x25,0x7D,0x08,0x20,0x00,0xFF,0x00,0x09,0x00,0x82,0x31,0x40,0x2A,
0x40,0x02,0x20,0x30,0x84,0x00,0x00,0x30,0x85,0x00,0x25,0x30,0x87,0x31,0xA1,0x27,0x82,0x31,0x01,0x30,0xDC,0x00,0x20,0x00,0x8D,0x2A,0x2E,0x24,0x82,0x31,0x20,0x24,0x82,0x31,
0x50,0x02,0x20,0x00,0x0E,0x12,0xFA,0x23,0x20,0x00,0x0E,0x16,0x08,0x00,0x23,0x00,0x15,0x13,0x0F,0x30,0x92,0x00,0xFE,0x30,0x91,0x00,0x15,0x14,0x15,0x18,0x5D,0x2A,0x13,0x08,
0x60,0x02,0x20,0x00,0xC3,0x00,0x56,0x30,0x6E,0x23,0x82,0x31,0xC4,0x00,0x02,0x3A,0x03,0x1D,0x01,0x00,0x0E,0x24,0x82,0x31,0x43,0x08,0x6E,0x23,0x82,0x31,0xC4,0x00,0x02,0x3A,
0x70,0x02,0x03,0x1D,0x88,0x2A,0x8B,0x13,0x0F,0x30,0x23,0x00,0x92,0x00,0xFF,0x30,0x91,0x00,0x15,0x16,0x15,0x15,0x55,0x30,0x96,0x00,0xAA,0x30,0x96,0x00,0x95,0x14,0x95,0x19,
0x80,0x02,0x7F,0x2A,0x15,0x1A,0x81,0x2A,0xFA,0x23,0x23,0x00,0x15,0x11,0x01,0x00,0x08,0x00,0x44,0x0B,0x8B,0x2A,0x08,0x00,0x01,0x00,0x08,0x00,0x3E,0x24,0x82,0x31,0x64,0x00,
0x90,0x02,0x20,0x00,0x37,0x08,0x03,0x1D,0x9C,0x2A,0x64,0x00,0x20,0x00,0x3F,0x08,0x03,0x1D,0x01,0x00,0x0E,0x24,0x82,0x31,0x90,0x2A,0x34,0x24,0x82,0x31,0x52,0x30,0x6E,0x23,
0xA0,0x02,0x82,0x31,0xDB,0x00,0x5B,0x03,0x03,0x1D,0xAA,0x2A,0x0E,0x24,0x82,0x31,0x56,0x22,0x82,0x31,0xB1,0x2A,0x5B,0x08,0x02,0x3A,0x03,0x1D,0xB0,0x2A,0x00,0x00,0xB1,0x2A,
0xB0,0x02,0x01,0x00,0x21,0x00,0x91,0x15,0x08,0x30,0x4E,0x23,0x82,0x31,0x52,0x08,0xB3,0x00,0x51,0x08,0xB2,0x00,0xB8,0x01,0xB8,0x0A,0x20,0x00,0x8D,0x1F,0xC8,0x2A,0x64,0x00,
0xC0,0x02,0x20,0x00,0x3F,0x08,0x03,0x19,0xBC,0x2A,0x01,0x00,0x00,0x00,0x00,0x00,0xBC,0x2A,0xCB,0x22,0x82,0x31,0xCA,0x2A,0xD7,0x01,0xD8,0x01,0x18,0x14,0x20,0x00,0xD7,0x0A,
0xD0,0x02,0xD8,0x0A,0xFA,0x23,0x82,0x31,0x64,0x00,0x38,0x30,0x20,0x00,0x57,0x02,0x03,0x1C,0x0B,0x2B,0x08,0x30,0x4E,0x23,0x82,0x31,0x52,0x08,0xB3,0x00,0x51,0x08,0xB2,0x00,
0xE0,0x02,0x33,0x08,0x80,0x3A,0xFF,0x00,0x90,0x30,0x7F,0x02,0x03,0x1D,0xE9,0x2A,0xFF,0x30,0x32,0x02,0x03,0x1C,0xEE,0x2A,0x5A,0x30,0x41,0x23,0x82,0x31,0x06,0x30,0x4E,0x23,
0xF0,0x02,0x82,0x31,0xF4,0x24,0x82,0x31,0x03,0x1D,0xF7,0x2A,0xC8,0x30,0x59,0x02,0x03,0x1C,0x05,0x2B,0x20,0x00,0x5A,0x08,0x80,0x3A,0xFF,0x00,0x81,0x30,0x7F,0x02,0x03,0x1D,
0x00,0x03,0x03,0x2B,0xC3,0x30,0x59,0x02,0x03,0x1C,0x08,0x2B,0x5C,0x30,0x41,0x23,0x82,0x31,0x20,0x00,0xD7,0x01,0x64,0x00,0x97,0x30,0x20,0x00,0x58,0x02,0x03,0x1C,0x20,0x2B,
0x10,0x03,0x14,0x30,0x4E,0x23,0x82,0x31,0xF4,0x24,0x82,0x31,0x03,0x1D,0x19,0x2B,0x64,0x30,0x59,0x02,0x03,0x18,0x1E,0x2B,0x59,0x30,0x41,0x23,0x82,0x31,0x20,0x00,0xD8,0x01,
0x20,0x03,0x3F,0x08,0x03,0x19,0x2C,0x2B,0x3A,0x08,0x03,0x19,0x29,0x2B,0x59,0x30,0x41,0x23,0x82,0x31,0x54,0x30,0x41,0x23,0x82,0x31,0x20,0x00,0x3A,0x08,0x03,0x19,0x33,0x2B,
0x30,0x03,0x59,0x30,0x41,0x23,0x82,0x31,0x20,0x00,0x3C,0x08,0x03,0x19,0xCE,0x2A,0x58,0x30,0x6E,0x23,0x82,0x31,0x02,0x3A,0x03,0x1D,0x3F,0x2B,0xBC,0x01,0xCE,0x2A,0x01,0x00,
0x40,0x03,0xCE,0x2A,0x20,0x00,0xD5,0x00,0x64,0x00,0x20,0x00,0x8E,0x13,0x8D,0x17,0xF4,0x23,0x82,0x31,0x20,0x00,0x55,0x08,0x6E,0x23,0x01,0x00,0x08,0x00,0x20,0x00,0xD6,0x00,
0x50,0x03,0x64,0x00,0xA5,0x24,0x82,0x31,0x56,0x08,0xC2,0x24,0x82,0x31,0xB6,0x24,0x64,0x00,0x87,0x31,0x3D,0x27,0x82,0x31,0x4C,0x08,0xD5,0x00,0x4B,0x08,0xD4,0x00,0x56,0x08,
0x60,0x03,0x06,0x3A,0x03,0x1D,0x67,0x2B,0x55,0x30,0xD4,0x07,0xF5,0x30,0xD5,0x3D,0x64,0x00,0x20,0x00,0x55,0x08,0xD2,0x00,0x54,0x08,0xD1,0x00,0x08,0x00,0x20,0x00,0xD3,0x00,
0x70,0x03,0xCE,0x01,0xCF,0x01,0xD1,0x01,0xD2,0x01,0x64,0x00,0x20,0x00,0x53,0x08,0xCF,0x00,0xB9,0x01,0x4C,0x22,0x82,0x31,0xD4,0x01,0x3F,0x08,0x03,0x19,0x86,0x2B,0x53,0x08,
0x80,0x03,0x58,0x3A,0x03,0x1D,0x86,0x2B,0xF4,0x23,0x82,0x31,0x20,0x00,0x20,0x00,0x39,0x08,0x03,0x1D,0x94,0x2B,0xD1,0x0A,0xE8,0x24,0x82,0x31,0x03,0x1C,0x85,0x2B,0x01,0x00,
0x90,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x86,0x2B,0xD1,0x01,0xD2,0x01,0x4F,0x08,0xCD,0x00,0x54,0x08,0x06,0x3C,0x89,0x0A,0x9D,0x2B,0xCD,0x36,0x89,0x0B,0x9C,0x2B,0x4D,0x1C,
0xA0,0x03,0xA4,0x2B,0x20,0x00,0x0E,0x16,0xA6,0x2B,0x20,0x00,0x0E,0x12,0x07,0x30,0xB9,0x01,0xD4,0x0A,0x54,0x02,0x03,0x1C,0x7C,0x2B,0x64,0x00,0x20,0x00,0xD4,0x01,0x3F,0x08,
0xB0,0x03,0x03,0x19,0xB9,0x2B,0x53,0x08,0x58,0x3A,0x03,0x1D,0xB9,0x2B,0xF4,0x23,0x82,0x31,0x20,0x00,0x20,0x00,0x39,0x08,0x03,0x1D,0xC7,0x2B,0xD1,0x0A,0xE8,0x24,0x82,0x31,
0xC0,0x03,0x03,0x1C,0xB8,0x2B,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xB9,0x2B,0xD1,0x01,0xD2,0x01,0xD4,0x08,0x03,0x1D,0xD0,0x2B,0x1A,0x24,0x82,0x31,0x20,0x24,0x82,0x31,
0xD0,0x03,0x20,0x00,0x00,0x30,0xB9,0x01,0x0E,0x1A,0x01,0x30,0xD0,0x00,0x54,0x08,0x02,0x3A,0x03,0x1D,0xDD,0x2B,0x50,0x08,0xBB,0x00,0xE8,0x2B,0x50,0x08,0xCD,0x00,0x54,0x08,
0xE0,0x03,0x01,0x3C,0x89,0x0A,0xE4,0x2B,0xCD,0x35,0x89,0x0B,0xE3,0x2B,0x4D,0x08,0xCE,0x04,0x03,0x30,0xD4,0x0A,0x54,0x02,0x03,0x1C,0xAF,0x2B,0xFA,0x23,0x82,0x31,0xFA,0x23,
0xF0,0x03,0x64,0x00,0x20,0x00,0x4E,0x08,0x08,0x00,0x0E,0x10,0x22,0x00,0x0E,0x10,0x21,0x00,0x0E,0x14,0x08,0x00,0x20,0x00,0xCB,0x01,0xCC,0x01,0x00,0x00,0x20,0x00,0xCB,0x0A,
0x00,0x04,0x03,0x19,0xCC,0x0A,0x4C,0x08,0x80,0x3A,0xFF,0x00,0x84,0x30,0x7F,0x02,0x03,0x1D,0x0B,0x2C,0xE2,0x30,0x4B,0x02,0x03,0x18,0x08,0x00,0xFD,0x2B,0x20,0x00,0xCD,0x01,
0x10,0x04,0xCD,0x01,0xFA,0x23,0x82,0x31,0x20,0x00,0x13,0x30,0xCD,0x0A,0x4D,0x02,0x03,0x18,0x08,0x00,0x11,0x2C,0x0E,0x12,0x22,0x00,0x0E,0x12,0x21,0x00,0x0E,0x16,0x08,0x00,
0x20,0x04,0x27,0x24,0x82,0x31,0x27,0x24,0x82,0x31,0x27,0x24,0x82,0x31,0x27,0x2C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x00,0xFE,0x24,0x20,0x00,
0x30,0x04,0x0E,0x12,0x22,0x00,0x0E,0x12,0x08,0x00,0x21,0x00,0x8C,0x16,0x27,0x00,0x93,0x12,0x91,0x16,0x92,0x12,0x93,0x12,0x8B,0x15,0x8B,0x17,0x08,0x00,0x6C,0x24,0x82,0x31,
0x40,0x04,0x70,0x24,0x82,0x31,0x49,0x24,0x82,0x31,0x61,0x24,0x82,0x31,0xD8,0x24,0x82,0x31,0xE5,0x2C,0x0B,0x17,0x8B,0x17,0x23,0x00,0x0D,0x12,0x21,0x00,0x0D,0x16,0x0D,0x17,
0x50,0x04,0x22,0x00,0x0D,0x12,0x0D,0x13,0x3E,0x00,0xA0,0x01,0x24,0x00,0x95,0x01,0x96,0x01,0x28,0x30,0x95,0x00,0x80,0x30,0x94,0x00,0x09,0x30,0x92,0x00,0x20,0x00,0x91,0x11,
0x60,0x04,0x08,0x00,0x1C,0x11,0xFF,0x30,0x9B,0x00,0x63,0x30,0x9C,0x00,0x91,0x10,0x21,0x00,0x91,0x14,0x0B,0x17,0x8B,0x17,0x08,0x00,0x68,0x30,0x21,0x00,0x99,0x00,0x08,0x00,
0x70,0x04,0x8E,0x13,0x23,0x00,0x8E,0x13,0x22,0x00,0x8E,0x13,0x20,0x00,0x8E,0x13,0x21,0x00,0x8D,0x13,0x22,0x00,0x8D,0x13,0x20,0x00,0x8D,0x17,0x21,0x00,0x8D,0x16,0x23,0x00,
0x80,0x04,0x8D,0x12,0x22,0x00,0x8D,0x12,0x27,0x00,0x96,0x12,0x0B,0x10,0x94,0x16,0x8B,0x15,0x8B,0x17,0x21,0x00,0x0E,0x14,0x23,0x00,0x0E,0x10,0x22,0x00,0x0E,0x10,0x21,0x00,
0x90,0x04,0x9F,0x01,0x2D,0x00,0x93,0x01,0x94,0x01,0x95,0x01,0x3E,0x00,0x98,0x01,0x99,0x01,0x20,0x00,0xFE,0x24,0x22,0x00,0x0E,0x12,0x20,0x00,0x0E,0x16,0xB8,0x01,0xA0,0x01,
0xA0,0x04,0xA0,0x0A,0xA1,0x01,0xA2,0x01,0xA2,0x0A,0x08,0x00,0x21,0x00,0x91,0x15,0x0B,0x17,0x8B,0x17,0x20,0x00,0x91,0x11,0xDC,0x01,0xDC,0x0A,0x24,0x00,0x16,0x14,0x16,0x18,
0xB0,0x04,0xAF,0x2C,0x20,0x00,0xDC,0x08,0x03,0x19,0x08,0x00,0xB1,0x2C,0x20,0x00,0xDC,0x01,0xDC,0x0A,0x24,0x00,0x16,0x15,0x16,0x19,0xBB,0x2C,0x20,0x00,0xDC,0x08,0x03,0x19,
0xC0,0x04,0x08,0x00,0xBD,0x2C,0xCB,0x00,0xAA,0x30,0xDC,0x01,0xDC,0x0A,0x24,0x00,0x91,0x00,0x14,0x18,0xC8,0x2C,0x16,0x1B,0xCA,0x2C,0x20,0x00,0xDC,0x08,0x03,0x1D,0xCC,0x2C,
0xD0,0x04,0x4B,0x08,0x24,0x00,0x91,0x00,0x14,0x18,0xD3,0x2C,0x16,0x1F,0x08,0x00,0xD5,0x2C,0x20,0x00,0x18,0x10,0x30,0x30,0x98,0x00,0x99,0x01,0x97,0x01,0x96,0x01,0x11,0x10,
0xE0,0x04,0x21,0x00,0x11,0x14,0x0B,0x17,0x8B,0x17,0x08,0x00,0x16,0x30,0x97,0x00,0x08,0x00,0x03,0x19,0xD2,0x0A,0x52,0x08,0x80,0x3A,0xFF,0x00,0xA7,0x30,0x7F,0x02,0x03,0x1D,
0xF0,0x04,0x08,0x00,0x11,0x30,0x51,0x02,0x08,0x00,0x52,0x08,0xDA,0x00,0x51,0x08,0xD9,0x00,0x5A,0x08,0x80,0x3A,0xFF,0x00,0x80,0x30,0x7F,0x02,0x08,0x00,0x0E,0x12,0x22,0x00,
0x00,0x05,0x0E,0x12,0x21,0x00,0x0E,0x12,0x08,0x00,0x08,0x30,0x35,0x02,0x35,0x08,0x03,0x18,0x12,0x2D,0x2A,0x3E,0x86,0x00,0x00,0x30,0x87,0x01,0x0E,0x18,0x01,0x30,0x81,0x00,
0x10,0x05,0xB5,0x0A,0x08,0x00,0x08,0x3A,0x03,0x1D,0x4B,0x2E,0x2A,0x0B,0x2D,0x2D,0xAB,0x08,0x03,0x1D,0x2D,0x2D,0x2C,0x0B,0x2D,0x2D,0x2F,0x08,0xF9,0x00,0xF9,0x35,0x2E,0x08,
0x20,0x05,0xFA,0x00,0xFA,0x35,0xFA,0x35,0x2D,0x08,0x37,0x27,0x85,0x31,0x30,0x04,0xB4,0x00,0x09,0x30,0xB5,0x00,0x6E,0x26,0x85,0x31,0x4B,0x2E,0x2B,0x0B,0x43,0x2D,0xAC,0x08,
0x30,0x05,0x03,0x1D,0x43,0x2D,0x2D,0x0B,0x43,0x2D,0x30,0x08,0xF9,0x00,0xF9,0x35,0x2F,0x08,0xFA,0x00,0xFA,0x35,0xFA,0x35,0x2E,0x08,0x37,0x27,0x85,0x31,0x31,0x04,0xB4,0x00,
0x40,0x05,0x09,0x30,0xB5,0x00,0x6E,0x2E,0x01,0x00,0x4B,0x2E,0xBE,0x08,0x03,0x1D,0xA5,0x2D,0x38,0x08,0xA3,0x00,0xA4,0x01,0xA5,0x01,0xA6,0x01,0xA7,0x01,0xA8,0x01,0xA9,0x01,
0x50,0x05,0x38,0x08,0x03,0x19,0xA5,0x2D,0x33,0x08,0x80,0x3A,0xFF,0x00,0x8D,0x30,0x7F,0x02,0x03,0x1D,0x5C,0x2D,0x41,0x30,0x32,0x02,0x03,0x1C,0x97,0x2D,0x10,0x30,0xF0,0x00,
0x60,0x05,0xF1,0x01,0x20,0x00,0x32,0x08,0xBC,0x3E,0xF2,0x00,0xF2,0x30,0x33,0x3D,0xF3,0x00,0xD4,0x26,0x85,0x31,0x71,0x08,0xFC,0x00,0x70,0x08,0xFB,0x00,0x7B,0x08,0xF9,0x00,
0x70,0x05,0x05,0x30,0xF9,0x36,0x89,0x0B,0x71,0x2D,0x79,0x08,0xA4,0x00,0x01,0x30,0xA4,0x05,0x7B,0x0E,0x0F,0x39,0xA5,0x00,0x01,0x30,0xA5,0x05,0x7B,0x08,0xF9,0x00,0xF9,0x36,
0x80,0x05,0xF9,0x36,0xF9,0x36,0x79,0x08,0xA6,0x00,0x01,0x30,0xA6,0x05,0x7B,0x08,0xF9,0x00,0xF9,0x36,0xF9,0x36,0x79,0x08,0xA7,0x00,0x01,0x30,0xA7,0x05,0x7B,0x36,0xA8,0x00,
0x90,0x05,0x01,0x30,0xA8,0x05,0x7B,0x08,0xA9,0x00,0x01,0x30,0xA9,0x05,0xA5,0x2D,0x20,0x00,0x33,0x08,0x80,0x3A,0xFF,0x00,0x8B,0x30,0x7F,0x02,0x03,0x1D,0xA1,0x2D,0xB8,0x30,
0xA0,0x05,0x32,0x02,0x03,0x18,0xA5,0x2D,0x20,0x00,0xA3,0x01,0x20,0x00,0x3E,0x08,0x20,0x3E,0x86,0x00,0x87,0x01,0x01,0x1C,0xAF,0x2D,0x20,0x00,0x0E,0x14,0xB1,0x2D,0x20,0x00,
0xB0,0x05,0x0E,0x10,0x0A,0x30,0xBE,0x0A,0x3E,0x02,0x03,0x1C,0x08,0x00,0x5E,0x26,0x85,0x31,0x67,0x26,0x20,0x00,0xBE,0x01,0xB5,0x01,0xB6,0x01,0x08,0x00,0xBE,0x08,0x03,0x1D,
0xC0,0x05,0xD8,0x2D,0x00,0x30,0xA4,0x01,0xA5,0x01,0xF8,0x01,0xF8,0x0A,0x75,0x26,0x85,0x31,0xC0,0x00,0x02,0x3A,0x03,0x1D,0xD0,0x2D,0xA4,0x01,0xA4,0x0A,0xA5,0x01,0xD8,0x2D,
0xD0,0x05,0x40,0x0B,0xD5,0x2D,0xA4,0x01,0xA4,0x0A,0xD6,0x2D,0xA4,0x01,0xA5,0x01,0xA5,0x0A,0x3E,0x08,0x20,0x3E,0x86,0x00,0x87,0x01,0x01,0x1C,0xE1,0x2D,0x20,0x00,0x0E,0x14,
0xE0,0x05,0xE3,0x2D,0x20,0x00,0x0E,0x10,0x0A,0x30,0xBE,0x0A,0x3E,0x02,0x03,0x1C,0x08,0x00,0x5E,0x26,0x85,0x31,0x67,0x26,0x85,0x31,0x20,0x00,0xB5,0x01,0xBE,0x01,0x40,0x0B,
0xF0,0x05,0xBC,0x2D,0x8E,0x17,0x8D,0x13,0xC0,0x01,0xBC,0x2D,0xBE,0x08,0x03,0x1D,0x08,0x2E,0xA3,0x01,0xA4,0x01,0xA5,0x01,0xA6,0x01,0x3B,0x08,0x03,0x19,0x04,0x2E,0xA7,0x01,
0x00,0x06,0xA7,0x0A,0xA8,0x01,0xA8,0x0A,0x07,0x2E,0xA7,0x01,0xA7,0x0A,0xA8,0x01,0xA9,0x01,0x3E,0x08,0x20,0x3E,0x86,0x00,0x87,0x01,0x01,0x1C,0x11,0x2E,0x20,0x00,0x0E,0x14,
0x10,0x06,0x13,0x2E,0x20,0x00,0x0E,0x10,0x0A,0x30,0xBE,0x0A,0x3E,0x02,0x03,0x1C,0x08,0x00,0x5E,0x26,0x85,0x31,0x67,0x26,0x85,0x31,0x20,0x00,0xB5,0x01,0xBE,0x01,0xBC,0x2D,
0x20,0x06,0xBE,0x08,0x03,0x1D,0x2C,0x2E,0x38,0x08,0xA3,0x00,0xA4,0x01,0xA5,0x01,0xA5,0x0A,0xA6,0x01,0xA7,0x01,0xA8,0x01,0xA9,0x01,0x3E,0x08,0x20,0x3E,0x86,0x00,0x87,0x01,
0x30,0x06,0x01,0x1C,0x35,0x2E,0x20,0x00,0x0E,0x14,0x37,0x2E,0x20,0x00,0x0E,0x10,0x0A,0x30,0xBE,0x0A,0x3E,0x02,0x03,0x1C,0x08,0x00,0x5E,0x26,0x85,0x31,0x67,0x26,0x85,0x31,
0x40,0x06,0x20,0x00,0xB7,0x01,0xB7,0x0A,0x1C,0x2E,0x8E,0x13,0x8D,0x17,0xBA,0x01,0xBA,0x0A,0x08,0x00,0x01,0x00,0x08,0x00,0x20,0x00,0x34,0x08,0x01,0x3A,0x03,0x19,0x45,0x2D,
0x50,0x06,0x03,0x3A,0x03,0x19,0xBE,0x2D,0x01,0x3A,0x03,0x19,0xF5,0x2D,0x07,0x3A,0x03,0x19,0x20,0x2E,0x0D,0x3A,0x03,0x19,0x44,0x2E,0x49,0x2E,0x08,0x00,0xF0,0x01,0xF0,0x01,
0x60,0x06,0x00,0x00,0x41,0x30,0xF0,0x0A,0x70,0x02,0x03,0x18,0x08,0x00,0x60,0x2E,0x20,0x00,0x0E,0x10,0x22,0x00,0x0E,0x10,0x21,0x00,0x0E,0x14,0x08,0x00,0x21,0x00,0x0E,0x10,
0x70,0x06,0x22,0x00,0x0E,0x10,0x20,0x00,0x0E,0x10,0x08,0x00,0xCA,0x00,0xC5,0x01,0xC6,0x01,0xC9,0x01,0x99,0x26,0x85,0x31,0x71,0x08,0x20,0x00,0xC8,0x00,0x70,0x08,0xC7,0x00,
0x80,0x06,0x78,0x08,0x04,0x3A,0x03,0x19,0x8C,0x2E,0x78,0x08,0x99,0x26,0x85,0x31,0x71,0x08,0x20,0x00,0xC6,0x00,0x70,0x08,0xC5,0x00,0x45,0x08,0xC7,0x02,0x46,0x08,0xC8,0x3B,
0x90,0x06,0x48,0x08,0xF1,0x00,0x47,0x08,0xF0,0x00,0x4A,0x08,0x14,0x27,0x20,0x00,0xC9,0x00,0x08,0x00,0xF3,0x00,0x64,0x00,0x21,0x00,0x0E,0x15,0x23,0x00,0x0E,0x15,0x21,0x00,
0xA0,0x06,0x0E,0x17,0x23,0x00,0x0E,0x17,0xF0,0x30,0x21,0x00,0x9E,0x00,0xF3,0x08,0x03,0x1D,0xAB,0x2E,0x19,0x30,0xB6,0x2E,0x73,0x03,0x03,0x1D,0xB0,0x2E,0x21,0x30,0xB6,0x2E,
0xB0,0x06,0x22,0x00,0x97,0x17,0x97,0x10,0x17,0x14,0x7D,0x30,0x21,0x00,0x9D,0x00,0xC5,0x26,0x85,0x31,0x21,0x00,0x9D,0x14,0x9D,0x18,0xBB,0x2E,0x64,0x00,0x21,0x00,0x1C,0x08,
0xC0,0x06,0xF1,0x00,0xF0,0x01,0x1B,0x08,0xF0,0x04,0x08,0x00,0xCD,0x26,0x85,0x31,0xCD,0x26,0x85,0x31,0xCD,0x26,0x85,0x31,0xCD,0x26,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0xD0,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x00,0xF5,0x01,0xF1,0x1F,0xDE,0x2E,0xF0,0x09,0xF1,0x09,0xF0,0x0A,0x03,0x19,0xF1,0x0A,0xF5,0x01,0xF5,0x0A,0xF3,0x1F,0xE7,0x2E,
0xE0,0x06,0xF2,0x09,0xF3,0x09,0xF2,0x0A,0x03,0x19,0xF3,0x0A,0x01,0x30,0xF5,0x06,0xF6,0x01,0xF7,0x01,0x71,0x08,0x70,0x04,0x03,0x19,0x07,0x2F,0xF4,0x01,0xF4,0x0A,0xF1,0x1B,
0xF0,0x06,0xF4,0x2E,0xF0,0x35,0xF1,0x0D,0xEE,0x2E,0xF6,0x35,0xF7,0x0D,0x71,0x08,0x73,0x02,0x03,0x1D,0xFC,0x2E,0x70,0x08,0x72,0x02,0x03,0x1C,0x03,0x2F,0x70,0x08,0xF2,0x02,
0x00,0x07,0x71,0x08,0xF3,0x3B,0x76,0x14,0xF1,0x36,0xF0,0x0C,0xF4,0x0B,0xF4,0x2E,0x75,0x08,0x03,0x19,0x0F,0x2F,0xF6,0x09,0xF7,0x09,0xF6,0x0A,0x03,0x19,0xF7,0x0A,0x77,0x08,
0x10,0x07,0xF1,0x00,0x76,0x08,0xF0,0x00,0x08,0x00,0xF7,0x00,0xF7,0x08,0x03,0x1D,0x1E,0x2F,0x0A,0x30,0xF3,0x00,0x19,0x30,0xF4,0x01,0xF5,0x00,0xF6,0x01,0x71,0x08,0x80,0x3A,
0x20,0x07,0xF2,0x00,0x74,0x08,0x80,0x3A,0x72,0x02,0x03,0x1D,0x28,0x2F,0x73,0x08,0x70,0x02,0x03,0x1C,0x00,0x34,0x76,0x08,0x80,0x3A,0xF2,0x00,0x71,0x08,0x80,0x3A,0x72,0x02,
0x30,0x07,0x03,0x1D,0x34,0x2F,0x70,0x08,0x75,0x02,0x03,0x1C,0x02,0x34,0x01,0x34,0x09,0x07,0x09,0x07,0x09,0x07,0x7A,0x04,0x79,0x04,0x08,0x00,0x20,0x00,0xDC,0x01,0xDC,0x0A,
0x40,0x07,0x24,0x00,0x96,0x14,0x96,0x18,0x42,0x2F,0x20,0x00,0xDC,0x08,0x03,0x1D,0x44,0x2F,0x91,0x11,0xAB,0x30,0x24,0x00,0x91,0x00,0x14,0x18,0x4C,0x2F,0x14,0x19,0x4E,0x2F,
0x50,0x07,0x16,0x1B,0x50,0x2F,0x20,0x00,0x91,0x11,0x24,0x00,0x96,0x15,0x96,0x19,0x56,0x2F,0x20,0x00,0x91,0x19,0x58,0x2F,0x24,0x00,0x11,0x08,0x20,0x00,0xCF,0x00,0xD0,0x01,
0x60,0x07,0x24,0x00,0x14,0x18,0x60,0x2F,0x20,0x00,0xDC,0x01,0xDC,0x0A,0x24,0x00,0x96,0x12,0x16,0x16,0x20,0x00,0x91,0x11,0xDC,0x08,0x03,0x1D,0x6B,0x2F,0xDC,0x01,0xDC,0x0A,
0x70,0x07,0x24,0x00,0x96,0x15,0x96,0x19,0x72,0x2F,0x20,0x00,0x91,0x19,0x74,0x2F,0xDC,0x08,0x03,0x1D,0x77,0x2F,0x24,0x00,0x11,0x08,0x20,0x00,0xBD,0x00,0x24,0x00,0x14,0x18,
0x80,0x07,0x7E,0x2F,0x20,0x00,0x3D,0x08,0xCD,0x00,0xCE,0x01,0xCE,0x00,0xCD,0x01,0x4D,0x08,0xCF,0x04,0x4E,0x08,0xD0,0x04,0x24,0x00,0x96,0x16,0x16,0x12,0x20,0x00,0x91,0x11,
0x90,0x07,0xDC,0x01,0xDC,0x0A,0x24,0x00,0x16,0x15,0x16,0x19,0x94,0x2F,0x20,0x00,0x91,0x19,0x96,0x2F,0xDC,0x08,0x03,0x1D,0x99,0x2F,0x50,0x08,0xCC,0x00,0x4F,0x08,0xCB,0x00,
0xA0,0x07,0x08,0x00,0x64,0x00,0x80,0x01,0x01,0x31,0x89,0x0B,0xA2,0x2F,0x00,0x34,0xff,0x3f,0xff,0x3f,0xff,0x3f,0xff,0x3f,0xff,0x3f,0xff,0x3f,0xff,0x3f,0xff,0x3f,0xff,0x3f,
0xF0,0x0F,0xff,0x3f,0xff,0x3f,0xff,0x3f,0xff,0x3f,0xff,0x3f,0xff,0x3f,0xff,0x3f,0xff,0x3f,0xff,0x3f,0xff,0x3f,0xff,0x3f,0xff,0x3f,0xff,0x3f,0xff,0x3f,0x07,0x34,0x55,0x34,

};

#endif	//pic1503/pic1508 select end

#endif

