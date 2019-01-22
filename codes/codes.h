//Codes captured from Generation 3 TV-B-Gone by Kevin Timmerman
// table of POWER codes

#define freq_to_timerval(x) ((F_CPU / x - 1)/ 2)
#define PULSE_CODE 0

//Times that are required no matter what.
const uint16_t code_na135Times[] PROGMEM = {
	55, 57,
	55, 169,
	895, 447,
	55, 2299,
	55, 0,
};

//Times that are required for EU_CODES exclusive definition.
const uint16_t code_na000Times[] PROGMEM = {
	120, 58,
	239, 58,
	60, 59,
	60, 2686,
	60, 0,
};

const uint16_t code_na004Times[] PROGMEM = {
	57, 55,
	57, 168,
	902, 224,
	900, 451,
	57, 3947,
	57, 9622,
	57, 0,
};

const uint16_t code_na005Times[] PROGMEM = {
	90, 89,
	179, 90,
	90, 179,
	90, 8976,
	90, 0,
};

const uint16_t code_na009Times[] PROGMEM = {
	55, 54,
	55, 169,
	902, 224,
	900, 449,
	55, 3949,
	55, 9599,
	55, 0,
};

const uint16_t code_na021Times[] PROGMEM = {
	49, 51,
	49, 158,
	801, 398,
	49, 399,
	49, 2334,
	49, 0,
};

const uint16_t code_na022Times[] PROGMEM = {
	55, 58,
	55, 173,
	897, 223,
	894, 448,
	55, 4462,
	55, 9453,
	55, 0,
};



#ifdef NA_CODES
// 0


const struct IrCode code_na000Code PROGMEM = {
	freq_to_timerval(38461),
	code_na000Times,
	{
		0x48,
		0x41,
		0x04,
		0x82,
		0x49,
		0x90,
		0x82,
		0x09,
		0x04,
		0x94,
	}
};

// 1
const uint16_t code_na001Times[] PROGMEM = {
	51, 99,
	51, 199,
	401, 399,
	51, 799,
	51, 0,
};

const struct IrCode code_na001Code PROGMEM = {
	freq_to_timerval(57141),
	code_na001Times,
	{
		0x51,
		0x24,
		0x80,
		0x41,
		0x04,
		0x00,
		0x01,
		0x20,
		0x82,
		0x0B,
		0x44,
		0x92,
		0x01,
		0x04,
		0x10,
		0x00,
		0x04,
		0x82,
		0x08,
		0x30,
	}
};

// 2
const uint16_t code_na002Times[] PROGMEM = {
	43, 44,
	43, 131,
	348, 175,
	43, 7519,
	43, 0,
};

const struct IrCode code_na002Code PROGMEM = {
	freq_to_timerval(37035),
	code_na002Times,
	{
		0x50,
		0x20,
		0x00,
		0x00,
		0x00,
		0x02,
		0x00,
		0x00,
		0x00,
		0x08,
		0x00,
		0x00,
		0x01,
		0x04,
		0x92,
		0x01,
		0x04,
		0x92,
		0x0B,
		0x40,
		0x80,
		0x00,
		0x00,
		0x00,
		0x08,
		0x00,
		0x00,
		0x00,
		0x20,
		0x00,
		0x00,
		0x04,
		0x12,
		0x48,
		0x04,
		0x12,
		0x48,
		0x30,
	}
};

// 3
const uint16_t code_na003Times[] PROGMEM = {
	29, 78,
	29, 183,
	29, 4548,
	29, 0,
};

const struct IrCode code_na003Code PROGMEM = {
	freq_to_timerval(38456),
	code_na003Times,
	{
		0x90,
		0x01,
		0x44,
		0x04,
		0x90,
		0x04,
		0x11,
		0x51,
		0x90,
		0x01,
		0x44,
		0x04,
		0x90,
		0x04,
		0x11,
		0x51,
		0xC0,
	}
};

// 4

const struct IrCode code_na004Code PROGMEM = {
	freq_to_timerval(38462),
	code_na004Times,
	{
		0x58,
		0x00,
		0x00,
		0x41,
		0x24,
		0x92,
		0x08,
		0x20,
		0x10,
		0x01,
		0x04,
		0x82,
		0x4C,
		0x55,
		0x60,
	}
};

// 5

const struct IrCode code_na005Code PROGMEM = {
	freq_to_timerval(35714),
	code_na005Times,
	{
		0x41,
		0x00,
		0x00,
		0x10,
		0x2C,
		0x10,
		0x00,
		0x01,
		0x03,
		0x00,
	}
};

// 6
const uint16_t code_na006Times[] PROGMEM = {
	52, 60,
	52, 170,
	451, 463,
	52, 4540,
	52, 0,
};

const struct IrCode code_na006Code PROGMEM = {
	freq_to_timerval(38461),
	code_na006Times,
	{
		0x51,
		0x24,
		0x00,
		0x01,
		0x24,
		0x00,
		0x00,
		0x20,
		0x00,
		0x01,
		0x04,
		0x92,
		0x4B,
		0x44,
		0x90,
		0x00,
		0x04,
		0x90,
		0x00,
		0x00,
		0x80,
		0x00,
		0x04,
		0x12,
		0x49,
		0x30,
	}
};

// 7
const uint16_t code_na007Times[] PROGMEM = {
	51, 47,
	51, 408,
	51, 508,
	51, 12107,
	51, 0,
};

const struct IrCode code_na007Code PROGMEM = {
	freq_to_timerval(39215),
	code_na007Times,
	{
		0x41,
		0x40,
		0x82,
		0x81,
		0x40,
		0xA4,
		0x18,
		0x28,
		0x10,
		0x50,
		0x28,
		0x14,
		0x84,
	}
};

// 8
const uint16_t code_na008Times[] PROGMEM = {
	57, 56,
	57, 169,
	901, 448,
	57, 4010,
	57, 0,
};

const struct IrCode code_na008Code PROGMEM = {
	freq_to_timerval(38461),
	code_na008Times,
	{
		0x51,
		0x00,
		0x12,
		0x40,
		0x24,
		0x80,
		0x08,
		0x20,
		0x80,
		0x41,
		0x04,
		0x12,
		0x0B,
		0x44,
		0x00,
		0x49,
		0x00,
		0x92,
		0x00,
		0x20,
		0x82,
		0x01,
		0x04,
		0x10,
		0x48,
		0x30,
	}
};

// 9

const struct IrCode code_na009Code PROGMEM = {
	freq_to_timerval(38462),
	code_na009Times,
	{
		0x59,
		0x24,
		0x00,
		0x08,
		0x20,
		0x02,
		0x00,
		0x00,
		0x02,
		0x49,
		0x24,
		0x90,
		0x04,
		0x55,
		0x60,
	}
};

// 10
const uint16_t code_na010Times[] PROGMEM = {
	52, 54,
	52, 157,
	842, 418,
	52, 2286,
	52, 0,
};

const struct IrCode code_na010Code PROGMEM = {
	freq_to_timerval(38460),
	code_na010Times,
	{
		0x51,
		0x20,
		0x00,
		0x01,
		0x24,
		0x10,
		0x03,
		0x24,
		0x00,
		0x00,
		0x24,
		0x82,
		0x00,
		0x64,
		0x80,
		0x00,
		0x04,
		0x90,
		0x40,
		0x10,
	}
};

// 11
const uint16_t code_na011Times[] PROGMEM = {
	57, 53,
	57, 170,
	887, 223,
	887, 439,
	57, 4037,
	57, 9347,
	57, 0,
};

const struct IrCode code_na011Code PROGMEM = {
	freq_to_timerval(38462),
	code_na011Times,
	{
		0x58,
		0x00,
		0x10,
		0x41,
		0x24,
		0x82,
		0x09,
		0x24,
		0x10,
		0x00,
		0x00,
		0x82,
		0x4C,
		0x55,
		0x60,
	}
};

// 12
const uint16_t code_na012Times[] PROGMEM = {
	83, 85,
	83, 253,
	333, 334,
	83, 3278,
	83, 0,
};

const struct IrCode code_na012Code PROGMEM = {
	freq_to_timerval(38461),
	code_na012Times,
	{
		0x51,
		0x04,
		0x82,
		0x09,
		0x00,
		0x02,
		0x08,
		0x04,
		0x02,
		0x4B,
		0x44,
		0x12,
		0x08,
		0x24,
		0x00,
		0x08,
		0x20,
		0x10,
		0x09,
		0x30,
	}
};

// 13
const uint16_t code_na013Times[] PROGMEM = {
	55, 53,
	55, 165,
	896, 445,
	55, 2303,
	55, 9370,
	55, 0,
};

const struct IrCode code_na013Code PROGMEM = {
	freq_to_timerval(38461),
	code_na013Times,
	{
		0x50,
		0x04,
		0x90,
		0x01,
		0x00,
		0x02,
		0x40,
		0x04,
		0x90,
		0x49,
		0x20,
		0x80,
		0x40,
		0x04,
		0x12,
		0x09,
		0x2D,
		0x45,
		0x40,
	}
};
//code_na014Times is a Duplicate of code code_na004Times
const struct IrCode code_na014Code PROGMEM = {
	freq_to_timerval(38462),
	code_na004Times,
	{
		0x58,
		0x00,
		0x02,
		0x41,
		0x24,
		0x90,
		0x09,
		0x20,
		0x00,
		0x00,
		0x04,
		0x92,
		0x4C,
		0x55,
		0x60,
	}
};
//code_na015Times is a Duplicate of code code_na004Times
const struct IrCode code_na015Code PROGMEM = {
	freq_to_timerval(38462),
	code_na004Times,
	{
		0x58,
		0x20,
		0x00,
		0x41,
		0x04,
		0x92,
		0x09,
		0x00,
		0x00,
		0x00,
		0x24,
		0x92,
		0x4C,
		0x55,
		0x60,
	}
};

// 16
const uint16_t code_na016Times[] PROGMEM = {
	29, 89,
	29, 209,
	29, 2506,
	29, 0,
};

const struct IrCode code_na016Code PROGMEM = {
	freq_to_timerval(34477),
	code_na016Times,
	{
		0x95,
		0x01,
		0x04,
		0x00,
		0x25,
		0x40,
		0x41,
		0x00,
		0x0C,
	}
};

// 17
const uint16_t code_na017Times[] PROGMEM = {
	57, 55,
	57, 173,
	900, 225,
	900, 447,
	57, 4149,
	57, 9499,
	57, 0,
};

const struct IrCode code_na017Code PROGMEM = {
	freq_to_timerval(40000),
	code_na017Times,
	{
		0x58,
		0x00,
		0x92,
		0x01,
		0x24,
		0x00,
		0x48,
		0x20,
		0x10,
		0x01,
		0x04,
		0x82,
		0x4C,
		0x55,
		0x60,
	}
};

// 18
const uint16_t code_na018Times[] PROGMEM = {
	52, 54,
	52, 159,
	850, 428,
	52, 2565,
	52, 0,
};

const struct IrCode code_na018Code PROGMEM = {
	freq_to_timerval(38460),
	code_na018Times,
	{
		0x50,
		0x20,
		0x82,
		0x09,
		0x04,
		0x10,
		0x40,
		0x04,
		0x90,
		0x01,
		0x20,
		0x02,
		0x4B,
		0x40,
		0x82,
		0x08,
		0x24,
		0x10,
		0x41,
		0x00,
		0x12,
		0x40,
		0x04,
		0x80,
		0x09,
		0x2D,
		0x02,
		0x08,
		0x20,
		0x90,
		0x41,
		0x04,
		0x00,
		0x49,
		0x00,
		0x12,
		0x00,
		0x24,
		0xB4,
		0x08,
		0x20,
		0x82,
		0x41,
		0x04,
		0x10,
		0x01,
		0x24,
		0x00,
		0x48,
		0x00,
		0x93,
		0x00,
	}
};

// 19
const uint16_t code_na019Times[] PROGMEM = {
	42, 41,
	42, 123,
	328, 161,
	42, 4601,
	42, 0,
};

const struct IrCode code_na019Code PROGMEM = {
	freq_to_timerval(38458),
	code_na019Times,
	{
		0x50,
		0x04,
		0x10,
		0x01,
		0x20,
		0x02,
		0x40,
		0x00,
		0x00,
		0x00,
		0x04,
		0x00,
		0x08,
		0x04,
		0x00,
		0x08,
		0x20,
		0x00,
		0x03,
		0x40,
		0x10,
		0x40,
		0x04,
		0x80,
		0x09,
		0x00,
		0x00,
		0x00,
		0x00,
		0x10,
		0x00,
		0x20,
		0x10,
		0x00,
		0x20,
		0x80,
		0x00,
		0x10,
	}
};

// 20
const uint16_t code_na020Times[] PROGMEM = {
	62, 53,
	62, 161,
	902, 228,
	900, 459,
	62, 4097,
	62, 9697,
	62, 0,
};

const struct IrCode code_na020Code PROGMEM = {
	freq_to_timerval(38462),
	code_na020Times,
	{
		0x58,
		0x04,
		0x00,
		0x01,
		0x20,
		0x92,
		0x48,
		0x00,
		0x80,
		0x01,
		0x24,
		0x12,
		0x4C,
		0x55,
		0x60,
	}
};

// 21

const struct IrCode code_na021Code PROGMEM = {
	freq_to_timerval(38461),
	code_na021Times,
	{
		0x50,
		0x04,
		0x10,
		0x03,
		0x20,
		0x82,
		0x00,
		0x88,
		0x02,
		0x08,
		0x01,
		0x90,
		0x41,
		0x00,
		0x50,
	}
};

// 22

const struct IrCode code_na022Code PROGMEM = {
	freq_to_timerval(38462),
	code_na022Times,
	{
		0x58,
		0x00,
		0x90,
		0x00,
		0x00,
		0x90,
		0x00,
		0x00,
		0x00,
		0x49,
		0x24,
		0x92,
		0x04,
		0x55,
		0x60,
	}
};

// 23
const uint16_t code_na023Times[] PROGMEM = {
	50, 51,
	50, 407,
	50, 502,
	50, 10462,
	50, 0,
};

const struct IrCode code_na023Code PROGMEM = {
	freq_to_timerval(39997),
	code_na023Times,
	{
		0x52,
		0x04,
		0x14,
		0x0A,
		0x05,
		0x20,
		0x41,
		0x40,
		0xB4,
		0x81,
		0x05,
		0x02,
		0x81,
		0x48,
		0x10,
		0x50,
		0x30,
	}
};

// 24
const uint16_t code_na024Times[] PROGMEM = {
	120, 58,
	239, 58,
	60, 59,
	60, 2568,
	60, 0,
};

const struct IrCode code_na024Code PROGMEM = {
	freq_to_timerval(38461),
	code_na024Times,
	{
		0x48,
		0x00,
		0x20,
		0x82,
		0x49,
		0x90,
		0x00,
		0x41,
		0x04,
		0x94,
	}
};

// 25
const uint16_t code_na025Times[] PROGMEM = {
	86, 88,
	86, 263,
	348, 348,
	86, 3470,
	86, 0,
};

const struct IrCode code_na025Code PROGMEM = {
	freq_to_timerval(38461),
	code_na025Times,
	{
		0x51,
		0x24,
		0x92,
		0x40,
		0x00,
		0x00,
		0x00,
		0x00,
		0x92,
		0x4B,
		0x44,
		0x92,
		0x49,
		0x00,
		0x00,
		0x00,
		0x00,
		0x02,
		0x49,
		0x30,
	}
};

// 26
const uint16_t code_na026Times[] PROGMEM = {
	51, 47,
	51, 408,
	51, 508,
	51, 12582,
	51, 0,
};

const struct IrCode code_na026Code PROGMEM = {
	freq_to_timerval(39213),
	code_na026Times,
	{
		0x41,
		0x40,
		0x82,
		0x90,
		0x28,
		0x14,
		0x18,
		0x28,
		0x10,
		0x52,
		0x05,
		0x02,
		0x84,
	}
};
//code_na027Times is a Duplicate of code code_na001Times
const struct IrCode code_na027Code PROGMEM = {
	freq_to_timerval(57140),
	code_na001Times,
	{
		0x50,
		0x24,
		0x80,
		0x41,
		0x04,
		0x10,
		0x01,
		0x20,
		0x82,
		0x0B,
		0x40,
		0x92,
		0x01,
		0x04,
		0x10,
		0x40,
		0x04,
		0x82,
		0x08,
		0x30,
	}
};

// 28
const uint16_t code_na028Times[] PROGMEM = {
	120, 119,
	120, 269,
	260, 269,
	120, 4749,
	120, 0,
};

const struct IrCode code_na028Code PROGMEM = {
	freq_to_timerval(38461),
	code_na028Times,
	{
		0x50,
		0x20,
		0x82,
		0x41,
		0x20,
		0x02,
		0x0B,
		0x40,
		0x82,
		0x09,
		0x04,
		0x80,
		0x08,
		0x30,
	}
};

// 29
const uint16_t code_na029Times[] PROGMEM = {
	90, 89,
	179, 90,
	90, 179,
	179, 8976,
	179, 0,
};

const struct IrCode code_na029Code PROGMEM = {
	freq_to_timerval(35715),
	code_na029Times,
	{
		0x41,
		0x00,
		0x04,
		0x50,
		0x60,
		0x80,
		0x02,
		0x28,
		0x40,
	}
};
//code_na030Times is a Duplicate of code code_na009Times
const struct IrCode code_na030Code PROGMEM = {
	freq_to_timerval(38461),
	code_na009Times,
	{
		0x58,
		0x00,
		0x10,
		0x41,
		0x04,
		0x82,
		0x08,
		0x00,
		0x00,
		0x01,
		0x24,
		0x92,
		0x4C,
		0x55,
		0x60,
	}
};
//code_na031Times is a Duplicate of code code_na005Times
const struct IrCode code_na031Code PROGMEM = {
	freq_to_timerval(35714),
	code_na005Times,
	{
		0x40,
		0x20,
		0x00,
		0x10,
		0x2C,
		0x02,
		0x00,
		0x01,
		0x03,
		0x00,
	}
};
//code_na032Times is a Duplicate of code code_na009Times
const struct IrCode code_na032Code PROGMEM = {
	freq_to_timerval(38461),
	code_na009Times,
	{
		0x58,
		0x00,
		0x10,
		0x41,
		0x04,
		0x82,
		0x08,
		0x20,
		0x00,
		0x01,
		0x04,
		0x92,
		0x4C,
		0x55,
		0x60,
	}
};

// 33
const uint16_t code_na033Times[] PROGMEM = {
	42, 41,
	42, 120,
	336, 154,
	42, 5296,
	42, 0,
};

const struct IrCode code_na033Code PROGMEM = {
	freq_to_timerval(38459),
	code_na033Times,
	{
		0x50,
		0x04,
		0x10,
		0x01,
		0x20,
		0x02,
		0x40,
		0x00,
		0x00,
		0x00,
		0x04,
		0x00,
		0x08,
		0x20,
		0x80,
		0x08,
		0x00,
		0x00,
		0x03,
		0x40,
		0x10,
		0x40,
		0x04,
		0x80,
		0x09,
		0x00,
		0x00,
		0x00,
		0x00,
		0x10,
		0x00,
		0x20,
		0x82,
		0x00,
		0x20,
		0x00,
		0x00,
		0x10,
	}
};
//code_na034Times is a Duplicate of code code_na004Times
const struct IrCode code_na034Code PROGMEM = {
	freq_to_timerval(38462),
	code_na004Times,
	{
		0x58,
		0x00,
		0x10,
		0x41,
		0x24,
		0x82,
		0x09,
		0x24,
		0x92,
		0x00,
		0x00,
		0x00,
		0x4C,
		0x55,
		0x60,
	}
};

// 35
const uint16_t code_na035Times[] PROGMEM = {
	98, 91,
	98, 286,
	98, 3430,
	98, 0,
};

const struct IrCode code_na035Code PROGMEM = {
	freq_to_timerval(41665),
	code_na035Times,
	{
		0x80,
		0x44,
		0x42,
		0x01,
		0x11,
		0x0C,
	}
};

// 36
const uint16_t code_na036Times[] PROGMEM = {
	86, 248,
	85, 578,
	86, 0,
};

const struct IrCode code_na036Code PROGMEM = {
	freq_to_timerval(37037),
	code_na036Times,
	{
		0x90,
		0x11,
		0x52,
	}
};

// 37
const uint16_t code_na037Times[] PROGMEM = {
	166, 161,
	516, 162,
	41, 261,
	41, 0,
};

const struct IrCode code_na037Code PROGMEM = {
	freq_to_timerval(41667),
	code_na037Times,
	{
		0x9A,
		0x88,
		0x2B,
	}
};
//code_na038Times is a Duplicate of code code_na017Times
const struct IrCode code_na038Code PROGMEM = {
	freq_to_timerval(40000),
	code_na017Times,
	{
		0x59,
		0x04,
		0x10,
		0x00,
		0x20,
		0x82,
		0x48,
		0x20,
		0x10,
		0x01,
		0x04,
		0x82,
		0x4C,
		0x55,
		0x60,
	}
};

// 39
const uint16_t code_na039Times[] PROGMEM = {
	115, 99,
	690, 2706,
	690, 0,
};

const struct IrCode code_na039Code PROGMEM = {
	freq_to_timerval(40001),
	code_na039Times,
	{
		0x84,
		0x80,
	}
};

// 40
const uint16_t code_na040Times[] PROGMEM = {
	115, 99,
	115, 200,
	115, 2706,
	115, 0,
};

const struct IrCode code_na040Code PROGMEM = {
	freq_to_timerval(40000),
	code_na040Times,
	{
		0x81,
		0x81,
		0xC0,
	}
};

// 41
const uint16_t code_na041Times[] PROGMEM = {
	58, 61,
	118, 61,
	243, 61,
	58, 2746,
	58, 0,
};

const struct IrCode code_na041Code PROGMEM = {
	freq_to_timerval(76923),
	code_na041Times,
	{
		0x51,
		0x04,
		0x10,
		0x08,
		0x01,
		0xA2,
		0x08,
		0x20,
		0x10,
		0x04,
	}
};

// 42
const uint16_t code_na042Times[] PROGMEM = {
	55, 64,
	55, 169,
	900, 225,
	900, 419,
	55, 4099,
	55, 8668,
	55, 0,
};

const struct IrCode code_na042Code PROGMEM = {
	freq_to_timerval(39999),
	code_na042Times,
	{
		0x59,
		0x20,
		0x00,
		0x08,
		0x20,
		0x92,
		0x40,
		0x00,
		0x80,
		0x01,
		0x24,
		0x12,
		0x4C,
		0x55,
		0x60,
	}
};

// 43
const uint16_t code_na043Times[] PROGMEM = {
	132, 44,
	45, 119,
	45, 3490,
	45, 0,
};

const struct IrCode code_na043Code PROGMEM = {
	freq_to_timerval(39997),
	code_na043Times,
	{
		0x95,
		0x51,
		0x55,
		0x95,
		0x51,
		0x55,
		0xC0,
	}
};

// 44
const uint16_t code_na044Times[] PROGMEM = {
	52, 49,
	52, 158,
	885, 217,
	432, 435,
	52, 4095,
	52, 9514,
	52, 0,
};

const struct IrCode code_na044Code PROGMEM = {
	freq_to_timerval(40000),
	code_na044Times,
	{
		0x59,
		0x24,
		0x00,
		0x00,
		0x00,
		0x92,
		0x48,
		0x20,
		0x00,
		0x01,
		0x04,
		0x92,
		0x4C,
		0x55,
		0x60,
	}
};

// 45
const uint16_t code_na045Times[] PROGMEM = {
	60, 51,
	60, 165,
	458, 446,
	60, 4493,
	60, 9679,
	60, 0,
};

const struct IrCode code_na045Code PROGMEM = {
	freq_to_timerval(38461),
	code_na045Times,
	{
		0x50,
		0x24,
		0x00,
		0x00,
		0x24,
		0x00,
		0x01,
		0x24,
		0x80,
		0x00,
		0x00,
		0x12,
		0x4B,
		0x46,
		0x23,
		0x40,
	}
};

// 46
const uint16_t code_na046Times[] PROGMEM = {
	54, 51,
	105, 52,
	54, 103,
	54, 274,
	54, 2525,
	54, 12809,
	54, 0,
};

const struct IrCode code_na046Code PROGMEM = {
	freq_to_timerval(29410),
	code_na046Times,
	{
		0x5A,
		0x20,
		0x08,
		0xD0,
		0x00,
		0x0A,
		0xD0,
		0x00,
		0x0C,
	}
};
//code_na047Times is a Duplicate of code code_na017Times
const struct IrCode code_na047Code PROGMEM = {
	freq_to_timerval(40000),
	code_na017Times,
	{
		0x58,
		0x00,
		0x10,
		0x01,
		0x24,
		0x82,
		0x49,
		0x24,
		0x82,
		0x48,
		0x00,
		0x10,
		0x04,
		0x55,
		0x60,
	}
};
//code_na048Times is a Duplicate of code code_na044Times
const struct IrCode code_na048Code PROGMEM = {
	freq_to_timerval(39999),
	code_na044Times,
	{
		0x58,
		0x00,
		0x00,
		0x01,
		0x24,
		0x92,
		0x49,
		0x24,
		0x80,
		0x00,
		0x00,
		0x12,
		0x4C,
		0x55,
		0x60,
	}
};

// 49
const uint16_t code_na049Times[] PROGMEM = {
	275, 853,
	275, 1985,
	275, 0,
};

const struct IrCode code_na049Code PROGMEM = {
	freq_to_timerval(45455),
	code_na049Times,
	{
		0x85,
		0x04,
		0x52,
	}
};

// 50
const uint16_t code_na050Times[] PROGMEM = {
	81, 87,
	81, 253,
	360, 330,
	81, 3749,
	81, 0,
};

const struct IrCode code_na050Code PROGMEM = {
	freq_to_timerval(55556),
	code_na050Times,
	{
		0x50,
		0x00,
		0x00,
		0x00,
		0x04,
		0x92,
		0x49,
		0x24,
		0x90,
		0xD0,
		0x00,
		0x00,
		0x00,
		0x04,
		0x92,
		0x49,
		0x24,
		0x91,
		0x00,
	}
};
//code_na051Times is a Duplicate of code code_na017Times
const struct IrCode code_na051Code PROGMEM = {
	freq_to_timerval(40000),
	code_na017Times,
	{
		0x58,
		0x04,
		0x00,
		0x49,
		0x20,
		0x92,
		0x00,
		0x00,
		0x90,
		0x01,
		0x24,
		0x02,
		0x4C,
		0x55,
		0x60,
	}
};
//code_na052Times is a Duplicate of code code_na017Times
const struct IrCode code_na052Code PROGMEM = {
	freq_to_timerval(40000),
	code_na017Times,
	{
		0x59,
		0x24,
		0x12,
		0x00,
		0x00,
		0x80,
		0x48,
		0x20,
		0x10,
		0x01,
		0x04,
		0x82,
		0x4C,
		0x55,
		0x60,
	}
};

// 53
const uint16_t code_na053Times[] PROGMEM = {
	52, 230,
	52, 511,
	52, 791,
	52, 2883,
	52, 0,
};

const struct IrCode code_na053Code PROGMEM = {
	freq_to_timerval(55554),
	code_na053Times,
	{
		0x42,
		0x08,
		0x20,
		0x48,
		0x00,
		0x16,
		0x10,
		0x41,
		0x02,
		0x40,
		0x00,
		0xC0,
	}
};
//code_na054Times is a Duplicate of code code_na053Times
const struct IrCode code_na054Code PROGMEM = {
	freq_to_timerval(55551),
	code_na053Times,
	{
		0x42,
		0x08,
		0x20,
		0x01,
		0x24,
		0xB0,
		0x82,
		0x08,
		0x00,
		0x49,
		0x30,
	}
};

// 55
const uint16_t code_na055Times[] PROGMEM = {
	3, 10,
	3, 20,
	3, 30,
	3, 12780,
	3, 0,
};

const struct IrCode code_na055Code PROGMEM = {
	PULSE_CODE,
	code_na055Times,
	{
		0x50,
		0x04,
		0x90,
		0x41,
		0x21,
		0x34,
		0x01,
		0x24,
		0x10,
		0x48,
		0x50,
	}
};

// 56
const uint16_t code_na056Times[] PROGMEM = {
	58, 190,
	59, 382,
	59, 0,
};

const struct IrCode code_na056Code PROGMEM = {
	freq_to_timerval(37035),
	code_na056Times,
	{
		0x85,
		0x40,
		0x80,
	}
};

// 57
const uint16_t code_na057Times[] PROGMEM = {
	47, 146,
	47, 349,
	47, 2780,
	47, 0,
};

const struct IrCode code_na057Code PROGMEM = {
	freq_to_timerval(39996),
	code_na057Times,
	{
		0x85,
		0x42,
		0x15,
		0x0C,
	}
};

// 58
const uint16_t code_na058Times[] PROGMEM = {
	24, 100,
	33, 216,
	24, 218,
	24, 0,
};

const struct IrCode code_na058Code PROGMEM = {
	freq_to_timerval(33326),
	code_na058Times,
	{
		0x9A,
		0x02,
		0x08,
		0x00,
		0x0C,
	}
};
//code_na059Times is a Duplicate of code code_na017Times
const struct IrCode code_na059Code PROGMEM = {
	freq_to_timerval(40000),
	code_na017Times,
	{
		0x59,
		0x04,
		0x82,
		0x40,
		0x20,
		0x10,
		0x08,
		0x04,
		0x10,
		0x01,
		0x20,
		0x82,
		0x4C,
		0x55,
		0x60,
	}
};
//code_na060Times is a Duplicate of code code_na017Times
const struct IrCode code_na060Code PROGMEM = {
	freq_to_timerval(40000),
	code_na017Times,
	{
		0x58,
		0x00,
		0x02,
		0x01,
		0x24,
		0x90,
		0x49,
		0x00,
		0x10,
		0x00,
		0x24,
		0x82,
		0x4C,
		0x55,
		0x60,
	}
};
//code_na061Times is a Duplicate of code code_na017Times
const struct IrCode code_na061Code PROGMEM = {
	freq_to_timerval(40000),
	code_na017Times,
	{
		0x58,
		0x00,
		0x02,
		0x09,
		0x24,
		0x90,
		0x41,
		0x20,
		0x80,
		0x00,
		0x04,
		0x12,
		0x4C,
		0x55,
		0x60,
	}
};
//code_na062Times is a Duplicate of code code_na017Times
const struct IrCode code_na062Code PROGMEM = {
	freq_to_timerval(40000),
	code_na017Times,
	{
		0x58,
		0x00,
		0x82,
		0x01,
		0x24,
		0x10,
		0x49,
		0x20,
		0x80,
		0x00,
		0x04,
		0x12,
		0x4C,
		0x55,
		0x60,
	}
};
//code_na063Times is a Duplicate of code code_na017Times
const struct IrCode code_na063Code PROGMEM = {
	freq_to_timerval(40000),
	code_na017Times,
	{
		0x59,
		0x24,
		0x92,
		0x48,
		0x00,
		0x00,
		0x01,
		0x24,
		0x92,
		0x00,
		0x00,
		0x00,
		0x4C,
		0x55,
		0x60,
	}
};
//code_na064Times is a Duplicate of code code_na001Times
const struct IrCode code_na064Code PROGMEM = {
	freq_to_timerval(57140),
	code_na001Times,
	{
		0x50,
		0x00,
		0x00,
		0x49,
		0x04,
		0x92,
		0x49,
		0x20,
		0x02,
		0x03,
		0x40,
		0x00,
		0x01,
		0x24,
		0x12,
		0x49,
		0x24,
		0x80,
		0x08,
		0x10,
	}
};

// 65
const uint16_t code_na065Times[] PROGMEM = {
	49, 97,
	49, 196,
	396, 391,
	1955, 391,
	99, 845,
	99, 0,
};

const struct IrCode code_na065Code PROGMEM = {
	freq_to_timerval(58822),
	code_na065Times,
	{
		0x59,
		0x24,
		0x80,
		0x49,
		0x04,
		0x80,
		0x01,
		0x20,
		0x02,
		0x04,
		0x44,
		0x92,
		0x01,
		0x24,
		0x12,
		0x00,
		0x04,
		0x80,
		0x08,
		0x11,
		0x12,
		0x48,
		0x04,
		0x90,
		0x48,
		0x00,
		0x12,
		0x00,
		0x20,
		0x50,
	}
};

// 66
const uint16_t code_na066Times[] PROGMEM = {
	166, 153,
	744, 153,
	416, 154,
	39, 275,
	39, 0,
};

const struct IrCode code_na066Code PROGMEM = {
	freq_to_timerval(38461),
	code_na066Times,
	{
		0x4B,
		0x6C,
		0x30,
		0x1B,
		0x69,
		0xB6,
		0x18,
		0x0D,
		0xB4,
		0xDB,
		0x0C,
		0x06,
		0xE0,
	}
};
//code_na067Times is a Duplicate of code code_na044Times
const struct IrCode code_na067Code PROGMEM = {
	freq_to_timerval(39999),
	code_na044Times,
	{
		0x58,
		0x00,
		0x92,
		0x49,
		0x24,
		0x00,
		0x00,
		0x20,
		0x00,
		0x01,
		0x04,
		0x92,
		0x4C,
		0x55,
		0x60,
	}
};

// 68
const uint16_t code_na068Times[] PROGMEM = {
	132, 43,
	45, 120,
	45, 9437,
	45, 0,
};

const struct IrCode code_na068Code PROGMEM = {
	freq_to_timerval(39998),
	code_na068Times,
	{
		0x84,
		0x51,
		0x54,
		0x84,
		0x51,
		0x54,
		0xC0,
	}
};
//code_na069Times is a Duplicate of code code_na017Times
const struct IrCode code_na069Code PROGMEM = {
	freq_to_timerval(40000),
	code_na017Times,
	{
		0x58,
		0x00,
		0x00,
		0x01,
		0x24,
		0x92,
		0x49,
		0x20,
		0x80,
		0x00,
		0x04,
		0x12,
		0x4C,
		0x55,
		0x60,
	}
};

// 70
const uint16_t code_na070Times[] PROGMEM = {
	29, 74,
	29, 180,
	29, 3198,
	29, 0,
};

const struct IrCode code_na070Code PROGMEM = {
	freq_to_timerval(38455),
	code_na070Times,
	{
		0x90,
		0x00,
		0x41,
		0x14,
		0x64,
		0x00,
		0x10,
		0x45,
		0x30,
	}
};

// 71
const uint16_t code_na071Times[] PROGMEM = {
	38, 180,
	38, 271,
	38, 0,
};

const struct IrCode code_na071Code PROGMEM = {
	freq_to_timerval(55549),
	code_na071Times,
	{
		0x84,
		0x50,
		0x80,
	}
};
//code_na072Times is a Duplicate of code code_na042Times
const struct IrCode code_na072Code PROGMEM = {
	freq_to_timerval(39999),
	code_na042Times,
	{
		0x58,
		0x24,
		0x00,
		0x00,
		0x24,
		0x00,
		0x00,
		0x04,
		0x10,
		0x01,
		0x20,
		0x82,
		0x4C,
		0x55,
		0x60,
	}
};
//code_na073Times is a Duplicate of code code_na017Times
const struct IrCode code_na073Code PROGMEM = {
	freq_to_timerval(40000),
	code_na017Times,
	{
		0x58,
		0x20,
		0x82,
		0x09,
		0x04,
		0x10,
		0x40,
		0x00,
		0x00,
		0x09,
		0x24,
		0x92,
		0x44,
		0x55,
		0x60,
	}
};
//code_na074Times is a Duplicate of code code_na017Times
const struct IrCode code_na074Code PROGMEM = {
	freq_to_timerval(40000),
	code_na017Times,
	{
		0x59,
		0x00,
		0x10,
		0x40,
		0x24,
		0x82,
		0x08,
		0x00,
		0x80,
		0x01,
		0x24,
		0x12,
		0x4C,
		0x55,
		0x60,
	}
};

// 75
const uint16_t code_na075Times[] PROGMEM = {
	53, 96,
	53, 192,
	391, 389,
	103, 930,
	103, 0,
};

const struct IrCode code_na075Code PROGMEM = {
	freq_to_timerval(41665),
	code_na075Times,
	{
		0x50,
		0x00,
		0x00,
		0x41,
		0x04,
		0x12,
		0x49,
		0x20,
		0x82,
		0x0B,
		0x40,
		0x00,
		0x01,
		0x04,
		0x10,
		0x49,
		0x24,
		0x82,
		0x08,
		0x30,
	}
};
//code_na076Times is a Duplicate of code code_na017Times
const struct IrCode code_na076Code PROGMEM = {
	freq_to_timerval(40000),
	code_na017Times,
	{
		0x58,
		0x24,
		0x82,
		0x41,
		0x00,
		0x10,
		0x08,
		0x04,
		0x10,
		0x01,
		0x20,
		0x82,
		0x4C,
		0x55,
		0x60,
	}
};
//code_na077Times is a Duplicate of code code_na005Times
const struct IrCode code_na077Code PROGMEM = {
	freq_to_timerval(35714),
	code_na005Times,
	{
		0x41,
		0x08,
		0x02,
		0x81,
		0x60,
		0x84,
		0x01,
		0x40,
		0xC0,
	}
};

// 78
const uint16_t code_na078Times[] PROGMEM = {
	161, 153,
	481, 153,
	42, 273,
	42, 0,
};

const struct IrCode code_na078Code PROGMEM = {
	freq_to_timerval(38461),
	code_na078Times,
	{
		0x9A,
		0x88,
		0x28,
		0xAA,
		0x20,
		0xA2,
		0xA8,
		0x82,
		0x8C,
	}
};
//code_na079Times is a Duplicate of code code_na017Times
const struct IrCode code_na079Code PROGMEM = {
	freq_to_timerval(40000),
	code_na017Times,
	{
		0x58,
		0x20,
		0x82,
		0x09,
		0x04,
		0x10,
		0x41,
		0x24,
		0x02,
		0x08,
		0x00,
		0x90,
		0x44,
		0x55,
		0x60,
	}
};
//code_na080Times is a Duplicate of code code_na055Times
const struct IrCode code_na080Code PROGMEM = {
	PULSE_CODE,
	code_na055Times,
	{
		0x50,
		0x04,
		0x90,
		0x08,
		0x01,
		0x34,
		0x01,
		0x24,
		0x02,
		0x00,
		0x50,
	}
};

// 81
const uint16_t code_na081Times[] PROGMEM = {
	50, 50,
	50, 407,
	50, 503,
	50, 9979,
	50, 0,
};

const struct IrCode code_na081Code PROGMEM = {
	freq_to_timerval(39997),
	code_na081Times,
	{
		0x41,
		0x40,
		0x82,
		0x81,
		0x40,
		0xA4,
		0x08,
		0x2C,
		0x14,
		0x08,
		0x28,
		0x14,
		0x0A,
		0x40,
		0x83,
		0x00,
	}
};

// 82
const uint16_t code_na082Times[] PROGMEM = {
	90, 87,
	179, 88,
	90, 177,
	179, 177,
	90, 8888,
	90, 0,
};

const struct IrCode code_na082Code PROGMEM = {
	freq_to_timerval(35713),
	code_na082Times,
	{
		0x42,
		0x20,
		0x00,
		0x02,
		0x70,
		0x22,
		0x00,
		0x00,
		0x27,
		0x40,
	}
};
//code_na083Times is a Duplicate of code code_na005Times
//Code code_na083 is a duplicate of code code_na005
const struct IrCode code_na083Code PROGMEM = {
	freq_to_timerval(35714),
	code_na005Times,
	{
		0x41,
		0x00,
		0x00,
		0x10,
		0x2C,
		0x10,
		0x00,
		0x01,
		0x03,
		0x00,
	}
};

// 84
const uint16_t code_na084Times[] PROGMEM = {
	43, 42,
	43, 126,
	338, 168,
	43, 7476,
	43, 0,
};

const struct IrCode code_na084Code PROGMEM = {
	freq_to_timerval(37034),
	code_na084Times,
	{
		0x50,
		0x20,
		0x00,
		0x00,
		0x00,
		0x02,
		0x00,
		0x00,
		0x10,
		0x08,
		0x00,
		0x00,
		0x01,
		0x04,
		0x92,
		0x01,
		0x04,
		0x82,
		0x0B,
		0x40,
		0x80,
		0x00,
		0x00,
		0x00,
		0x08,
		0x00,
		0x00,
		0x40,
		0x20,
		0x00,
		0x00,
		0x04,
		0x12,
		0x48,
		0x04,
		0x12,
		0x08,
		0x30,
	}
};

// 85
const uint16_t code_na085Times[] PROGMEM = {
	57, 58,
	57, 163,
	448, 435,
	57, 2283,
	57, 0,
};

const struct IrCode code_na085Code PROGMEM = {
	freq_to_timerval(38460),
	code_na085Times,
	{
		0x51,
		0x00,
		0x00,
		0x00,
		0x00,
		0x10,
		0x00,
		0x20,
		0x34,
		0x40,
		0x00,
		0x00,
		0x00,
		0x04,
		0x00,
		0x08,
		0x10,
	}
};

// 86
const uint16_t code_na086Times[] PROGMEM = {
	43, 44,
	43, 124,
	348, 174,
	43, 6989,
	43, 0,
};

const struct IrCode code_na086Code PROGMEM = {
	freq_to_timerval(37035),
	code_na086Times,
	{
		0x50,
		0x20,
		0x82,
		0x08,
		0x20,
		0x90,
		0x41,
		0x24,
		0x80,
		0x08,
		0x20,
		0x10,
		0x00,
		0x24,
		0x10,
		0x01,
		0x00,
		0x10,
		0x4B,
		0x40,
		0x82,
		0x08,
		0x20,
		0x82,
		0x41,
		0x04,
		0x92,
		0x00,
		0x20,
		0x80,
		0x40,
		0x00,
		0x90,
		0x40,
		0x04,
		0x00,
		0x41,
		0x30,
	}
};

// 87
const uint16_t code_na087Times[] PROGMEM = {
	57, 68,
	57, 173,
	881, 221,
	881, 434,
	57, 4165,
	57, 9585,
	57, 0,
};

const struct IrCode code_na087Code PROGMEM = {
	freq_to_timerval(38461),
	code_na087Times,
	{
		0x58,
		0x00,
		0x90,
		0x01,
		0x24,
		0x02,
		0x48,
		0x00,
		0x80,
		0x01,
		0x24,
		0x12,
		0x4C,
		0x55,
		0x60,
	}
};
//code_na088Times is a Duplicate of code code_na009Times
const struct IrCode code_na088Code PROGMEM = {
	freq_to_timerval(38461),
	code_na009Times,
	{
		0x58,
		0x00,
		0x10,
		0x01,
		0x04,
		0x82,
		0x01,
		0x24,
		0x90,
		0x00,
		0x00,
		0x02,
		0x4C,
		0x55,
		0x60,
	}
};
//code_na089Times is a Duplicate of code code_na004Times
const struct IrCode code_na089Code PROGMEM = {
	freq_to_timerval(38461),
	code_na004Times,
	{
		0x58,
		0x00,
		0x80,
		0x01,
		0x24,
		0x12,
		0x48,
		0x20,
		0x10,
		0x01,
		0x04,
		0x82,
		0x4C,
		0x55,
		0x60,
	}
};

// 90
const uint16_t code_na090Times[] PROGMEM = {
	90, 89,
	179, 90,
	90, 179,
	179, 179,
	90, 8976,
	90, 0,
};

const struct IrCode code_na090Code PROGMEM = {
	freq_to_timerval(35714),
	code_na090Times,
	{
		0x41,
		0x09,
		0x94,
		0x0C,
		0x04,
		0x26,
		0x50,
		0x34,
	}
};
//Debugger break point

// 91
const uint16_t code_na091Times[] PROGMEM = {
	49, 99,
	49, 199,
	401, 399,
	49, 1049,
	49, 0,
};

const struct IrCode code_na091Code PROGMEM = {
	freq_to_timerval(58820),
	code_na091Times,
	{
		0x51,
		0x24,
		0x80,
		0x49,
		0x04,
		0x80,
		0x01,
		0x20,
		0x02,
		0x03,
		0x44,
		0x92,
		0x01,
		0x24,
		0x12,
		0x00,
		0x04,
		0x80,
		0x08,
		0x10,
	}
};

// 92
const uint16_t code_na092Times[] PROGMEM = {
	55, 55,
	55, 169,
	452, 445,
	55, 4926,
	55, 0,
};

const struct IrCode code_na092Code PROGMEM = {
	freq_to_timerval(38460),
	code_na092Times,
	{
		0x51,
		0x04,
		0x00,
		0x01,
		0x04,
		0x00,
		0x00,
		0x20,
		0x00,
		0x01,
		0x04,
		0x92,
		0x4B,
		0x44,
		0x10,
		0x00,
		0x04,
		0x10,
		0x00,
		0x00,
		0x80,
		0x00,
		0x04,
		0x12,
		0x49,
		0x30,
	}
};

// 93
const uint16_t code_na093Times[] PROGMEM = {
	57, 55,
	57, 165,
	898, 446,
	57, 4398,
	57, 0,
};

const struct IrCode code_na093Code PROGMEM = {
	freq_to_timerval(38460),
	code_na093Times,
	{
		0x50,
		0x24,
		0x00,
		0x08,
		0x20,
		0x00,
		0x01,
		0x00,
		0x80,
		0x40,
		0x24,
		0x12,
		0x0B,
		0x40,
		0x90,
		0x00,
		0x20,
		0x80,
		0x00,
		0x04,
		0x02,
		0x01,
		0x00,
		0x90,
		0x48,
		0x30,
	}
};
//code_na094Times is a Duplicate of code code_na005Times
const struct IrCode code_na094Code PROGMEM = {
	freq_to_timerval(35714),
	code_na005Times,
	{
		0x41,
		0x01,
		0x02,
		0x81,
		0x60,
		0x80,
		0x81,
		0x40,
		0xC0,
	}
};

// 95
const uint16_t code_na095Times[] PROGMEM = {
	57, 57,
	57, 173,
	442, 444,
	57, 4548,
	57, 9448,
	57, 0,
};

const struct IrCode code_na095Code PROGMEM = {
	freq_to_timerval(38461),
	code_na095Times,
	{
		0x50,
		0x00,
		0x80,
		0x00,
		0x00,
		0x80,
		0x01,
		0x20,
		0x80,
		0x00,
		0x04,
		0x12,
		0x4B,
		0x46,
		0x23,
		0x40,
	}
};
//code_na096Times is a Duplicate of code code_na009Times
const struct IrCode code_na096Code PROGMEM = {
	freq_to_timerval(38461),
	code_na009Times,
	{
		0x58,
		0x20,
		0x10,
		0x01,
		0x24,
		0x92,
		0x48,
		0x24,
		0x80,
		0x01,
		0x00,
		0x12,
		0x4C,
		0x55,
		0x60,
	}
};
//code_na097Times is a Duplicate of code code_na009Times
const struct IrCode code_na097Code PROGMEM = {
	freq_to_timerval(38461),
	code_na009Times,
	{
		0x59,
		0x20,
		0x00,
		0x09,
		0x04,
		0x10,
		0x40,
		0x20,
		0x00,
		0x49,
		0x04,
		0x92,
		0x04,
		0x55,
		0x60,
	}
};
//code_na098Times is a Duplicate of code code_na004Times
const struct IrCode code_na098Code PROGMEM = {
	freq_to_timerval(38461),
	code_na004Times,
	{
		0x58,
		0x00,
		0x00,
		0x01,
		0x24,
		0x92,
		0x49,
		0x00,
		0x10,
		0x40,
		0x24,
		0x82,
		0x0C,
		0x55,
		0x60,
	}
};
//code_na099Times is a Duplicate of code code_na009Times
const struct IrCode code_na099Code PROGMEM = {
	freq_to_timerval(38461),
	code_na009Times,
	{
		0x58,
		0x00,
		0x00,
		0x01,
		0x04,
		0x92,
		0x09,
		0x00,
		0x00,
		0x00,
		0x24,
		0x92,
		0x4C,
		0x55,
		0x60,
	}
};

// 100
const uint16_t code_na100Times[] PROGMEM = {
	48, 57,
	47, 167,
	56, 2300,
	56, 0,
};

const struct IrCode code_na100Code PROGMEM = {
	freq_to_timerval(35711),
	code_na100Times,
	{
		0x95,
		0x01,
		0x04,
		0x00,
		0x25,
		0x40,
		0x41,
		0x00,
		0x0C,
	}
};
//code_na101Times is a Duplicate of code code_na004Times
const struct IrCode code_na101Code PROGMEM = {
	freq_to_timerval(38461),
	code_na004Times,
	{
		0x58,
		0x00,
		0x02,
		0x41,
		0x24,
		0x90,
		0x08,
		0x00,
		0x00,
		0x01,
		0x24,
		0x92,
		0x4C,
		0x55,
		0x60,
	}
};

// 102
const uint16_t code_na102Times[] PROGMEM = {
	87, 85,
	87, 256,
	348, 346,
	87, 3337,
	87, 0,
};

const struct IrCode code_na102Code PROGMEM = {
	freq_to_timerval(39998),
	code_na102Times,
	{
		0x51,
		0x00,
		0x82,
		0x00,
		0x00,
		0x82,
		0x41,
		0x04,
		0x92,
		0x43,
		0x44,
		0x02,
		0x08,
		0x00,
		0x02,
		0x09,
		0x04,
		0x12,
		0x49,
		0x10,
	}
};
//code_na103Times is a Duplicate of code code_na045Times
const struct IrCode code_na103Code PROGMEM = {
	freq_to_timerval(38460),
	code_na045Times,
	{
		0x50,
		0x00,
		0x80,
		0x00,
		0x00,
		0x80,
		0x01,
		0x24,
		0x80,
		0x00,
		0x00,
		0x12,
		0x4B,
		0x46,
		0x23,
		0x40,
	}
};
//code_na104Times is a Duplicate of code code_na017Times
const struct IrCode code_na104Code PROGMEM = {
	freq_to_timerval(40000),
	code_na017Times,
	{
		0x59,
		0x00,
		0x12,
		0x40,
		0x24,
		0x80,
		0x08,
		0x00,
		0x80,
		0x01,
		0x24,
		0x12,
		0x4C,
		0x55,
		0x60,
	}
};
//code_na105Times is a Duplicate of code code_na017Times
const struct IrCode code_na105Code PROGMEM = {
	freq_to_timerval(40000),
	code_na017Times,
	{
		0x59,
		0x20,
		0x00,
		0x08,
		0x04,
		0x92,
		0x41,
		0x24,
		0x92,
		0x48,
		0x00,
		0x00,
		0x04,
		0x55,
		0x60,
	}
};
//code_na106Times is a Duplicate of code code_na044Times
const struct IrCode code_na106Code PROGMEM = {
	freq_to_timerval(39999),
	code_na044Times,
	{
		0x58,
		0x00,
		0x80,
		0x01,
		0x24,
		0x12,
		0x49,
		0x24,
		0x80,
		0x00,
		0x00,
		0x12,
		0x4C,
		0x55,
		0x60,
	}
};
//code_na107Times is a Duplicate of code code_na045Times
const struct IrCode code_na107Code PROGMEM = {
	freq_to_timerval(38460),
	code_na045Times,
	{
		0x50,
		0x00,
		0x00,
		0x00,
		0x00,
		0x00,
		0x01,
		0x24,
		0x80,
		0x00,
		0x00,
		0x12,
		0x4B,
		0x46,
		0x23,
		0x40,
	}
};
//code_na108Times is a Duplicate of code code_na045Times
const struct IrCode code_na108Code PROGMEM = {
	freq_to_timerval(38460),
	code_na045Times,
	{
		0x50,
		0x24,
		0x10,
		0x00,
		0x24,
		0x10,
		0x01,
		0x24,
		0x80,
		0x00,
		0x00,
		0x12,
		0x4B,
		0x46,
		0x23,
		0x40,
	}
};

#ifndef EU_CODES

// 109
const uint16_t code_na109Times[] PROGMEM = {
	60, 59,
	60, 209,
	885, 209,
	1052, 492,
	75, 4164,
	60, 9581,
	60, 0,
};

const struct IrCode code_na109Code PROGMEM = {
	freq_to_timerval(40000),
	code_na109Times,
	{
		0x58,
		0x00,
		0x02,
		0x09,
		0x24,
		0x90,
		0x40,
		0x20,
		0x80,
		0x01,
		0x04,
		0x12,
		0x4C,
		0x55,
		0x60,
	}
};
//code_na110Times is a Duplicate of code code_na017Times
const struct IrCode code_na110Code PROGMEM = {
	freq_to_timerval(40000),
	code_na017Times,
	{
		0x59,
		0x20,
		0x00,
		0x08,
		0x04,
		0x92,
		0x40,
		0x00,
		0x80,
		0x01,
		0x24,
		0x12,
		0x4C,
		0x55,
		0x60,
	}
};
//code_na111Times is a Duplicate of code code_na044Times
const struct IrCode code_na111Code PROGMEM = {
	freq_to_timerval(39999),
	code_na044Times,
	{
		0x59,
		0x24,
		0x92,
		0x48,
		0x00,
		0x00,
		0x01,
		0x24,
		0x80,
		0x00,
		0x00,
		0x12,
		0x4C,
		0x55,
		0x60,
	}
};
//code_na112Times is a Duplicate of code code_na004Times
const struct IrCode code_na112Code PROGMEM = {
	freq_to_timerval(38461),
	code_na004Times,
	{
		0x59,
		0x00,
		0x00,
		0x00,
		0x24,
		0x92,
		0x49,
		0x00,
		0x00,
		0x00,
		0x24,
		0x92,
		0x4C,
		0x55,
		0x60,
	}
};

// 113
const uint16_t code_na113Times[] PROGMEM = {
	57, 52,
	57, 164,
	897, 441,
	57, 3944,
	57, 0,
};

const struct IrCode code_na113Code PROGMEM = {
	freq_to_timerval(39998),
	code_na113Times,
	{
		0x50,
		0x00,
		0x00,
		0x08,
		0x00,
		0x82,
		0x41,
		0x00,
		0x80,
		0x40,
		0x24,
		0x12,
		0x0B,
		0x40,
		0x00,
		0x00,
		0x20,
		0x02,
		0x09,
		0x04,
		0x02,
		0x01,
		0x00,
		0x90,
		0x48,
		0x30,
	}
};

// 114
const uint16_t code_na114Times[] PROGMEM = {
	45, 49,
	45, 146,
	793, 396,
	45, 446,
	45, 2235,
	45, 0,
};

const struct IrCode code_na114Code PROGMEM = {
	freq_to_timerval(39998),
	code_na114Times,
	{
		0x51,
		0x04,
		0x10,
		0x03,
		0x20,
		0x82,
		0x00,
		0x88,
		0x82,
		0x08,
		0x01,
		0x90,
		0x41,
		0x00,
		0x50,
	}
};

// 115
const uint16_t code_na115Times[] PROGMEM = {
	82, 85,
	82, 294,
	330, 329,
	82, 3348,
	82, 0,
};

const struct IrCode code_na115Code PROGMEM = {
	freq_to_timerval(39999),
	code_na115Times,
	{
		0x50,
		0x20,
		0x80,
		0x08,
		0x20,
		0x10,
		0x41,
		0x24,
		0x10,
		0x4B,
		0x40,
		0x82,
		0x00,
		0x20,
		0x80,
		0x41,
		0x04,
		0x90,
		0x41,
		0x30,
	}
};
//code_na116Times is a Duplicate of code code_na017Times
const struct IrCode code_na116Code PROGMEM = {
	freq_to_timerval(40000),
	code_na017Times,
	{
		0x58,
		0x00,
		0x10,
		0x01,
		0x24,
		0x82,
		0x49,
		0x00,
		0x10,
		0x00,
		0x24,
		0x82,
		0x4C,
		0x55,
		0x60,
	}
};

// 117
const uint16_t code_na117Times[] PROGMEM = {
	50, 53,
	50, 157,
	822, 418,
	50, 419,
	50, 2445,
	50, 0,
};

const struct IrCode code_na117Code PROGMEM = {
	freq_to_timerval(41665),
	code_na117Times,
	{
		0x51,
		0x00,
		0x00,
		0x03,
		0x04,
		0x90,
		0x00,
		0x88,
		0x80,
		0x00,
		0x01,
		0x82,
		0x48,
		0x00,
		0x50,
	}
};
//code_na118Times is a Duplicate of code code_na044Times
const struct IrCode code_na118Code PROGMEM = {
	freq_to_timerval(39999),
	code_na044Times,
	{
		0x59,
		0x24,
		0x12,
		0x48,
		0x00,
		0x80,
		0x01,
		0x24,
		0x80,
		0x00,
		0x00,
		0x12,
		0x4C,
		0x55,
		0x60,
	}
};

// 119
const uint16_t code_na119Times[] PROGMEM = {
	56, 62,
	56, 170,
	882, 218,
	882, 437,
	56, 4094,
	56, 9509,
	56, 0,
};

const struct IrCode code_na119Code PROGMEM = {
	freq_to_timerval(55555),
	code_na119Times,
	{
		0x58,
		0x04,
		0x00,
		0x01,
		0x20,
		0x92,
		0x48,
		0x00,
		0x80,
		0x01,
		0x24,
		0x12,
		0x4C,
		0x55,
		0x60,
	}
};
//code_na120Times is a Duplicate of code code_na017Times
const struct IrCode code_na120Code PROGMEM = {
	freq_to_timerval(40000),
	code_na017Times,
	{
		0x58,
		0x04,
		0x80,
		0x01,
		0x20,
		0x12,
		0x49,
		0x24,
		0x90,
		0x00,
		0x00,
		0x02,
		0x4C,
		0x55,
		0x60,
	}
};
//code_na121Times is a Duplicate of code code_na017Times
const struct IrCode code_na121Code PROGMEM = {
	freq_to_timerval(39999),
	code_na017Times,
	{
		0x58,
		0x00,
		0x10,
		0x01,
		0x24,
		0x82,
		0x48,
		0x00,
		0x80,
		0x01,
		0x24,
		0x12,
		0x4C,
		0x55,
		0x60,
	}
};

// 122
const uint16_t code_na122Times[] PROGMEM = {
	82, 93,
	82, 247,
	331, 321,
	82, 3866,
	82, 0,
};

const struct IrCode code_na122Code PROGMEM = {
	freq_to_timerval(52629),
	code_na122Times,
	{
		0x50,
		0x00,
		0x00,
		0x00,
		0x04,
		0x92,
		0x49,
		0x24,
		0x02,
		0xD0,
		0x00,
		0x00,
		0x00,
		0x04,
		0x92,
		0x49,
		0x24,
		0x03,
		0x00,
	}
};
//code_na123Times is a Duplicate of code code_na017Times
const struct IrCode code_na123Code PROGMEM = {
	freq_to_timerval(40000),
	code_na017Times,
	{
		0x58,
		0x00,
		0x92,
		0x01,
		0x24,
		0x00,
		0x48,
		0x04,
		0x90,
		0x01,
		0x20,
		0x02,
		0x4C,
		0x55,
		0x60,
	}
};

// 124
const uint16_t code_na124Times[] PROGMEM = {
	55, 55,
	55, 150,
	902, 225,
	902, 419,
	55, 4091,
	55, 8677,
	55, 0,
};

const struct IrCode code_na124Code PROGMEM = {
	freq_to_timerval(39999),
	code_na124Times,
	{
		0x58,
		0x00,
		0x12,
		0x01,
		0x24,
		0x80,
		0x48,
		0x00,
		0x00,
		0x01,
		0x24,
		0x92,
		0x4C,
		0x55,
		0x60,
	}
};
//code_na125Times is a Duplicate of code code_na119Times
const struct IrCode code_na125Code PROGMEM = {
	freq_to_timerval(55554),
	code_na119Times,
	{
		0x58,
		0x00,
		0x92,
		0x01,
		0x24,
		0x00,
		0x48,
		0x20,
		0x10,
		0x01,
		0x04,
		0x82,
		0x4C,
		0x55,
		0x60,
	}
};
//code_na126Times is a Duplicate of code code_na017Times
const struct IrCode code_na126Code PROGMEM = {
	freq_to_timerval(39999),
	code_na017Times,
	{
		0x59,
		0x04,
		0x00,
		0x08,
		0x20,
		0x92,
		0x40,
		0x00,
		0x80,
		0x01,
		0x24,
		0x12,
		0x4C,
		0x55,
		0x60,
	}
};
//code_na127Times is a Duplicate of code code_na040Times
const struct IrCode code_na127Code PROGMEM = {
	freq_to_timerval(25640),
	code_na040Times,
	{
		0x81,
		0x81,
		0xC0,
	}
};
//code_na128Times is a Duplicate of code code_na102Times
const struct IrCode code_na128Code PROGMEM = {
	freq_to_timerval(39999),
	code_na102Times,
	{
		0x50,
		0x00,
		0x82,
		0x00,
		0x00,
		0x92,
		0x41,
		0x04,
		0x92,
		0x43,
		0x40,
		0x02,
		0x08,
		0x00,
		0x02,
		0x49,
		0x04,
		0x12,
		0x49,
		0x10,
	}
};
//code_na129Times is a Duplicate of code code_na017Times
const struct IrCode code_na129Code PROGMEM = {
	freq_to_timerval(40000),
	code_na017Times,
	{
		0x59,
		0x24,
		0x92,
		0x48,
		0x00,
		0x00,
		0x00,
		0x00,
		0x80,
		0x01,
		0x24,
		0x12,
		0x4C,
		0x55,
		0x60,
	}
};

// 130
const uint16_t code_na130Times[] PROGMEM = {
	89, 89,
	89, 257,
	359, 348,
	89, 2246,
	89, 0,
};

const struct IrCode code_na130Code PROGMEM = {
	freq_to_timerval(37036),
	code_na130Times,
	{
		0x51,
		0x00,
		0x02,
		0x09,
		0x20,
		0x82,
		0x49,
		0x04,
		0x00,
		0x43,
		0x44,
		0x00,
		0x08,
		0x24,
		0x82,
		0x09,
		0x24,
		0x10,
		0x01,
		0x10,
	}
};
//code_na131Times is a Duplicate of code code_na042Times
const struct IrCode code_na131Code PROGMEM = {
	freq_to_timerval(39999),
	code_na042Times,
	{
		0x58,
		0x04,
		0x10,
		0x01,
		0x20,
		0x82,
		0x49,
		0x20,
		0x90,
		0x00,
		0x04,
		0x02,
		0x4C,
		0x55,
		0x60,
	}
};

// 132
const uint16_t code_na132Times[] PROGMEM = {
	29, 105,
	29, 238,
	29, 370,
	29, 1173,
	29, 0,
};

const struct IrCode code_na132Code PROGMEM = {
	freq_to_timerval(83321),
	code_na132Times,
	{
		0x42,
		0x08,
		0x20,
		0x00,
		0x00,
		0x12,
		0xC2,
		0x08,
		0x20,
		0x00,
		0x00,
		0x13,
		0x00,
	}
};

// 133
const uint16_t code_na133Times[] PROGMEM = {
	17, 487,
	16, 738,
	19, 4639,
	19, 0,
};

const struct IrCode code_na133Code PROGMEM = {
	freq_to_timerval(41652),
	code_na133Times,
	{
		0x95,
		0x50,
		0x14,
		0x95,
		0x50,
		0x14,
		0xC0,
	}
};
//code_na134Times is a Duplicate of code code_na113Times
const struct IrCode code_na134Code PROGMEM = {
	freq_to_timerval(39999),
	code_na113Times,
	{
		0x50,
		0x24,
		0x00,
		0x09,
		0x04,
		0x00,
		0x01,
		0x24,
		0x80,
		0x00,
		0x00,
		0x12,
		0x4B,
		0x40,
		0x90,
		0x00,
		0x24,
		0x10,
		0x00,
		0x04,
		0x92,
		0x00,
		0x00,
		0x00,
		0x49,
		0x30,
	}
};

// 135

const struct IrCode code_na135Code PROGMEM = {
	freq_to_timerval(38460),
	code_na135Times,
	{
		0x50,
		0x04,
		0x92,
		0x40,
		0x00,
		0x02,
		0x40,
		0x00,
		0x12,
		0x49,
		0x20,
		0x00,
		0x00,
		0x04,
		0x92,
		0x49,
		0x2D,
		0x00,
		0x49,
		0x24,
		0x00,
		0x00,
		0x24,
		0x00,
		0x01,
		0x24,
		0x92,
		0x00,
		0x00,
		0x00,
		0x49,
		0x24,
		0x93,
		0x00,
	}
};
#endif //Not Defined EU_CODES
#endif //Defined NA_CODES

#ifdef EU_CODES

// 136
const uint16_t code_eu000Times[] PROGMEM = {
	45, 45,
	90, 45,
	266, 89,
	45, 90,
	134, 132,
	45, 8324,
	45, 0,
};

const struct IrCode code_eu000Code PROGMEM = {
	freq_to_timerval(35713),
	code_eu000Times,
	{
		0x53,
		0x02,
		0x00,
		0x00,
		0x00,
		0x00,
		0x0B,
		0x15,
		0x30,
		0x20,
		0x00,
		0x00,
		0x00,
		0x00,
		0xB1,
		0x80,
	}
};

// 137
const uint16_t code_eu001Times[] PROGMEM = {
	53, 52,
	53, 106,
	102, 107,
	51, 261,
	53, 2052,
	53, 11647,
	53, 0,
};

const struct IrCode code_eu001Code PROGMEM = {
	freq_to_timerval(30303),
	code_eu001Times,
	{
		0x58,
		0x00,
		0x00,
		0x00,
		0x8C,
		0xA0,
		0x00,
		0x02,
		0xB2,
		0x80,
		0x00,
		0x0C,
	}
};

// 138
const uint16_t code_eu002Times[] PROGMEM = {
	47, 202,
	48, 454,
	48, 3487,
	48, 0,
};

const struct IrCode code_eu002Code PROGMEM = {
	freq_to_timerval(33331),
	code_eu002Times,
	{
		0x81,
		0x40,
		0x54,
		0x60,
		0x50,
		0x15,
		0x1C,
	}
};
//code_eu003Times is a Duplicate of code code_na000Times
//Code code_eu003 is a duplicate of code code_na000
const struct IrCode code_eu003Code PROGMEM = {
	freq_to_timerval(38462),
	code_na000Times,
	{
		0x48,
		0x41,
		0x04,
		0x82,
		0x49,
		0x90,
		0x82,
		0x09,
		0x04,
		0x94,
	}
};

// 140
const uint16_t code_eu004Times[] PROGMEM = {
	46, 43,
	46, 129,
	348, 175,
	46, 7461,
	46, 0,
};

const struct IrCode code_eu004Code PROGMEM = {
	freq_to_timerval(37036),
	code_eu004Times,
	{
		0x50,
		0x20,
		0x00,
		0x00,
		0x00,
		0x02,
		0x00,
		0x00,
		0x00,
		0x08,
		0x00,
		0x00,
		0x01,
		0x04,
		0x92,
		0x01,
		0x04,
		0x92,
		0x0B,
		0x40,
		0x80,
		0x00,
		0x00,
		0x00,
		0x08,
		0x00,
		0x00,
		0x00,
		0x20,
		0x00,
		0x00,
		0x04,
		0x12,
		0x48,
		0x04,
		0x12,
		0x48,
		0x30,
	}
};

// 141
const uint16_t code_eu005Times[] PROGMEM = {
	26, 79,
	26, 188,
	26, 4199,
	26, 4799,
	26, 0,
};

const struct IrCode code_eu005Code PROGMEM = {
	freq_to_timerval(38454),
	code_eu005Times,
	{
		0x48,
		0x00,
		0x02,
		0x41,
		0x00,
		0x10,
		0xC8,
		0x00,
		0x10,
		0x08,
		0x24,
		0x82,
		0x88,
		0x00,
		0x02,
		0x41,
		0x00,
		0x10,
		0xC8,
		0x00,
		0x10,
		0x08,
		0x24,
		0x83,
		0x00,
	}
};

// 142
const uint16_t code_eu006Times[] PROGMEM = {
	55, 61,
	55, 170,
	458, 466,
	55, 4471,
	55, 0,
};

const struct IrCode code_eu006Code PROGMEM = {
	freq_to_timerval(38460),
	code_eu006Times,
	{
		0x51,
		0x24,
		0x00,
		0x01,
		0x24,
		0x00,
		0x00,
		0x20,
		0x00,
		0x01,
		0x04,
		0x92,
		0x4B,
		0x44,
		0x90,
		0x00,
		0x04,
		0x90,
		0x00,
		0x00,
		0x80,
		0x00,
		0x04,
		0x12,
		0x49,
		0x30,
	}
};

// 143
const uint16_t code_eu007Times[] PROGMEM = {
	52, 52,
	52, 157,
	840, 420,
	52, 2306,
	52, 0,
};

const struct IrCode code_eu007Code PROGMEM = {
	freq_to_timerval(38461),
	code_eu007Times,
	{
		0x51,
		0x20,
		0x00,
		0x01,
		0x24,
		0x10,
		0x03,
		0x24,
		0x00,
		0x00,
		0x24,
		0x82,
		0x00,
		0x64,
		0x80,
		0x00,
		0x04,
		0x90,
		0x40,
		0x10,
	}
};
//code_eu008Times is a Duplicate of code code_na004Times
const struct IrCode code_eu008Code PROGMEM = {
	freq_to_timerval(38462),
	code_na004Times,
	{
		0x58,
		0x00,
		0x10,
		0x41,
		0x24,
		0x82,
		0x09,
		0x24,
		0x10,
		0x00,
		0x00,
		0x82,
		0x4C,
		0x55,
		0x60,
	}
};
//code_eu009Times is a Duplicate of code code_na005Times
//Code code_eu009 is a duplicate of code code_na005
const struct IrCode code_eu009Code PROGMEM = {
	freq_to_timerval(35715),
	code_na005Times,
	{
		0x41,
		0x00,
		0x00,
		0x10,
		0x2C,
		0x10,
		0x00,
		0x01,
		0x03,
		0x00,
	}
};
//code_eu010Times is a Duplicate of code code_na004Times
//Code code_eu010 is a duplicate of code code_na004
const struct IrCode code_eu010Code PROGMEM = {
	freq_to_timerval(38462),
	code_na004Times,
	{
		0x58,
		0x00,
		0x00,
		0x41,
		0x24,
		0x92,
		0x08,
		0x20,
		0x10,
		0x01,
		0x04,
		0x82,
		0x4C,
		0x55,
		0x60,
	}
};
//code_eu011Times is a Duplicate of code code_na009Times
const struct IrCode code_eu011Code PROGMEM = {
	freq_to_timerval(38462),
	code_na009Times,
	{
		0x59,
		0x00,
		0x12,
		0x01,
		0x00,
		0x80,
		0x41,
		0x20,
		0x02,
		0x40,
		0x04,
		0x90,
		0x0C,
		0x55,
		0x60,
	}
};
//Debugger break point

// 148
const uint16_t code_eu012Times[] PROGMEM = {
	48, 204,
	48, 458,
	48, 3446,
	48, 0,
};

const struct IrCode code_eu012Code PROGMEM = {
	freq_to_timerval(33330),
	code_eu012Times,
	{
		0x81,
		0x40,
		0x54,
		0x60,
		0x50,
		0x15,
		0x1C,
	}
};
//code_eu013Times is a Duplicate of code code_na135Times
const struct IrCode code_eu013Code PROGMEM = {
	freq_to_timerval(38461),
	code_na135Times,
	{
		0x51,
		0x20,
		0x92,
		0x40,
		0x00,
		0x00,
		0x08,
		0x00,
		0x12,
		0x49,
		0x20,
		0x00,
		0x00,
		0x04,
		0x92,
		0x49,
		0x2D,
		0x12,
		0x09,
		0x24,
		0x00,
		0x00,
		0x00,
		0x80,
		0x01,
		0x24,
		0x92,
		0x00,
		0x00,
		0x00,
		0x49,
		0x24,
		0x93,
		0x00,
	}
};
//code_eu014Times is a Duplicate of code code_na021Times
//Code code_eu014 is a duplicate of code code_na021
const struct IrCode code_eu014Code PROGMEM = {
	freq_to_timerval(38461),
	code_na021Times,
	{
		0x50,
		0x04,
		0x10,
		0x03,
		0x20,
		0x82,
		0x00,
		0x88,
		0x02,
		0x08,
		0x01,
		0x90,
		0x41,
		0x00,
		0x50,
	}
};

// 151
const uint16_t code_eu015Times[] PROGMEM = {
	55, 52,
	55, 154,
	854, 422,
	55, 2541,
	55, 0,
};

const struct IrCode code_eu015Code PROGMEM = {
	freq_to_timerval(38461),
	code_eu015Times,
	{
		0x50,
		0x20,
		0x82,
		0x09,
		0x04,
		0x10,
		0x40,
		0x04,
		0x90,
		0x01,
		0x20,
		0x02,
		0x4B,
		0x40,
		0x82,
		0x08,
		0x24,
		0x10,
		0x41,
		0x00,
		0x12,
		0x40,
		0x04,
		0x80,
		0x09,
		0x2D,
		0x02,
		0x08,
		0x20,
		0x90,
		0x41,
		0x04,
		0x00,
		0x49,
		0x00,
		0x12,
		0x00,
		0x24,
		0xB4,
		0x08,
		0x20,
		0x82,
		0x41,
		0x04,
		0x10,
		0x01,
		0x24,
		0x00,
		0x48,
		0x00,
		0x93,
		0x00,
	}
};

// 152
const uint16_t code_eu016Times[] PROGMEM = {
	30, 90,
	30, 211,
	30, 2770,
	30, 0,
};

const struct IrCode code_eu016Code PROGMEM = {
	freq_to_timerval(33329),
	code_eu016Times,
	{
		0x95,
		0x01,
		0x04,
		0x00,
		0x25,
		0x40,
		0x41,
		0x00,
		0x0C,
	}
};

// 153
const uint16_t code_eu017Times[] PROGMEM = {
	18, 556,
	18, 842,
	18, 5222,
	18, 0,
};

const struct IrCode code_eu017Code PROGMEM = {
	freq_to_timerval(33323),
	code_eu017Times,
	{
		0x91,
		0x51,
		0x51,
		0x91,
		0x51,
		0x51,
		0xC0,
	}
};
//code_eu018Times is a Duplicate of code code_na004Times
const struct IrCode code_eu018Code PROGMEM = {
	freq_to_timerval(38462),
	code_na004Times,
	{
		0x58,
		0x00,
		0x92,
		0x01,
		0x24,
		0x00,
		0x48,
		0x04,
		0x90,
		0x01,
		0x20,
		0x02,
		0x4C,
		0x55,
		0x60,
	}
};

// 155
const uint16_t code_eu019Times[] PROGMEM = {
	52, 52,
	52, 157,
	845, 416,
	52, 417,
	52, 2441,
	52, 0,
};

const struct IrCode code_eu019Code PROGMEM = {
	freq_to_timerval(38462),
	code_eu019Times,
	{
		0x50,
		0x20,
		0x00,
		0x03,
		0x04,
		0x90,
		0x00,
		0x88,
		0x10,
		0x00,
		0x01,
		0x82,
		0x48,
		0x00,
		0x50,
	}
};

// 156
const uint16_t code_eu020Times[] PROGMEM = {
	50, 299,
	50, 650,
	50, 999,
	50, 2999,
	50, 0,
};

const struct IrCode code_eu020Code PROGMEM = {
	freq_to_timerval(35713),
	code_eu020Times,
	{
		0x42,
		0x08,
		0x20,
		0x00,
		0x00,
		0x00,
		0x58,
		0x41,
		0x04,
		0x00,
		0x00,
		0x00,
		0x0C,
	}
};
//Debugger breakpoint
//code_eu021Times is a Duplicate of code code_na009Times
const struct IrCode code_eu021Code PROGMEM = {
	freq_to_timerval(38462),
	code_na009Times,
	{
		0x59,
		0x20,
		0x00,
		0x08,
		0x20,
		0x92,
		0x40,
		0x00,
		0x80,
		0x01,
		0x24,
		0x12,
		0x4C,
		0x55,
		0x60,
	}
};
//Debugger breakpoint
//code_eu022Times is a Duplicate of code code_na004Times
const struct IrCode code_eu022Code PROGMEM = {
	freq_to_timerval(38462),
	code_na004Times,
	{
		0x59,
		0x20,
		0x10,
		0x40,
		0x04,
		0x82,
		0x09,
		0x24,
		0x10,
		0x00,
		0x00,
		0x82,
		0x4C,
		0x55,
		0x60,
	}
};
//Debugger breakpoint
//code_eu023Times is a Duplicate of code code_na022Times
//Code code_eu023 is a duplicate of code code_na022
const struct IrCode code_eu023Code PROGMEM = {
	freq_to_timerval(38462),
	code_na022Times,
	{
		0x58,
		0x00,
		0x90,
		0x00,
		0x00,
		0x90,
		0x00,
		0x00,
		0x00,
		0x49,
		0x24,
		0x92,
		0x04,
		0x55,
		0x60,
	}
};
//Debugger breakpoint
//code_eu024Times is a Duplicate of code code_na004Times
const struct IrCode code_eu024Code PROGMEM = {
	freq_to_timerval(38462),
	code_na004Times,
	{
		0x58,
		0x00,
		0x92,
		0x01,
		0x24,
		0x00,
		0x48,
		0x00,
		0x10,
		0x01,
		0x24,
		0x82,
		0x4C,
		0x55,
		0x60,
	}
};
//Debugger breakpoint

// 161
const uint16_t code_eu025Times[] PROGMEM = {
	51, 50,
	102, 50,
	51, 100,
	102, 100,
	51, 249,
	51, 2376,
	51, 12009,
	51, 0,
};

const struct IrCode code_eu025Code PROGMEM = {
	freq_to_timerval(31249),
	code_eu025Times,
	{
		0x62,
		0x20,
		0x0B,
		0x13,
		0x00,
		0x68,
		0x98,
		0x03,
		0x80,
	}
};

// 162
const uint16_t code_eu026Times[] PROGMEM = {
	16, 490,
	16, 741,
	16, 4925,
	16, 0,
};

const struct IrCode code_eu026Code PROGMEM = {
	freq_to_timerval(38450),
	code_eu026Times,
	{
		0x95,
		0x50,
		0x10,
		0x95,
		0x50,
		0x10,
		0xC0,
	}
};
//code_eu027Times is a Duplicate of code code_na004Times
const struct IrCode code_eu027Code PROGMEM = {
	freq_to_timerval(38462),
	code_na004Times,
	{
		0x58,
		0x20,
		0x82,
		0x09,
		0x04,
		0x10,
		0x41,
		0x04,
		0x00,
		0x48,
		0x20,
		0x92,
		0x04,
		0x55,
		0x60,
	}
};

// 164
const uint16_t code_eu028Times[] PROGMEM = {
	53, 53,
	102, 55,
	53, 108,
	51, 263,
	53, 2053,
	53, 12117,
	53, 0,
};

const struct IrCode code_eu028Code PROGMEM = {
	freq_to_timerval(30302),
	code_eu028Times,
	{
		0x58,
		0x00,
		0x00,
		0x00,
		0x8D,
		0x02,
		0x80,
		0x02,
		0xB4,
		0x0A,
		0x00,
		0x0C,
	}
};

// 165
const uint16_t code_eu029Times[] PROGMEM = {
	104, 47,
	52, 48,
	104, 96,
	52, 97,
	52, 249,
	52, 1444,
	52, 11014,
	52, 0,
};

const struct IrCode code_eu029Code PROGMEM = {
	freq_to_timerval(34481),
	code_eu029Times,
	{
		0x63,
		0x04,
		0x92,
		0x49,
		0x24,
		0x93,
		0x63,
		0x21,
		0x92,
		0x51,
		0x24,
		0x9D,
		0x19,
		0x0C,
		0x92,
		0x89,
		0x24,
		0xF0,
	}
};
//code_eu030Times is a Duplicate of code code_na004Times
const struct IrCode code_eu030Code PROGMEM = {
	freq_to_timerval(38462),
	code_na004Times,
	{
		0x58,
		0x04,
		0x00,
		0x01,
		0x20,
		0x92,
		0x48,
		0x00,
		0x80,
		0x01,
		0x24,
		0x12,
		0x4C,
		0x55,
		0x60,
	}
};

// 167
const uint16_t code_eu031Times[] PROGMEM = {
	55, 51,
	55, 158,
	840, 420,
	55, 1695,
	55, 0,
};

const struct IrCode code_eu031Code PROGMEM = {
	freq_to_timerval(38461),
	code_eu031Times,
	{
		0x51,
		0x24,
		0x90,
		0x01,
		0x24,
		0x10,
		0x4B,
		0x24,
		0x92,
		0x00,
		0x24,
		0x82,
		0x09,
		0x64,
		0x92,
		0x40,
		0x04,
		0x90,
		0x41,
		0x30,
	}
};

// 168
const uint16_t code_eu032Times[] PROGMEM = {
	51, 203,
	51, 454,
	51, 3689,
	51, 0,
};

const struct IrCode code_eu032Code PROGMEM = {
	freq_to_timerval(33332),
	code_eu032Times,
	{
		0x81,
		0x40,
		0x54,
		0x20,
		0x50,
		0x15,
		0x0C,
	}
};

// 169
const uint16_t code_eu033Times[] PROGMEM = {
	51, 147,
	52, 345,
	52, 2935,
	52, 0,
};

const struct IrCode code_eu033Code PROGMEM = {
	freq_to_timerval(38459),
	code_eu033Times,
	{
		0x85,
		0x42,
		0x15,
		0x0C,
	}
};
//code_eu034Times is a Duplicate of code code_na004Times
const struct IrCode code_eu034Code PROGMEM = {
	freq_to_timerval(38462),
	code_na004Times,
	{
		0x58,
		0x00,
		0x90,
		0x01,
		0x24,
		0x02,
		0x48,
		0x00,
		0x80,
		0x01,
		0x24,
		0x12,
		0x4C,
		0x55,
		0x60,
	}
};
//code_eu035Times is a Duplicate of code code_na005Times
//Code code_eu035 is a duplicate of code code_na005
const struct IrCode code_eu035Code PROGMEM = {
	freq_to_timerval(35715),
	code_na005Times,
	{
		0x41,
		0x00,
		0x00,
		0x10,
		0x2C,
		0x10,
		0x00,
		0x01,
		0x03,
		0x00,
	}
};
//code_eu036Times is a Duplicate of code code_na004Times
const struct IrCode code_eu036Code PROGMEM = {
	freq_to_timerval(38462),
	code_na004Times,
	{
		0x59,
		0x00,
		0x12,
		0x40,
		0x24,
		0x80,
		0x08,
		0x00,
		0x80,
		0x01,
		0x24,
		0x12,
		0x4C,
		0x55,
		0x60,
	}
};

// 173
const uint16_t code_eu037Times[] PROGMEM = {
	16, 490,
	16, 741,
	16, 5177,
	16, 0,
};

const struct IrCode code_eu037Code PROGMEM = {
	freq_to_timerval(38451),
	code_eu037Times,
	{
		0x91,
		0x54,
		0x00,
		0x91,
		0x54,
		0x00,
		0xC0,
	}
};

// 174
const uint16_t code_eu038Times[] PROGMEM = {
	3, 1002,
	3, 1495,
	3, 3060,
	3, 0,
};

const struct IrCode code_eu038Code PROGMEM = {
	PULSE_CODE,
	code_eu038Times,
	{
		0x81,
		0x58,
		0x15,
		0xC0,
	}
};

// 175
const uint16_t code_eu039Times[] PROGMEM = {
	15, 444,
	15, 672,
	15, 4582,
	15, 0,
};

const struct IrCode code_eu039Code PROGMEM = {
	freq_to_timerval(39988),
	code_eu039Times,
	{
		0x95,
		0x50,
		0x50,
		0x95,
		0x50,
		0x50,
		0xC0,
	}
};

// 176
const uint16_t code_eu040Times[] PROGMEM = {
	87, 88,
	87, 262,
	350, 347,
	87, 3401,
	87, 0,
};

const struct IrCode code_eu040Code PROGMEM = {
	freq_to_timerval(35714),
	code_eu040Times,
	{
		0x50,
		0x24,
		0x10,
		0x08,
		0x20,
		0x10,
		0x08,
		0x24,
		0x10,
		0x4B,
		0x40,
		0x90,
		0x40,
		0x20,
		0x80,
		0x40,
		0x20,
		0x90,
		0x41,
		0x30,
	}
};

// 177
const uint16_t code_eu041Times[] PROGMEM = {
	50, 296,
	51, 646,
	51, 995,
	51, 3055,
	51, 0,
};

const struct IrCode code_eu041Code PROGMEM = {
	freq_to_timerval(33332),
	code_eu041Times,
	{
		0x42,
		0x08,
		0x20,
		0x49,
		0x20,
		0x30,
		0x82,
		0x08,
		0x12,
		0x48,
		0x10,
	}
};
//code_eu042Times is a Duplicate of code code_na009Times
const struct IrCode code_eu042Code PROGMEM = {
	freq_to_timerval(38462),
	code_na009Times,
	{
		0x58,
		0x00,
		0x00,
		0x09,
		0x24,
		0x82,
		0x40,
		0x20,
		0x80,
		0x01,
		0x04,
		0x12,
		0x4C,
		0x55,
		0x60,
	}
};

// 179
const uint16_t code_eu043Times[] PROGMEM = {
	1039, 4215,
	1042, 0,
};

const struct IrCode code_eu043Code PROGMEM = {
	freq_to_timerval(41669),
	code_eu043Times,
	{
		0x84,
	}
};
//code_eu044Times is a Duplicate of code code_na004Times
const struct IrCode code_eu044Code PROGMEM = {
	freq_to_timerval(38462),
	code_na004Times,
	{
		0x58,
		0x00,
		0x80,
		0x41,
		0x24,
		0x12,
		0x08,
		0x00,
		0x00,
		0x01,
		0x24,
		0x92,
		0x4C,
		0x55,
		0x60,
	}
};

// 181
const uint16_t code_eu045Times[] PROGMEM = {
	156, 155,
	155, 468,
	156, 2946,
	156, 0,
};

const struct IrCode code_eu045Code PROGMEM = {
	freq_to_timerval(41668),
	code_eu045Times,
	{
		0x90,
		0x64,
		0x1C,
	}
};

// 182
const uint16_t code_eu046Times[] PROGMEM = {
	17, 490,
	17, 696,
	17, 1412,
	17, 0,
};

const struct IrCode code_eu046Code PROGMEM = {
	freq_to_timerval(34472),
	code_eu046Times,
	{
		0x80,
		0x55,
		0x80,
		0x55,
		0xC0,
	}
};

// 183
const uint16_t code_eu047Times[] PROGMEM = {
	3, 496,
	3, 745,
	3, 1488,
	3, 0,
};

const struct IrCode code_eu047Code PROGMEM = {
	PULSE_CODE,
	code_eu047Times,
	{
		0x90,
		0x49,
		0x04,
		0x90,
		0x4C,
	}
};
//code_eu048Times is a Duplicate of code code_na009Times
const struct IrCode code_eu048Code PROGMEM = {
	freq_to_timerval(38461),
	code_na009Times,
	{
		0x58,
		0x00,
		0x00,
		0x09,
		0x20,
		0x92,
		0x41,
		0x20,
		0x10,
		0x00,
		0x04,
		0x82,
		0x4C,
		0x55,
		0x60,
	}
};

// 185
const uint16_t code_eu049Times[] PROGMEM = {
	57, 53,
	57, 165,
	451, 442,
	57, 4576,
	57, 9506,
	57, 0,
};

const struct IrCode code_eu049Code PROGMEM = {
	freq_to_timerval(38462),
	code_eu049Times,
	{
		0x50,
		0x24,
		0x80,
		0x00,
		0x24,
		0x80,
		0x00,
		0x04,
		0x10,
		0x01,
		0x20,
		0x82,
		0x4B,
		0x46,
		0x23,
		0x40,
	}
};

// 186
const uint16_t code_eu050Times[] PROGMEM = {
	93, 86,
	93, 265,
	363, 356,
	93, 3620,
	93, 0,
};

const struct IrCode code_eu050Code PROGMEM = {
	freq_to_timerval(33334),
	code_eu050Times,
	{
		0x50,
		0x00,
		0x00,
		0x00,
		0x04,
		0x92,
		0x49,
		0x24,
		0x90,
		0xD0,
		0x00,
		0x00,
		0x00,
		0x04,
		0x92,
		0x49,
		0x24,
		0x91,
		0x00,
	}
};

// 187
const uint16_t code_eu051Times[] PROGMEM = {
	86, 87,
	86, 260,
	348, 346,
	86, 3359,
	86, 0,
};

const struct IrCode code_eu051Code PROGMEM = {
	freq_to_timerval(38461),
	code_eu051Times,
	{
		0x50,
		0x20,
		0x80,
		0x08,
		0x20,
		0x10,
		0x41,
		0x24,
		0x10,
		0x4B,
		0x40,
		0x82,
		0x00,
		0x20,
		0x80,
		0x41,
		0x04,
		0x90,
		0x41,
		0x30,
	}
};

// 188
const uint16_t code_eu052Times[] PROGMEM = {
	19, 556,
	19, 836,
	19, 6327,
	19, 0,
};

const struct IrCode code_eu052Code PROGMEM = {
	freq_to_timerval(31241),
	code_eu052Times,
	{
		0x91,
		0x51,
		0x51,
		0x91,
		0x51,
		0x51,
		0xC0,
	}
};
//code_eu053Times is a Duplicate of code code_eu046Times
const struct IrCode code_eu053Code PROGMEM = {
	freq_to_timerval(34472),
	code_eu046Times,
	{
		0x84,
		0x55,
		0x84,
		0x55,
		0xC0,
	}
};

// 190
const uint16_t code_eu054Times[] PROGMEM = {
	51, 50,
	51, 101,
	102, 101,
	51, 260,
	51, 8029,
	51, 0,
};

const struct IrCode code_eu054Code PROGMEM = {
	freq_to_timerval(31248),
	code_eu054Times,
	{
		0x58,
		0x05,
		0x08,
		0xC0,
		0x28,
		0x50,
	}
};
//code_eu055Times is a Duplicate of code code_na009Times
const struct IrCode code_eu055Code PROGMEM = {
	freq_to_timerval(38462),
	code_na009Times,
	{
		0x58,
		0x00,
		0x00,
		0x08,
		0x24,
		0x92,
		0x40,
		0x00,
		0x90,
		0x01,
		0x24,
		0x02,
		0x4C,
		0x55,
		0x60,
	}
};

// 192
const uint16_t code_eu056Times[] PROGMEM = {
	114, 105,
	679, 2764,
	679, 0,
};

const struct IrCode code_eu056Code PROGMEM = {
	freq_to_timerval(38463),
	code_eu056Times,
	{
		0x84,
		0x80,
	}
};
//code_eu057Times is a Duplicate of code code_na004Times
const struct IrCode code_eu057Code PROGMEM = {
	freq_to_timerval(38462),
	code_na004Times,
	{
		0x58,
		0x00,
		0x10,
		0x41,
		0x24,
		0x82,
		0x08,
		0x00,
		0x80,
		0x01,
		0x24,
		0x12,
		0x4C,
		0x55,
		0x60,
	}
};
//code_eu058Times is a Duplicate of code code_na009Times
const struct IrCode code_eu058Code PROGMEM = {
	freq_to_timerval(38462),
	code_na009Times,
	{
		0x58,
		0x00,
		0x00,
		0x09,
		0x04,
		0x12,
		0x40,
		0x20,
		0x80,
		0x01,
		0x04,
		0x12,
		0x4C,
		0x55,
		0x60,
	}
};

// 195
const uint16_t code_eu059Times[] PROGMEM = {
	312, 611,
	624, 8311,
	624, 0,
};

const struct IrCode code_eu059Code PROGMEM = {
	freq_to_timerval(41669),
	code_eu059Times,
	{
		0x84,
		0x80,
	}
};

// 196
const uint16_t code_eu060Times[] PROGMEM = {
	55, 49,
	54, 154,
	55, 2178,
	55, 0,
};

const struct IrCode code_eu060Code PROGMEM = {
	freq_to_timerval(38461),
	code_eu060Times,
	{
		0x94,
		0x01,
		0x11,
		0x41,
		0x65,
		0x00,
		0x44,
		0x50,
		0x5C,
	}
};
//code_eu061Times is a Duplicate of code code_na005Times
const struct IrCode code_eu061Code PROGMEM = {
	freq_to_timerval(35714),
	code_na005Times,
	{
		0x41,
		0x00,
		0x04,
		0x40,
		0x0C,
		0x10,
		0x00,
		0x44,
		0x01,
		0x00,
	}
};
//code_eu062Times is a Duplicate of code code_eu060Times
const struct IrCode code_eu062Code PROGMEM = {
	freq_to_timerval(38461),
	code_eu060Times,
	{
		0x94,
		0x11,
		0x11,
		0x41,
		0x65,
		0x04,
		0x44,
		0x50,
		0x5C,
	}
};
//code_eu063Times is a Duplicate of code code_na009Times
const struct IrCode code_eu063Code PROGMEM = {
	freq_to_timerval(38462),
	code_na009Times,
	{
		0x58,
		0x00,
		0x00,
		0x09,
		0x24,
		0x10,
		0x40,
		0x20,
		0x80,
		0x01,
		0x04,
		0x12,
		0x4C,
		0x55,
		0x60,
	}
};

// 200
const uint16_t code_eu064Times[] PROGMEM = {
	53, 53,
	102, 55,
	53, 108,
	102, 110,
	51, 263,
	53, 2053,
	53, 12117,
	53, 0,
};

const struct IrCode code_eu064Code PROGMEM = {
	freq_to_timerval(30302),
	code_eu064Times,
	{
		0x60,
		0x00,
		0x00,
		0x00,
		0xB0,
		0x04,
		0x0A,
		0x7A,
		0x00,
		0x81,
		0x4F,
		0x80,
	}
};

// 201
const uint16_t code_eu065Times[] PROGMEM = {
	53, 53,
	53, 108,
	102, 110,
	51, 263,
	53, 2053,
	53, 12117,
	53, 0,
};

const struct IrCode code_eu065Code PROGMEM = {
	freq_to_timerval(30301),
	code_eu065Times,
	{
		0x58,
		0x00,
		0x00,
		0x00,
		0x8C,
		0x00,
		0x42,
		0x02,
		0xB0,
		0x01,
		0x08,
		0x0C,
	}
};
//code_eu066Times is a Duplicate of code code_eu049Times
const struct IrCode code_eu066Code PROGMEM = {
	freq_to_timerval(38462),
	code_eu049Times,
	{
		0x51,
		0x20,
		0x80,
		0x01,
		0x20,
		0x80,
		0x00,
		0x20,
		0x80,
		0x01,
		0x04,
		0x12,
		0x4B,
		0x42,
		0x21,
		0x40,
	}
};

// 203
const uint16_t code_eu067Times[] PROGMEM = {
	96, 472,
	96, 726,
	104, 1635,
	104, 0,
};

const struct IrCode code_eu067Code PROGMEM = {
	freq_to_timerval(38462),
	code_eu067Times,
	{
		0x90,
		0x49,
		0x04,
		0xC0,
	}
};

// 204
const uint16_t code_eu068Times[] PROGMEM = {
	52, 53,
	52, 107,
	101, 108,
	52, 261,
	52, 2027,
	52, 10199,
	52, 0,
};

const struct IrCode code_eu068Code PROGMEM = {
	freq_to_timerval(38460),
	code_eu068Times,
	{
		0x58,
		0x00,
		0x00,
		0x00,
		0x8C,
		0x80,
		0x02,
		0x02,
		0xB2,
		0x00,
		0x08,
		0x0C,
	}
};

// 205
const uint16_t code_eu069Times[] PROGMEM = {
	4, 499,
	4, 750,
	4, 4999,
	4, 0,
};

const struct IrCode code_eu069Code PROGMEM = {
	PULSE_CODE,
	code_eu069Times,
	{
		0x81,
		0x55,
		0x01,
		0x81,
		0x55,
		0x01,
		0xC0,
	}
};
//code_eu070Times is a Duplicate of code code_eu069Times
const struct IrCode code_eu070Code PROGMEM = {
	PULSE_CODE,
	code_eu069Times,
	{
		0x85,
		0x15,
		0x01,
		0x85,
		0x15,
		0x01,
		0xC0,
	}
};

// 207
const uint16_t code_eu071Times[] PROGMEM = {
	16, 490,
	16, 741,
	16, 4421,
	16, 0,
};

const struct IrCode code_eu071Code PROGMEM = {
	freq_to_timerval(38450),
	code_eu071Times,
	{
		0x91,
		0x51,
		0x15,
		0x91,
		0x51,
		0x15,
		0xC0,
	}
};

// 208
const uint16_t code_eu072Times[] PROGMEM = {
	5, 568,
	5, 854,
	5, 4999,
	5, 0,
};

const struct IrCode code_eu072Code PROGMEM = {
	PULSE_CODE,
	code_eu072Times,
	{
		0x95,
		0x51,
		0x51,
		0x95,
		0x51,
		0x51,
		0xC0,
	}
};
//code_eu073Times is a Duplicate of code code_eu046Times
const struct IrCode code_eu073Code PROGMEM = {
	freq_to_timerval(34472),
	code_eu046Times,
	{
		0x81,
		0x00,
		0x81,
		0x00,
		0xC0,
	}
};
//code_eu074Times is a Duplicate of code code_na005Times
const struct IrCode code_eu074Code PROGMEM = {
	freq_to_timerval(35714),
	code_na005Times,
	{
		0x40,
		0x00,
		0x00,
		0x02,
		0x05,
		0x80,
		0x00,
		0x00,
		0x04,
		0x0C,
	}
};

// 211
const uint16_t code_eu075Times[] PROGMEM = {
	7, 566,
	7, 851,
	7, 5475,
	7, 0,
};

const struct IrCode code_eu075Code PROGMEM = {
	PULSE_CODE,
	code_eu075Times,
	{
		0x81,
		0x51,
		0x51,
		0x81,
		0x51,
		0x51,
		0xC0,
	}
};

// 212
const uint16_t code_eu076Times[] PROGMEM = {
	18, 553,
	17, 840,
	18, 4910,
	18, 0,
};

const struct IrCode code_eu076Code PROGMEM = {
	freq_to_timerval(38452),
	code_eu076Times,
	{
		0x95,
		0x51,
		0x51,
		0x95,
		0x51,
		0x51,
		0xC0,
	}
};
//code_eu077Times is a Duplicate of code code_eu028Times
const struct IrCode code_eu077Code PROGMEM = {
	freq_to_timerval(30303),
	code_eu028Times,
	{
		0x58,
		0x00,
		0x00,
		0x00,
		0x8C,
		0x04,
		0x0A,
		0x02,
		0xB0,
		0x10,
		0x28,
		0x0C,
	}
};

// 214
const uint16_t code_eu078Times[] PROGMEM = {
	6, 925,
	6, 1339,
	6, 2098,
	6, 2787,
	6, 0,
};

const struct IrCode code_eu078Code PROGMEM = {
	PULSE_CODE,
	code_eu078Times,
	{
		0x51,
		0x00,
		0x06,
		0x40,
		0x02,
		0x00,
	}
};

// 215
const uint16_t code_eu079Times[] PROGMEM = {
	55, 57,
	55, 169,
	894, 445,
	55, 4358,
	55, 0,
};

const struct IrCode code_eu079Code PROGMEM = {
	freq_to_timerval(38461),
	code_eu079Times,
	{
		0x50,
		0x00,
		0x00,
		0x09,
		0x20,
		0x02,
		0x41,
		0x24,
		0x80,
		0x00,
		0x00,
		0x12,
		0x4B,
		0x40,
		0x00,
		0x00,
		0x24,
		0x80,
		0x09,
		0x04,
		0x92,
		0x00,
		0x00,
		0x00,
		0x49,
		0x30,
	}
};

// 216
const uint16_t code_eu080Times[] PROGMEM = {
	57, 56,
	57, 166,
	898, 446,
	57, 4415,
	57, 0,
};

const struct IrCode code_eu080Code PROGMEM = {
	freq_to_timerval(38460),
	code_eu080Times,
	{
		0x50,
		0x00,
		0x00,
		0x08,
		0x04,
		0x02,
		0x41,
		0x00,
		0x80,
		0x40,
		0x24,
		0x12,
		0x0B,
		0x40,
		0x00,
		0x00,
		0x20,
		0x10,
		0x09,
		0x04,
		0x02,
		0x01,
		0x00,
		0x90,
		0x48,
		0x30,
	}
};

// 217
const uint16_t code_eu081Times[] PROGMEM = {
	29, 78,
	29, 183,
	29, 4248,
	29, 0,
};

const struct IrCode code_eu081Code PROGMEM = {
	freq_to_timerval(38456),
	code_eu081Times,
	{
		0x91,
		0x41,
		0x44,
		0x04,
		0x91,
		0x44,
		0x11,
		0x51,
		0x91,
		0x41,
		0x44,
		0x04,
		0x91,
		0x44,
		0x11,
		0x51,
		0x91,
		0x41,
		0x44,
		0x04,
		0xC0,
	}
};

// 218
const uint16_t code_eu082Times[] PROGMEM = {
	52, 54,
	52, 161,
	851, 428,
	52, 2841,
	52, 0,
};

const struct IrCode code_eu082Code PROGMEM = {
	freq_to_timerval(40000),
	code_eu082Times,
	{
		0x50,
		0x20,
		0x82,
		0x09,
		0x04,
		0x10,
		0x41,
		0x20,
		0x90,
		0x00,
		0x04,
		0x02,
		0x4B,
		0x40,
		0x82,
		0x08,
		0x24,
		0x10,
		0x41,
		0x04,
		0x82,
		0x40,
		0x00,
		0x10,
		0x09,
		0x30,
	}
};

// 219
const uint16_t code_eu083Times[] PROGMEM = {
	18, 557,
	18, 846,
	18, 5899,
	18, 0,
};

const struct IrCode code_eu083Code PROGMEM = {
	freq_to_timerval(33325),
	code_eu083Times,
	{
		0x81,
		0x11,
		0x51,
		0x81,
		0x11,
		0x51,
		0xC0,
	}
};

// 220
const uint16_t code_eu084Times[] PROGMEM = {
	18, 483,
	18, 737,
	18, 4794,
	18, 0,
};

const struct IrCode code_eu084Code PROGMEM = {
	freq_to_timerval(38451),
	code_eu084Times,
	{
		0x95,
		0x54,
		0x00,
		0x95,
		0x54,
		0x00,
		0xC0,
	}
};

// 221
const uint16_t code_eu085Times[] PROGMEM = {
	49, 51,
	49, 158,
	801, 398,
	49, 399,
	49, 2119,
	49, 0,
};

const struct IrCode code_eu085Code PROGMEM = {
	freq_to_timerval(38461),
	code_eu085Times,
	{
		0x51,
		0x20,
		0x90,
		0x03,
		0x24,
		0x92,
		0x00,
		0x88,
		0x90,
		0x48,
		0x01,
		0x92,
		0x49,
		0x00,
		0x50,
	}
};

// 222
const uint16_t code_eu086Times[] PROGMEM = {
	18, 553,
	18, 849,
	18, 4847,
	18, 0,
};

const struct IrCode code_eu086Code PROGMEM = {
	freq_to_timerval(33324),
	code_eu086Times,
	{
		0x91,
		0x51,
		0x51,
		0x91,
		0x51,
		0x51,
		0xC0,
	}
};

// 223
const uint16_t code_eu087Times[] PROGMEM = {
	16, 490,
	16, 741,
	16, 5125,
	16, 0,
};

const struct IrCode code_eu087Code PROGMEM = {
	freq_to_timerval(38449),
	code_eu087Times,
	{
		0x95,
		0x54,
		0x00,
		0x95,
		0x54,
		0x00,
		0xC0,
	}
};

// 224
const uint16_t code_eu088Times[] PROGMEM = {
	16, 490,
	16, 741,
	16, 4873,
	16, 0,
};

const struct IrCode code_eu088Code PROGMEM = {
	freq_to_timerval(38451),
	code_eu088Times,
	{
		0x91,
		0x55,
		0x10,
		0x91,
		0x55,
		0x10,
		0xC0,
	}
};
//code_eu089Times is a Duplicate of code code_na021Times
const struct IrCode code_eu089Code PROGMEM = {
	freq_to_timerval(38461),
	code_na021Times,
	{
		0x51,
		0x04,
		0x10,
		0x03,
		0x20,
		0x82,
		0x00,
		0x88,
		0x82,
		0x08,
		0x01,
		0x90,
		0x41,
		0x00,
		0x50,
	}
};

// 226
const uint16_t code_eu090Times[] PROGMEM = {
	3, 8,
	3, 18,
	3, 28,
	3, 38,
	3, 9969,
	3, 0,
};

const struct IrCode code_eu090Code PROGMEM = {
	PULSE_CODE,
	code_eu090Times,
	{
		0x58,
		0x00,
		0x22,
		0x00,
		0x00,
		0xB8,
		0xC0,
		0x01,
		0x10,
		0x00,
		0x05,
		0xD0,
	}
};

// 227
const uint16_t code_eu091Times[] PROGMEM = {
	16, 137,
	16, 445,
	16, 604,
	16, 6565,
	16, 0,
};

const struct IrCode code_eu091Code PROGMEM = {
	freq_to_timerval(38448),
	code_eu091Times,
	{
		0x50,
		0x00,
		0x00,
		0x40,
		0x00,
		0x26,
		0x80,
		0x00,
		0x02,
		0x00,
		0x01,
		0x40,
	}
};

// 228
const uint16_t code_eu092Times[] PROGMEM = {
	50, 48,
	50, 146,
	50, 1423,
	50, 0,
};

const struct IrCode code_eu092Code PROGMEM = {
	freq_to_timerval(39998),
	code_eu092Times,
	{
		0x91,
		0x10,
		0x02,
		0x44,
		0x40,
		0x0C,
	}
};

// 229
const uint16_t code_eu093Times[] PROGMEM = {
	90, 273,
	90, 637,
	90, 0,
};

const struct IrCode code_eu093Code PROGMEM = {
	freq_to_timerval(35715),
	code_eu093Times,
	{
		0x90,
		0x11,
		0x52,
	}
};

// 230
const uint16_t code_eu094Times[] PROGMEM = {
	3, 8,
	3, 20,
	3, 38,
	3, 9970,
	3, 0,
};

const struct IrCode code_eu094Code PROGMEM = {
	PULSE_CODE,
	code_eu094Times,
	{
		0x50,
		0x20,
		0x12,
		0x00,
		0x00,
		0x26,
		0x81,
		0x00,
		0x90,
		0x00,
		0x01,
		0x40,
	}
};
//code_eu095Times is a Duplicate of code code_eu046Times
const struct IrCode code_eu095Code PROGMEM = {
	freq_to_timerval(34472),
	code_eu046Times,
	{
		0x85,
		0x55,
		0x85,
		0x55,
		0xC0,
	}
};

// 232
const uint16_t code_eu096Times[] PROGMEM = {
	16, 140,
	16, 295,
	16, 449,
	16, 605,
	16, 6206,
	16, 0,
};

const struct IrCode code_eu096Code PROGMEM = {
	freq_to_timerval(38448),
	code_eu096Times,
	{
		0x58,
		0x00,
		0x80,
		0x80,
		0x00,
		0xB8,
		0xC0,
		0x04,
		0x04,
		0x00,
		0x05,
		0xD0,
	}
};
//code_eu097Times is a Duplicate of code code_eu046Times
const struct IrCode code_eu097Code PROGMEM = {
	freq_to_timerval(34472),
	code_eu046Times,
	{
		0x81,
		0x15,
		0x81,
		0x15,
		0xC0,
	}
};

// 234
const uint16_t code_eu098Times[] PROGMEM = {
	3, 8,
	3, 18,
	3, 28,
	3, 12733,
	3, 0,
};

const struct IrCode code_eu098Code PROGMEM = {
	PULSE_CODE,
	code_eu098Times,
	{
		0x50,
		0x00,
		0x00,
		0x40,
		0x01,
		0x34,
		0x09,
		0x24,
		0x10,
		0x00,
		0x50,
	}
};

// 235
const uint16_t code_eu099Times[] PROGMEM = {
	95, 51,
	48, 52,
	95, 104,
	48, 105,
	48, 258,
	48, 1501,
	48, 10963,
	48, 0,
};

const struct IrCode code_eu099Code PROGMEM = {
	freq_to_timerval(35713),
	code_eu099Times,
	{
		0x63,
		0x04,
		0x92,
		0x49,
		0x24,
		0x93,
		0x63,
		0x21,
		0x92,
		0x49,
		0x25,
		0x1D,
		0x19,
		0x0C,
		0x92,
		0x49,
		0x28,
		0xF0,
	}
};
//code_eu100Times is a Duplicate of code code_eu098Times
const struct IrCode code_eu100Code PROGMEM = {
	PULSE_CODE,
	code_eu098Times,
	{
		0x50,
		0x00,
		0x02,
		0x00,
		0x01,
		0x34,
		0x09,
		0x24,
		0x80,
		0x00,
		0x50,
	}
};

// 237
const uint16_t code_eu101Times[] PROGMEM = {
	16, 490,
	16, 741,
	16, 4673,
	16, 0,
};

const struct IrCode code_eu101Code PROGMEM = {
	freq_to_timerval(38447),
	code_eu101Times,
	{
		0x95,
		0x54,
		0x01,
		0x95,
		0x54,
		0x01,
		0xC0,
	}
};
//code_eu102Times is a Duplicate of code code_eu087Times
const struct IrCode code_eu102Code PROGMEM = {
	freq_to_timerval(38450),
	code_eu087Times,
	{
		0x91,
		0x55,
		0x00,
		0x91,
		0x55,
		0x00,
		0xC0,
	}
};

// 239
const uint16_t code_eu103Times[] PROGMEM = {
	46, 527,
	46, 813,
	46, 4999,
	46, 0,
};

const struct IrCode code_eu103Code PROGMEM = {
	freq_to_timerval(34480),
	code_eu103Times,
	{
		0x95,
		0x11,
		0x51,
		0x95,
		0x11,
		0x51,
		0xC0,
	}
};

// 240
const uint16_t code_eu104Times[] PROGMEM = {
	16, 490,
	16, 741,
	16, 5881,
	16, 0,
};

const struct IrCode code_eu104Code PROGMEM = {
	freq_to_timerval(38449),
	code_eu104Times,
	{
		0x91,
		0x10,
		0x00,
		0x91,
		0x10,
		0x00,
		0xC0,
	}
};
//code_eu105Times is a Duplicate of code code_na009Times
const struct IrCode code_eu105Code PROGMEM = {
	freq_to_timerval(38462),
	code_na009Times,
	{
		0x59,
		0x04,
		0x00,
		0x08,
		0x24,
		0x00,
		0x40,
		0x20,
		0x10,
		0x01,
		0x04,
		0x82,
		0x4C,
		0x55,
		0x60,
	}
};

// 242
const uint16_t code_eu106Times[] PROGMEM = {
	52, 45,
	101, 46,
	52, 92,
	101, 93,
	51, 243,
	52, 1486,
	52, 10970,
	52, 0,
};

const struct IrCode code_eu106Code PROGMEM = {
	freq_to_timerval(38461),
	code_eu106Times,
	{
		0x62,
		0x20,
		0x00,
		0x00,
		0x00,
		0x00,
		0x2C,
		0x40,
		0xA0,
		0x00,
		0x6C,
		0xAD,
		0x10,
		0x28,
		0x00,
		0x1B,
		0x2B,
		0x44,
		0x0A,
		0x00,
		0x06,
		0xCA,
		0xE0,
	}
};
//code_eu107Times is a Duplicate of code code_eu083Times
const struct IrCode code_eu107Code PROGMEM = {
	freq_to_timerval(33324),
	code_eu083Times,
	{
		0x95,
		0x51,
		0x51,
		0x95,
		0x51,
		0x51,
		0xC0,
	}
};

// 244
const uint16_t code_eu108Times[] PROGMEM = {
	16, 490,
	16, 741,
	16, 4621,
	16, 0,
};

const struct IrCode code_eu108Code PROGMEM = {
	freq_to_timerval(38450),
	code_eu108Times,
	{
		0x91,
		0x55,
		0x05,
		0x91,
		0x55,
		0x05,
		0xC0,
	}
};

#ifndef NA_CODES
// 245
const uint16_t code_eu109Times[] PROGMEM = {
	29, 77,
	28, 181,
	29, 1541,
	29, 0,
};

const struct IrCode code_eu109Code PROGMEM = {
	freq_to_timerval(38458),
	code_eu109Times,
	{
		0x91,
		0x10,
		0x02,
		0x44,
		0x40,
		0x0C,
	}
};

// 246
const uint16_t code_eu110Times[] PROGMEM = {
	57, 54,
	57, 167,
	450, 451,
	57, 4849,
	57, 0,
};

const struct IrCode code_eu110Code PROGMEM = {
	freq_to_timerval(38460),
	code_eu110Times,
	{
		0x51,
		0x04,
		0x00,
		0x01,
		0x04,
		0x00,
		0x00,
		0x20,
		0x00,
		0x01,
		0x04,
		0x92,
		0x4B,
		0x44,
		0x10,
		0x00,
		0x04,
		0x10,
		0x00,
		0x00,
		0x80,
		0x00,
		0x04,
		0x12,
		0x49,
		0x30,
	}
};

// 247
const uint16_t code_eu111Times[] PROGMEM = {
	51, 50,
	102, 50,
	102, 100,
	51, 249,
	51, 2376,
	51, 12009,
	51, 0,
};

const struct IrCode code_eu111Code PROGMEM = {
	freq_to_timerval(31248),
	code_eu111Times,
	{
		0x58,
		0x20,
		0x08,
		0xC2,
		0x00,
		0x56,
		0x10,
		0x03,
		0x00,
	}
};

// 248
const uint16_t code_eu112Times[] PROGMEM = {
	57, 53,
	57, 165,
	451, 442,
	57, 5022,
	57, 9506,
	57, 0,
};

const struct IrCode code_eu112Code PROGMEM = {
	freq_to_timerval(38461),
	code_eu112Times,
	{
		0x50,
		0x00,
		0x80,
		0x00,
		0x00,
		0x80,
		0x01,
		0x24,
		0x80,
		0x00,
		0x00,
		0x12,
		0x4B,
		0x46,
		0x23,
		0x40,
	}
};
//code_eu113Times is a Duplicate of code code_eu054Times
const struct IrCode code_eu113Code PROGMEM = {
	freq_to_timerval(31250),
	code_eu054Times,
	{
		0x59,
		0x40,
		0x08,
		0xCA,
		0x00,
		0x50,
	}
};
//code_eu114Times is a Duplicate of code code_eu028Times
const struct IrCode code_eu114Code PROGMEM = {
	freq_to_timerval(30302),
	code_eu028Times,
	{
		0x58,
		0x00,
		0x00,
		0x00,
		0x8D,
		0x02,
		0x10,
		0x02,
		0xB4,
		0x08,
		0x40,
		0x0C,
	}
};

// 251
const uint16_t code_eu115Times[] PROGMEM = {
	49, 97,
	49, 195,
	396, 387,
	1933, 387,
	99, 834,
	49, 0,
};

const struct IrCode code_eu115Code PROGMEM = {
	freq_to_timerval(58824),
	code_eu115Times,
	{
		0x59,
		0x24,
		0x80,
		0x49,
		0x04,
		0x80,
		0x01,
		0x20,
		0x02,
		0x04,
		0x44,
		0x92,
		0x01,
		0x24,
		0x12,
		0x00,
		0x04,
		0x80,
		0x08,
		0x11,
		0x12,
		0x48,
		0x04,
		0x90,
		0x48,
		0x00,
		0x12,
		0x00,
		0x22,
		0x80,
	}
};

// 252
const uint16_t code_eu116Times[] PROGMEM = {
	3, 9,
	3, 30,
	3, 41,
	3, 10959,
	3, 0,
};

const struct IrCode code_eu116Code PROGMEM = {
	PULSE_CODE,
	code_eu116Times,
	{
		0x50,
		0x00,
		0x00,
		0x40,
		0x00,
		0x26,
		0x80,
		0x00,
		0x02,
		0x00,
		0x01,
		0x40,
	}
};

// 253
const uint16_t code_eu117Times[] PROGMEM = {
	51, 50,
	102, 101,
	51, 260,
	51, 8029,
	51, 0,
};

const struct IrCode code_eu117Code PROGMEM = {
	freq_to_timerval(31250),
	code_eu117Times,
	{
		0x50,
		0x20,
		0x06,
		0x81,
		0x00,
		0x40,
	}
};

// 254
const uint16_t code_eu118Times[] PROGMEM = {
	46, 527,
	46, 813,
	46, 4712,
	46, 0,
};

const struct IrCode code_eu118Code PROGMEM = {
	freq_to_timerval(34482),
	code_eu118Times,
	{
		0x95,
		0x51,
		0x51,
		0x95,
		0x51,
		0x51,
		0xC0,
	}
};

// 255
const uint16_t code_eu119Times[] PROGMEM = {
	16, 490,
	16, 741,
	16, 5429,
	16, 0,
};

const struct IrCode code_eu119Code PROGMEM = {
	freq_to_timerval(38449),
	code_eu119Times,
	{
		0x91,
		0x11,
		0x00,
		0x91,
		0x11,
		0x00,
		0xC0,
	}
};

// 256
const uint16_t code_eu120Times[] PROGMEM = {
	23, 25,
	22, 75,
	23, 3783,
	23, 0,
};

const struct IrCode code_eu120Code PROGMEM = {
	freq_to_timerval(38455),
	code_eu120Times,
	{
		0x95,
		0x55,
		0x55,
		0x00,
		0x40,
		0x00,
		0x00,
		0x00,
		0x00,
		0x14,
		0x25,
		0x55,
		0x55,
		0x40,
		0x10,
		0x00,
		0x00,
		0x00,
		0x00,
		0x05,
		0x0C,
	}
};
//code_eu121Times is a Duplicate of code code_eu051Times
const struct IrCode code_eu121Code PROGMEM = {
	freq_to_timerval(38461),
	code_eu051Times,
	{
		0x51,
		0x00,
		0x02,
		0x49,
		0x00,
		0x02,
		0x49,
		0x00,
		0x02,
		0x4B,
		0x44,
		0x00,
		0x09,
		0x24,
		0x00,
		0x09,
		0x24,
		0x00,
		0x09,
		0x30,
	}
};
//code_eu122Times is a Duplicate of code code_eu120Times
const struct IrCode code_eu122Code PROGMEM = {
	freq_to_timerval(38455),
	code_eu120Times,
	{
		0x90,
		0x55,
		0x55,
		0x40,
		0x14,
		0x00,
		0x00,
		0x00,
		0x00,
		0x14,
		0x24,
		0x15,
		0x55,
		0x50,
		0x05,
		0x00,
		0x00,
		0x00,
		0x00,
		0x05,
		0x0C,
	}
};

// 259
const uint16_t code_eu123Times[] PROGMEM = {
	15, 488,
	15, 739,
	15, 5442,
	15, 0,
};

const struct IrCode code_eu123Code PROGMEM = {
	freq_to_timerval(39986),
	code_eu123Times,
	{
		0x95,
		0x54,
		0x01,
		0x95,
		0x54,
		0x01,
		0xC0,
	}
};

// 260
const uint16_t code_eu124Times[] PROGMEM = {
	52, 52,
	52, 157,
	845, 405,
	52, 406,
	52, 2152,
	52, 0,
};

const struct IrCode code_eu124Code PROGMEM = {
	freq_to_timerval(38461),
	code_eu124Times,
	{
		0x50,
		0x04,
		0x10,
		0x03,
		0x24,
		0x92,
		0x00,
		0x88,
		0x02,
		0x08,
		0x01,
		0x92,
		0x49,
		0x00,
		0x50,
	}
};

// 261
const uint16_t code_eu125Times[] PROGMEM = {
	57, 54,
	57, 165,
	885, 451,
	57, 3927,
	57, 0,
};

const struct IrCode code_eu125Code PROGMEM = {
	freq_to_timerval(38461),
	code_eu125Times,
	{
		0x51,
		0x20,
		0x00,
		0x08,
		0x20,
		0x92,
		0x40,
		0x00,
		0x80,
		0x01,
		0x24,
		0x12,
		0x4B,
		0x44,
		0x80,
		0x00,
		0x20,
		0x82,
		0x49,
		0x00,
		0x02,
		0x00,
		0x04,
		0x90,
		0x49,
		0x30,
	}
};
//code_eu126Times is a Duplicate of code code_na004Times
const struct IrCode code_eu126Code PROGMEM = {
	freq_to_timerval(38462),
	code_na004Times,
	{
		0x58,
		0x00,
		0x00,
		0x01,
		0x24,
		0x92,
		0x48,
		0x00,
		0x00,
		0x01,
		0x24,
		0x92,
		0x4C,
		0x55,
		0x60,
	}
};
//code_eu127Times is a Duplicate of code code_eu087Times
const struct IrCode code_eu127Code PROGMEM = {
	freq_to_timerval(38449),
	code_eu087Times,
	{
		0x91,
		0x10,
		0x15,
		0x91,
		0x10,
		0x15,
		0xC0,
	}
};

// 264
const uint16_t code_eu128Times[] PROGMEM = {
	156, 155,
	155, 468,
	156, 780,
	156, 2946,
	156, 0,
};

const struct IrCode code_eu128Code PROGMEM = {
	freq_to_timerval(41668),
	code_eu128Times,
	{
		0x48,
		0x4C,
		0x85,
		0x00,
	}
};
//code_eu129Times is a Duplicate of code code_eu029Times
const struct IrCode code_eu129Code PROGMEM = {
	freq_to_timerval(38461),
	code_eu029Times,
	{
		0x63,
		0x04,
		0x92,
		0x49,
		0x24,
		0x92,
		0x6C,
		0x64,
		0x32,
		0x49,
		0x48,
		0xAD,
		0x19,
		0x0C,
		0x92,
		0x52,
		0x2B,
		0x80,
	}
};
//code_eu130Times is a Duplicate of code code_eu029Times
const struct IrCode code_eu130Code PROGMEM = {
	freq_to_timerval(38461),
	code_eu029Times,
	{
		0x63,
		0x04,
		0x92,
		0x49,
		0x24,
		0x92,
		0x6C,
		0x64,
		0x32,
		0x49,
		0x41,
		0xAD,
		0x19,
		0x0C,
		0x92,
		0x50,
		0x6B,
		0x80,
	}
};

// 267
const uint16_t code_eu131Times[] PROGMEM = {
	16, 490,
	16, 741,
	16, 4169,
	16, 0,
};

const struct IrCode code_eu131Code PROGMEM = {
	freq_to_timerval(38449),
	code_eu131Times,
	{
		0x95,
		0x55,
		0x50,
		0x95,
		0x55,
		0x50,
		0xC0,
	}
};
//code_eu132Times is a Duplicate of code code_eu069Times
const struct IrCode code_eu132Code PROGMEM = {
	PULSE_CODE,
	code_eu069Times,
	{
		0x81,
		0x54,
		0x01,
		0x81,
		0x54,
		0x01,
		0xC0,
	}
};
//code_eu133Times is a Duplicate of code code_eu071Times
const struct IrCode code_eu133Code PROGMEM = {
	freq_to_timerval(38450),
	code_eu071Times,
	{
		0x95,
		0x55,
		0x04,
		0x95,
		0x55,
		0x04,
		0xC0,
	}
};

// 270
const uint16_t code_eu134Times[] PROGMEM = {
	15, 489,
	15, 740,
	15, 5938,
	15, 0,
};

const struct IrCode code_eu134Code PROGMEM = {
	freq_to_timerval(39988),
	code_eu134Times,
	{
		0x90,
		0x01,
		0x50,
		0x90,
		0x01,
		0x50,
		0xC0,
	}
};

// 271
const uint16_t code_eu135Times[] PROGMEM = {
	7, 566,
	7, 851,
	7, 5189,
	7, 0,
};

const struct IrCode code_eu135Code PROGMEM = {
	PULSE_CODE,
	code_eu135Times,
	{
		0x95,
		0x11,
		0x51,
		0x95,
		0x11,
		0x51,
		0xC0,
	}
};
//code_eu136Times is a Duplicate of code code_na004Times
const struct IrCode code_eu136Code PROGMEM = {
	freq_to_timerval(38462),
	code_na004Times,
	{
		0x58,
		0x00,
		0x00,
		0x01,
		0x24,
		0x92,
		0x49,
		0x00,
		0x00,
		0x00,
		0x24,
		0x92,
		0x4C,
		0x55,
		0x60,
	}
};

// 273
const uint16_t code_eu137Times[] PROGMEM = {
	89, 87,
	176, 88,
	90, 177,
	90, 8867,
	90, 0,
};

const struct IrCode code_eu137Code PROGMEM = {
	freq_to_timerval(35714),
	code_eu137Times,
	{
		0x41,
		0x01,
		0x10,
		0x81,
		0x60,
		0x80,
		0x88,
		0x40,
		0xC0,
	}
};

// 274
const uint16_t code_eu138Times[] PROGMEM = {
	4, 1036,
	4, 1507,
	4, 3006,
	4, 0,
};

const struct IrCode code_eu138Code PROGMEM = {
	PULSE_CODE,
	code_eu138Times,
	{
		0x81,
		0x58,
		0x15,
		0xC0,
	}
};
#endif	//Not Defined NA_CODES
#endif	//Defined EU_CODES

#ifdef NA_CODES
	#ifdef EU_CODES
		#define NUM_CODES 218
	#else
		#define NUM_CODES 136
	#endif
#else
	#define NUM_CODES 139
#endif
const uint8_t num_codes = NUM_CODES;

const struct IrCode *powerCodes[NUM_CODES] PROGMEM = {
        #ifdef EU_CODES
        &code_eu000Code,
        &code_eu001Code,
        &code_eu002Code,
        &code_eu003Code,
        &code_eu004Code,
        &code_eu005Code,
        &code_eu006Code,
        &code_eu007Code,
        &code_eu008Code,
        &code_eu009Code,
        &code_eu010Code,
        &code_eu011Code,
        &code_eu012Code,
        &code_eu013Code,
        &code_eu014Code,
        &code_eu015Code,
        &code_eu016Code,
        &code_eu017Code,
        &code_eu018Code,
        &code_eu019Code,
        &code_eu020Code,
        &code_eu021Code,
        &code_eu022Code,
        &code_eu023Code,
        &code_eu024Code,
        &code_eu025Code,
        &code_eu026Code,
        &code_eu027Code,
        &code_eu028Code,
        &code_eu029Code,
        &code_eu030Code,
        &code_eu031Code,
        &code_eu032Code,
        &code_eu033Code,
        &code_eu034Code,
        &code_eu035Code,
        &code_eu036Code,
        &code_eu037Code,
        &code_eu038Code,
        &code_eu039Code,
        &code_eu040Code,
        &code_eu041Code,
        &code_eu042Code,
        &code_eu043Code,
        &code_eu044Code,
        &code_eu045Code,
        &code_eu046Code,
        &code_eu047Code,
        &code_eu048Code,
        &code_eu049Code,
        &code_eu050Code,
        &code_eu051Code,
        &code_eu052Code,
        &code_eu053Code,
        &code_eu054Code,
        &code_eu055Code,
        &code_eu056Code,
        &code_eu057Code,
        &code_eu058Code,
        &code_eu059Code,
        &code_eu060Code,
        &code_eu061Code,
        &code_eu062Code,
        &code_eu063Code,
        &code_eu064Code,
        &code_eu065Code,
        &code_eu066Code,
        &code_eu067Code,
        &code_eu068Code,
        &code_eu069Code,
        &code_eu070Code,
        &code_eu071Code,
        &code_eu072Code,
        &code_eu073Code,
        &code_eu074Code,
        &code_eu075Code,
        &code_eu076Code,
        &code_eu077Code,
        &code_eu078Code,
        &code_eu079Code,
        &code_eu080Code,
        &code_eu081Code,
        &code_eu082Code,
        &code_eu083Code,
        &code_eu084Code,
        &code_eu085Code,
        &code_eu086Code,
        &code_eu087Code,
        &code_eu088Code,
        &code_eu089Code,
        &code_eu090Code,
        &code_eu091Code,
        &code_eu092Code,
        &code_eu093Code,
        &code_eu094Code,
        &code_eu095Code,
        &code_eu096Code,
        &code_eu097Code,
        &code_eu098Code,
        &code_eu099Code,
        &code_eu100Code,
        &code_eu101Code,
        &code_eu102Code,
        &code_eu103Code,
        &code_eu104Code,
        &code_eu105Code,
        &code_eu106Code,
        &code_eu107Code,
        &code_eu108Code,
        #ifndef NA_CODES
        &code_eu109Code,
        &code_eu110Code,
        &code_eu111Code,
        &code_eu112Code,
        &code_eu113Code,
        &code_eu114Code,
        &code_eu115Code,
        &code_eu116Code,
        &code_eu117Code,
        &code_eu118Code,
        &code_eu119Code,
        &code_eu120Code,
        &code_eu121Code,
        &code_eu122Code,
        &code_eu123Code,
        &code_eu124Code,
        &code_eu125Code,
        &code_eu126Code,
        &code_eu127Code,
        &code_eu128Code,
        &code_eu129Code,
        &code_eu130Code,
        &code_eu131Code,
        &code_eu132Code,
        &code_eu133Code,
        &code_eu134Code,
        &code_eu135Code,
        &code_eu136Code,
        &code_eu137Code,
        &code_eu138Code,
        #endif
        #endif

        #ifdef NA_CODES
	&code_na000Code,
	&code_na001Code,
	&code_na002Code,
	&code_na003Code,
	&code_na004Code,
	&code_na005Code,
	&code_na006Code,
	&code_na007Code,
	&code_na008Code,
	&code_na009Code,
	&code_na010Code,
	&code_na011Code,
	&code_na012Code,
	&code_na013Code,
	&code_na014Code,
	&code_na015Code,
	&code_na016Code,
	&code_na017Code,
	&code_na018Code,
	&code_na019Code,
	&code_na020Code,
	&code_na021Code,
	&code_na022Code,
	&code_na023Code,
	&code_na024Code,
	&code_na025Code,
	&code_na026Code,
	&code_na027Code,
	&code_na028Code,
	&code_na029Code,
	&code_na030Code,
	&code_na031Code,
	&code_na032Code,
	&code_na033Code,
	&code_na034Code,
	&code_na035Code,
	&code_na036Code,
	&code_na037Code,
	&code_na038Code,
	&code_na039Code,
	&code_na040Code,
	&code_na041Code,
	&code_na042Code,
	&code_na043Code,
	&code_na044Code,
	&code_na045Code,
	&code_na046Code,
	&code_na047Code,
	&code_na048Code,
	&code_na049Code,
	&code_na050Code,
	&code_na051Code,
	&code_na052Code,
	&code_na053Code,
	&code_na054Code,
	&code_na055Code,
	&code_na056Code,
	&code_na057Code,
	&code_na058Code,
	&code_na059Code,
	&code_na060Code,
	&code_na061Code,
	&code_na062Code,
	&code_na063Code,
	&code_na064Code,
	&code_na065Code,
	&code_na066Code,
	&code_na067Code,
	&code_na068Code,
	&code_na069Code,
	&code_na070Code,
	&code_na071Code,
	&code_na072Code,
	&code_na073Code,
	&code_na074Code,
	&code_na075Code,
	&code_na076Code,
	&code_na077Code,
	&code_na078Code,
	&code_na079Code,
	&code_na080Code,
	&code_na081Code,
	&code_na082Code,
	&code_na083Code,
	&code_na084Code,
	&code_na085Code,
	&code_na086Code,
	&code_na087Code,
	&code_na088Code,
	&code_na089Code,
	&code_na090Code,
	&code_na091Code,
	&code_na092Code,
	&code_na093Code,
	&code_na094Code,
	&code_na095Code,
	&code_na096Code,
	&code_na097Code,
	&code_na098Code,
	&code_na099Code,
	&code_na100Code,
	&code_na101Code,
	&code_na102Code,
	&code_na103Code,
	&code_na104Code,
	&code_na105Code,
	&code_na106Code,
	&code_na107Code,
	&code_na108Code,
	#ifndef EU_CODES
	&code_na109Code,
	&code_na110Code,
	&code_na111Code,
	&code_na112Code,
	&code_na113Code,
	&code_na114Code,
	&code_na115Code,
	&code_na116Code,
	&code_na117Code,
	&code_na118Code,
	&code_na119Code,
	&code_na120Code,
	&code_na121Code,
	&code_na122Code,
	&code_na123Code,
	&code_na124Code,
	&code_na125Code,
	&code_na126Code,
	&code_na127Code,
	&code_na128Code,
	&code_na129Code,
	&code_na130Code,
	&code_na131Code,
	&code_na132Code,
	&code_na133Code,
	&code_na134Code,
	&code_na135Code,
	#endif
	#endif
};

//bytes_in:  41239
//bytes_out: 7978
//275 of 275 codes present
//275 of 275 codes can be RL compressed
