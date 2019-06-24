// --------------------------------------------------------------------------------------------------------------------
// <copyright file="ISurveyAddress" company="OnePoint Global">
//   Copyright (c) 2012 OnePoint Global Ltd. All rights reserved.
// </copyright>
// <summary>
//   This file was autogenerated and you should not edit it. It will be 
//   regenerated whenever the schema changes.
//   All changes should be made in SurveyAddress.cs and the mode.xml. 
// </summary>
// --------------------------------------------------------------------------------------------------------------------


/// <summary>
/// The ISurveyAddress Interface Data Object Base
/// </summary>

#import <Foundation/Foundation.h>


/// <summary>
/// The ISurveyAddressFactoryBase Interface Data Object Base
/// </summary>
	
@protocol ISurveyAddressFactoryBase <NSObject>
   
-(NSString *) SelectAllStatement;
-(NSString *)TableName;
-(NSString *)ByPkClause;
-(NSString *)InsertStatement;
-(NSString *)UpdateStatement;
-(NSString *)DeleteStatement;
-(NSString *)DeleteByPk;


-(void) AddSurveyAddressIDParameter:(DataHandler *) dataHandler withSurveyAddressID:(NSNumber*) SurveyAddressID;     
-(void) AddSurveyIDParameter:(DataHandler *) dataHandler withSurveyID:(NSNumber*) SurveyID;     
-(void) AddAddressListIDParameter:(DataHandler *) dataHandler withAddressListID:(NSNumber*) AddressListID;     
-(void) AddRangeParameter:(DataHandler *) dataHandler withRange:(NSNumber*) Range;     
-(void) AddRangeNullParameter:(DataHandler *) dataHandler;
-(void) AddIsDeletedParameter:(DataHandler *) dataHandler withIsDeleted:(NSNumber*) IsDeleted;     
-(void) AddCreatedDateParameter:(DataHandler *) dataHandler withCreatedDate:(NSDate *) CreatedDate; 
-(void) AddLastUpdatedDateParameter:(DataHandler *) dataHandler withLastUpdatedDate:(NSDate *) LastUpdatedDate; 
-(id<ISurveyAddressData>) FindBySurveyAddressID:(NSNumber *) fieldValue;
        
-(id<ISurveyAddressData>) FindBySurveyID:(NSNumber *) fieldValue;
        
-(id<ISurveyAddressData>) FindByAddressListID:(NSNumber *) fieldValue;
        
-(id<ISurveyAddressData>) FindByRange:(NSNumber *) fieldValue;
        
-(id<ISurveyAddressData>) FindByIsDeleted:(NSNumber *) fieldValue;
        
-(id<ISurveyAddressData>) FindByCreatedDate:(NSDate *) fieldValue;
        
-(id<ISurveyAddressData>) FindByLastUpdatedDate:(NSDate *) fieldValue;
        
-(id<ISurveyAddressData>) CreateSurveyAddress:(id<IDataReader>)reader;

@end
    

   
    

