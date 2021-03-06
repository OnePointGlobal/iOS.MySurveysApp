// --------------------------------------------------------------------------------------------------------------------
// <copyright file="model.cs" company="OnePoint Global">
//   Copyright (c) 2012 OnePoint Global Ltd. All rights reserved.
// </copyright>
// <summary>
//   This file was autogenerated and you should not edit it. It will be 
//   regenerated whenever the schema changes.
//   All changes should be made in Sample.cs and the mode.xml. 
// </summary>
// --------------------------------------------------------------------------------------------------------------------


#import <Foundation/Foundation.h>
#import <OnePointFramework/DataObjectFactory.h>
#import "ISampleData.h"
#import "ISampleFactoryBase.h"

//package OnePoint.POM.Model; 
  

/// <summary>
/// Creates and finds Sample objects
/// </summary>



@interface  SampleFactoryBase : DataObjectFactory<ISampleData,ISampleFactoryBase>
{
}

+(NSString*)  FIELD_NAME_SAMPLEID;
+(NSString*)  FIELD_NAME_NAME;
+(NSString*)  FIELD_NAME_DESCRIPTION;
+(NSString*)  FIELD_NAME_USERID;
+(NSString*)  FIELD_NAME_SAMPLEQUERY;
+(NSString*)  FIELD_NAME_SAMPLESQLQUERY;
+(NSString*)  FIELD_NAME_ISDELETED;
+(NSString*)  FIELD_NAME_CREATEDDATE;
+(NSString*)  FIELD_NAME_LASTUPDATEDDATE;
+(NSString*) PARAMETER_NAME_SAMPLEID;
+(NSString*) PARAMETER_NAME_NAME;
+(NSString*) PARAMETER_NAME_DESCRIPTION;
+(NSString*) PARAMETER_NAME_USERID;
+(NSString*) PARAMETER_NAME_SAMPLEQUERY;
+(NSString*) PARAMETER_NAME_SAMPLESQLQUERY;
+(NSString*) PARAMETER_NAME_ISDELETED;
+(NSString*) PARAMETER_NAME_CREATEDDATE;
+(NSString*) PARAMETER_NAME_LASTUPDATEDDATE;

/// <summary>
/// The Microsoft SQL statement to join one table to another and perform it.
/// </summary>
-(BOOL) DeleteByPk :(NSNumber *) keySampleID ;
//-(BOOL) DeleteByPk:(NSNumber *) keySampleID;
// Define input parameters once only so they can be reused by other methods
-(void) AddSampleIDParameter:(DataHandler *) dataHandler valSampleID:(NSNumber *) valSampleID;	

-(void) AddNameParameter:(DataHandler *) dataHandler valName:(NSString *) valName;	

-(void) AddDescriptionParameter:(DataHandler *) dataHandler valDescription:(NSString *) valDescription;	

-(void) AddUserIDParameter:(DataHandler *) dataHandler valUserID:(NSNumber *) valUserID;	

-(void) AddSampleQueryParameter:(DataHandler *) dataHandler valSampleQuery:(NSString *) valSampleQuery;	

-(void) AddSampleSqlQueryParameter:(DataHandler *) dataHandler valSampleSqlQuery:(NSString *) valSampleSqlQuery;	

-(void) AddIsDeletedParameter:(DataHandler *) dataHandler valIsDeleted:(NSNumber *) valIsDeleted;	

-(void) AddCreatedDateParameter:(DataHandler *) dataHandler valCreatedDate: (NSDate *) valCreatedDate;	

-(void) AddLastUpdatedDateParameter:(DataHandler *) dataHandler valLastUpdatedDate: (NSDate *) valLastUpdatedDate;	

-(BOOL) ProcessPkStatement :(NSNumber *) keySampleID   query:(NSString *) query;
//-(BOOL) ProcessPkStatement:(NSNumber *) keySampleID query:(NSString *) query;

-(id<ISampleData>) Find:(NSString *) attributeName attributeValue:(id) attributeValue;

-(id<ISampleData>) FindBySampleID:(NSNumber *) fieldValue;
-(id<ISampleData>) FindByName:(NSString *) fieldValue; 
-(id<ISampleData>) FindByDescription:(NSString *) fieldValue; 
-(id<ISampleData>) FindByUserID:(NSNumber *) fieldValue;
-(id<ISampleData>) FindBySampleQuery:(NSString *) fieldValue; 
-(id<ISampleData>) FindBySampleSqlQuery:(NSString *) fieldValue; 
-(id<ISampleData>) FindByIsDeleted:(NSNumber *) fieldValue;
-(id<ISampleData>) FindByCreatedDate:(NSDate *) fieldValue;  
-(id<ISampleData>) FindByLastUpdatedDate:(NSDate *) fieldValue;  
-(void) AppendSqlParameters:(DataHandler *) dataHandler dataObject:(DataObject *)dataObject mode:(DataMode *) mode;      
-(id<ISampleData>) FindObject :(NSNumber *) keySampleID ;
        
-(id<ISampleData>) Find:(DataHandler *) dataHandler;
        
-(id<ISampleData>) FindAllObjects;

-(id<ISampleData>) FindAllObjects:(NSString *) orderByField;

-(id<ISampleData>) FindAllObjects:(NSString *) orderByField resultLimit:(int)resultLimit;	

-(id<ISampleData>) CreateSample:(id<IDataReader>) reader;
		
-(id<ISampleData>) createObjectFromDataReader:(id<IDataReader>) reader withPopulate:(BOOL)populateRelatedObject;

-(id<ISampleData>) Build:(DataHandler *) currentDataHandler closeConnection:(BOOL)closeConnection;
       
@end