// --------------------------------------------------------------------------------------------------------------------
// <copyright file="ITheme" company="OnePoint Global">
//   Copyright (c) 2012 OnePoint Global Ltd. All rights reserved.
// </copyright>
// <summary>
//   This file was autogenerated and you should not edit it. It will be 
//   regenerated whenever the schema changes.
//   All changes should be made in Theme.cs and the mode.xml. 
// </summary>
// --------------------------------------------------------------------------------------------------------------------


/// <summary>
/// The ITheme Interface Data Object Base
/// </summary>
 
#import <Foundation/Foundation.h>   
#import	"IThemeTemplateData.h"

/// <summary>
/// The IThemeData Interface Data Object Base
/// </summary>
@protocol IThemeData <NSObject>
    
-(NSNumber *) ThemeID;
-(void) setThemeID:(NSNumber *) value;
-(NSNumber *) ThemeTemplateID;
-(void) setThemeTemplateID:(NSNumber *) value;
-(NSNumber *) ThemeElementTypeID;
-(void) setThemeElementTypeID:(NSNumber *) value;
-(NSString *) NameSpecified;
-(void) setNameSpecified:(NSString *) value;
-(NSString *) ValueSpecified;
-(void) setValueSpecified:(NSString *) value;
-(NSNumber *) IsDeleted;
-(void) setIsDeleted:(NSNumber *) value;
-(NSDate *) CreatedDate;
-(void) setCreatedDate:(NSDate *) value;
-(NSDate *) LastUpdatedDate;
-(void) setLastUpdatedDate:(NSDate *) value;
-(id<IThemeTemplateData>) ThemeTemplate;


@end
   

   
    
