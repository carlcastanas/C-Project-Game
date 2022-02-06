#include "../include/font.h"

const uint64_t ascii_font[] = {
    0x0000000000000000LL, //   0x20
    0x000000fafa000000LL, // ! 0x21
    0x00c0c000c0c00000LL, // " 0x22
    0x28fefe28fefe2800LL, // # 0x23
    0x002474d6d65c4800LL, // $ 0x24
    0x32566c18366a4c00LL, // % 0x25
    0x0c7ef29aee5c1602LL, // & 0x26
    0x000020e0c0000000LL, // ' 0x27
    0x0000387cc6820000LL, // ( 0x28
    0x000082c67c380000LL, // ) 0x29
    0x10547c38387c5410LL, // * 0x2a
    0x0010107c7c101000LL, // + 0x2b
    0x0000010706000000LL, // , 0x2c
    0x0010101010101000LL, // - 0x2d
    0x0000060600000000LL, // . 0x2e
    0x02060c183060c080LL, // / 0x2f
    0x007cfe9ab2fe7c00LL, // 0 0x30
    0x002060fefe000000LL, // 1 0x31
    0x0042c68e9af26200LL, // 2 0x32
    0x0044c69292fe6c00LL, // 3 0x33
    0x183868c8fefe0800LL, // 4 0x34
    0x00e4e6a2a2be9c00LL, // 5 0x35
    0x3c7ed292929e0c00LL, // 6 0x36
    0x0080808e9ef0e000LL, // 7 0x37
    0x006cfe9292fe6c00LL, // 8 0x38
    0x0060f29296fc7800LL, // 9 0x39
    0x0000006666000000LL, // : 0x3a
    0x0000016766000000LL, // ; 0x3b
    0x0010102828444400LL, // < 0x3c
    0x0028282828282800LL, // = 0x3d
    0x0044442828101000LL, // > 0x3e
    0x0040c08a9af06000LL, // ? 0x3f
    0x007cc6babaca7800LL, // @ 0x40
    0x007efe9090fe7e00LL, // A 0x41
    0x00fefe9292fe6c00LL, // B 0x42
    0x00387cc682828200LL, // C 0x43
    0x00fefe82c67c3800LL, // D 0x44
    0x00fefe9292828200LL, // E 0x45
    0x00fefe9090808000LL, // F 0x46
    0x007cfe8292de5e00LL, // G 0x47
    0x00fefe1010fefe00LL, // H 0x48
    0x000082fefe820000LL, // I 0x49
    0x0004060202fefc00LL, // J 0x4a
    0xfefe10386cc68200LL, // K 0x4b
    0x00fefe0202020200LL, // L 0x4c
    0xfefe603060fefe00LL, // M 0x4d
    0xfefe603018fefe00LL, // N 0x4e
    0x7cfe8282fe7c0000LL, // O 0x4f
    0x00fefe9090f06000LL, // P 0x50
    0x7cfe8286fe7e0200LL, // Q 0x51
    0x00fefe9098fe6600LL, // R 0x52
    0x0064f6b29ade4c00LL, // S 0x53
    0x008080fefe808000LL, // T 0x54
    0x00fcfe0202fefc00LL, // U 0x55
    0x00f0fc0e0efcf000LL, // V 0x56
    0xfefe0c180cfefe00LL, // W 0x57
    0x82c66c38386cc682LL, // X 0x58
    0x80c0603e3e60c080LL, // Y 0x59
    0x868e9ab2e2c28200LL, // Z 0x5a
    0x0000fefe82820000LL, // [ 0x5b
    0x80c06030180c0602LL, // \ 0x5c
    0x00008282fefe0000LL, // ] 0x5d
    0x002060c0c0602000LL, // ^ 0x5e
    0x0202020202020000LL, // _ 0x5f
    0x000000c0e0200000LL, // ` 0x60
    0x00042e2a2a3e1e00LL, // a 0x61
    0x00fefe22223e1c00LL, // b 0x62
    0x001c3e2222220000LL, // c 0x63
    0x001c3e2222fefe00LL, // d 0x64
    0x001c3e2a2a3a1800LL, // e 0x65
    0x00207efea0a00000LL, // f 0x66
    0x00183d25253f3e00LL, // g 0x67
    0x00fefe20203e1e00LL, // h 0x68
    0x000000bcbe020000LL, // i 0x69
    0x00010101bfbe0000LL, // j 0x6a
    0x00fefe081c362200LL, // k 0x6b
    0x000000fcfe020000LL, // l 0x6c
    0x3e3e3018303e1e00LL, // m 0x6d
    0x003e3e20203e1e00LL, // n 0x6e
    0x001c3e22223e1c00LL, // o 0x6f
    0x003f3f24243c1800LL, // p 0x70
    0x00183c24243f3f00LL, // q 0x71
    0x003e3e2020301000LL, // r 0x72
    0x00123a2a2a2e0400LL, // s 0x73
    0x0020fcfe22220000LL, // t 0x74
    0x003c3e02023e3e00LL, // u 0x75
    0x00383c06063c3800LL, // v 0x76
    0x3c3e020c023e3c00LL, // w 0x77
    0x22361c081c362200LL, // x 0x78
    0x00383d07063c3800LL, // y 0x79
    0x0022262e3a322200LL, // z 0x7a
    0x0000107cee820000LL, // { 0x7b
    0x000000fefe000000LL, // | 0x7c
    0x000082ee7c100000LL, // } 0x7d
    0x2060406020604000LL, // } 0x7e
    0x0000000000000000LL, // DEL 0x7f
};
