//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/ashchauhan/Desktop/SampleApp/OnePoint/Player/Session/WebSession.java
//
//  Created by ashchauhan on 3/21/14.
//

#import "SessionManager.h"
#import "QueryManager.h"
#import "WebPlayer.h"
#import "InterviewSession.h"
#import "HttpContext.h"
#import "Interview.h"
#import "OPGLabel.h"
#import "DefaultStyles.h"
#import "Navigations.h"
#import "Questions.h"
#import "StandardTexts.h"
#import "InterviewSampleRecord.h"
#import "InterviewSampleField.h"
#import "IInterviewInfo.h"
#import "IProperties.h"
#import "InterviewInfo.h"
#import "DataEncryption.h"
@class Properties;
@interface WebSession : NSObject {
 @public
  BOOL __IsPostBack_;
   InterviewSession *__Session_;
    NSNumber *panelid;
    NSNumber * panellistid;
    NSString *project;
    NSString *platform;
    NSNumber *surveyid;
    //Byte *scriptFile;
    
}
//-(InterviewSession*)createSession:(HttpContext*)context;
-(InterviewSession*)createSession:(NSString*)surveyName withIplayer:(id<IPlayer>)player withType:(int)renderType values:(NSDictionary *)values;
-(InterviewSession*)createSession:(NSString*)surveyName withIplayer:(id<IPlayer>)player withType:(int)renderType values:(NSDictionary *)values additionalValues: (NSDictionary *)additionalValues;
-(InterviewSession*)createSession:(NSString*)surveyName withNSData:(NSData*)classFile withNSData:(NSData*)stringFile withIplayer:(id<IPlayer>)player;
-(InterviewSession*)createSession:(NSString*)surveyName withIplayer:(id<IPlayer>)player withType:(int)renderType loadStream:(Byte *)byteStream withLength:(int)length withLongStingByteArray:(Byte *)longByte withLongStrLength:(int)longStrLength;
- (id)init;
- (BOOL)getIsPostBack;
- (void)setIsPostBack:(BOOL)value;
-(void)setInterviewSession:(InterviewSession*)value;
-(InterviewSession*)getSession;
-(Interview*)buildInterview:(NSString*)name withSID:(NSString *)sid;
-(Interview*)buildInterview:(NSString*)name withSID:(NSString *)sid additionalValues: (NSDictionary *)additionalValues;
-(InterviewSampleRecord*) buildSampleRecord;
-(id<IInterviewInfo>)buildInfoRecord:(HttpContext*)context;
-(id<IProperties>) buildBrowserProperties:(HttpContext*)context;
-(Properties*) buildProperties;
-(BOOL) saveResults;
@end
