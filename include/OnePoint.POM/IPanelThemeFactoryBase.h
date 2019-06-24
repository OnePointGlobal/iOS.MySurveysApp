// --------------------------------------------------------------------------------------------------------------------
// <copyright file="IPanelTheme" company="OnePoint Global">
//   Copyright (c) 2012 OnePoint Global Ltd. All rights reserved.
// </copyright>
// <summary>
//   This file was autogenerated and you should not edit it. It will be 
//   regenerated whenever the schema changes.
//   All changes should be made in PanelTheme.cs and the mode.xml. 
// </summary>
// --------------------------------------------------------------------------------------------------------------------


/// <summary>
/// The IPanelTheme Interface Data Object Base
/// </summary>

#import <Foundation/Foundation.h>


/// <summary>
/// The IPanelThemeFactoryBase Interface Data Object Base
/// </summary>
	
@protocol IPanelThemeFactoryBase <NSObject>
   
-(NSString *) SelectAllStatement;
-(NSString *)TableName;
-(NSString *)ByPkClause;
-(NSString *)InsertStatement;
-(NSString *)UpdateStatement;
-(NSString *)DeleteStatement;
-(NSString *)DeleteByPk;


-(void) AddPanelThemeIDParameter:(DataHandler *) dataHandler withPanelThemeID:(NSNumber*) PanelThemeID;     
-(void) AddThemeTemplateIDParameter:(DataHandler *) dataHandler withThemeTemplateID:(NSNumber*) ThemeTemplateID;     
-(void) AddPanelIDParameter:(DataHandler *) dataHandler withPanelID:(NSNumber*) PanelID;     
-(void) AddIsDeletedParameter:(DataHandler *) dataHandler withIsDeleted:(NSNumber*) IsDeleted;     
-(void) AddCreatedDateParameter:(DataHandler *) dataHandler withCreatedDate:(NSDate *) CreatedDate; 
-(void) AddLastUpdatedDateParameter:(DataHandler *) dataHandler withLastUpdatedDate:(NSDate *) LastUpdatedDate; 
-(id<IPanelThemeData>) FindByPanelThemeID:(NSNumber *) fieldValue;
        
-(id<IPanelThemeData>) FindByThemeTemplateID:(NSNumber *) fieldValue;
        
-(id<IPanelThemeData>) FindByPanelID:(NSNumber *) fieldValue;
        
-(id<IPanelThemeData>) FindByIsDeleted:(NSNumber *) fieldValue;
        
-(id<IPanelThemeData>) FindByCreatedDate:(NSDate *) fieldValue;
        
-(id<IPanelThemeData>) FindByLastUpdatedDate:(NSDate *) fieldValue;
        
-(id<IPanelThemeData>) CreatePanelTheme:(id<IDataReader>)reader;

@end
    

   
    

