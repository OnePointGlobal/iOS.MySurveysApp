// --------------------------------------------------------------------------------------------------------------------
// <copyright file="ISurvey" company="OnePoint Global">
//   Copyright (c) 2012 OnePoint Global Ltd. All rights reserved.
// </copyright>
// <summary>
//   This file was autogenerated and you should not edit it. It will be 
//   regenerated whenever the schema changes.
//   All changes should be made in Survey.cs and the mode.xml. 
// </summary>
// --------------------------------------------------------------------------------------------------------------------


/// <summary>
/// The ISurvey Interface Data Object Base
/// </summary>
 
#import <Foundation/Foundation.h>   
#import	"IScriptData.h"

/// <summary>
/// The ISurveyData Interface Data Object Base
/// </summary>
@protocol ISurveyData <NSObject>
    
-(NSNumber *) SurveyID;
-(void) setSurveyID:(NSNumber *) value;
-(NSNumber *) UserID;
-(void) setUserID:(NSNumber *) value;
-(NSString *) NameSpecified;
-(void) setNameSpecified:(NSString *) value;
-(NSString *) DescriptionSpecified;
-(void) setDescriptionSpecified:(NSString *) value;
-(NSString *) StatusSpecified;
-(void) setStatusSpecified:(NSString *) value;
-(NSNumber *) Type;
-(void) setType:(NSNumber *) value;
-(NSNumber *) MediaID;
-(void) setMediaID:(NSNumber *) value;
-(NSNumber *) MediaIDSpecified;
-(void) setMediaIDSpecified:(NSNumber *) value;
-(NSNumber *) ScriptID;
-(void) setScriptID:(NSNumber *) value;
-(NSNumber *) ScriptIDSpecified;
-(void) setScriptIDSpecified:(NSNumber *) value;
-(NSNumber *) IsDeleted;
-(void) setIsDeleted:(NSNumber *) value;
-(NSNumber *) IsOffline;
-(void) setIsOffline:(NSNumber *) value;
-(NSNumber *) IsCapi;
-(void) setIsCapi:(NSNumber *) value;
-(NSDate *) CreatedDate;
-(void) setCreatedDate:(NSDate *) value;
-(NSDate *) LastUpdatedDate;
-(void) setLastUpdatedDate:(NSDate *) value;
-(NSNumber *) EstimatedTime;
-(void) setEstimatedTime:(NSNumber *) value;
-(NSNumber *) Occurences;
-(void) setOccurences:(NSNumber *) value;
-(NSDate *) DeadLine;
-(void) setDeadLine:(NSDate *) value;
-(NSString *) SearchTagsSpecified;
-(void) setSearchTagsSpecified:(NSString *) value;
-(id<IScriptData>) Script;


@end
   

   
    

