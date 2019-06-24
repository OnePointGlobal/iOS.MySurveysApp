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
/// The IThemeElementTypeFactoryBase Interface Data Object Base
/// </summary>
	
@protocol IThemeElementTypeFactoryBase <NSObject>
   
-(NSString *) SelectAllStatement;
-(NSString *)TableName;
-(NSString *)ByPkClause;
-(NSString *)InsertStatement;
-(NSString *)UpdateStatement;
-(NSString *)DeleteStatement;
-(NSString *)DeleteByPk;


-(void) AddThemeElementTypeIDParameter:(DataHandler *) dataHandler withThemeElementTypeID:(NSNumber*) ThemeElementTypeID;     
-(void) AddNameParameter:(DataHandler *) dataHandler withName:(NSNumber*) Name;     
-(void) AddDescriptionParameter:(DataHandler *) dataHandler withDescription:(NSString *) Description;  
-(void) AddIsDeletedParameter:(DataHandler *) dataHandler withIsDeleted:(NSNumber*) IsDeleted;     
-(void) AddCreatedDateParameter:(DataHandler *) dataHandler withCreatedDate:(NSDate *) CreatedDate; 
-(id<IThemeElementTypeData>) FindByThemeElementTypeID:(NSNumber *) fieldValue;
        
-(id<IThemeElementTypeData>) FindByName:(NSNumber *) fieldValue;
        
-(id<IThemeElementTypeData>) FindByDescription:(NSString *) fieldValue;
        
-(id<IThemeElementTypeData>) FindByIsDeleted:(NSNumber *) fieldValue;
        
-(id<IThemeElementTypeData>) FindByCreatedDate:(NSDate *) fieldValue;
        
-(id<IThemeElementTypeData>) CreateThemeElementType:(id<IDataReader>)reader;

@end
    

   
    
