
#ifndef _OTPDUMPINFO_H
#define _OTPDUMPINFO_H


#define MAX_SIZE 1024

struct OtpDumpData{
	unsigned short Addr;
	unsigned char Data;
};

struct OtpDumpData OtpData[MAX_SIZE] = {
	{0x0000, 0x01},
	{0x0008, 0x00},
	{0x0010, 0x00},
	{0x0018, 0x01},
	{0x0020, 0x13},
	{0x0028, 0x28},
	{0x0030, 0x14},
	{0x0038, 0x36},
	{0x0040, 0x37},
	{0x0048, 0x59},
	{0x0050, 0x48},
	{0x0058, 0x50},
	{0x0060, 0x59},
	{0x0068, 0x01},
	{0x0070, 0x0d},
	{0x0078, 0x00},
	{0x0080, 0xc3},
	{0x0088, 0x98},
	{0x0090, 0x14},
	{0x0098, 0x82},
	{0x00a0, 0x93},
	{0x00a8, 0xd3},
	{0x00b0, 0x1c},
	{0x00b8, 0x82},
	{0x00c0, 0x51},
	{0x00c8, 0x12},
	{0x00d0, 0x2c},
	{0x00d8, 0x82},
	{0x00e0, 0x81},
	{0x00e8, 0x98},
	{0x00f0, 0x2c},
	{0x00f8, 0x82},
	{0x0100, 0xc7},
	{0x0108, 0x55},
	{0x0110, 0x2f},
	{0x0118, 0x82},
	{0x0120, 0xc3},
	{0x0128, 0x54},
	{0x0130, 0x40},
	{0x0138, 0x82},
	{0x0140, 0xf1},
	{0x0148, 0x50},
	{0x0150, 0x42},
	{0x0158, 0x82},
	{0x0160, 0x1d},
	{0x0168, 0xd4},
	{0x0170, 0x4b},
	{0x0178, 0x82},
	{0x0180, 0x1d},
	{0x0188, 0x14},
	{0x0190, 0x4c},
	{0x0198, 0x82},
	{0x01a0, 0x3b},
	{0x01a8, 0x50},
	{0x01b0, 0x4e},
	{0x01b8, 0x82},
	{0x01c0, 0xe3},
	{0x01c8, 0x91},
	{0x01d0, 0x4f},
	{0x01d8, 0x82},
	{0x01e0, 0xbf},
	{0x01e8, 0x95},
	{0x01f0, 0x68},
	{0x01f8, 0x82},
	{0x0200, 0xfd},
	{0x0208, 0x10},
	{0x0210, 0x74},
	{0x0218, 0x82},
	{0x0220, 0x00},
	{0x0228, 0x00},
	{0x0230, 0x00},
	{0x0238, 0x00},
	{0x0240, 0x00},
	{0x0248, 0x00},
	{0x0250, 0x00},
	{0x0258, 0x00},
	{0x0260, 0x00},
	{0x0268, 0x00},
	{0x0270, 0x00},
	{0x0278, 0x00},
	{0x0280, 0x00},
	{0x0288, 0x00},
	{0x0290, 0x00},
	{0x0298, 0x00},
	{0x02a0, 0x00},
	{0x02a8, 0x00},
	{0x02b0, 0x00},
	{0x02b8, 0x00},
	{0x02c0, 0x00},
	{0x02c8, 0x00},
	{0x02d0, 0x00},
	{0x02d8, 0x00},
	{0x02e0, 0x00},
	{0x02e8, 0x00},
	{0x02f0, 0x00},
	{0x02f8, 0x00},
	{0x0300, 0x00},
	{0x0308, 0x00},
	{0x0310, 0x00},
	{0x0318, 0x00},
	{0x0320, 0x00},
	{0x0328, 0x00},
	{0x0330, 0x00},
	{0x0338, 0x00},
	{0x0340, 0x00},
	{0x0348, 0x00},
	{0x0350, 0x00},
	{0x0358, 0x00},
	{0x0360, 0x00},
	{0x0368, 0x00},
	{0x0370, 0x00},
	{0x0378, 0x00},
	{0x0380, 0x00},
	{0x0388, 0x00},
	{0x0390, 0x00},
	{0x0398, 0x00},
	{0x03a0, 0x00},
	{0x03a8, 0x00},
	{0x03b0, 0x00},
	{0x03b8, 0x00},
	{0x03c0, 0x00},
	{0x03c8, 0x00},
	{0x03d0, 0x00},
	{0x03d8, 0x00},
	{0x03e0, 0x00},
	{0x03e8, 0x00},
	{0x03f0, 0x00},
	{0x03f8, 0x00},
	{0x0400, 0x00},
	{0x0408, 0x00},
	{0x0410, 0x00},
	{0x0418, 0x00},
	{0x0420, 0x00},
	{0x0428, 0x00},
	{0x0430, 0x00},
	{0x0438, 0x00},
	{0x0440, 0x00},
	{0x0448, 0x00},
	{0x0450, 0x00},
	{0x0458, 0x00},
	{0x0460, 0x00},
	{0x0468, 0x00},
	{0x0470, 0x00},
	{0x0478, 0x00},
	{0x0480, 0x00},
	{0x0488, 0x00},
	{0x0490, 0x00},
	{0x0498, 0x00},
	{0x04a0, 0x00},
	{0x04a8, 0x00},
	{0x04b0, 0x00},
	{0x04b8, 0x00},
	{0x04c0, 0x00},
	{0x04c8, 0x00},
	{0x04d0, 0x00},
	{0x04d8, 0x00},
	{0x04e0, 0x00},
	{0x04e8, 0x00},
	{0x04f0, 0x00},
	{0x04f8, 0x00},
	{0x0500, 0x00},
	{0x0508, 0x00},
	{0x0510, 0x00},
	{0x0518, 0x00},
	{0x0520, 0x00},
	{0x0528, 0x00},
	{0x0530, 0x00},
	{0x0538, 0x00},
	{0x0540, 0x00},
	{0x0548, 0x00},
	{0x0550, 0x00},
	{0x0558, 0x00},
	{0x0560, 0x00},
	{0x0568, 0x00},
	{0x0570, 0x00},
	{0x0578, 0x00},
	{0x0580, 0x00},
	{0x0588, 0x00},
	{0x0590, 0x00},
	{0x0598, 0x00},
	{0x05a0, 0x00},
	{0x05a8, 0x00},
	{0x05b0, 0x00},
	{0x05b8, 0x00},
	{0x05c0, 0x00},
	{0x05c8, 0x00},
	{0x05d0, 0x00},
	{0x05d8, 0x00},
	{0x05e0, 0x00},
	{0x05e8, 0x00},
	{0x05f0, 0x00},
	{0x05f8, 0x00},
	{0x0600, 0x00},
	{0x0608, 0x00},
	{0x0610, 0x00},
	{0x0618, 0x00},
	{0x0620, 0x00},
	{0x0628, 0x00},
	{0x0630, 0x00},
	{0x0638, 0x00},
	{0x0640, 0x00},
	{0x0648, 0x00},
	{0x0650, 0x00},
	{0x0658, 0x00},
	{0x0660, 0x00},
	{0x0668, 0x00},
	{0x0670, 0x00},
	{0x0678, 0x00},
	{0x0680, 0x00},
	{0x0688, 0x00},
	{0x0690, 0x00},
	{0x0698, 0x00},
	{0x06a0, 0x00},
	{0x06a8, 0x00},
	{0x06b0, 0x00},
	{0x06b8, 0x00},
	{0x06c0, 0x00},
	{0x06c8, 0x00},
	{0x06d0, 0x00},
	{0x06d8, 0x00},
	{0x06e0, 0x00},
	{0x06e8, 0x00},
	{0x06f0, 0x00},
	{0x06f8, 0x00},
	{0x0700, 0x00},
	{0x0708, 0x00},
	{0x0710, 0x00},
	{0x0718, 0x00},
	{0x0720, 0x00},
	{0x0728, 0x00},
	{0x0730, 0x00},
	{0x0738, 0x00},
	{0x0740, 0x00},
	{0x0748, 0x00},
	{0x0750, 0x00},
	{0x0758, 0x00},
	{0x0760, 0x00},
	{0x0768, 0x00},
	{0x0770, 0x00},
	{0x0778, 0x00},
	{0x0780, 0x00},
	{0x0788, 0x00},
	{0x0790, 0x00},
	{0x0798, 0x00},
	{0x07a0, 0x00},
	{0x07a8, 0x00},
	{0x07b0, 0x00},
	{0x07b8, 0x00},
	{0x07c0, 0x00},
	{0x07c8, 0x00},
	{0x07d0, 0x00},
	{0x07d8, 0x00},
	{0x07e0, 0x00},
	{0x07e8, 0x00},
	{0x07f0, 0x00},
	{0x07f8, 0x00},
	{0x0800, 0x00},
	{0x0808, 0x00},
	{0x0810, 0x00},
	{0x0818, 0x00},
	{0x0820, 0x00},
	{0x0828, 0x00},
	{0x0830, 0x00},
	{0x0838, 0x00},
	{0x0840, 0x00},
	{0x0848, 0x00},
	{0x0850, 0x00},
	{0x0858, 0x00},
	{0x0860, 0x00},
	{0x0868, 0x00},
	{0x0870, 0x00},
	{0x0878, 0x00},
	{0x0880, 0x01},
	{0x0888, 0x88},
	{0x0890, 0x33},
	{0x0898, 0x25},
	{0x08a0, 0x67},
	{0x08a8, 0x69},
	{0x08b0, 0x9a},
	{0x08b8, 0x16},
	{0x08c0, 0x46},
	{0x08c8, 0x53},
	{0x08d0, 0x13},
	{0x08d8, 0x00},
	{0x08e0, 0x00},
	{0x08e8, 0x00},
	{0x08f0, 0x00},
	{0x08f8, 0x00},
	{0x0900, 0x00},
	{0x0908, 0x00},
	{0x0910, 0x00},
	{0x0918, 0x00},
	{0x0920, 0x00},
	{0x0928, 0x00},
	{0x0930, 0x00},
	{0x0938, 0x00},
	{0x0940, 0x00},
	{0x0948, 0x00},
	{0x0950, 0x0d},
	{0x0958, 0x43},
	{0x0960, 0x00},
	{0x0968, 0x00},
	{0x0970, 0x00},
	{0x0978, 0x00},
	{0x0980, 0x00},
	{0x0988, 0x00},
	{0x0990, 0x00},
	{0x0998, 0x00},
	{0x09a0, 0x00},
	{0x09a8, 0x00},
	{0x09b0, 0x00},
	{0x09b8, 0x00},
	{0x09c0, 0x00},
	{0x09c8, 0x00},
	{0x09d0, 0x00},
	{0x09d8, 0x00},
	{0x09e0, 0x00},
	{0x09e8, 0x00},
	{0x09f0, 0x00},
	{0x09f8, 0x00},
	{0x0a00, 0x00},
	{0x0a08, 0x00},
	{0x0a10, 0x00},
	{0x0a18, 0x00},
	{0x0a20, 0x00},
	{0x0a28, 0x00},
	{0x0a30, 0x00},
	{0x0a38, 0x00},
	{0x0a40, 0x00},
	{0x0a48, 0x00},
	{0x0a50, 0x00},
	{0x0a58, 0x00},
	{0x0a60, 0x00},
	{0x0a68, 0x00},
	{0x0a70, 0x00},
	{0x0a78, 0x00},
	{0x0a80, 0x00},
	{0x0a88, 0x00},
	{0x0a90, 0x00},
	{0x0a98, 0x00},
	{0x0aa0, 0x00},
	{0x0aa8, 0x00},
	{0x0ab0, 0x00},
	{0x0ab8, 0x00},
	{0x0ac0, 0x00},
	{0x0ac8, 0x00},
	{0x0ad0, 0x00},
	{0x0ad8, 0x00},
	{0x0ae0, 0x00},
	{0x0ae8, 0x00},
	{0x0af0, 0x00},
	{0x0af8, 0x00},
	{0x0b00, 0x00},
	{0x0b08, 0x00},
	{0x0b10, 0x00},
	{0x0b18, 0x00},
	{0x0b20, 0x00},
	{0x0b28, 0x00},
	{0x0b30, 0x00},
	{0x0b38, 0x00},
	{0x0b40, 0x00},
	{0x0b48, 0x00},
	{0x0b50, 0x00},
	{0x0b58, 0x00},
	{0x0b60, 0x00},
	{0x0b68, 0x00},
	{0x0b70, 0x00},
	{0x0b78, 0x00},
	{0x0b80, 0x00},
	{0x0b88, 0x00},
	{0x0b90, 0x00},
	{0x0b98, 0x00},
	{0x0ba0, 0x00},
	{0x0ba8, 0x00},
	{0x0bb0, 0x00},
	{0x0bb8, 0x00},
	{0x0bc0, 0x00},
	{0x0bc8, 0x00},
	{0x0bd0, 0x00},
	{0x0bd8, 0x00},
	{0x0be0, 0x00},
	{0x0be8, 0x00},
	{0x0bf0, 0x00},
	{0x0bf8, 0x00},
	{0x0c00, 0x00},
	{0x0c08, 0x00},
	{0x0c10, 0x00},
	{0x0c18, 0x00},
	{0x0c20, 0x00},
	{0x0c28, 0x00},
	{0x0c30, 0x00},
	{0x0c38, 0x00},
	{0x0c40, 0x00},
	{0x0c48, 0x00},
	{0x0c50, 0x00},
	{0x0c58, 0x00},
	{0x0c60, 0x00},
	{0x0c68, 0x00},
	{0x0c70, 0x00},
	{0x0c78, 0x00},
	{0x0c80, 0x00},
	{0x0c88, 0x00},
	{0x0c90, 0x00},
	{0x0c98, 0x00},
	{0x0ca0, 0x00},
	{0x0ca8, 0x00},
	{0x0cb0, 0x00},
	{0x0cb8, 0x00},
	{0x0cc0, 0x00},
	{0x0cc8, 0x00},
	{0x0cd0, 0x00},
	{0x0cd8, 0x00},
	{0x0ce0, 0x00},
	{0x0ce8, 0x00},
	{0x0cf0, 0x00},
	{0x0cf8, 0x00},
	{0x0d00, 0x00},
	{0x0d08, 0x00},
	{0x0d10, 0x00},
	{0x0d18, 0x00},
	{0x0d20, 0x00},
	{0x0d28, 0x00},
	{0x0d30, 0x00},
	{0x0d38, 0x00},
	{0x0d40, 0x00},
	{0x0d48, 0x00},
	{0x0d50, 0x00},
	{0x0d58, 0x00},
	{0x0d60, 0x00},
	{0x0d68, 0x00},
	{0x0d70, 0x00},
	{0x0d78, 0x00},
	{0x0d80, 0x00},
	{0x0d88, 0x00},
	{0x0d90, 0x00},
	{0x0d98, 0x00},
	{0x0da0, 0x00},
	{0x0da8, 0x00},
	{0x0db0, 0x00},
	{0x0db8, 0x00},
	{0x0dc0, 0x00},
	{0x0dc8, 0x00},
	{0x0dd0, 0x00},
	{0x0dd8, 0x00},
	{0x0de0, 0x00},
	{0x0de8, 0x00},
	{0x0df0, 0x00},
	{0x0df8, 0x00},
	{0x0e00, 0x00},
	{0x0e08, 0x00},
	{0x0e10, 0x00},
	{0x0e18, 0x00},
	{0x0e20, 0x00},
	{0x0e28, 0x00},
	{0x0e30, 0x00},
	{0x0e38, 0x00},
	{0x0e40, 0x00},
	{0x0e48, 0x00},
	{0x0e50, 0x00},
	{0x0e58, 0x00},
	{0x0e60, 0x00},
	{0x0e68, 0x00},
	{0x0e70, 0x00},
	{0x0e78, 0x00},
	{0x0e80, 0x00},
	{0x0e88, 0x00},
	{0x0e90, 0x00},
	{0x0e98, 0x00},
	{0x0ea0, 0x00},
	{0x0ea8, 0x00},
	{0x0eb0, 0x00},
	{0x0eb8, 0x00},
	{0x0ec0, 0x00},
	{0x0ec8, 0x00},
	{0x0ed0, 0x00},
	{0x0ed8, 0x00},
	{0x0ee0, 0x00},
	{0x0ee8, 0x00},
	{0x0ef0, 0x00},
	{0x0ef8, 0x00},
	{0x0f00, 0x00},
	{0x0f08, 0x00},
	{0x0f10, 0x00},
	{0x0f18, 0x00},
	{0x0f20, 0x00},
	{0x0f28, 0x00},
	{0x0f30, 0x00},
	{0x0f38, 0x00},
	{0x0f40, 0x00},
	{0x0f48, 0x00},
	{0x0f50, 0x00},
	{0x0f58, 0x00},
	{0x0f60, 0x00},
	{0x0f68, 0x00},
	{0x0f70, 0x00},
	{0x0f78, 0x00},
	{0x0f80, 0x00},
	{0x0f88, 0x00},
	{0x0f90, 0x00},
	{0x0f98, 0x00},
	{0x0fa0, 0x00},
	{0x0fa8, 0x00},
	{0x0fb0, 0x00},
	{0x0fb8, 0x00},
	{0x0fc0, 0x00},
	{0x0fc8, 0x00},
	{0x0fd0, 0x00},
	{0x0fd8, 0x00},
	{0x0fe0, 0x00},
	{0x0fe8, 0x00},
	{0x0ff0, 0x00},
	{0x0ff8, 0x00},
	{0x1000, 0x00},
	{0x1008, 0x00},
	{0x1010, 0x00},
	{0x1018, 0x00},
	{0x1020, 0x00},
	{0x1028, 0x00},
	{0x1030, 0x00},
	{0x1038, 0x00},
	{0x1040, 0x00},
	{0x1048, 0x00},
	{0x1050, 0x00},
	{0x1058, 0x00},
	{0x1060, 0x00},
	{0x1068, 0x00},
	{0x1070, 0x00},
	{0x1078, 0x00},
	{0x1080, 0x00},
	{0x1088, 0x00},
	{0x1090, 0x00},
	{0x1098, 0x00},
	{0x10a0, 0x00},
	{0x10a8, 0x00},
	{0x10b0, 0x00},
	{0x10b8, 0x00},
	{0x10c0, 0x00},
	{0x10c8, 0x00},
	{0x10d0, 0x00},
	{0x10d8, 0x00},
	{0x10e0, 0x00},
	{0x10e8, 0x00},
	{0x10f0, 0x00},
	{0x10f8, 0x00},
	{0x1100, 0x00},
	{0x1108, 0x00},
	{0x1110, 0x00},
	{0x1118, 0x00},
	{0x1120, 0x00},
	{0x1128, 0x00},
	{0x1130, 0x00},
	{0x1138, 0x00},
	{0x1140, 0x00},
	{0x1148, 0x00},
	{0x1150, 0x00},
	{0x1158, 0x00},
	{0x1160, 0x00},
	{0x1168, 0x00},
	{0x1170, 0x00},
	{0x1178, 0x00},
	{0x1180, 0x00},
	{0x1188, 0x00},
	{0x1190, 0x00},
	{0x1198, 0x00},
	{0x11a0, 0x00},
	{0x11a8, 0x00},
	{0x11b0, 0x00},
	{0x11b8, 0x00},
	{0x11c0, 0x00},
	{0x11c8, 0x00},
	{0x11d0, 0x00},
	{0x11d8, 0x00},
	{0x11e0, 0x00},
	{0x11e8, 0x00},
	{0x11f0, 0x00},
	{0x11f8, 0x00},
	{0x1200, 0x00},
	{0x1208, 0x00},
	{0x1210, 0x00},
	{0x1218, 0x00},
	{0x1220, 0x00},
	{0x1228, 0x00},
	{0x1230, 0x00},
	{0x1238, 0x00},
	{0x1240, 0x00},
	{0x1248, 0x00},
	{0x1250, 0x00},
	{0x1258, 0x00},
	{0x1260, 0x00},
	{0x1268, 0x00},
	{0x1270, 0x00},
	{0x1278, 0x00},
	{0x1280, 0x00},
	{0x1288, 0x00},
	{0x1290, 0x00},
	{0x1298, 0x00},
	{0x12a0, 0x00},
	{0x12a8, 0x00},
	{0x12b0, 0x00},
	{0x12b8, 0x00},
	{0x12c0, 0x00},
	{0x12c8, 0x00},
	{0x12d0, 0x00},
	{0x12d8, 0x00},
	{0x12e0, 0x00},
	{0x12e8, 0x00},
	{0x12f0, 0x00},
	{0x12f8, 0x00},
	{0x1300, 0x00},
	{0x1308, 0x00},
	{0x1310, 0x00},
	{0x1318, 0x00},
	{0x1320, 0x00},
	{0x1328, 0x00},
	{0x1330, 0x00},
	{0x1338, 0x00},
	{0x1340, 0x00},
	{0x1348, 0x00},
	{0x1350, 0x00},
	{0x1358, 0x00},
	{0x1360, 0x00},
	{0x1368, 0x00},
	{0x1370, 0x00},
	{0x1378, 0x00},
	{0x1380, 0x00},
	{0x1388, 0x00},
	{0x1390, 0x00},
	{0x1398, 0x00},
	{0x13a0, 0x00},
	{0x13a8, 0x00},
	{0x13b0, 0x00},
	{0x13b8, 0x00},
	{0x13c0, 0x00},
	{0x13c8, 0x00},
	{0x13d0, 0x00},
	{0x13d8, 0x00},
	{0x13e0, 0x00},
	{0x13e8, 0x00},
	{0x13f0, 0x00},
	{0x13f8, 0x00},
	{0x1400, 0x00},
	{0x1408, 0x00},
	{0x1410, 0x00},
	{0x1418, 0x00},
	{0x1420, 0x00},
	{0x1428, 0x00},
	{0x1430, 0x00},
	{0x1438, 0x00},
	{0x1440, 0x00},
	{0x1448, 0x00},
	{0x1450, 0x00},
	{0x1458, 0x00},
	{0x1460, 0x00},
	{0x1468, 0x00},
	{0x1470, 0x00},
	{0x1478, 0x00},
	{0x1480, 0x00},
	{0x1488, 0x00},
	{0x1490, 0x00},
	{0x1498, 0x00},
	{0x14a0, 0x00},
	{0x14a8, 0x00},
	{0x14b0, 0x00},
	{0x14b8, 0x00},
	{0x14c0, 0x00},
	{0x14c8, 0x00},
	{0x14d0, 0x00},
	{0x14d8, 0x00},
	{0x14e0, 0x00},
	{0x14e8, 0x00},
	{0x14f0, 0x00},
	{0x14f8, 0x00},
	{0x1500, 0x00},
	{0x1508, 0x00},
	{0x1510, 0x00},
	{0x1518, 0x00},
	{0x1520, 0x00},
	{0x1528, 0x00},
	{0x1530, 0x00},
	{0x1538, 0x00},
	{0x1540, 0x00},
	{0x1548, 0x00},
	{0x1550, 0x00},
	{0x1558, 0x00},
	{0x1560, 0x00},
	{0x1568, 0x00},
	{0x1570, 0x00},
	{0x1578, 0x00},
	{0x1580, 0x00},
	{0x1588, 0x00},
	{0x1590, 0x00},
	{0x1598, 0x00},
	{0x15a0, 0x00},
	{0x15a8, 0x00},
	{0x15b0, 0x00},
	{0x15b8, 0x00},
	{0x15c0, 0x00},
	{0x15c8, 0x00},
	{0x15d0, 0x00},
	{0x15d8, 0x00},
	{0x15e0, 0x00},
	{0x15e8, 0x00},
	{0x15f0, 0x00},
	{0x15f8, 0x00},
	{0x1600, 0x00},
	{0x1608, 0x00},
	{0x1610, 0x00},
	{0x1618, 0x00},
	{0x1620, 0x00},
	{0x1628, 0x00},
	{0x1630, 0x00},
	{0x1638, 0x00},
	{0x1640, 0x00},
	{0x1648, 0x00},
	{0x1650, 0x00},
	{0x1658, 0x00},
	{0x1660, 0x00},
	{0x1668, 0x00},
	{0x1670, 0x00},
	{0x1678, 0x00},
	{0x1680, 0x00},
	{0x1688, 0x00},
	{0x1690, 0x00},
	{0x1698, 0x00},
	{0x16a0, 0x00},
	{0x16a8, 0x00},
	{0x16b0, 0x00},
	{0x16b8, 0x00},
	{0x16c0, 0x00},
	{0x16c8, 0x00},
	{0x16d0, 0x00},
	{0x16d8, 0x00},
	{0x16e0, 0x00},
	{0x16e8, 0x00},
	{0x16f0, 0x00},
	{0x16f8, 0x00},
	{0x1700, 0x00},
	{0x1708, 0x00},
	{0x1710, 0x00},
	{0x1718, 0x00},
	{0x1720, 0x00},
	{0x1728, 0x00},
	{0x1730, 0x00},
	{0x1738, 0x00},
	{0x1740, 0x00},
	{0x1748, 0x00},
	{0x1750, 0x00},
	{0x1758, 0x00},
	{0x1760, 0x00},
	{0x1768, 0x00},
	{0x1770, 0x00},
	{0x1778, 0x00},
	{0x1780, 0x00},
	{0x1788, 0x00},
	{0x1790, 0x00},
	{0x1798, 0x00},
	{0x17a0, 0x00},
	{0x17a8, 0x00},
	{0x17b0, 0x00},
	{0x17b8, 0x00},
	{0x17c0, 0x00},
	{0x17c8, 0x00},
	{0x17d0, 0x00},
	{0x17d8, 0x00},
	{0x17e0, 0x00},
	{0x17e8, 0x00},
	{0x17f0, 0x00},
	{0x17f8, 0x00},
	{0x1800, 0x00},
	{0x1808, 0x00},
	{0x1810, 0x00},
	{0x1818, 0x00},
	{0x1820, 0x00},
	{0x1828, 0x00},
	{0x1830, 0x00},
	{0x1838, 0x00},
	{0x1840, 0x00},
	{0x1848, 0x00},
	{0x1850, 0x00},
	{0x1858, 0x00},
	{0x1860, 0x00},
	{0x1868, 0x00},
	{0x1870, 0x00},
	{0x1878, 0x00},
	{0x1880, 0x00},
	{0x1888, 0x00},
	{0x1890, 0x00},
	{0x1898, 0x00},
	{0x18a0, 0x00},
	{0x18a8, 0x00},
	{0x18b0, 0x00},
	{0x18b8, 0x00},
	{0x18c0, 0x00},
	{0x18c8, 0x00},
	{0x18d0, 0x00},
	{0x18d8, 0x00},
	{0x18e0, 0x00},
	{0x18e8, 0x00},
	{0x18f0, 0x00},
	{0x18f8, 0x00},
	{0x1900, 0x00},
	{0x1908, 0x00},
	{0x1910, 0x00},
	{0x1918, 0x00},
	{0x1920, 0x00},
	{0x1928, 0x00},
	{0x1930, 0x00},
	{0x1938, 0x00},
	{0x1940, 0x00},
	{0x1948, 0x00},
	{0x1950, 0x00},
	{0x1958, 0x00},
	{0x1960, 0x00},
	{0x1968, 0x00},
	{0x1970, 0x00},
	{0x1978, 0x00},
	{0x1980, 0x00},
	{0x1988, 0x00},
	{0x1990, 0x00},
	{0x1998, 0x00},
	{0x19a0, 0x00},
	{0x19a8, 0x00},
	{0x19b0, 0x00},
	{0x19b8, 0x00},
	{0x19c0, 0x00},
	{0x19c8, 0x00},
	{0x19d0, 0x00},
	{0x19d8, 0x00},
	{0x19e0, 0x00},
	{0x19e8, 0x00},
	{0x19f0, 0x00},
	{0x19f8, 0x00},
	{0x1a00, 0x00},
	{0x1a08, 0x00},
	{0x1a10, 0x00},
	{0x1a18, 0x00},
	{0x1a20, 0x00},
	{0x1a28, 0x00},
	{0x1a30, 0x00},
	{0x1a38, 0x00},
	{0x1a40, 0x00},
	{0x1a48, 0x00},
	{0x1a50, 0x00},
	{0x1a58, 0x00},
	{0x1a60, 0x00},
	{0x1a68, 0x00},
	{0x1a70, 0x00},
	{0x1a78, 0x00},
	{0x1a80, 0x00},
	{0x1a88, 0x00},
	{0x1a90, 0x00},
	{0x1a98, 0x00},
	{0x1aa0, 0x00},
	{0x1aa8, 0x00},
	{0x1ab0, 0x00},
	{0x1ab8, 0x00},
	{0x1ac0, 0x00},
	{0x1ac8, 0x00},
	{0x1ad0, 0x00},
	{0x1ad8, 0x00},
	{0x1ae0, 0x00},
	{0x1ae8, 0x00},
	{0x1af0, 0x00},
	{0x1af8, 0x00},
	{0x1b00, 0x00},
	{0x1b08, 0x00},
	{0x1b10, 0x00},
	{0x1b18, 0x00},
	{0x1b20, 0x00},
	{0x1b28, 0x00},
	{0x1b30, 0x00},
	{0x1b38, 0x00},
	{0x1b40, 0x00},
	{0x1b48, 0x00},
	{0x1b50, 0x00},
	{0x1b58, 0x00},
	{0x1b60, 0x00},
	{0x1b68, 0x00},
	{0x1b70, 0x00},
	{0x1b78, 0x00},
	{0x1b80, 0x00},
	{0x1b88, 0x00},
	{0x1b90, 0x00},
	{0x1b98, 0x00},
	{0x1ba0, 0x00},
	{0x1ba8, 0x00},
	{0x1bb0, 0x00},
	{0x1bb8, 0x00},
	{0x1bc0, 0x00},
	{0x1bc8, 0x00},
	{0x1bd0, 0x00},
	{0x1bd8, 0x00},
	{0x1be0, 0x00},
	{0x1be8, 0x00},
	{0x1bf0, 0x00},
	{0x1bf8, 0x00},
	{0x1c00, 0x00},
	{0x1c08, 0x00},
	{0x1c10, 0x00},
	{0x1c18, 0x00},
	{0x1c20, 0x00},
	{0x1c28, 0x00},
	{0x1c30, 0x00},
	{0x1c38, 0x00},
	{0x1c40, 0x00},
	{0x1c48, 0x00},
	{0x1c50, 0x00},
	{0x1c58, 0x00},
	{0x1c60, 0x00},
	{0x1c68, 0x00},
	{0x1c70, 0x00},
	{0x1c78, 0x00},
	{0x1c80, 0x00},
	{0x1c88, 0x00},
	{0x1c90, 0x00},
	{0x1c98, 0x00},
	{0x1ca0, 0x00},
	{0x1ca8, 0x00},
	{0x1cb0, 0x00},
	{0x1cb8, 0x00},
	{0x1cc0, 0x00},
	{0x1cc8, 0x00},
	{0x1cd0, 0x00},
	{0x1cd8, 0x00},
	{0x1ce0, 0x00},
	{0x1ce8, 0x00},
	{0x1cf0, 0x00},
	{0x1cf8, 0x00},
	{0x1d00, 0x00},
	{0x1d08, 0x00},
	{0x1d10, 0x00},
	{0x1d18, 0x00},
	{0x1d20, 0x00},
	{0x1d28, 0x00},
	{0x1d30, 0x00},
	{0x1d38, 0x00},
	{0x1d40, 0x00},
	{0x1d48, 0x00},
	{0x1d50, 0x00},
	{0x1d58, 0x00},
	{0x1d60, 0x00},
	{0x1d68, 0x00},
	{0x1d70, 0x00},
	{0x1d78, 0x00},
	{0x1d80, 0x00},
	{0x1d88, 0x00},
	{0x1d90, 0x00},
	{0x1d98, 0x00},
	{0x1da0, 0x00},
	{0x1da8, 0x00},
	{0x1db0, 0x00},
	{0x1db8, 0x00},
	{0x1dc0, 0x00},
	{0x1dc8, 0x00},
	{0x1dd0, 0x00},
	{0x1dd8, 0x00},
	{0x1de0, 0x00},
	{0x1de8, 0x00},
	{0x1df0, 0x00},
	{0x1df8, 0x00},
	{0x1e00, 0x00},
	{0x1e08, 0x00},
	{0x1e10, 0x00},
	{0x1e18, 0x00},
	{0x1e20, 0x00},
	{0x1e28, 0x00},
	{0x1e30, 0x00},
	{0x1e38, 0x00},
	{0x1e40, 0x00},
	{0x1e48, 0x00},
	{0x1e50, 0x00},
	{0x1e58, 0x00},
	{0x1e60, 0x00},
	{0x1e68, 0x00},
	{0x1e70, 0x00},
	{0x1e78, 0x00},
	{0x1e80, 0x00},
	{0x1e88, 0x00},
	{0x1e90, 0x00},
	{0x1e98, 0x00},
	{0x1ea0, 0x00},
	{0x1ea8, 0x00},
	{0x1eb0, 0x00},
	{0x1eb8, 0x00},
	{0x1ec0, 0x00},
	{0x1ec8, 0x00},
	{0x1ed0, 0x00},
	{0x1ed8, 0x00},
	{0x1ee0, 0x00},
	{0x1ee8, 0x00},
	{0x1ef0, 0x00},
	{0x1ef8, 0x00},
	{0x1f00, 0x00},
	{0x1f08, 0x00},
	{0x1f10, 0x04},
	{0x1f18, 0x18},
	{0x1f20, 0x07},
	{0x1f28, 0x13},
	{0x1f30, 0x0b},
	{0x1f38, 0x0d},
	{0x1f40, 0x4b},
	{0x1f48, 0x00},
	{0x1f50, 0x00},
	{0x1f58, 0x00},
	{0x1f60, 0x00},
	{0x1f68, 0x00},
	{0x1f70, 0x00},
	{0x1f78, 0x44},
	{0x1f80, 0xcb},
	{0x1f88, 0x55},
	{0x1f90, 0x25},
	{0x1f98, 0x47},
	{0x1fa0, 0x00},
	{0x1fa8, 0x00},
	{0x1fb0, 0x00},
	{0x1fb8, 0x00},
	{0x1fc0, 0x91},
	{0x1fc8, 0x55},
	{0x1fd0, 0x1c},
	{0x1fd8, 0x04},
	{0x1fe0, 0x00},
	{0x1fe8, 0x00},
	{0x1ff0, 0x00},
	{0x1ff8, 0x00}
};

#endif