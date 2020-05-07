//Module : bit operations supporting in the handling
//ofregister manipulation on microcontrollers

//header file




#ifndef _H_BIT_OPERATION_H
#define _H_BIT_OPERATION_H

void SetBitNof8( unsigned char* target, unsigned char bitNumber );
void ClearBitNof8( unsigned char* target, unsigned char bitNumber );
void FlipBitNof8( unsigned char* target, unsigned char bitNumber );
unsigned char CheckBitNof8( unsigned char target, unsigned char bitNumber );



#endif // _H_BIT_OPERATION_H
