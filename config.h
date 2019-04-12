/* 
 * File:   config.h
 * Author: Phil Glazzard
 *
 * Created on 04 March 2019, 19:23
 */

#ifndef CONFIG_H
#define	CONFIG_H


// PIC16F1459 Configuration Bit Settings

// 'C' source line config statements

// CONFIG1
#pragma config FOSC = INTOSC    // Oscillator Selection Bits (INTOSC oscillator: I/O function on CLKIN pin)
#pragma config WDTE = OFF       // Watchdog Timer Enable (WDT disabled)
#pragma config PWRTE = OFF      // Power-up Timer Enable (PWRT disabled)
#pragma config MCLRE = ON       // MCLR Pin Function Select (MCLR/VPP pin function is MCLR)
#pragma config CP = OFF         // Flash Program Memory Code Protection (Program memory code protection is disabled)
#pragma config BOREN = ON       // Brown-out Reset Enable (Brown-out Reset enabled)
#pragma config CLKOUTEN = OFF   // Clock Out Enable (CLKOUT function is disabled. I/O or oscillator function on the CLKOUT pin)
#pragma config IESO = ON        // Internal/External Switchover Mode (Internal/External Switchover Mode is enabled)
#pragma config FCMEN = ON       // Fail-Safe Clock Monitor Enable (Fail-Safe Clock Monitor is enabled)

// CONFIG2
#pragma config WRT = OFF        // Flash Memory Self-Write Protection (Write protection off)
#pragma config CPUDIV = CLKDIV6 // CPU System Clock Selection Bit (CPU system clock divided by 6)
#pragma config USBLSCLK = 48MHz // USB Low SPeed Clock Selection bit (System clock expects 48 MHz, FS/LS USB CLKENs divide-by is set to 8.)
#pragma config PLLMULT = 3x     // PLL Multipler Selection Bit (3x Output Frequency Selected)
#pragma config PLLEN = ENABLED  // PLL Enable Bit (3x or 4x PLL Enabled)
#pragma config STVREN = ON      // Stack Overflow/Underflow Reset Enable (Stack Overflow or Underflow will cause a Reset)
#pragma config BORV = LO        // Brown-out Reset Voltage Selection (Brown-out Reset Voltage (Vbor), low trip point selected.)
#pragma config LPBOR = OFF      // Low-Power Brown Out Reset (Low-Power BOR is disabled)
#pragma config LVP = OFF        // Low-Voltage Programming Enable (High-voltage on MCLR/VPP must be used for programming)

// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and OFF.

#include <xc.h>
#include<stdbool.h>
#define _XTAL_FREQ 1000000         //16 MHz clock
#define RST PORTCbits.RC3           // RST reset - pin 7
#define CE PORTCbits.RC4            // CE chip enable - pin 6
#define SDO PORTCbits.RC7           // SDO serial data out - pin 9
#define DC PORTCbits.RC6            // DC data or command - pin 8
#define SCK PORTBbits.RB6           // SCK serial clock - pin 11
#define   GREEN_LED PORTCbits.RC5   // debug LED - pin 5
/**************NOKIA 5110 LCD**************************/
#define FUNC_SET_EXTEND 0x21
#define LCD_CONTRAST 0xb1
#define LCD_TEMP_COEFF 0x04
#define LCD_BIAS 0x14
#define NORMAL_MODE 0x0c
#define BASIC_IS 0x20
#define ALL_PIX_ON 0x09
#define HORIZ_ADDR 0x20
#define VERT_ADDR 0x22
#define SET_Y 0x40
#define SET_X 0x80

enum {LOW, HIGH};                   // LOW is a constant of value 0
typedef unsigned char uchar;                                    // HIGH is a constant of value 1
#endif	/* CONFIG_H */

