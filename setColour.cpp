#include <iostream>
#include <windows.h>
#include "functions.h"

using namespace std;

void setColour(int background, int text) {
    
    switch(background) {
        case 1:
            switch(text) {
            case 1:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x00);
                break;
            case 2:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x01);
                break;
            case 3:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x02);
                break;
            case 4:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x03);
                break;
            case 5:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x04);
                break;
            case 6:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x05);
                break;
            case 7:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x06);
                break;
            case 8:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x07);
                break;
            case 9:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x08);
                break;
            case 10:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x09);
                break;
            case 11:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x0A);
                break;
            case 12:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x0B);
                break;
            case 13:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x0C);
                break;
            case 14:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x0D);
                break;
            case 15:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x0E);
                break;
            case 16:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x0F);
                break;
            }
            break;
        case 2:
            switch(text) {
            case 1:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x10);
                break;
            case 2:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x11);
                break;
            case 3:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x12);
                break;
            case 4:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x13);
                break;
            case 5:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x14);
                break;
            case 6:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x15);
                break;
            case 7:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x16);
                break;
            case 8:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x17);
                break;
            case 9:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x18);
                break;
            case 10:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x19);
                break;
            case 11:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x1A);
                break;
            case 12:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x1B);
                break;
            case 13:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x1C);
                break;
            case 14:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x1D);
                break;
            case 15:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x1E);
                break;
            case 16:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x1F);
                break;
            }
            break;
        case 3:
            switch(text) {
            case 1:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x20);
                break;
            case 2:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x21);
                break;
            case 3:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x22);
                break;
            case 4:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x23);
                break;
            case 5:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x24);
                break;
            case 6:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x25);
                break;
            case 7:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x26);
                break;
            case 8:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x27);
                break;
            case 9:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x28);
                break;
            case 10:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x29);
                break;
            case 11:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x2A);
                break;
            case 12:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x2B);
                break;
            case 13:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x2C);
                break;
            case 14:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x2D);
                break;
            case 15:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x2E);
                break;
            case 16:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x2F);
                break;
            }
            break;
        case 4:
            switch(text) {
            case 1:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x30);
                break;
            case 2:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x31);
                break;
            case 3:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x32);
                break;
            case 4:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x33);
                break;
            case 5:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x34);
                break;
            case 6:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x35);
                break;
            case 7:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x36);
                break;
            case 8:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x37);
                break;
            case 9:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x38);
                break;
            case 10:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x39);
                break;
            case 11:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x3A);
                break;
            case 12:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x3B);
                break;
            case 13:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x3C);
                break;
            case 14:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x3D);
                break;
            case 15:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x3E);
                break;
            case 16:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x3F);
                break;
            }
            break;
        case 5:
            switch(text) {
            case 1:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x40);
                break;
            case 2:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x41);
                break;
            case 3:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x42);
                break;
            case 4:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x43);
                break;
            case 5:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x44);
                break;
            case 6:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x45);
                break;
            case 7:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x46);
                break;
            case 8:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x47);
                break;
            case 9:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x48);
                break;
            case 10:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x49);
                break;
            case 11:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x4A);
                break;
            case 12:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x4B);
                break;
            case 13:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x4C);
                break;
            case 14:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x4D);
                break;
            case 15:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x4E);
                break;
            case 16:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x4F);
                break;
            }
            break;
        case 6:
            switch(text) {
            case 1:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x50);
                break;
            case 2:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x51);
                break;
            case 3:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x52);
                break;
            case 4:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x53);
                break;
            case 5:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x54);
                break;
            case 6:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x55);
                break;
            case 7:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x56);
                break;
            case 8:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x57);
                break;
            case 9:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x58);
                break;
            case 10:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x59);
                break;
            case 11:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x5A);
                break;
            case 12:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x5B);
                break;
            case 13:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x5C);
                break;
            case 14:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x5D);
                break;
            case 15:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x5E);
                break;
            case 16:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x5F);
                break;
            }
            break;
        case 7:
            switch(text) {
            case 1:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x60);
                break;
            case 2:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x61);
                break;
            case 3:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x62);
                break;
            case 4:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x63);
                break;
            case 5:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x64);
                break;
            case 6:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x65);
                break;
            case 7:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x66);
                break;
            case 8:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x67);
                break;
            case 9:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x68);
                break;
            case 10:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x69);
                break;
            case 11:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x6A);
                break;
            case 12:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x6B);
                break;
            case 13:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x6C);
                break;
            case 14:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x6D);
                break;
            case 15:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x6E);
                break;
            case 16:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x6F);
                break;
            }
            break;
        case 8:
            switch(text) {
            case 1:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x70);
                break;
            case 2:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x71);
                break;
            case 3:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x72);
                break;
            case 4:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x73);
                break;
            case 5:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x74);
                break;
            case 6:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x75);
                break;
            case 7:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x76);
                break;
            case 8:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x77);
                break;
            case 9:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x78);
                break;
            case 10:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x79);
                break;
            case 11:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x7A);
                break;
            case 12:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x7B);
                break;
            case 13:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x7C);
                break;
            case 14:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x7D);
                break;
            case 15:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x7E);
                break;
            case 16:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x7F);
                break;
            }
            break;
        case 9:
            switch(text) {
            case 1:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x80);
                break;
            case 2:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x81);
                break;
            case 3:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x82);
                break;
            case 4:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x83);
                break;
            case 5:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x84);
                break;
            case 6:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x85);
                break;
            case 7:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x86);
                break;
            case 8:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x87);
                break;
            case 9:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x88);
                break;
            case 10:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x89);
                break;
            case 11:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x8A);
                break;
            case 12:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x8B);
                break;
            case 13:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x8C);
                break;
            case 14:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x8D);
                break;
            case 15:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x8E);
                break;
            case 16:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x8F);
                break;
            }
            break;
        case 10:
            switch(text) {
            case 1:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x90);
                break;
            case 2:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x91);
                break;
            case 3:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x92);
                break;
            case 4:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x93);
                break;
            case 5:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x94);
                break;
            case 6:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x95);
                break;
            case 7:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x96);
                break;
            case 8:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x97);
                break;
            case 9:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x98);
                break;
            case 10:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x99);
                break;
            case 11:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x9A);
                break;
            case 12:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x9B);
                break;
            case 13:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x9C);
                break;
            case 14:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x9D);
                break;
            case 15:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x9E);
                break;
            case 16:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x9F);
                break;
            }
            break;
        case 11:
            switch(text) {
            case 1:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xA0);
                break;
            case 2:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xA1);
                break;
            case 3:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xA2);
                break;
            case 4:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xA3);
                break;
            case 5:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xA4);
                break;
            case 6:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xA5);
                break;
            case 7:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xA6);
                break;
            case 8:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xA7);
                break;
            case 9:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xA8);
                break;
            case 10:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xA9);
                break;
            case 11:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xAA);
                break;
            case 12:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xAB);
                break;
            case 13:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xAC);
                break;
            case 14:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xAD);
                break;
            case 15:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xAE);
                break;
            case 16:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xAF);
                break;
            }
            break;
        case 12:
            switch(text) {
            case 1:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xB0);
                break;
            case 2:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xB1);
                break;
            case 3:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xB2);
                break;
            case 4:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xB3);
                break;
            case 5:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xB4);
                break;
            case 6:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xB5);
                break;
            case 7:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xB6);
                break;
            case 8:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xB7);
                break;
            case 9:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xB8);
                break;
            case 10:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xB9);
                break;
            case 11:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xBA);
                break;
            case 12:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xBB);
                break;
            case 13:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xBC);
                break;
            case 14:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xBD);
                break;
            case 15:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xBE);
                break;
            case 16:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xBF);
                break;
            }
            break;
        case 13:
            switch(text) {
            case 1:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xC0);
                break;
            case 2:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xC1);
                break;
            case 3:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xC2);
                break;
            case 4:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xC3);
                break;
            case 5:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xC4);
                break;
            case 6:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xC5);
                break;
            case 7:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xC6);
                break;
            case 8:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xC7);
                break;
            case 9:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xC8);
                break;
            case 10:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xC9);
                break;
            case 11:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xCA);
                break;
            case 12:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xCB);
                break;
            case 13:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xCC);
                break;
            case 14:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xCD);
                break;
            case 15:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xCE);
                break;
            case 16:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xCF);
                break;
            }
            break;
        case 14:
            switch(text) {
            case 1:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xD0);
                break;
            case 2:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xD1);
                break;
            case 3:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xD2);
                break;
            case 4:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xD3);
                break;
            case 5:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xD4);
                break;
            case 6:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xD5);
                break;
            case 7:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xD6);
                break;
            case 8:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xD7);
                break;
            case 9:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xD8);
                break;
            case 10:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xD9);
                break;
            case 11:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xDA);
                break;
            case 12:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xDB);
                break;
            case 13:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xDC);
                break;
            case 14:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xDD);
                break;
            case 15:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xDE);
                break;
            case 16:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xDF);
                break;
            }
            break;
        case 15:
            switch(text) {
            case 1:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xE0);
                break;
            case 2:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xE1);
                break;
            case 3:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xE2);
                break;
            case 4:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xE3);
                break;
            case 5:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xE4);
                break;
            case 6:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xE5);
                break;
            case 7:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xE6);
                break;
            case 8:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xE7);
                break;
            case 9:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xE8);
                break;
            case 10:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xE9);
                break;
            case 11:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xEA);
                break;
            case 12:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xEB);
                break;
            case 13:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xEC);
                break;
            case 14:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xED);
                break;
            case 15:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xEE);
                break;
            case 16:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xEF);
                break;
            }
            break;
        case 16:
            switch(text) {
            case 1:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xF0);
                break;
            case 2:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xF1);
                break;
            case 3:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xF2);
                break;
            case 4:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xF3);
                break;
            case 5:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xF4);
                break;
            case 6:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xF5);
                break;
            case 7:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xF6);
                break;
            case 8:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xF7);
                break;
            case 9:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xF8);
                break;
            case 10:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xF9);
                break;
            case 11:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xFA);
                break;
            case 12:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xFB);
                break;
            case 13:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xFC);
                break;
            case 14:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xFD);
                break;
            case 15:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xFE);
                break;
            case 16:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0xFF);
                break;
            }
            break;   
    }
}
