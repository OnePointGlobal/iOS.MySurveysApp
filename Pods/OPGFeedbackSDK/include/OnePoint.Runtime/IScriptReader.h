//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/chinthan/Framework/Logger/ConvertCode/OnePoint/Runtime/Helpers/IScriptReader.java
//
//  Created by chinthan on 12/2/13.
//

#ifndef _IScriptReader_H_
#define _IScriptReader_H_


@protocol IScriptReader < NSObject >
- (double)readDoubles;
- (short int)readInt16;
- (int)readInt32;
- (long)readInt64;
- (float)readSingle;
- (short int)readUInt16;
- (int)readUInt32;
- (void)close;
- (void)dispose;
- (int)peekChar;
- (int)read;
- (BOOL)readBoolean;
- (char)readByte;
- (char)readSByte;
- (unichar)readChar;
- (long)readUInt64;
- (double)readDecimal;
- (NSString *)readStringWithLength:(int)length;
- (int)readWithCharArray:(char)buffer
                 withInt:(int)index
                 withInt:(int)count;
- (char)readCharsWithInt:(int)count;
- (NSMutableData *)readWithByteArray:(NSMutableData *)buffer
                 withInt:(int)index
                 withInt:(int)count;
- (NSData *)readBytesWithInt:(int)count;
- (NSData *)getBaseStream;
@end

#endif // _IScriptReader_H_
