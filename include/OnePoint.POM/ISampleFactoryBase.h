// --------------------------------------------------------------------------------------------------------------------
// <copyright file="ISample" company="OnePoint Global">
//   Copyright (c) 2012 OnePoint Global Ltd. All rights reserved.
// </copyright>
// <summary>
//   This file was autogenerated and you should not edit it. It will be 
//   regenerated whenever the schema changes.
//   All changes should be made in Sample.cs and the mode.xml. 
// </summary>
// --------------------------------------------------------------------------------------------------------------------


/// <summary>
/// The ISample Interface Data Object Base
/// </summary>

#import <Foundation/Foundation.h>


/// <summary>
/// The ISampleFactoryBase Interface Data Object Base
/// </summary>
	
@protocol ISampleFactoryBase <NSObject>
   
-(NSString *) SelectAllStatement;
-(NSString *)TableName;
-(NSString *)ByPkClause;
-(NSString *)InsertStatement;
-(NSString *)UpdateStatement;
-(NSString *)DeleteStatement;
-(NSString *)DeleteByPk;


-(void) AddSampleIDParameter:(DataHandler *) dataHandler withSampleID:(NSNumber*) SampleID;     
-(void) AddNameParameter:(DataHandler *) dataHandler withName:(NSString *) Name;  
-(void) AddDescriptionParameter:(DataHandler *) dataHandler withDescription:(NSString *) Description;  
-(void) AddUserIDParameter:(DataHandler *) dataHandler withUserID:(NSNumber*) UserID;     
-(void) AddSampleQueryParameter:(DataHandler *) dataHandler withSampleQuery:(NSString *) SampleQuery;  
-(void) AddSampleSqlQueryParameter:(DataHandler *) dataHandler withSampleSqlQuery:(NSString *) SampleSqlQuery;  
-(void) AddIsDeletedParameter:(DataHandler *) dataHandler withIsDeleted:(NSNumber*) IsDeleted;     
-(void) AddCreatedDateParameter:(DataHandler *) dataHandler withCreatedDate:(NSDate *) CreatedDate; 
-(void) AddLastUpdatedDateParameter:(DataHandler *) dataHandler withLastUpdatedDate:(NSDate *) LastUpdatedDate; 
-(id<ISampleData>) FindBySampleID:(NSNumber *) fieldValue;
        
-(id<ISampleData>) FindByName:(NSString *) fieldValue;
        
-(id<ISampleData>) FindByDescription:(NSString *) fieldValue;
        
-(id<ISampleData>) FindByUserID:(NSNumber *) fieldValue;
        
-(id<ISampleData>) FindBySampleQuery:(NSString *) fieldValue;
        
-(id<ISampleData>) FindBySampleSqlQuery:(NSString *) fieldValue;
        
-(id<ISampleData>) FindByIsDeleted:(NSNumber *) fieldValue;
        
-(id<ISampleData>) FindByCreatedDate:(NSDate *) fieldValue;
        
-(id<ISampleData>) FindByLastUpdatedDate:(NSDate *) fieldValue;
        
-(id<ISampleData>) CreateSample:(id<IDataReader>)reader;

@end
    

   
    
