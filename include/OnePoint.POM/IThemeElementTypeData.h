// --------------------------------------------------------------------------------------------------------------------
// <copyright file="IThemeElementType" company="OnePoint Global">
//   Copyright (c) 2012 OnePoint Global Ltd. All rights reserved.
// </copyright>
// <summary>
//   This file was autogenerated and you should not edit it. It will be 
//   regenerated whenever the schema changes.
//   All changes should be made in ThemeElementType.cs and the mode.xml. 
// </summary>
// --------------------------------------------------------------------------------------------------------------------


/// <summary>
/// The IThemeElementType Interface Data Object Base
/// </summary>
 
#import <Foundation/Foundation.h>   

/// <summary>
/// The IThemeElementTypeData Interface Data Object Base
/// </summary>
@protocol IThemeElementTypeData <NSObject>
    
-(NSNumber *) ThemeElementTypeID;
-(void) setThemeElementTypeID:(NSNumber *) value;
-(NSNumber *) Name;
-(void) setName:(NSNumber *) value;
-(NSString *) DescriptionSpecified;
-(void) setDescriptionSpecified:(NSString *) value;
-(NSNumber *) IsDeleted;
-(void) setIsDeleted:(NSNumber *) value;
-(NSDate *) CreatedDate;
-(void) setCreatedDate:(NSDate *) value;

@end
   

   
    

